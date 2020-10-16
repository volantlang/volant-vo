#ifndef H_1
#define H_1
#include "internal/default.h"
void (^v1_printChar)(i8);
;
i8 (^v1_getChar)(void);
;
void (^v1_print)(i8*);
;
void (^v1_printn)(i8*, size_t);
;
void (^v1_printnln)(i8*, size_t);
;
void (^v1_println)(i8*);
;
void* (^v1_scan)(void);
;
void (^v1_printChar)(i8) =^void (i8 v1_char){
	putchar(v1_char);
};;i8 (^v1_getChar)(void) =^i8 (void){
	return ((i8)(getchar()));
};;void (^v1_print)(i8*) =^void (i8 (*v1_buf)){
	i8 v1_c = v1_buf[0];

	for(
	size_t v1_i = 1;
v1_c!=0;
	(++v1_i)){
		v1_printChar(v1_c);
		({v1_c = v1_buf[v1_i];});
	}
};;void (^v1_printn)(i8*, size_t) =^void (i8 (*v1_buf), size_t v1_n){
	for(
	size_t v1_i = 0;
v1_i<v1_n;
	(++v1_i)){
		v1_printChar((*(v1_buf++)));
	}
};;void (^v1_printnln)(i8*, size_t) =^void (i8 (*v1_buf), size_t v1_n){
	v1_printn(v1_buf, v1_n);
	v1_printChar(10);
};;void (^v1_println)(i8*) =^void (i8 (*v1_buf)){
	v1_print(v1_buf);
	v1_printChar(10);
};;void* (^v1_scan)(void) =^void* (void){
	VECTOR_TYPE(u8)v1_str = new4(u8, (((u8[]){})), 0);

	for(
	i8 v1_char = v1_getChar();
v1_char!=10;
	({v1_char = v1_getChar();})){
		VECTOR_PUSH(v1_str, v1_char);
	}
	return ((void*)(v1_str));
};;
#endif