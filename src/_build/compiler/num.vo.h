#ifndef H_3
#define H_3
#include "internal/default.h"
#include "io.vo.h"
;
void (^v3_revstr)(u8*, size_t, u8*);
;
void (^v3_itos)(i32, u8*);
;
size_t (^v3_utos)(u32, u8*);
;
;void (^v3_revstr)(u8*, size_t, u8*) =^void (u8 (*v3_str), size_t v3_len, u8 (*v3_temp)){
	size_t v3_i = v3_len-1;

	for(
	size_t v3_ci = 0;
v3_ci<v3_len;
	v3_ci++){
		({v3_temp[v3_ci] = v3_str[v3_i--];});
	}
	for(
	({v3_i = 0;});v3_i<v3_len;
	v3_i++){
		({v3_str[v3_i] = v3_temp[v3_i];});
	}
};;void (^v3_itos)(i32, u8*) =^void (i32 v3_num, u8 (*v3_buf)){
	u32 v3_i = 0;

	if(v3_num<0){
		({(*(v3_buf++)) = 45;});
	} else {
	}
	for(
;v3_num>1;
	v3_i++){
		({v3_buf[v3_i] = (v3_num%10)+48;});
		({v3_num /= 10;});
	}
	u8 v3_arr[20];

	v3_revstr(v3_buf, v3_i, v3_arr);
};;size_t (^v3_utos)(u32, u8*) =^size_t (u32 v3_num, u8 (*v3_buf)){
	size_t v3_i;

	for(
	({v3_i = 0;});v3_num>=1;
	v3_i++){
		({v3_buf[v3_i] = (v3_num%10)+48;});
		({v3_num /= 10;});
	}
	if(v3_i==0){
		({v3_buf[0] = 48;});
		({v3_buf[1] = 0;});
		return 1;
	} else {
	}
	({v3_buf[v3_i] = 0;});
	u8 v3_arr[10];

	v3_revstr(v3_buf, v3_i, v3_arr);
	return v3_i;
};;
#endif