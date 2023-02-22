#include "rt_logging_mmi.h"
#include "HW1_9723052_capi.h"
#include <math.h>
#include "HW1_9723052.h"
#include "HW1_9723052_private.h"
#include "HW1_9723052_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.4 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes
( SimStruct * S , const char * inportFileName , int * matFileFormat ) {
return rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void hf02sn2y4l ( cgaqxxnxal * localDW ) { localDW -> m1fy5snbp3 =
false ; localDW -> modjbai5uo = false ; localDW -> butr1jbuka = false ;
localDW -> lscjou3oqj = false ; } void h1hifdmiku ( boolean_T am1z1sa0qq ,
creal_T kssgs0vruo , h430dan4xo * localB , cgaqxxnxal * localDW ) { if ( ( !
localDW -> m1fy5snbp3 ) && ( ! localDW -> modjbai5uo ) && ( ! localDW ->
butr1jbuka ) && ( ! localDW -> lscjou3oqj ) ) { localDW -> hqmqteccgf = 0.0 ;
localDW -> m1fy5snbp3 = true ; localDW -> ow2q0ntryz = 0.0 ; localDW ->
modjbai5uo = true ; localDW -> mi0xddmjuu = 0.0 ; localDW -> butr1jbuka =
true ; localDW -> oatub0fvwx = 0.0 ; localDW -> lscjou3oqj = true ; localDW
-> gm4ldsef0x = 1.0 ; } if ( am1z1sa0qq ) { localB -> klycfgpq2u . re = 5.0 ;
localB -> klycfgpq2u . im = 0.0 ; localDW -> hqmqteccgf = 1.0 ; localDW ->
ow2q0ntryz = 1.0 ; localDW -> mi0xddmjuu = 0.0 ; localDW -> oatub0fvwx = 0.0
; } else if ( localDW -> mi0xddmjuu + localDW -> oatub0fvwx == 5.0 ) { localB
-> klycfgpq2u . re = 1.0 ; localB -> klycfgpq2u . im = 0.0 ; } else if (
localDW -> hqmqteccgf == 101.0 ) { localB -> klycfgpq2u . re = 2.0 ; localB
-> klycfgpq2u . im = 0.0 ; localDW -> ow2q0ntryz ++ ; if ( localDW ->
ow2q0ntryz == 11.0 ) { localDW -> oatub0fvwx ++ ; } } else if ( ( localDW ->
hqmqteccgf >= 1.0 ) && ( localDW -> hqmqteccgf <= 100.0 ) ) { localB ->
klycfgpq2u = kssgs0vruo ; localDW -> hqmqteccgf ++ ; if ( localDW ->
hqmqteccgf == 101.0 ) { localDW -> mi0xddmjuu ++ ; } } else if ( ( localDW ->
gm4ldsef0x >= 1.0 ) && ( localDW -> gm4ldsef0x <= 10.0 ) ) { localB ->
klycfgpq2u . re = 0.0 ; localB -> klycfgpq2u . im = 0.0 ; localDW ->
gm4ldsef0x ++ ; } else { localB -> klycfgpq2u . re = 1.0 ; localB ->
klycfgpq2u . im = 0.0 ; } if ( ( localDW -> hqmqteccgf == 101.0 ) && (
localDW -> ow2q0ntryz == 11.0 ) ) { localDW -> hqmqteccgf = 1.0 ; localDW ->
ow2q0ntryz = 1.0 ; } } void MdlInitialize ( void ) { fm0wd0ufi4 * obj ;
fm0wd0ufi4r * obj_p ; real_T arg ; int32_T i ; rtDW . oklw0fjsqc = 0 ; for (
i = 0 ; i < 448 ; i ++ ) { rtDW . hkx2yr3kkm [ i ] . re = rtP . Unbuffer_ic ;
rtDW . hkx2yr3kkm [ i ] . im = 0.0 ; } memset ( & rtDW . j3p5afiuwi [ 0 ] , 0
, 20U * sizeof ( creal_T ) ) ; rtDW . avv54f5hk5 = false ; memset ( & rtDW .
dudo1uzasc [ 0 ] , 0 , sizeof ( creal_T ) << 4U ) ; rtDW . hgrkfoq3cg = 0 ;
arg = muDoubleScalarRem ( rtP . SineWave1_Phase , 6.2831853071795862 ) ; if (
arg < 0.0 ) { arg += 6.2831853071795862 ; } rtDW . pdfhqwl2rk = arg ; rtDW .
llasjmugub = 0 ; rtDW . bo2jdwx4oo = 0 ; rtDW . ihsaklalu1 = 0 ; rtDW .
g1fzj0vvds . re = 0.0 ; rtDW . g1fzj0vvds . im = 0.0 ; memset ( & rtDW .
pwwezmq23p [ 0 ] , 0 , 160U * sizeof ( creal_T ) ) ; rtDW . dfixqioppz = 0 ;
rtDW . nmuxxocpeb [ 0 ] . re = rtP . Delay1_InitialCondition_i0lmfbjsfn ;
rtDW . nmuxxocpeb [ 0 ] . im = 0.0 ; rtDW . nmuxxocpeb [ 1 ] . re = rtP .
Delay1_InitialCondition_i0lmfbjsfn ; rtDW . nmuxxocpeb [ 1 ] . im = 0.0 ;
rtDW . c0jtn0cmbm . re = rtP . Delay_InitialCondition_olfzdcxlxj ; rtDW .
c0jtn0cmbm . im = 0.0 ; rtDW . h2ksj10kxy = rtP .
Delay_InitialCondition_dz5kw15d3d ; rtDW . i3vnzaqzc2 = rtP .
Delay_InitialCondition_cv5aw0xgvv ; rtDW . ckjjq5oyex = 0 ; for ( i = 0 ; i <
127 ; i ++ ) { rtDW . hubhvpqxmt [ i ] . re = rtP .
DiscreteFIRFilter_InitialStates ; rtDW . hubhvpqxmt [ i ] . im = 0.0 ; rtDW .
bbv5iuls0y [ i ] . re = rtP . DiscreteFIRFilter_InitialStates_dxjicim0p4 ;
rtDW . bbv5iuls0y [ i ] . im = 0.0 ; } hf02sn2y4l ( & rtDW . ojzwehlmim ) ;
rtDW . fxkumyeta2 [ 0 ] . re = rtP . Delay_InitialCondition ; rtDW .
fxkumyeta2 [ 0 ] . im = 0.0 ; rtDW . fxkumyeta2 [ 1 ] . re = rtP .
Delay_InitialCondition ; rtDW . fxkumyeta2 [ 1 ] . im = 0.0 ; rtDW .
dwgxsguylv = rtP . Delay1_InitialCondition ; obj = rtDW . eoqskoxfxb .
pStatistic ; if ( obj -> isInitialized == 1 ) { obj -> pCumSum = 0.0 ; for (
i = 0 ; i < 7 ; i ++ ) { obj -> pCumSumRev [ i ] = 0.0 ; } obj ->
pCumRevIndex = 1.0 ; } rtB . h5yusbuwf4 = rtP . Out1_Y0 ; obj_p = rtDW .
cyowpw2aqw . pStatistic ; if ( obj_p -> isInitialized == 1 ) { obj_p ->
pCumSum . re = 0.0 ; obj_p -> pCumSum . im = 0.0 ; for ( i = 0 ; i < 7 ; i ++
) { obj_p -> pCumSumRev [ i ] . re = 0.0 ; obj_p -> pCumSumRev [ i ] . im =
0.0 ; } obj_p -> pCumRevIndex = 1.0 ; } hf02sn2y4l ( & rtDW . avnq340gbz ) ;
} void MdlStart ( void ) { cyfgdumq3z * obj ; cyfgdumq3zv * obj_p ;
jxyysspkjf varSizes ; real_T arg ; int32_T i ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtDW . eoqskoxfxb . matlabCodegenIsDeleted = true ; rtDW . eoqskoxfxb .
isInitialized = 0 ; rtDW . eoqskoxfxb . NumChannels = - 1 ; rtDW . eoqskoxfxb
. matlabCodegenIsDeleted = false ; rtDW . deaceg523b = true ; obj = & rtDW .
eoqskoxfxb ; rtDW . eoqskoxfxb . isSetupComplete = false ; rtDW . eoqskoxfxb
. isInitialized = 1 ; varSizes . f1 [ 0 ] = 1U ; varSizes . f1 [ 1 ] = 1U ;
for ( i = 0 ; i < 6 ; i ++ ) { varSizes . f1 [ i + 2 ] = 1U ; } rtDW .
eoqskoxfxb . inputVarSize = varSizes ; rtDW . eoqskoxfxb . NumChannels = 1 ;
obj -> _pobj0 . isInitialized = 0 ; rtDW . eoqskoxfxb . pStatistic = & obj ->
_pobj0 ; rtDW . eoqskoxfxb . isSetupComplete = true ; rtDW . eoqskoxfxb .
TunablePropsChanged = false ; arg = muDoubleScalarRem ( rtP . SineWave1_Phase
, 6.2831853071795862 ) ; if ( arg < 0.0 ) { arg += 6.2831853071795862 ; }
rtDW . pdfhqwl2rk = arg ; rtDW . cyowpw2aqw . matlabCodegenIsDeleted = true ;
rtDW . cyowpw2aqw . isInitialized = 0 ; rtDW . cyowpw2aqw . NumChannels = - 1
; rtDW . cyowpw2aqw . matlabCodegenIsDeleted = false ; rtDW . dx2fji5go5 =
true ; obj_p = & rtDW . cyowpw2aqw ; rtDW . cyowpw2aqw . isSetupComplete =
false ; rtDW . cyowpw2aqw . isInitialized = 1 ; varSizes . f1 [ 0 ] = 1U ;
varSizes . f1 [ 1 ] = 1U ; for ( i = 0 ; i < 6 ; i ++ ) { varSizes . f1 [ i +
2 ] = 1U ; } rtDW . cyowpw2aqw . inputVarSize = varSizes ; rtDW . cyowpw2aqw
. NumChannels = 1 ; obj_p -> _pobj0 . isInitialized = 0 ; rtDW . cyowpw2aqw .
pStatistic = & obj_p -> _pobj0 ; rtDW . cyowpw2aqw . isSetupComplete = true ;
rtDW . cyowpw2aqw . TunablePropsChanged = false ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { fm0wd0ufi4 * obj ; fm0wd0ufi4r * obj_p ; creal_T
csumrev_p [ 7 ] ; real_T csumrev [ 7 ] ; real_T csum ; real_T csum_im ;
real_T csum_re ; real_T cumRevIndex ; real_T hvdekefoov ; real_T ngldx2mod0 ;
real_T nwnff1menj_re ; int32_T curTapIdx ; int32_T j ; int32_T jIdx ; int32_T
outIdx ; int32_T tapIdx ; boolean_T exitg1 ; boolean_T iomn2azd0p ; srClearBC
( rtDW . eh4fzlk5yx ) ; srClearBC ( rtDW . mzdezzo1yx ) ; if ( ssIsSampleHit
( rtS , 3 , 0 ) ) { memcpy ( & rtDW . hkx2yr3kkm [ 0 ] , & rtP . Frame [ 0 ]
, 448U * sizeof ( creal_T ) ) ; rtDW . oklw0fjsqc = 0 ; } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { ngldx2mod0 = rtDW . hkx2yr3kkm [ rtDW . oklw0fjsqc ] . re
; hvdekefoov = rtDW . hkx2yr3kkm [ rtDW . oklw0fjsqc ] . im ; if ( rtDW .
oklw0fjsqc < 447 ) { rtDW . oklw0fjsqc ++ ; } if ( rtDW . avv54f5hk5 ) {
outIdx = 8 ; } else { outIdx = 0 ; } for ( curTapIdx = 0 ; curTapIdx < 8 ;
curTapIdx ++ ) { tapIdx = outIdx + curTapIdx ; jIdx = curTapIdx * 21 ;
csum_re = ngldx2mod0 * rtP . FIRInterpolation_FILTER_COEFF [ jIdx ] ; csum_im
= hvdekefoov * rtP . FIRInterpolation_FILTER_COEFF [ jIdx ] ; for ( j = 0 ; j
< 20 ; j ++ ) { csum_re += rtP . FIRInterpolation_FILTER_COEFF [ ( jIdx + j )
+ 1 ] * rtDW . j3p5afiuwi [ j ] . re ; csum_im += rtP .
FIRInterpolation_FILTER_COEFF [ ( jIdx + j ) + 1 ] * rtDW . j3p5afiuwi [ j ]
. im ; } rtDW . dudo1uzasc [ tapIdx ] . re = csum_re ; rtDW . dudo1uzasc [
tapIdx ] . im = csum_im ; } for ( tapIdx = 18 ; tapIdx >= 0 ; tapIdx -- ) {
rtDW . j3p5afiuwi [ tapIdx + 1 ] = rtDW . j3p5afiuwi [ tapIdx ] ; } rtDW .
j3p5afiuwi [ 0 ] . re = ngldx2mod0 ; rtDW . j3p5afiuwi [ 0 ] . im =
hvdekefoov ; rtDW . avv54f5hk5 = ! rtDW . avv54f5hk5 ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { csum_im = rtDW . dudo1uzasc [ rtDW . hgrkfoq3cg ] . re ;
csum_re = rtDW . dudo1uzasc [ rtDW . hgrkfoq3cg ] . im ; rtDW . hgrkfoq3cg ++
; if ( rtDW . hgrkfoq3cg >= 16 ) { rtDW . hgrkfoq3cg = 0 ; } ngldx2mod0 = rtP
. SineWave1_Amplitude * muDoubleScalarCos ( rtDW . pdfhqwl2rk ) ; hvdekefoov
= rtP . SineWave1_Amplitude * muDoubleScalarSin ( rtDW . pdfhqwl2rk ) ; rtDW
. pdfhqwl2rk += 0.0001 * rtP . Rs * 7.8539816339744827E-5 ; if ( rtDW .
pdfhqwl2rk >= 6.2831853071795862 ) { rtDW . pdfhqwl2rk -= 6.2831853071795862
; } else { if ( rtDW . pdfhqwl2rk < 0.0 ) { rtDW . pdfhqwl2rk +=
6.2831853071795862 ; } } nwnff1menj_re = csum_im * ngldx2mod0 - csum_re *
hvdekefoov ; csum_re = csum_im * hvdekefoov + csum_re * ngldx2mod0 ; outIdx =
rtDW . bo2jdwx4oo + 1 ; curTapIdx = ( rtDW . bo2jdwx4oo + 1 ) * 160 ; rtDW .
g1fzj0vvds . re += nwnff1menj_re * rtP . FIRDecimation_FILT [ rtDW .
llasjmugub ] ; rtDW . g1fzj0vvds . im += csum_re * rtP . FIRDecimation_FILT [
rtDW . llasjmugub ] ; tapIdx = rtDW . llasjmugub + 1 ; for ( jIdx = rtDW .
ihsaklalu1 + 1 ; jIdx < curTapIdx ; jIdx ++ ) { rtDW . g1fzj0vvds . re +=
rtDW . pwwezmq23p [ jIdx ] . re * rtP . FIRDecimation_FILT [ tapIdx ] ; rtDW
. g1fzj0vvds . im += rtDW . pwwezmq23p [ jIdx ] . im * rtP .
FIRDecimation_FILT [ tapIdx ] ; tapIdx ++ ; } for ( jIdx = curTapIdx - 160 ;
jIdx <= rtDW . ihsaklalu1 ; jIdx ++ ) { rtDW . g1fzj0vvds . re += rtDW .
pwwezmq23p [ jIdx ] . re * rtP . FIRDecimation_FILT [ tapIdx ] ; rtDW .
g1fzj0vvds . im += rtDW . pwwezmq23p [ jIdx ] . im * rtP . FIRDecimation_FILT
[ tapIdx ] ; tapIdx ++ ; } rtDW . pwwezmq23p [ rtDW . ihsaklalu1 ] . re =
nwnff1menj_re ; rtDW . pwwezmq23p [ rtDW . ihsaklalu1 ] . im = csum_re ;
curTapIdx = rtDW . ihsaklalu1 + 160 ; if ( rtDW . ihsaklalu1 + 160 >= 160 ) {
curTapIdx = rtDW . ihsaklalu1 ; } if ( rtDW . bo2jdwx4oo + 1 >= 1 ) { rtB .
pw40ykrdw4 = rtDW . g1fzj0vvds ; rtDW . g1fzj0vvds . re = 0.0 ; rtDW .
g1fzj0vvds . im = 0.0 ; outIdx = 0 ; tapIdx = 0 ; curTapIdx -- ; if (
curTapIdx < 0 ) { curTapIdx += 160 ; } } rtDW . ihsaklalu1 = curTapIdx ; rtDW
. llasjmugub = tapIdx ; rtDW . bo2jdwx4oo = outIdx ; if (
ssIsSpecialSampleHit ( rtS , 2 , 1 , 0 ) ) { rtB . mrqmp3oxlx = rtB .
pw40ykrdw4 ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { csum_re = rtB .
mrqmp3oxlx . re * rtP . DiscreteFIRFilter_Coefficients [ 0 ] . re - rtB .
mrqmp3oxlx . im * rtP . DiscreteFIRFilter_Coefficients [ 0 ] . im ; csum_im =
rtB . mrqmp3oxlx . re * rtP . DiscreteFIRFilter_Coefficients [ 0 ] . im + rtB
. mrqmp3oxlx . im * rtP . DiscreteFIRFilter_Coefficients [ 0 ] . re ; tapIdx
= 1 ; for ( j = rtDW . dfixqioppz ; j < 127 ; j ++ ) { csum_re += rtDW .
hubhvpqxmt [ j ] . re * rtP . DiscreteFIRFilter_Coefficients [ tapIdx ] . re
- rtDW . hubhvpqxmt [ j ] . im * rtP . DiscreteFIRFilter_Coefficients [
tapIdx ] . im ; csum_im += rtDW . hubhvpqxmt [ j ] . re * rtP .
DiscreteFIRFilter_Coefficients [ tapIdx ] . im + rtDW . hubhvpqxmt [ j ] . im
* rtP . DiscreteFIRFilter_Coefficients [ tapIdx ] . re ; tapIdx ++ ; } for (
j = 0 ; j < rtDW . dfixqioppz ; j ++ ) { csum_re += rtDW . hubhvpqxmt [ j ] .
re * rtP . DiscreteFIRFilter_Coefficients [ tapIdx ] . re - rtDW . hubhvpqxmt
[ j ] . im * rtP . DiscreteFIRFilter_Coefficients [ tapIdx ] . im ; csum_im
+= rtDW . hubhvpqxmt [ j ] . re * rtP . DiscreteFIRFilter_Coefficients [
tapIdx ] . im + rtDW . hubhvpqxmt [ j ] . im * rtP .
DiscreteFIRFilter_Coefficients [ tapIdx ] . re ; tapIdx ++ ; } rtB .
mhblynljhe . re = csum_re ; rtB . mhblynljhe . im = csum_im ; h1hifdmiku (
muDoubleScalarHypot ( rtB . mhblynljhe . re , rtB . mhblynljhe . im ) >= rtP
. CompareToConstant_const , rtB . mrqmp3oxlx , & rtB . ojzwehlmim , & rtDW .
ojzwehlmim ) ; iomn2azd0p = ( ( rtDW . nmuxxocpeb [ 0 ] . re == rtP .
CompareToConstant2_const ) && ( rtDW . nmuxxocpeb [ 0 ] . im == 0.0 ) && ( (
rtB . ojzwehlmim . klycfgpq2u . re == rtP . CompareToConstant1_const ) && (
rtB . ojzwehlmim . klycfgpq2u . im == 0.0 ) ) ) ; rtB . jdcph2uolt = rtB .
mrqmp3oxlx ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { csum_im =
muDoubleScalarAtan2 ( rtB . jdcph2uolt . re * - rtDW . fxkumyeta2 [ 0 ] . im
+ rtB . jdcph2uolt . im * rtDW . fxkumyeta2 [ 0 ] . re , rtB . jdcph2uolt .
re * rtDW . fxkumyeta2 [ 0 ] . re - rtB . jdcph2uolt . im * - rtDW .
fxkumyeta2 [ 0 ] . im ) ; if ( iomn2azd0p ) { if ( rtDW . eoqskoxfxb .
TunablePropsChanged ) { rtDW . eoqskoxfxb . TunablePropsChanged = false ; }
tapIdx = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( tapIdx < 8 ) ) { if (
rtDW . eoqskoxfxb . inputVarSize . f1 [ tapIdx ] != 1U ) { for ( curTapIdx =
0 ; curTapIdx < 8 ; curTapIdx ++ ) { rtDW . eoqskoxfxb . inputVarSize . f1 [
curTapIdx ] = 1U ; } exitg1 = true ; } else { tapIdx ++ ; } } obj = rtDW .
eoqskoxfxb . pStatistic ; if ( obj -> isInitialized != 1 ) { obj ->
isSetupComplete = false ; obj -> isInitialized = 1 ; obj -> pCumSum = 0.0 ;
for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { obj -> pCumSumRev [ tapIdx ] =
0.0 ; } obj -> pCumRevIndex = 1.0 ; obj -> isSetupComplete = true ; obj ->
pCumSum = 0.0 ; for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { obj ->
pCumSumRev [ tapIdx ] = 0.0 ; } obj -> pCumRevIndex = 1.0 ; } cumRevIndex =
obj -> pCumRevIndex ; csum = obj -> pCumSum ; for ( tapIdx = 0 ; tapIdx < 7 ;
tapIdx ++ ) { csumrev [ tapIdx ] = obj -> pCumSumRev [ tapIdx ] ; } csum +=
csum_im ; csum_re = csumrev [ ( int32_T ) cumRevIndex - 1 ] + csum ; csumrev
[ ( int32_T ) cumRevIndex - 1 ] = csum_im ; if ( cumRevIndex != 7.0 ) {
cumRevIndex ++ ; } else { cumRevIndex = 1.0 ; csum = 0.0 ; for ( outIdx = 5 ;
outIdx >= 0 ; outIdx -- ) { csumrev [ outIdx ] += csumrev [ outIdx + 1 ] ; }
} obj -> pCumSum = csum ; for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { obj
-> pCumSumRev [ tapIdx ] = csumrev [ tapIdx ] ; } obj -> pCumRevIndex =
cumRevIndex ; rtB . h5yusbuwf4 = csum_re / 8.0 ; srUpdateBC ( rtDW .
eh4fzlk5yx ) ; } rtB . ck0a30tqdy = rtB . h5yusbuwf4 * rtP . Constant2_Value
; rtB . efc4mwrxp1 = rtB . ck0a30tqdy + rtDW . dwgxsguylv ; cumRevIndex = rtP
. Constant3_Value . im * rtB . efc4mwrxp1 ; csum_im = muDoubleScalarExp ( rtP
. Constant3_Value . re * rtB . efc4mwrxp1 ) ; if ( cumRevIndex == 0.0 ) {
csum = csum_im ; cumRevIndex = 0.0 ; } else { csum = csum_im *
muDoubleScalarCos ( cumRevIndex ) ; cumRevIndex = csum_im * muDoubleScalarSin
( cumRevIndex ) ; } } rtB . kwcghrgeb5 . re = csum * rtB . jdcph2uolt . re -
cumRevIndex * rtB . jdcph2uolt . im ; rtB . kwcghrgeb5 . im = csum * rtB .
jdcph2uolt . im + cumRevIndex * rtB . jdcph2uolt . re ; if ( iomn2azd0p ) {
if ( rtDW . cyowpw2aqw . TunablePropsChanged ) { rtDW . cyowpw2aqw .
TunablePropsChanged = false ; } tapIdx = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( tapIdx < 8 ) ) { if ( rtDW . cyowpw2aqw . inputVarSize . f1 [
tapIdx ] != 1U ) { for ( curTapIdx = 0 ; curTapIdx < 8 ; curTapIdx ++ ) {
rtDW . cyowpw2aqw . inputVarSize . f1 [ curTapIdx ] = 1U ; } exitg1 = true ;
} else { tapIdx ++ ; } } obj_p = rtDW . cyowpw2aqw . pStatistic ; if ( obj_p
-> isInitialized != 1 ) { obj_p -> isSetupComplete = false ; obj_p ->
isInitialized = 1 ; obj_p -> pCumSum . re = 0.0 ; obj_p -> pCumSum . im = 0.0
; for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { obj_p -> pCumSumRev [ tapIdx
] . re = 0.0 ; obj_p -> pCumSumRev [ tapIdx ] . im = 0.0 ; } obj_p ->
pCumRevIndex = 1.0 ; obj_p -> isSetupComplete = true ; obj_p -> pCumSum . re
= 0.0 ; obj_p -> pCumSum . im = 0.0 ; for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx
++ ) { obj_p -> pCumSumRev [ tapIdx ] . re = 0.0 ; obj_p -> pCumSumRev [
tapIdx ] . im = 0.0 ; } obj_p -> pCumRevIndex = 1.0 ; } cumRevIndex = obj_p
-> pCumRevIndex ; csum_re = obj_p -> pCumSum . re ; csum_im = obj_p ->
pCumSum . im ; for ( tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { csumrev_p [
tapIdx ] = obj_p -> pCumSumRev [ tapIdx ] ; } csum_re += rtB . kwcghrgeb5 .
re ; csum_im += rtB . kwcghrgeb5 . im ; csumrev_p [ ( int32_T ) cumRevIndex -
1 ] = rtB . kwcghrgeb5 ; if ( cumRevIndex != 7.0 ) { cumRevIndex ++ ; } else
{ cumRevIndex = 1.0 ; csum_re = 0.0 ; csum_im = 0.0 ; for ( outIdx = 5 ;
outIdx >= 0 ; outIdx -- ) { csumrev_p [ outIdx ] . re += csumrev_p [ outIdx +
1 ] . re ; csumrev_p [ outIdx ] . im += csumrev_p [ outIdx + 1 ] . im ; } }
obj_p -> pCumSum . re = csum_re ; obj_p -> pCumSum . im = csum_im ; for (
tapIdx = 0 ; tapIdx < 7 ; tapIdx ++ ) { obj_p -> pCumSumRev [ tapIdx ] =
csumrev_p [ tapIdx ] ; } obj_p -> pCumRevIndex = cumRevIndex ; srUpdateBC (
rtDW . mzdezzo1yx ) ; } rtB . o4tc0oeris . re = rtB . mrqmp3oxlx . re * rtDW
. c0jtn0cmbm . re - rtB . mrqmp3oxlx . im * rtDW . c0jtn0cmbm . im ; rtB .
o4tc0oeris . im = rtB . mrqmp3oxlx . re * rtDW . c0jtn0cmbm . im + rtB .
mrqmp3oxlx . im * rtDW . c0jtn0cmbm . re ; csum_re = ( rtB . o4tc0oeris . re
+ 3.0 ) / 2.0 ; csum_im = ( rtB . o4tc0oeris . im + 3.0 ) / 2.0 ; if (
csum_re < 0.0 ) { cumRevIndex = muDoubleScalarCeil ( csum_re - 0.5 ) ; } else
{ cumRevIndex = muDoubleScalarFloor ( csum_re + 0.5 ) ; } if ( cumRevIndex >=
3.0 ) { outIdx = 3 ; } else if ( cumRevIndex <= 0.0 ) { outIdx = 0 ; } else {
outIdx = ( int32_T ) cumRevIndex ; } if ( csum_im < 0.0 ) { cumRevIndex =
muDoubleScalarCeil ( csum_im - 0.5 ) ; } else { cumRevIndex =
muDoubleScalarFloor ( csum_im + 0.5 ) ; } if ( cumRevIndex >= 3.0 ) {
curTapIdx = 3 ; } else if ( cumRevIndex <= 0.0 ) { curTapIdx = 0 ; } else {
curTapIdx = ( int32_T ) cumRevIndex ; } j = ( ( outIdx << 2 ) - curTapIdx ) +
3 ; outIdx = j >> 2 ; j &= 3 ; outIdx ^= outIdx >> 1 ; j ^= j >> 1 ; j +=
outIdx << 2 ; outIdx = j >> 2 ; j &= 3 ; outIdx ^= outIdx >> 1 ; j ^= j >> 1
; j += outIdx << 2 ; csum = rtConstP . js1nhsmiat [ j << 1 ] ; cumRevIndex =
rtConstP . js1nhsmiat [ ( j << 1 ) + 1 ] ; cumRevIndex = 1.0 / ( csum * csum
+ cumRevIndex * cumRevIndex ) * ( csum * rtB . o4tc0oeris . im + -
cumRevIndex * rtB . o4tc0oeris . re ) ; rtB . k2knnz45le = rtP . Gain1_Gain *
cumRevIndex + rtDW . h2ksj10kxy ; rtB . fpnhgjzqm2 = muDoubleScalarMod ( (
rtP . Gain_Gain * cumRevIndex + rtB . k2knnz45le ) * rtP . Gain2_Gain + rtDW
. i3vnzaqzc2 , rtP . Constant_Value ) ; cumRevIndex = rtP .
Gain1_Gain_j2pqq4kj1d . im * rtB . fpnhgjzqm2 ; csum_im = muDoubleScalarExp (
rtP . Gain1_Gain_j2pqq4kj1d . re * rtB . fpnhgjzqm2 ) ; if ( cumRevIndex ==
0.0 ) { rtB . mex2syhopa . re = csum_im ; rtB . mex2syhopa . im = 0.0 ; }
else { rtB . mex2syhopa . re = csum_im * muDoubleScalarCos ( cumRevIndex ) ;
rtB . mex2syhopa . im = csum_im * muDoubleScalarSin ( cumRevIndex ) ; }
csum_re = rtB . mrqmp3oxlx . re * rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ 0 ] . re - rtB . mrqmp3oxlx . im
* rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ 0 ] . im ; csum_im = rtB
. mrqmp3oxlx . re * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ 0 ] .
im + rtB . mrqmp3oxlx . im * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj
[ 0 ] . re ; tapIdx = 1 ; for ( j = rtDW . ckjjq5oyex ; j < 127 ; j ++ ) {
csum_re += rtDW . bbv5iuls0y [ j ] . re * rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . re - rtDW . bbv5iuls0y
[ j ] . im * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . im
; csum_im += rtDW . bbv5iuls0y [ j ] . re * rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . im + rtDW . bbv5iuls0y
[ j ] . im * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . re
; tapIdx ++ ; } for ( j = 0 ; j < rtDW . ckjjq5oyex ; j ++ ) { csum_re +=
rtDW . bbv5iuls0y [ j ] . re * rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . re - rtDW . bbv5iuls0y
[ j ] . im * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . im
; csum_im += rtDW . bbv5iuls0y [ j ] . re * rtP .
DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . im + rtDW . bbv5iuls0y
[ j ] . im * rtP . DiscreteFIRFilter_Coefficients_gx5gaoxprj [ tapIdx ] . re
; tapIdx ++ ; } h1hifdmiku ( muDoubleScalarHypot ( csum_re , csum_im ) >= rtP
. CompareToConstant_const_jskuwmcm0b , rtB . mrqmp3oxlx , & rtB . avnq340gbz
, & rtDW . avnq340gbz ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4
( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . dfixqioppz -- ; if ( rtDW .
dfixqioppz < 0 ) { rtDW . dfixqioppz = 126 ; } rtDW . hubhvpqxmt [ rtDW .
dfixqioppz ] = rtB . mrqmp3oxlx ; rtDW . nmuxxocpeb [ 0U ] = rtDW .
nmuxxocpeb [ 1U ] ; rtDW . nmuxxocpeb [ 1 ] = rtB . ojzwehlmim . klycfgpq2u ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . fxkumyeta2 [ 0U ] = rtDW .
fxkumyeta2 [ 1U ] ; rtDW . fxkumyeta2 [ 1 ] = rtB . jdcph2uolt ; rtDW .
dwgxsguylv = rtB . efc4mwrxp1 ; } rtDW . c0jtn0cmbm = rtB . mex2syhopa ; rtDW
. h2ksj10kxy = rtB . k2knnz45le ; rtDW . i3vnzaqzc2 = rtB . fpnhgjzqm2 ; rtDW
. ckjjq5oyex -- ; if ( rtDW . ckjjq5oyex < 0 ) { rtDW . ckjjq5oyex = 126 ; }
rtDW . bbv5iuls0y [ rtDW . ckjjq5oyex ] = rtB . mrqmp3oxlx ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { fm0wd0ufi4 * obj ;
fm0wd0ufi4r * obj_p ; if ( ! rtDW . eoqskoxfxb . matlabCodegenIsDeleted ) {
rtDW . eoqskoxfxb . matlabCodegenIsDeleted = true ; if ( ( rtDW . eoqskoxfxb
. isInitialized == 1 ) && rtDW . eoqskoxfxb . isSetupComplete ) { obj = rtDW
. eoqskoxfxb . pStatistic ; if ( obj -> isInitialized == 1 ) { obj ->
isInitialized = 2 ; } rtDW . eoqskoxfxb . NumChannels = - 1 ; } } if ( ! rtDW
. cyowpw2aqw . matlabCodegenIsDeleted ) { rtDW . cyowpw2aqw .
matlabCodegenIsDeleted = true ; if ( ( rtDW . cyowpw2aqw . isInitialized == 1
) && rtDW . cyowpw2aqw . isSetupComplete ) { obj_p = rtDW . cyowpw2aqw .
pStatistic ; if ( obj_p -> isInitialized == 1 ) { obj_p -> isInitialized = 2
; } rtDW . cyowpw2aqw . NumChannels = - 1 ; } } } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 70 ) ; ssSetNumBlockIO ( rtS , 15 ) ;
ssSetNumBlockParams ( rtS , 1059 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 1.25E-5 ) ;
ssSetSampleTime ( rtS , 2 , 9.9999999999999991E-5 ) ; ssSetSampleTime ( rtS ,
3 , 0.0448 ) ; ssSetOffsetTime ( rtS , 0 , 1.0 ) ; ssSetOffsetTime ( rtS , 1
, 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0
) ; } void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 4180211366U
) ; ssSetChecksumVal ( rtS , 1 , 2153047497U ) ; ssSetChecksumVal ( rtS , 2 ,
727047431U ) ; ssSetChecksumVal ( rtS , 3 , 356566201U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtB ) ,
"BlockIO" ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
{ void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ;
ssSetWorkSizeInBytes ( rtS , sizeof ( rtDW ) , "DWork" ) ; ( void ) memset (
dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 23 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } HW1_9723052_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"HW1_9723052" ) ; ssSetPath ( rtS , "HW1_9723052" ) ; ssSetTStart ( rtS , 0.0
) ; ssSetTFinal ( rtS , rtInf ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 448 ,
20 , 1 , 160 , 127 , 2 , 1 , 127 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 448 , 20 , 1 , 160 , 127 , 2 , 1 , 127 , 2 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_INT32 , SS_INT32 ,
SS_INT32 , SS_INT32 , SS_INT32 , SS_INT32 } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CircBuff" , "TapDelayBuff" , "Sums" , "StatesBuff" , "states" , "DSTATE" ,
"DSTATE" , "states" , "DSTATE" , "AccFreqNorm" , "DSTATE" , "DSTATE" ,
"DSTATE" , "memIdx" , "PhaseIdx" , "CoeffIdx" , "TapDelayIndex" , "circBuf" ,
"circBuf" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"HW1_9723052/Transmitter/Unbuffer" ,
"HW1_9723052/Transmitter/Raised Cosine\nTransmit Filter/FIR\nInterpolation" ,
"HW1_9723052/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"HW1_9723052/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"HW1_9723052/Receiver/First/Discrete FIR Filter" ,
"HW1_9723052/Receiver/First/Delay1" , "HW1_9723052/Receiver/Second/Delay" ,
"HW1_9723052/Receiver/Second/Subsystem/Discrete FIR Filter" ,
"HW1_9723052/Receiver/First/Enabled\nSubsystem/Delay" ,
"HW1_9723052/Transmitter/Sine Wave1" ,
"HW1_9723052/Receiver/Second/LOOP Filter/Delay" ,
"HW1_9723052/Receiver/Second/NCO/Delay" ,
"HW1_9723052/Receiver/First/Enabled\nSubsystem/Delay1" ,
"HW1_9723052/Transmitter/Unbuffer" ,
"HW1_9723052/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"HW1_9723052/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"HW1_9723052/Receiver/Raised Cosine\nReceive Filter/FIR\nDecimation" ,
"HW1_9723052/Receiver/First/Discrete FIR Filter" ,
"HW1_9723052/Receiver/Second/Subsystem/Discrete FIR Filter" } ; static const
char_T * rt_LoggedStateNames [ ] = { "CircBuff" , "TapDelayBuff" , "Sums" ,
"StatesBuff" , "states" , "DSTATE" , "DSTATE" , "states" , "DSTATE" ,
"AccFreqNorm" , "DSTATE" , "DSTATE" , "DSTATE" , "memIdx" , "PhaseIdx" ,
"CoeffIdx" , "TapDelayIndex" , "circBuf" , "circBuf" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 ,
SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 ,
0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 }
, { 0 , SS_INT32 , SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 ,
SS_INT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_INT32 , SS_INT32 , 0 , 0 ,
0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = {
19 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 19 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . hkx2yr3kkm ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . j3p5afiuwi ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . g1fzj0vvds ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . pwwezmq23p ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) rtDW . hubhvpqxmt ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) rtDW . nmuxxocpeb ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . c0jtn0cmbm ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) rtDW . bbv5iuls0y ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . fxkumyeta2 ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . pdfhqwl2rk ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . h2ksj10kxy ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . i3vnzaqzc2 ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . dwgxsguylv ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . oklw0fjsqc ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . bo2jdwx4oo ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . llasjmugub ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . ihsaklalu1 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . dfixqioppz ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . ckjjq5oyex ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetStepSize ( rtS , 1.25E-5 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 1.25E-5 ) ; ssSetSolverMaxOrder ( rtS ,
- 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL
) ) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
4180211366U ) ; ssSetChecksumVal ( rtS , 1 , 2153047497U ) ; ssSetChecksumVal
( rtS , 2 , 727047431U ) ; ssSetChecksumVal ( rtS , 3 , 356566201U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 9 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = (
sysRanDType * ) & rtDW . eh4fzlk5yx ; systemRan [ 2 ] = ( sysRanDType * ) &
rtDW . eh4fzlk5yx ; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = (
sysRanDType * ) & rtDW . mzdezzo1yx ; systemRan [ 5 ] = ( sysRanDType * ) &
rtDW . mzdezzo1yx ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
