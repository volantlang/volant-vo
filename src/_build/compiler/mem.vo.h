#ifndef H_4
#define H_4
#include "internal/default.h"
void (^v4_copy)(void*, void*, size_t);
;
i8 (^v4_compare)(void*, void*, size_t);
;
void (^v4_set)(void*, u8, size_t);
;
void (^v4_copy)(void*, void*, size_t) =^void (void (*v4_dest), void (*v4_src), size_t v4_length){
	u8 (*v4_l) = ((u8*)(v4_dest));
	u8 (*v4_r) = ((u8*)(v4_src));

	for(
	size_t v4_i = 0;
v4_i<v4_length;
	({v4_l[v4_i] = v4_r[v4_i];v4_i = v4_i+1;})){
	}
};;i8 (^v4_compare)(void*, void*, size_t) =^i8 (void (*v4_first), void (*v4_second), size_t v4_length){
	i8 (*v4_l) = ((i8*)(v4_first));
	i8 (*v4_r) = ((i8*)(v4_second));

	for(;((v4_length--)!=0)&&(((*(v4_l++)))==((*(v4_r++))));){
	}
	return v4_length!=((-1)) ? ((*((--v4_l))))-((*((--v4_r)))) : 0;
};;void (^v4_set)(void*, u8, size_t) =^void (void (*v4_ptr), u8 v4_char, size_t v4_length){
	u8 (*v4_l) = ((u8*)(v4_ptr));

	for(
	size_t v4_i = 0;
v4_i<v4_length;
	({v4_l[v4_i++] = v4_char;})){
	}
};;
#endif