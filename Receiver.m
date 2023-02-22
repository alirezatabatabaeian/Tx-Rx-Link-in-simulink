%% Start

close all ; clc ;  % Close all

%%

bit_frame_i = de2bi(RxStream',4,'left-msb') ;
[R_receiver,C_receiver] = size(bit_frame_i) ;
bit_frame = reshape(bit_frame_i',1,R_receiver*C_receiver) ;

BPSK = (-1).^bit_frame ;
Barker13rep5 = repmat([0,0,0,0,0,1,1,0,0,1,0,1,0],1,5);
Barker = (-1).^Barker13rep5 ;
Corr = upfirdn(BPSK,fliplr(Barker)) ;
plot(Corr) ;

[value,index] = max(Corr) ;
Data = bit_frame(1,index+1:index+R*C) ;

%%

Frame_Recei = reshape(Data,[C,R]) ;
DeInterleaved_Data = reshape(Frame_Recei',[1,R*C]) ;
DeInterleaved_Data_New = DeInterleaved_Data(1:length(Encoded)) ;

%%

Decoded_Rec = decode(DeInterleaved_Data_New,n,k,'hamming/binary');

Stream_Rec = Decoded_Rec(1:length(Stream)) ;

%% Image

IMG_Data = reshape(Stream_Rec,8,3*128^2)';
RxImage = zeros(128,128,3);
for i = 1:size(RxImage,1)
    for j = 1:size(RxImage,2)
        for k = 1:size(RxImage,3)
            RxImage(i,j,k) = bi2de(IMG_Data(k+3*((i-1)*size(RxImage,2)+(j-1)),1:8),'left-msb');
        end
    end
end
RxImage = uint8(RxImage);
imshow(RxImage)

%% Finish

%clear
