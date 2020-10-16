#ifndef H_8
#define H_8
#include "internal/default.h"
#include "tokens.vo.h"
;
bool (^v8_isAlpha)(u8);
;
bool (^v8_isNumDec)(u8);
;
bool (^v8_isNumBi)(u8);
;
bool (^v8_isNumOct)(u8);
;
bool (^v8_isNumHex)(u8);
;
bool (^v8_isIdentPart)(u8);
;
bool (^v8_isIdentBegining)(u8);
;
bool (^v8_isStringDelimiter)(u8);
;
bool (^v8_isCharDelimiter)(u8);
;
bool (^v8_isWhitespace)(u8);
;
;
size_t (^v8_findKeyword)(i8*, size_t);
;
;bool (^v8_isAlpha)(u8) =^bool (u8 v8_c){
	return ((v8_c>=97)&&(v8_c<=122))||((v8_c>=65)&&(v8_c<=90));
};;bool (^v8_isNumDec)(u8) =^bool (u8 v8_c){
	return (v8_c>=48)&&(v8_c<=57);
};;bool (^v8_isNumBi)(u8) =^bool (u8 v8_c){
	return (v8_c==48)||(v8_c==49);
};;bool (^v8_isNumOct)(u8) =^bool (u8 v8_c){
	return (v8_c>=48)&&(v8_c<=55);
};;bool (^v8_isNumHex)(u8) =^bool (u8 v8_c){
	return (((v8_c>=48)&&(v8_c<=57))||((v8_c>=97)&&(v8_c<=102)))||((v8_c>=65)&&(v8_c<=70));
};;bool (^v8_isIdentPart)(u8) =^bool (u8 v8_c){
	return ((v8_isAlpha(v8_c))||(v8_isNumDec(v8_c)))||(v8_c==95);
};;bool (^v8_isIdentBegining)(u8) =^bool (u8 v8_c){
	return ((v8_isAlpha(v8_c))||(v8_c==95))||(v8_c==36);
};;bool (^v8_isStringDelimiter)(u8) =^bool (u8 v8_c){
	return v8_c==34;
};;bool (^v8_isCharDelimiter)(u8) =^bool (u8 v8_c){
	return v8_c==39;
};;bool (^v8_isWhitespace)(u8) =^bool (u8 v8_c){
	return ((v8_c==32)||(v8_c==9))||(v8_c==13);
};;bool (^v8_strcomp)(i8*, i8*, size_t) = ^bool (i8 (*v8_a), i8 (*v8_b), size_t v8_l){
	for(;((((*v8_a))!=0)&&(((*(v8_a++)))==((*(v8_b++)))))&&(((--v8_l))!=0);){
	}
	return (((*v8_a))==0)&&(v8_l==0);
};

;size_t (^v8_findKeyword)(i8*, size_t) =^size_t (i8 (*v8_c), size_t v8_l){
	i8 (*v8_word) = v2_Keywords[0];
	size_t v8_i = ((size_t)(1));

	for(
;(v8_i!=v2_KeywordsNum)&&((!(v8_strcomp(v8_word, v8_c, v8_l))));
	({v8_word = v2_Keywords[v8_i++];})){
	}
	return v8_i;
};;
#endif