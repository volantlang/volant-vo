#ifndef H_2
#define H_2
#include "internal/default.h"
#include "num.vo.h"
#include "mem.vo.h"
#include "io.vo.h"
typedef struct dummy_v2_Base v2_Base;
typedef struct dummy_v2_Token v2_Token;
typedef enum {
	e2_PTokenType_NULL = 0,
	e2_PTokenType_IDENT,
	e2_PTokenType_KEYWORD,
	e2_PTokenType_CHAR_LIT,
	e2_PTokenType_NUM_LIT,
	e2_PTokenType_STR_LIT,
	e2_PTokenType_ASSIGN_OP,
	e2_PTokenType_ARITH_OP,
	e2_PTokenType_LOGIC_OP,
	e2_PTokenType_RELAT_OP,
	e2_PTokenType_BITW_OP,
	e2_PTokenType_SPEC_OP,
	e2_PTokenType_LPAREN,
	e2_PTokenType_RPAREN,
	e2_PTokenType_LBRACE,
	e2_PTokenType_RBRACE,
	e2_PTokenType_LCBRACE,
	e2_PTokenType_RCBRACE,
	e2_PTokenType_SEMICOLON,
	e2_PTokenType_SPACE,
	e2_PTokenType_EOF,
} v2_PTokenType;
typedef enum {
	e2_STokenType_NULL = 0,
	e2_STokenType_FOR,
	e2_STokenType_SWITCH,
	e2_STokenType_IF,
	e2_STokenType_ELSE,
	e2_STokenType_FUNC,
	e2_STokenType_STRUCT,
	e2_STokenType_TUPLE,
	e2_STokenType_ENUM,
	e2_STokenType_CASE,
	e2_STokenType_ASYNC,
	e2_STokenType_WORK,
	e2_STokenType_IMPORT,
	e2_STokenType_RETURN,
	e2_STokenType_DEFAULT,
	e2_STokenType_BREAK,
	e2_STokenType_CONTINUE,
	e2_STokenType_NEW,
	e2_STokenType_CONST,
	e2_STokenType_VEC,
	e2_STokenType_DELETE,
	e2_STokenType_TYPEDEF,
	e2_STokenType_CAST,
	e2_STokenType_SIZEOF,
	e2_STokenType_EXPORT,
	e2_STokenType_UNION,
	e2_STokenType_STATIC,
	e2_STokenType_CAPTURE,
	e2_STokenType_PROMISE,
	e2_STokenType_GOTO,
	e2_STokenType_LABEL,
	e2_STokenType_AWAIT,
	e2_STokenType_AS,
	e2_STokenType_NATIVE,
	e2_STokenType_ADD,
	e2_STokenType_SUB,
	e2_STokenType_MUL,
	e2_STokenType_DIV,
	e2_STokenType_MOD,
	e2_STokenType_EQ,
	e2_STokenType_ADDEQ,
	e2_STokenType_SUBEQ,
	e2_STokenType_MULEQ,
	e2_STokenType_DIVEQ,
	e2_STokenType_MODEQ,
	e2_STokenType_ADDADD,
	e2_STokenType_SUBSUB,
	e2_STokenType_EQEQ,
	e2_STokenType_NOTEQ,
	e2_STokenType_GT,
	e2_STokenType_LT,
	e2_STokenType_GTEQ,
	e2_STokenType_LTEQ,
	e2_STokenType_LSHIFT,
	e2_STokenType_RSHIFT,
	e2_STokenType_OR,
	e2_STokenType_AND,
	e2_STokenType_XOR,
	e2_STokenType_BNOT,
	e2_STokenType_ANDAND,
	e2_STokenType_OROR,
	e2_STokenType_LNOT,
	e2_STokenType_COLON,
	e2_STokenType_DOT,
	e2_STokenType_DOTDOT,
	e2_STokenType_COMMA,
	e2_STokenType_QMARK,
} v2_STokenType;
typedef struct dummy_v2_Base {
	i8 (*p_buff);
	size_t p_len;
	size_t p_line;
	size_t p_column;
} v2_Base;
v2_Base d2_Base = (v2_Base){};
typedef struct dummy_v2_Token {
	i8 (*p_buff);
	size_t p_len;
	size_t p_line;
	size_t p_column;
	v2_PTokenType p_pType;
	v2_STokenType p_sType;
} v2_Token;
v2_Token d2_Token = (v2_Token){};
void (^m2_serialize_Token)(v2_Token*, i8*);
void (^m2_print_Token)(v2_Token*);
;
;
;
;
;
;
u32 v2_KeywordsNum = 34;
i8 (*(v2_Keywords[40])) = {"for", "switch", "if", "else", "func", "struct", "tuple", "enum", "case", "async", "work", "import", "return", "default", "break", "continue", "new", "const", "vec", "delete", "typedef", "case", "sizeof", "export", "union", "static", "capture", "promise", "goto", "label", "await", "as", "native", };
;
;;;;;
;
void (^m2_serialize_Token)(v2_Token*, i8*) = ^void (v2_Token (*v2_self), i8 (*v2_str)){
	v4_copy(v2_str, "{\n\tpType: ", 10);
	({v2_str += 10;});
	u8 v2_buf[20];

	size_t v2_n = v3_utos(((u32)(v2_self->p_pType)), v2_buf);

	v4_copy(v2_str, v2_buf, v2_n);
	({v2_str += v2_n;});
	v4_copy(v2_str, ",\n\tsType: ", 10);
	({v2_str += 10;});
	({v2_n = v3_utos(((u32)(v2_self->p_sType)), v2_buf);});
	v4_copy(v2_str, v2_buf, v2_n);
	({v2_str += v2_n;});
	v4_copy(v2_str, ",\n\tbuff: ", 9);
	({v2_str += 9;});
	v4_copy(v2_str, v2_self->p_buff, v2_self->p_len);
	({v2_str += v2_self->p_len;});
	v4_copy(v2_str, ",\n\tline: ", 9);
	({v2_str += 9;});
	({v2_n = v3_utos(((u32)(v2_self->p_line)), v2_buf);});
	v4_copy(v2_str, v2_buf, v2_n);
	({v2_str += v2_n;});
	v4_copy(v2_str, ",\n\tcolumn: ", 11);
	({v2_str += 11;});
	({v2_n = v3_utos(((u32)(v2_self->p_column)), v2_buf);});
	v4_copy(v2_str, v2_buf, v2_n);
	({v2_str += v2_n;});
	({(*(v2_str++)) = 10;});
	({(*(v2_str++)) = 125;});
	({(*(v2_str++)) = 0;});
};
void (^m2_print_Token)(v2_Token*) = ^void (v2_Token (*v2_self)){
	i8 v2_buf[1000];

	m2_serialize_Token(v2_self, v2_buf);
	v5_println(v2_buf);
};
;
#endif