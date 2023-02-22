#ifndef RTW_HEADER_HW1_9723052_types_h_
#define RTW_HEADER_HW1_9723052_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_d98j1138AQJjmvH8MdysO_
#define DEFINED_TYPEDEF_FOR_struct_d98j1138AQJjmvH8MdysO_
typedef struct { real_T coeff [ 161 ] ; real_T decimFactor ; real_T
decimOffset ; } struct_d98j1138AQJjmvH8MdysO ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_fwLnS2gdwS0B3CGBtB3rcC_
#define DEFINED_TYPEDEF_FOR_struct_fwLnS2gdwS0B3CGBtB3rcC_
typedef struct { real_T coeff [ 161 ] ; real_T rateFactor ; }
struct_fwLnS2gdwS0B3CGBtB3rcC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_unxZgldSDWNxWQd5eN6VqH_
#define DEFINED_TYPEDEF_FOR_struct_unxZgldSDWNxWQd5eN6VqH_
typedef struct { real_T derotateFactorDTMode ; real_T derotateFactorWordLen ;
} struct_unxZgldSDWNxWQd5eN6VqH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_AoDpHcM6CaCPNYGkjQOziC_
#define DEFINED_TYPEDEF_FOR_struct_AoDpHcM6CaCPNYGkjQOziC_
typedef struct { real_T CoeffSource ; real_T h [ 161 ] ; real_T D ; real_T
filtStruct ; real_T outBufIC ; } struct_AoDpHcM6CaCPNYGkjQOziC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_6vjZE1zVXiMs9MoZnA9ZPB_
#define DEFINED_TYPEDEF_FOR_struct_6vjZE1zVXiMs9MoZnA9ZPB_
typedef struct { real_T firstCoeffMode ; real_T firstCoeffWordLength ; real_T
firstCoeffFracLength ; real_T prodOutputMode ; real_T prodOutputWordLength ;
real_T prodOutputFracLength ; real_T accumMode ; real_T accumWordLength ;
real_T accumFracLength ; real_T outputMode ; real_T outputWordLength ; real_T
outputFracLength ; real_T roundingMode ; real_T overflowMode ; real_T
arithmetic ; real_T inputWordLength ; real_T inputFracLength ; }
struct_6vjZE1zVXiMs9MoZnA9ZPB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_syxm88BY5WibQEZevWLUmH_
#define DEFINED_TYPEDEF_FOR_struct_syxm88BY5WibQEZevWLUmH_
typedef struct { real_T derotateFactorDTMode ; real_T derotateFactorWordLen ;
real_T denormFactorDTMode ; real_T denormFactorWordLen ; real_T prodOutDTMode
; real_T prodOutWordLen ; real_T sumDTMode ; real_T sumWordLen ; real_T
prodOutRoundingMode ; real_T prodOutOvFlMode ; }
struct_syxm88BY5WibQEZevWLUmH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_VO9LRxS2QhGNFRLuxvCNyE_
#define DEFINED_TYPEDEF_FOR_struct_VO9LRxS2QhGNFRLuxvCNyE_
typedef struct { real_T CoeffSource ; real_T h [ 168 ] ; real_T L ; real_T
outBufIC ; } struct_VO9LRxS2QhGNFRLuxvCNyE ;
#endif
#ifndef struct_tag_tczkMTi0Kh3FjT0FVFAJK
#define struct_tag_tczkMTi0Kh3FjT0FVFAJK
struct tag_tczkMTi0Kh3FjT0FVFAJK { int32_T isInitialized ; boolean_T
isSetupComplete ; real_T pCumSum ; real_T pCumSumRev [ 7 ] ; real_T
pCumRevIndex ; } ;
#endif
#ifndef typedef_fm0wd0ufi4
#define typedef_fm0wd0ufi4
typedef struct tag_tczkMTi0Kh3FjT0FVFAJK fm0wd0ufi4 ;
#endif
#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D
struct tag_PMfBDzoakfdM9QAdfx2o6D { uint32_T f1 [ 8 ] ; } ;
#endif
#ifndef typedef_jxyysspkjf
#define typedef_jxyysspkjf
typedef struct tag_PMfBDzoakfdM9QAdfx2o6D jxyysspkjf ;
#endif
#ifndef struct_tag_0ITbddNj4BzlmhbDsbL8QG
#define struct_tag_0ITbddNj4BzlmhbDsbL8QG
struct tag_0ITbddNj4BzlmhbDsbL8QG { int32_T isInitialized ; boolean_T
isSetupComplete ; creal_T pCumSum ; creal_T pCumSumRev [ 7 ] ; real_T
pCumRevIndex ; } ;
#endif
#ifndef typedef_fm0wd0ufi4r
#define typedef_fm0wd0ufi4r
typedef struct tag_0ITbddNj4BzlmhbDsbL8QG fm0wd0ufi4r ;
#endif
#ifndef struct_tag_lFbvawkFBeUkUzTtJmVtNE
#define struct_tag_lFbvawkFBeUkUzTtJmVtNE
struct tag_lFbvawkFBeUkUzTtJmVtNE { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; boolean_T
TunablePropsChanged ; jxyysspkjf inputVarSize ; fm0wd0ufi4 * pStatistic ;
int32_T NumChannels ; fm0wd0ufi4 _pobj0 ; } ;
#endif
#ifndef typedef_cyfgdumq3z
#define typedef_cyfgdumq3z
typedef struct tag_lFbvawkFBeUkUzTtJmVtNE cyfgdumq3z ;
#endif
#ifndef struct_tag_QmAFE696ZpxuqS56OnIgyB
#define struct_tag_QmAFE696ZpxuqS56OnIgyB
struct tag_QmAFE696ZpxuqS56OnIgyB { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; boolean_T
TunablePropsChanged ; jxyysspkjf inputVarSize ; fm0wd0ufi4r * pStatistic ;
int32_T NumChannels ; fm0wd0ufi4r _pobj0 ; } ;
#endif
#ifndef typedef_cyfgdumq3zv
#define typedef_cyfgdumq3zv
typedef struct tag_QmAFE696ZpxuqS56OnIgyB cyfgdumq3zv ;
#endif
typedef struct P_ P ;
#endif
