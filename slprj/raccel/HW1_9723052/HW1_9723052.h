#ifndef RTW_HEADER_HW1_9723052_h_
#define RTW_HEADER_HW1_9723052_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef HW1_9723052_COMMON_INCLUDES_
#define HW1_9723052_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "HW1_9723052_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME HW1_9723052
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (15) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T klycfgpq2u ; } h430dan4xo ; typedef struct { real_T
hqmqteccgf ; real_T ow2q0ntryz ; real_T mi0xddmjuu ; real_T oatub0fvwx ;
real_T gm4ldsef0x ; boolean_T m1fy5snbp3 ; boolean_T modjbai5uo ; boolean_T
butr1jbuka ; boolean_T lscjou3oqj ; } cgaqxxnxal ; typedef struct { creal_T
pw40ykrdw4 ; creal_T mrqmp3oxlx ; creal_T mhblynljhe ; creal_T jdcph2uolt ;
creal_T kwcghrgeb5 ; creal_T o4tc0oeris ; creal_T mex2syhopa ; real_T
k2knnz45le ; real_T fpnhgjzqm2 ; real_T ck0a30tqdy ; real_T efc4mwrxp1 ;
real_T h5yusbuwf4 ; h430dan4xo avnq340gbz ; h430dan4xo ojzwehlmim ; } B ;
typedef struct { cyfgdumq3zv cyowpw2aqw ; cyfgdumq3z eoqskoxfxb ; creal_T
hkx2yr3kkm [ 448 ] ; creal_T j3p5afiuwi [ 20 ] ; creal_T g1fzj0vvds ; creal_T
pwwezmq23p [ 160 ] ; creal_T hubhvpqxmt [ 127 ] ; creal_T nmuxxocpeb [ 2 ] ;
creal_T c0jtn0cmbm ; creal_T bbv5iuls0y [ 127 ] ; creal_T fxkumyeta2 [ 2 ] ;
real_T pdfhqwl2rk ; real_T h2ksj10kxy ; real_T i3vnzaqzc2 ; real_T dwgxsguylv
; creal_T dudo1uzasc [ 16 ] ; struct { void * LoggedData ; } mpgaygkl13 ;
struct { void * LoggedData ; } dunfvbk4f2 ; struct { void * LoggedData ; }
pmvjxpc13i ; int32_T oklw0fjsqc ; int32_T bo2jdwx4oo ; int32_T llasjmugub ;
int32_T ihsaklalu1 ; int32_T dfixqioppz ; int32_T ckjjq5oyex ; int32_T
hgrkfoq3cg ; int8_T mzdezzo1yx ; int8_T eh4fzlk5yx ; boolean_T avv54f5hk5 ;
boolean_T dx2fji5go5 ; boolean_T deaceg523b ; cgaqxxnxal avnq340gbz ;
cgaqxxnxal ojzwehlmim ; } DW ; typedef struct { real_T js1nhsmiat [ 32 ] ; }
ConstP ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T Rs ; creal_T Frame [ 448 ] ; real_T SineWave1_Amplitude ;
real_T SineWave1_Phase ; real_T CompareToConstant_const ; real_T
CompareToConstant1_const ; real_T CompareToConstant2_const ; real_T
CompareToConstant_const_jskuwmcm0b ; real_T Out1_Y0 ; real_T
Delay_InitialCondition ; real_T Delay1_InitialCondition ; real_T
Constant2_Value ; real_T Out1_Y0_hu3zxtr15w ; real_T Unbuffer_ic ; real_T
FIRInterpolation_FILTER_COEFF [ 168 ] ; real_T FIRDecimation_FILT [ 161 ] ;
real_T DiscreteFIRFilter_InitialStates ; real_T
Delay1_InitialCondition_i0lmfbjsfn ; real_T Delay_InitialCondition_j4tad5ykz4
; real_T Delay_InitialCondition_olfzdcxlxj ; real_T
Delay_InitialCondition_dz5kw15d3d ; real_T Gain_Gain ; real_T Gain1_Gain ;
real_T Gain2_Gain ; real_T Delay_InitialCondition_cv5aw0xgvv ; real_T
DiscreteFIRFilter_InitialStates_dxjicim0p4 ; real_T Constant_Value ; creal_T
Constant3_Value ; creal_T DiscreteFIRFilter_Coefficients [ 128 ] ; creal_T
Gain1_Gain_j2pqq4kj1d ; creal_T DiscreteFIRFilter_Coefficients_gx5gaoxprj [
128 ] ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ;
extern DW rtDW ; extern P rtP ; extern const ConstP rtConstP ; extern const
rtwCAPI_ModelMappingStaticInfo * HW1_9723052_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
