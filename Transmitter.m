%% Start

close all ; clear ; clc ;  % Close all

%% Initial Parameters

M = 16 ;
Rs = 10e3 ;
alpha = 0.2 ;
span = 20 ;
SPS = 8 ;
N = 256 ;
Z = 10 ;
H = [ 0,1,1,1,0,1,0,0,1,1,1,0,1,1,0,0,1,1,0,0,0,0,1,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,0,1,0,...
      1,0,0,1,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,1,0,1,0,0,1,1,1,0,0,0,0,1,1,0,1,1,0,1,1,1,1,...
      1,1,1,1,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,0,1,1,1,...
      0,1,0,1,0 ] ;

h = pskmod(H,2);
hd = h(2:end).*conj(h(1:end-1));

%% Picture

s = importdata('s.jpg');
imbins = zeros(size(s,1)*size(s,2)*3,8);
for i = 1:size(s,1)
    for j = 1:size(s,2)
        for k = 1:size(s,3)
            imbins(k+3*((i-1)*size(s,2)+(j-1)),1:8)=de2bi(s(i,j,k),8,'left-msb');
        end
    end
end
Barker13rep5 = repmat([0,0,0,0,0,1,1,0,0,1,0,1,0],1,5);
Stream = reshape(imbins',1,3*8*size(s,1)*size(s,2));
clear s i j k imbins

%% Encode

k = 26 ;
n = 31 ;
Stream_Length = length(Stream) ;
Data_BeEnc = [Stream , zeros(1,k-mod(Stream_Length,k))] ; % First Zero Padding
Encoded = encode(Data_BeEnc,n,k,'hamming/binary');

%% Interleaving

C = 28 ;
R = ceil(length(Encoded) ./ C) ;
Encoded_with_ZeroPad = [Encoded , zeros(1,R*C-length(Encoded))] ; % Second Zero Padding
Before_Interleaved_Data = reshape(Encoded_with_ZeroPad,[R,C]) ;
Interleaved_Data = reshape(Before_Interleaved_Data',[1,R*C]) ;

%% Adding Barker

Barkered_Interleaved_Data = [ Barker13rep5 , Interleaved_Data ] ;

%% Dividing 4 by 4

Barkered_Interleaved_Data_ZeroPad = [Barkered_Interleaved_Data , zeros(1,4-mod(length(Barkered_Interleaved_Data),4))] ; % Third Zero Padding

Final_Data = reshape(Barkered_Interleaved_Data_ZeroPad,[4 , length(Barkered_Interleaved_Data_ZeroPad) ./ 4])' ;

%% Making Symbols

Symbols =( Final_Data * [8;4;2;1] )';

%%

Zeros_Needed = mod(3*256 - mod(length(Symbols) , 3*256) , 3*256) ;

Symbols = [Symbols , zeros(1,Zeros_Needed)]' ; % Fourth Zero Padding

%% Modulation

Modulated_Data = qammod(Symbols , M) ;

Modulated_Data = reshape(Modulated_Data , [ (length(Modulated_Data))./(3*256) , 3*256 ]) ;

%% Frame Making

[R_F,~] = size(Modulated_Data) ;

for i = 1 : R_F
    for j = 1 : 256
        temp = reshape(Modulated_Data(i,:),[3,256]) ;
        Frames(i,:) = [ sqrt(8).*pskmod(H,2) , temp(1,:) , sqrt(8).*pskmod(zeros(1,Z),2) ,  temp(2,:) , sqrt(8).*pskmod(zeros(1,10),2) ,  temp(3,:) ] ;
    end
end

[R_a,C_a] = size(Frames) ;
Frame = reshape(Frames.',[1,R_a*C_a]);

%% Finish

%clear Barker13rep5 Barkered_Interleaved_Data Barkered_Interleaved_Data_ZeroPad Data_BeEnc ...
      %Encoded Encoded_with_ZeroPad Final_Data Frame Interleaved_Data k n Stream ...
      %Stream_Length Zeros_Needed
