#ifndef H_5
#define H_5
#include "internal/default.h"
void (^v5_printChar)(i8);
;
i8 (^v5_getChar)(void);
;
void (^v5_print)(i8*);
;
void (^v5_printn)(i8*, size_t);
;
void (^v5_printnln)(i8*, size_t);
;
void (^v5_println)(i8*);
;
void* (^v5_scan)(void);
;
void (^v5_printChar)(i8) =^void (i8 v5_char){
	putchar(v5_char);
};;i8 (^v5_getChar)(void) =^i8 (void){
	return ((i8)(getchar()));
};;void (^v5_print)(i8*) =^void (i8 (*v5_buf)){
	i8 v5_c = v5_buf[0];

	for(
	size_t v5_i = 1;
v5_c!=0;
	(++v5_i)){
		v5_printChar(v5_c);
		({v5_c = v5_buf[v5_i];});
	}
};;void (^v5_printn)(i8*, size_t) =^void (i8 (*v5_buf), size_t v5_n){
	for(
	size_t v5_i = 0;
v5_i<v5_n;
	(++v5_i)){
		v5_printChar((*(v5_buf++)));
	}
};;void (^v5_printnln)(i8*, size_t) =^void (i8 (*v5_buf), size_t v5_n){
	v5_printn(v5_buf, v5_n);
	v5_printChar(10);
};;void (^v5_println)(i8*) =^void (i8 (*v5_buf)){
	v5_print(v5_buf);
	v5_printChar(10);
};;void* (^v5_scan)(void) =^void* (void){
	VECTOR_TYPE(u8)v5_str = new4(u8, (((u8[]){})), 0);

	for(
	i8 v5_char = v5_getChar();
v5_char!=10;
	({v5_char = v5_getChar();})){
		VECTOR_PUSH(v5_str, v5_char);
	}
	return ((void*)(v5_str));
};;
#endif