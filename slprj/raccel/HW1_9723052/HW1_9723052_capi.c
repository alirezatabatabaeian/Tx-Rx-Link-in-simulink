#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HW1_9723052_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "HW1_9723052.h"
#include "HW1_9723052_capi.h"
#include "HW1_9723052_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/Downsample" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 7 , TARGET_STRING ( "HW1_9723052/Receiver/First/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/First/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 3 , 0 , TARGET_STRING ( "HW1_9723052/Receiver/First/Delay" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/First/Discrete FIR Filter" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 7 , 1 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Subsystem" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 8 , 3 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Product4" ) , TARGET_STRING (
"" ) , 0 , 1 , 0 , 0 , 0 } , { 9 , 3 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Sum" ) , TARGET_STRING ( "" ) ,
0 , 1 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/Second/LOOP Filter/Sum" ) , TARGET_STRING ( "" ) , 0 ,
1 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"HW1_9723052/Receiver/Second/NCO/Exp" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 12 , 0 , TARGET_STRING ( "HW1_9723052/Receiver/Second/NCO/Mod" )
, TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 13 , 8 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Subsystem/MATLAB Function" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 1 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Subsystem/Moving Average" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 15 , TARGET_STRING (
"HW1_9723052/Transmitter/Sine Wave1" ) , TARGET_STRING ( "Amplitude" ) , 1 ,
0 , 0 } , { 16 , TARGET_STRING ( "HW1_9723052/Transmitter/Sine Wave1" ) ,
TARGET_STRING ( "Phase" ) , 1 , 0 , 0 } , { 17 , TARGET_STRING (
"HW1_9723052/Transmitter/Unbuffer" ) , TARGET_STRING ( "ic" ) , 1 , 0 , 0 } ,
{ 18 , TARGET_STRING ( "HW1_9723052/Receiver/First/Compare To Constant" ) ,
TARGET_STRING ( "const" ) , 1 , 0 , 0 } , { 19 , TARGET_STRING (
"HW1_9723052/Receiver/First/Compare To Constant1" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 20 , TARGET_STRING (
"HW1_9723052/Receiver/First/Compare To Constant2" ) , TARGET_STRING ( "const"
) , 1 , 0 , 0 } , { 21 , TARGET_STRING ( "HW1_9723052/Receiver/First/Delay" )
, TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 22 , TARGET_STRING (
"HW1_9723052/Receiver/First/Delay1" ) , TARGET_STRING ( "InitialCondition" )
, 1 , 0 , 0 } , { 23 , TARGET_STRING (
"HW1_9723052/Receiver/First/Discrete FIR Filter" ) , TARGET_STRING (
"InitialStates" ) , 1 , 0 , 0 } , { 24 , TARGET_STRING (
"HW1_9723052/Receiver/First/Discrete FIR Filter" ) , TARGET_STRING (
"Coefficients" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING (
"HW1_9723052/Receiver/Raised Cosine Receive Filter/FIR Decimation" ) ,
TARGET_STRING ( "FILT" ) , 1 , 2 , 0 } , { 26 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Delay" ) , TARGET_STRING ( "InitialCondition" )
, 1 , 0 , 0 } , { 27 , TARGET_STRING (
"HW1_9723052/Transmitter/Raised Cosine Transmit Filter/FIR Interpolation" ) ,
TARGET_STRING ( "FILTER_COEFF" ) , 1 , 3 , 0 } , { 28 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Constant2" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 29 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 30 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 31 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Delay1" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 32 , TARGET_STRING (
"HW1_9723052/Receiver/Second/LOOP Filter/Gain" ) , TARGET_STRING ( "Gain" ) ,
1 , 0 , 0 } , { 33 , TARGET_STRING (
"HW1_9723052/Receiver/Second/LOOP Filter/Gain1" ) , TARGET_STRING ( "Gain" )
, 1 , 0 , 0 } , { 34 , TARGET_STRING (
"HW1_9723052/Receiver/Second/LOOP Filter/Gain2" ) , TARGET_STRING ( "Gain" )
, 1 , 0 , 0 } , { 35 , TARGET_STRING (
"HW1_9723052/Receiver/Second/LOOP Filter/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 36 , TARGET_STRING (
"HW1_9723052/Receiver/Second/NCO/Constant" ) , TARGET_STRING ( "Value" ) , 1
, 0 , 0 } , { 37 , TARGET_STRING ( "HW1_9723052/Receiver/Second/NCO/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
"HW1_9723052/Receiver/Second/NCO/Delay" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 39 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Subsystem/Compare To Constant" ) , TARGET_STRING
( "const" ) , 1 , 0 , 0 } , { 40 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Subsystem/Discrete FIR Filter" ) , TARGET_STRING
( "InitialStates" ) , 1 , 0 , 0 } , { 41 , TARGET_STRING (
"HW1_9723052/Receiver/Second/Subsystem/Discrete FIR Filter" ) , TARGET_STRING
( "Coefficients" ) , 0 , 1 , 0 } , { 42 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem/Subsystem/Out1" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 43 , TARGET_STRING (
"HW1_9723052/Receiver/First/Enabled Subsystem1/Subsystem/Out1" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 44 ,
TARGET_STRING ( "Rs" ) , 1 , 0 , 0 } , { 45 , TARGET_STRING ( "Frame" ) , 0 ,
4 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . mrqmp3oxlx . re , & rtB .
ojzwehlmim . klycfgpq2u . re , & rtB . kwcghrgeb5 . re , & rtB . jdcph2uolt .
re , & rtB . mhblynljhe . re , & rtB . pw40ykrdw4 . re , & rtB . o4tc0oeris .
re , & rtB . h5yusbuwf4 , & rtB . ck0a30tqdy , & rtB . efc4mwrxp1 , & rtB .
k2knnz45le , & rtB . mex2syhopa . re , & rtB . fpnhgjzqm2 , & rtB .
avnq340gbz . klycfgpq2u . re , & rtB . h5yusbuwf4 , & rtP .
SineWave1_Amplitude , & rtP . SineWave1_Phase , & rtP . Unbuffer_ic , & rtP .
CompareToConstant_const , & rtP . CompareToConstant1_const , & rtP .
CompareToConstant2_const , & rtP . Delay_InitialCondition_j4tad5ykz4 , & rtP
. Delay1_InitialCondition_i0lmfbjsfn , & rtP .
DiscreteFIRFilter_InitialStates , & rtP . DiscreteFIRFilter_Coefficients [ 0
] . re , & rtP . FIRDecimation_FILT [ 0 ] , & rtP .
Delay_InitialCondition_olfzdcxlxj , & rtP . FIRInterpolation_FILTER_COEFF [ 0
] , & rtP . Constant2_Value , & rtP . Constant3_Value . re , & rtP .
Delay_InitialCondition , & rtP . Delay1_InitialCondition , & rtP . Gain_Gain
, & rtP . Gain1_Gain , & rtP . Gain2_Gain , & rtP .
Delay_InitialCondition_dz5kw15d3d , & rtP . Constant_Value , & rtP .
Gain1_Gain_j2pqq4kj1d . re , & rtP . Delay_InitialCondition_cv5aw0xgvv , &
rtP . CompareToConstant_const_jskuwmcm0b , & rtP .
DiscreteFIRFilter_InitialStates_dxjicim0p4 , & rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ 0 ] . re , & rtP . Out1_Y0 , &
rtP . Out1_Y0_hu3zxtr15w , & rtP . Rs , & rtP . Frame [ 0 ] . re , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "struct" ,
"creal_T" , 0 , 0 , sizeof ( creal_T ) , SS_DOUBLE , 1 , 0 , 0 } , { "double"
, "real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 1 , 128 , 161 , 1 , 21 , 8 , 1 , 448 } ; static const real_T
rtcapiStoredFloats [ ] = { 9.9999999999999991E-5 , 0.0 , 1.25E-5 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 15 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 29 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 4180211366U , 2153047497U , 727047431U , 356566201U } , ( NULL ) , 0 , 0
} ; const rtwCAPI_ModelMappingStaticInfo * HW1_9723052_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void HW1_9723052_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HW1_9723052_host_InitializeDataMapInfo ( HW1_9723052_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
