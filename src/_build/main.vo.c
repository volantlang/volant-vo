#include "internal/default.h"
#include "io.vo.h"
#include "compiler/tokens.vo.h"
#include "compiler/lexer.vo.h"
#include "compiler/ast.vo.h"
#include "compiler/parser.vo.h"
#include "compiler/compiler.vo.h"
;
;
;
;
;
;
;
;;;;;;i32 (^v0_main)(void) = ^i32 (void){
	FILE (*v0_fp) = fopen("./test.vo", "r");

	if(v0_fp==null){
		v1_println("fp is null");
		return 1;
	} else {
	}
	VECTOR_TYPE(i8)v0_stuff = new4(i8, (((i8[]){})), 0);

	for(
	i32 v0_c = fgetc(v0_fp);
v0_c!=EOF;
	({v0_c = fgetc(v0_fp);})){
		VECTOR_PUSH(v0_stuff, ((i8)(v0_c)));
	}
	VECTOR_PUSH(v0_stuff, 0);
	v10_Parser v0_p = ((v10_Parser){.p_lexer = ((v6_Lexer){.p_buff = v0_stuff->mem, .p_position = d6_Lexer.p_position, .p_column = d6_Lexer.p_column, .p_line = d6_Lexer.p_line, }), });

	v11_Compiler v0_c = ((v11_Compiler){.p_scopeCount = 0, .p_buff = new4(i8, (((i8[]){})), 0), });

	m11_append_Compiler((&v0_c), "#include \"internal/default.h\"\n", 30);
	m10_eat_Parser((&v0_p));
	for(
	v2_Token v0_tok = m10_peek_Parser((&v0_p));
(v0_tok.p_pType)!=e2_PTokenType_EOF;
	({v0_tok = m10_peek_Parser((&v0_p));})){
		v9_Stmt (*v0_stmt) = m10_globalStmt_Parser((&v0_p));

		m11_stmt_Compiler((&v0_c), v0_stmt);
	}
	VECTOR_PUSH(v0_c.p_buff, 0);
	v1_println(v0_c.p_buff->mem);
	fclose(v0_fp);
	return 0;
};

;
int main() {
	return v0_main();
}