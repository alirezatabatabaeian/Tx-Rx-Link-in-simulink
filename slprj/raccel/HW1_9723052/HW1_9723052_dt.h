#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_d98j1138AQJjmvH8MdysO" , 14 ,
1304 } , { "struct_fwLnS2gdwS0B3CGBtB3rcC" , 15 , 1296 } , {
"struct_unxZgldSDWNxWQd5eN6VqH" , 16 , 16 } , {
"struct_AoDpHcM6CaCPNYGkjQOziC" , 17 , 1320 } , {
"struct_6vjZE1zVXiMs9MoZnA9ZPB" , 18 , 136 } , {
"struct_syxm88BY5WibQEZevWLUmH" , 19 , 80 } , {
"struct_VO9LRxS2QhGNFRLuxvCNyE" , 20 , 1368 } , { "cyfgdumq3z" , 21 , 144 } ,
{ "cyfgdumq3zv" , 22 , 208 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof
( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) ,
sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof (
uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T )
, sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( struct_d98j1138AQJjmvH8MdysO ) , sizeof (
struct_fwLnS2gdwS0B3CGBtB3rcC ) , sizeof ( struct_unxZgldSDWNxWQd5eN6VqH ) ,
sizeof ( struct_AoDpHcM6CaCPNYGkjQOziC ) , sizeof (
struct_6vjZE1zVXiMs9MoZnA9ZPB ) , sizeof ( struct_syxm88BY5WibQEZevWLUmH ) ,
sizeof ( struct_VO9LRxS2QhGNFRLuxvCNyE ) , sizeof ( cyfgdumq3z ) , sizeof (
cyfgdumq3zv ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" ,
"real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "struct_d98j1138AQJjmvH8MdysO" ,
"struct_fwLnS2gdwS0B3CGBtB3rcC" , "struct_unxZgldSDWNxWQd5eN6VqH" ,
"struct_AoDpHcM6CaCPNYGkjQOziC" , "struct_6vjZE1zVXiMs9MoZnA9ZPB" ,
"struct_syxm88BY5WibQEZevWLUmH" , "struct_VO9LRxS2QhGNFRLuxvCNyE" ,
"cyfgdumq3z" , "cyfgdumq3zv" } ; static DataTypeTransition rtBTransitions [ ]
= { { ( char_T * ) ( & rtB . pw40ykrdw4 . re ) , 0 , 1 , 14 } , { ( char_T *
) ( & rtB . k2knnz45le ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtB . avnq340gbz
. klycfgpq2u . re ) , 0 , 1 , 2 } , { ( char_T * ) ( & rtB . ojzwehlmim .
klycfgpq2u . re ) , 0 , 1 , 2 } , { ( char_T * ) ( & rtDW . cyowpw2aqw ) , 22
, 0 , 1 } , { ( char_T * ) ( & rtDW . eoqskoxfxb ) , 21 , 0 , 1 } , { (
char_T * ) ( & rtDW . hkx2yr3kkm [ 0 ] . re ) , 0 , 1 , 1776 } , { ( char_T *
) ( & rtDW . pdfhqwl2rk ) , 0 , 0 , 4 } , { ( char_T * ) ( & rtDW .
dudo1uzasc [ 0 ] . re ) , 0 , 1 , 32 } , { ( char_T * ) ( & rtDW . mpgaygkl13
. LoggedData ) , 11 , 0 , 3 } , { ( char_T * ) ( & rtDW . oklw0fjsqc ) , 6 ,
0 , 7 } , { ( char_T * ) ( & rtDW . mzdezzo1yx ) , 2 , 0 , 2 } , { ( char_T *
) ( & rtDW . avv54f5hk5 ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtDW .
avnq340gbz . hqmqteccgf ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtDW .
avnq340gbz . m1fy5snbp3 ) , 8 , 0 , 4 } , { ( char_T * ) ( & rtDW .
ojzwehlmim . hqmqteccgf ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtDW .
ojzwehlmim . m1fy5snbp3 ) , 8 , 0 , 4 } } ; static DataTypeTransitionTable
rtBTransTable = { 17U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . Rs ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP . Frame [ 0 ] . re ) , 0 , 1 , 896 } , { ( char_T * ) ( &
rtP . SineWave1_Amplitude ) , 0 , 0 , 352 } , { ( char_T * ) ( & rtP .
Constant3_Value . re ) , 0 , 1 , 516 } } ; static DataTypeTransitionTable
rtPTransTable = { 4U , rtPTransitions } ;
