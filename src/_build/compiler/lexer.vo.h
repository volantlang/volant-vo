#ifndef H_6
#define H_6
#include "internal/default.h"
#include "io.vo.h"
#include "math.vo.h"
#include "num.vo.h"
#include "mem.vo.h"
#include "tokens.vo.h"
#include "util.vo.h"
typedef struct dummy_v6_Lexer v6_Lexer;
typedef struct dummy_v6_Lexer {
	i8 (*p_buff);
	size_t p_position;
	size_t p_column;
	size_t p_line;
} v6_Lexer;
v6_Lexer d6_Lexer = (v6_Lexer){.p_position = 0, .p_column = 0, .p_line = 1, };
i8 (^m6_peek_Lexer)(v6_Lexer*);
i16 (^m6_peek16_Lexer)(v6_Lexer*);
i32 (^m6_peek32_Lexer)(v6_Lexer*);
void (^m6_eat_Lexer)(v6_Lexer*);
void (^m6_eat16_Lexer)(v6_Lexer*);
void (^m6_eat32_Lexer)(v6_Lexer*);
void (^m6_shiftLine_Lexer)(v6_Lexer*);
void (^m6_error_Lexer)(v6_Lexer*, i8*);
void (^m6_assert_Lexer)(v6_Lexer*, bool, i8*);
i8 (^m6_expect_Lexer)(v6_Lexer*, i8);
v2_Token (^m6_tok_Lexer)(v6_Lexer*);
bool (^m6_prepRead_Lexer)(v6_Lexer*);
void (^m6_skipUntilNewline_Lexer)(v6_Lexer*);
void (^m6_skipMultilineComment_Lexer)(v6_Lexer*);
v2_Token (^m6_next_Lexer)(v6_Lexer*);
v2_Token (^m6_nextRaw_Lexer)(v6_Lexer*);
u8 (^m6_escapeSequence_Lexer)(v6_Lexer*);
void (^m6_checkHexLit_Lexer)(v6_Lexer*, i32);
void (^m6_string_Lexer)(v6_Lexer*, v2_Token*);
void (^m6_char_Lexer)(v6_Lexer*, v2_Token*);
size_t (^m6_utf8Char_Lexer)(v6_Lexer*);
void (^m6_identifier_Lexer)(v6_Lexer*, v2_Token*);
void (^m6_numBi_Lexer)(v6_Lexer*);
void (^m6_numOct_Lexer)(v6_Lexer*);
void (^m6_numDec_Lexer)(v6_Lexer*);
void (^m6_numHex_Lexer)(v6_Lexer*);
void (^m6_numZero_Lexer)(v6_Lexer*, v2_Token*);
void (^m6_number_Lexer)(v6_Lexer*, v2_Token*);
bool (^m6_operator_Lexer)(v6_Lexer*, v2_Token*);
bool (^m6_delimiter_Lexer)(v6_Lexer*, v2_Token*);
;
;
;
;
;
;
;
;;;;;;
i8 (^m6_peek_Lexer)(v6_Lexer*) = ^i8 (v6_Lexer (*v6_self)){
	return (*((v6_self->p_buff)+(v6_self->p_position)));
};
i16 (^m6_peek16_Lexer)(v6_Lexer*) = ^i16 (v6_Lexer (*v6_self)){
	return (*(((i16*)((v6_self->p_buff)+(v6_self->p_position)))));
};
i32 (^m6_peek32_Lexer)(v6_Lexer*) = ^i32 (v6_Lexer (*v6_self)){
	return (*(((i32*)((v6_self->p_buff)+(v6_self->p_position)))));
};
void (^m6_eat_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	(++(v6_self->p_position));
	(++(v6_self->p_column));
};
void (^m6_eat16_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	({v6_self->p_position += sizeof(u16);});
	({v6_self->p_column += sizeof(u16);});
};
void (^m6_eat32_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	({v6_self->p_position += sizeof(u32);});
	({v6_self->p_column += sizeof(u32);});
};
void (^m6_shiftLine_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	(++(v6_self->p_position));
	(++(v6_self->p_line));
	({v6_self->p_column = 0;});
};
void (^m6_error_Lexer)(v6_Lexer*, i8*) = ^void (v6_Lexer (*v6_self), i8 (*v6_msg)){
	v5_print("Error: ");
	v5_println(v6_msg);
};
void (^m6_assert_Lexer)(v6_Lexer*, bool, i8*) = ^void (v6_Lexer (*v6_self), bool v6_cond, i8 (*v6_msg)){
	if(v6_cond){
		return ;
	} else {
	}
	m6_error_Lexer(v6_self, v6_msg);
};
i8 (^m6_expect_Lexer)(v6_Lexer*, i8) = ^i8 (v6_Lexer (*v6_self), i8 v6_c){
	i8 v6_char = m6_peek_Lexer(v6_self);

	m6_assert_Lexer(v6_self, v6_char==v6_c, "exepcted {c}, got {char}.");
	return v6_c;
};
v2_Token (^m6_tok_Lexer)(v6_Lexer*) = ^v2_Token (v6_Lexer (*v6_self)){
	return ((v2_Token){.p_buff = (v6_self->p_buff)+(v6_self->p_position), .p_line = v6_self->p_line, .p_column = v6_self->p_column, });
};
bool (^m6_prepRead_Lexer)(v6_Lexer*) = ^bool (v6_Lexer (*v6_self)){
	i8 v6_c;
	i16 v6_c2;

	size_t v6_p = v6_self->p_position;

l_loop:;
	({v6_c = m6_peek_Lexer(v6_self);v6_c2 = m6_peek16_Lexer(v6_self);});
	if(v8_isWhitespace(v6_c)){
		m6_eat_Lexer(v6_self);
	} else if(v6_c==10){
		m6_shiftLine_Lexer(v6_self);
	} else if(((47<<8)|47)==v6_c2){
		m6_skipUntilNewline_Lexer(v6_self);
	} else if(((42<<8)|47)==v6_c2){
		m6_skipMultilineComment_Lexer(v6_self);
	} else {
		return v6_p!=(v6_self->p_position);
	}
goto l_loop;
};
void (^m6_skipUntilNewline_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	({v6_self->p_position += 2;});
	for(
	i8 v6_c = m6_peek_Lexer(v6_self);
v6_c!=10;
	({v6_c = m6_peek_Lexer(v6_self);})){
		(++(v6_self->p_position));
	}
	m6_shiftLine_Lexer(v6_self);
};
void (^m6_skipMultilineComment_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	i8 v6_c;

l_loop:;
	({v6_c = m6_peek_Lexer(v6_self);});
	if(v6_c!=10){
		m6_eat_Lexer(v6_self);
	} else if(v6_c!=42){
		m6_shiftLine_Lexer(v6_self);
goto l_loop;
	} else {
	}
	if(v6_c!=42){
goto l_loop;
	} else {
	}
	if((m6_peek_Lexer(v6_self))==47){
		m6_eat_Lexer(v6_self);
		return ;
	} else {
	}
goto l_loop;
};
v2_Token (^m6_next_Lexer)(v6_Lexer*) = ^v2_Token (v6_Lexer (*v6_self)){
	v2_Token v6_tok = m6_nextRaw_Lexer(v6_self);

	if((v6_tok.p_pType)!=e2_PTokenType_SPACE){
		return v6_tok;
	} else {
	}
	return m6_nextRaw_Lexer(v6_self);
};
v2_Token (^m6_nextRaw_Lexer)(v6_Lexer*) = ^v2_Token (v6_Lexer (*v6_self)){
	v2_Token v6_tok = m6_tok_Lexer(v6_self);
	i8 v6_c = m6_peek_Lexer(v6_self);
	i16 v6_c2 = m6_peek16_Lexer(v6_self);

	if(v8_isIdentBegining(v6_c)){
		m6_identifier_Lexer(v6_self, (&v6_tok));
	} else if(m6_delimiter_Lexer(v6_self, (&v6_tok))){
		return v6_tok;
	} else if(m6_prepRead_Lexer(v6_self)){
		({v6_tok.p_pType = e2_PTokenType_SPACE;});
		({v6_tok.p_len = ((v6_self->p_buff)+(v6_self->p_position))-(v6_tok.p_buff);});
	} else if(m6_operator_Lexer(v6_self, (&v6_tok))){
		return v6_tok;
	} else if(v8_isStringDelimiter(v6_c)){
		m6_string_Lexer(v6_self, (&v6_tok));
	} else if(v8_isCharDelimiter(v6_c)){
		m6_char_Lexer(v6_self, (&v6_tok));
	} else if(v6_c==48){
		m6_numZero_Lexer(v6_self, (&v6_tok));
	} else if(v8_isNumDec(v6_c)){
		m6_number_Lexer(v6_self, (&v6_tok));
	} else if(v6_c==0){
		({v6_tok.p_pType = e2_PTokenType_EOF;});
	} else {
		m6_error_Lexer(v6_self, "unknown char\n\n");
		({v6_tok.p_pType = e2_PTokenType_EOF;});
	}
	return v6_tok;
};
u8 (^m6_escapeSequence_Lexer)(v6_Lexer*) = ^u8 (v6_Lexer (*v6_self)){
	m6_eat_Lexer(v6_self);
	i8 v6_char = m6_peek_Lexer(v6_self);

	switch(v6_char){
	case 110:
	case 34:
	case 39:
	case 116:
	case 114:
	case 92:
		m6_eat_Lexer(v6_self);
		return 2;
	case 117:
		m6_eat_Lexer(v6_self);
		m6_checkHexLit_Lexer(v6_self, 4);
		return 6;
	case 85:
		m6_eat_Lexer(v6_self);
		m6_checkHexLit_Lexer(v6_self, 8);
		return 10;
	case 0:
		m6_error_Lexer(v6_self, "expected escape sequence, got eof.");
		break;
	}
	m6_error_Lexer(v6_self, "Invalid character in escape sequence.");
	return 0;
};
void (^m6_checkHexLit_Lexer)(v6_Lexer*, i32) = ^void (v6_Lexer (*v6_self), i32 v6_size){
	i32 v6_i;

	for(
	({v6_i = 0;});v8_isNumHex(m6_peek_Lexer(v6_self));
	(++v6_i)){
		m6_eat_Lexer(v6_self);
	}
	m6_assert_Lexer(v6_self, v6_i==v6_size, "Invalid character in hex literal");
};
void (^m6_string_Lexer)(v6_Lexer*, v2_Token*) = ^void (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	m6_eat_Lexer(v6_self);
	({v6_tok->p_len = 1;});
	({v6_tok->p_pType = e2_PTokenType_STR_LIT;});
	i8 v6_char = m6_peek_Lexer(v6_self);

l_loop:;
	if(v8_isStringDelimiter(v6_char)){
		m6_eat_Lexer(v6_self);
		(v6_tok->p_len)++;
		return ;
	} else if(v6_char==0){
		m6_error_Lexer(v6_self, "expected string delimiter, got eof.");
	} else if(v6_char==10){
		m6_error_Lexer(v6_self, "expected string delimiter, got end of line.");
	} else if(v6_char==92){
		({v6_tok->p_len += m6_escapeSequence_Lexer(v6_self);});
	} else {
		m6_eat_Lexer(v6_self);
		(v6_tok->p_len)++;
	}
	({v6_char = m6_peek_Lexer(v6_self);});
goto l_loop;
};
void (^m6_char_Lexer)(v6_Lexer*, v2_Token*) = ^void (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	m6_eat_Lexer(v6_self);
	i8 v6_char = m6_peek_Lexer(v6_self);

	({v6_tok->p_pType = e2_PTokenType_CHAR_LIT;});
	switch(v6_char){
	case 0:
		m6_error_Lexer(v6_self, "expected char, got eof");
		break;
	case 10:
		m6_error_Lexer(v6_self, "expected char, got end of line");
		break;
	case 92:
		({v6_tok->p_len = (m6_escapeSequence_Lexer(v6_self))+2;});
		break;
	default:
		({v6_tok->p_len = (m6_utf8Char_Lexer(v6_self))+2;});
		break;
	}
	m6_expect_Lexer(v6_self, 39);
	m6_eat_Lexer(v6_self);
};
size_t (^m6_utf8Char_Lexer)(v6_Lexer*) = ^size_t (v6_Lexer (*v6_self)){
	i32 v6_c = m6_peek32_Lexer(v6_self);

	if(((v6_c>>0x18)&0x80)==0){
		m6_eat_Lexer(v6_self);
		return 1;
	} else if(((v6_c>>0x10)&0xc0c0)==0xc080){
		m6_eat16_Lexer(v6_self);
		return 2;
	} else if(((v6_c>>0x8)&0xe0c0c0)==0xe08080){
		m6_eat_Lexer(v6_self);
		m6_eat16_Lexer(v6_self);
		return 3;
	} else if((v6_c&0xf0c0c0c0)==0xf0808080){
		m6_eat32_Lexer(v6_self);
		return 4;
	} else {
	}
	m6_error_Lexer(v6_self, "invalid unicode char");
	return 0;
};
void (^m6_identifier_Lexer)(v6_Lexer*, v2_Token*) = ^void (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	(++(v6_tok->p_len));
	m6_eat_Lexer(v6_self);
	for(
	i8 v6_char = m6_peek_Lexer(v6_self);
v8_isIdentPart(v6_char);
	({v6_char = m6_peek_Lexer(v6_self);})){
		(++(v6_tok->p_len));
		m6_eat_Lexer(v6_self);
	}
	{
		size_t v6_i = v8_findKeyword(v6_tok->p_buff, v6_tok->p_len);

		if(v6_i!=v2_KeywordsNum){
			({v6_tok->p_pType = e2_PTokenType_KEYWORD;});
			({v6_tok->p_sType = ((v2_STokenType)(v6_i));});
		} else {
			({v6_tok->p_pType = e2_PTokenType_IDENT;});
		}
	}
};
void (^m6_numBi_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	for(
	i8 v6_c = m6_peek_Lexer(v6_self);
v8_isNumBi(v6_c);
	({v6_c = m6_peek_Lexer(v6_self);})){
		m6_eat_Lexer(v6_self);
	}
};
void (^m6_numOct_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	for(
	i8 v6_c = m6_peek_Lexer(v6_self);
v8_isNumOct(v6_c);
	({v6_c = m6_peek_Lexer(v6_self);})){
		m6_eat_Lexer(v6_self);
	}
};
void (^m6_numDec_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	for(
	i8 v6_c = m6_peek_Lexer(v6_self);
v8_isNumDec(v6_c);
	({v6_c = m6_peek_Lexer(v6_self);})){
		m6_eat_Lexer(v6_self);
	}
};
void (^m6_numHex_Lexer)(v6_Lexer*) = ^void (v6_Lexer (*v6_self)){
	for(
	i8 v6_c = m6_peek_Lexer(v6_self);
v8_isNumHex(v6_c);
	({v6_c = m6_peek_Lexer(v6_self);})){
		m6_eat_Lexer(v6_self);
	}
};
void (^m6_numZero_Lexer)(v6_Lexer*, v2_Token*) = ^void (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	({v6_tok->p_pType = e2_PTokenType_NUM_LIT;});
	size_t v6_p = v6_self->p_position;

	m6_eat_Lexer(v6_self);
	{
		i8 v6_next = m6_peek_Lexer(v6_self);

		switch(v6_next){
		case 98:
			m6_eat_Lexer(v6_self);
			m6_numBi_Lexer(v6_self);
goto l_end;
		case 111:
			m6_eat_Lexer(v6_self);
			m6_numOct_Lexer(v6_self);
goto l_end;
		case 120:
			m6_eat_Lexer(v6_self);
			m6_numHex_Lexer(v6_self);
goto l_end;
		}
	}
	u8 v6_c;

	for(
	({v6_c = m6_peek_Lexer(v6_self);});v6_c==48;
	({v6_c = m6_peek_Lexer(v6_self);})){
		m6_eat_Lexer(v6_self);
	}
	if((!(v8_isNumDec(v6_c)))){
		({v6_p = (v6_self->p_position)-1;});
		({v6_tok->p_buff = (v6_self->p_buff)+v6_p;});
		({v6_tok->p_len = 1;});
		return ;
	} else {
		({v6_p = v6_self->p_position;});
		({v6_tok->p_buff = (v6_self->p_buff)+v6_p;});
		m6_eat_Lexer(v6_self);
		m6_numDec_Lexer(v6_self);
	}
l_end:;
	({v6_tok->p_len = (v6_self->p_position)-v6_p;});
};
void (^m6_number_Lexer)(v6_Lexer*, v2_Token*) = ^void (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	({v6_tok->p_pType = e2_PTokenType_NUM_LIT;});
	size_t v6_p = v6_self->p_position;

	m6_numDec_Lexer(v6_self);
	({v6_tok->p_len = (v6_self->p_position)-v6_p;});
};
bool (^m6_operator_Lexer)(v6_Lexer*, v2_Token*) = ^bool (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	{
		i8 v6_char = m6_peek_Lexer(v6_self);

		switch(v6_char){
		case 42:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_MULEQ;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ARITH_OP;});
					({v6_tok->p_sType = e2_STokenType_MUL;});
					break;
				}
			}
			break;
		case 47:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_DIVEQ;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ARITH_OP;});
					({v6_tok->p_sType = e2_STokenType_DIV;});
					break;
				}
			}
			break;
		case 37:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_MODEQ;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ARITH_OP;});
					({v6_tok->p_sType = e2_STokenType_MOD;});
					break;
				}
			}
			break;
		case 43:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_ADDEQ;});
					break;
				case 43:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_ADDADD;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ARITH_OP;});
					({v6_tok->p_sType = e2_STokenType_ADD;});
					break;
				}
			}
			break;
		case 45:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_SUBEQ;});
					break;
				case 45:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_SUBSUB;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ARITH_OP;});
					({v6_tok->p_sType = e2_STokenType_SUB;});
					break;
				}
			}
			break;
		case 61:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_EQEQ;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_ASSIGN_OP;});
					({v6_tok->p_sType = e2_STokenType_EQ;});
					break;
				}
			}
			break;
		case 33:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_NOTEQ;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_LOGIC_OP;});
					({v6_tok->p_sType = e2_STokenType_LNOT;});
					break;
				}
			}
			break;
		case 62:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_GTEQ;});
					break;
				case 62:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
					({v6_tok->p_sType = e2_STokenType_RSHIFT;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_GT;});
					break;
				}
			}
			break;
		case 60:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 61:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_LTEQ;});
					break;
				case 60:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
					({v6_tok->p_sType = e2_STokenType_LSHIFT;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_RELAT_OP;});
					({v6_tok->p_sType = e2_STokenType_LT;});
					break;
				}
			}
			break;
		case 38:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 38:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_LOGIC_OP;});
					({v6_tok->p_sType = e2_STokenType_ANDAND;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
					({v6_tok->p_sType = e2_STokenType_AND;});
					break;
				}
			}
			break;
		case 124:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 124:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_LOGIC_OP;});
					({v6_tok->p_sType = e2_STokenType_OROR;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
					({v6_tok->p_sType = e2_STokenType_OR;});
					break;
				}
			}
			break;
		case 46:
			m6_eat_Lexer(v6_self);
			{
				i8 v6_next = m6_peek_Lexer(v6_self);

				switch(v6_next){
				case 46:
					m6_eat_Lexer(v6_self);
					({v6_tok->p_len = 2;});
					({v6_tok->p_pType = e2_PTokenType_SPEC_OP;});
					({v6_tok->p_sType = e2_STokenType_DOTDOT;});
					break;
				default:
					({v6_tok->p_len = 1;});
					({v6_tok->p_pType = e2_PTokenType_SPEC_OP;});
					({v6_tok->p_sType = e2_STokenType_DOT;});
					break;
				}
			}
			break;
		case 94:
			m6_eat_Lexer(v6_self);
			({v6_tok->p_len = 1;});
			({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
			({v6_tok->p_sType = e2_STokenType_XOR;});
			break;
		case 126:
			m6_eat_Lexer(v6_self);
			({v6_tok->p_len = 1;});
			({v6_tok->p_pType = e2_PTokenType_BITW_OP;});
			({v6_tok->p_sType = e2_STokenType_BNOT;});
			break;
		case 44:
			m6_eat_Lexer(v6_self);
			({v6_tok->p_len = 1;});
			({v6_tok->p_pType = e2_PTokenType_SPEC_OP;});
			({v6_tok->p_sType = e2_STokenType_COMMA;});
			break;
		case 58:
			m6_eat_Lexer(v6_self);
			({v6_tok->p_len = 1;});
			({v6_tok->p_pType = e2_PTokenType_SPEC_OP;});
			({v6_tok->p_sType = e2_STokenType_COLON;});
			break;
		case 63:
			m6_eat_Lexer(v6_self);
			({v6_tok->p_len = 1;});
			({v6_tok->p_pType = e2_PTokenType_SPEC_OP;});
			({v6_tok->p_sType = e2_STokenType_QMARK;});
			break;
		default:
			return false;
		}
	}
	return true;
};
bool (^m6_delimiter_Lexer)(v6_Lexer*, v2_Token*) = ^bool (v6_Lexer (*v6_self), v2_Token (*v6_tok)){
	{
		i8 v6_char = m6_peek_Lexer(v6_self);

		switch(v6_char){
		case 59:
			({v6_tok->p_pType = e2_PTokenType_SEMICOLON;});
			break;
		case 40:
			({v6_tok->p_pType = e2_PTokenType_LPAREN;});
			break;
		case 41:
			({v6_tok->p_pType = e2_PTokenType_RPAREN;});
			break;
		case 123:
			({v6_tok->p_pType = e2_PTokenType_LCBRACE;});
			break;
		case 125:
			({v6_tok->p_pType = e2_PTokenType_RCBRACE;});
			break;
		case 91:
			({v6_tok->p_pType = e2_PTokenType_LBRACE;});
			break;
		case 93:
			({v6_tok->p_pType = e2_PTokenType_RBRACE;});
			break;
		default:
			return false;
		}
	}
	({v6_tok->p_len = 1;});
	({v6_tok->p_sType = e2_STokenType_NULL;});
	m6_eat_Lexer(v6_self);
	return true;
};
;
#endif