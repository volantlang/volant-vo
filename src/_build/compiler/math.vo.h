#ifndef H_7
#define H_7
#include "internal/default.h"
i64 (^v7_powi64)(i64, i64);
;
u32 (^v7_powu32)(u32, u32);
;
i64 (^v7_powi64)(i64, i64) =^i64 (i64 v7_base, i64 v7_exp){
	i64 v7_result = 1;

	for(;;){
		if(v7_exp&1){
			({v7_result *= v7_base;});
		} else {
		}
		({v7_exp = v7_exp>>1;});
		if((!v7_exp)){
			break;
		} else {
		}
		({v7_base *= v7_base;});
	}
	return v7_result;
};;u32 (^v7_powu32)(u32, u32) =^u32 (u32 v7_base, u32 v7_exp){
	u32 v7_result = 1;

	for(;;){
		if(v7_exp&1){
			({v7_result *= v7_base;});
		} else {
		}
		({v7_exp = v7_exp>>1;});
		if((!v7_exp)){
			break;
		} else {
		}
		({v7_base *= v7_base;});
	}
	return v7_result;
};;
#endif