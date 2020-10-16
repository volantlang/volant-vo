#ifndef H_10
#define H_10
#include "internal/default.h"
#include "io.vo.h"
#include "tokens.vo.h"
#include "ast.vo.h"
#include "lexer.vo.h"
#include "mem.vo.h"
typedef struct dummy_v10_ParserState v10_ParserState;
typedef struct dummy_v10_Parser v10_Parser;
typedef struct dummy_v10_ParserState {
	i8 (*p_buff);
	size_t p_line;
	size_t p_column;
} v10_ParserState;
v10_ParserState d10_ParserState = (v10_ParserState){};
typedef struct dummy_v10_Parser {
	v6_Lexer p_lexer;
	v2_Token p_current;
	u8 p_context;
} v10_Parser;
v10_Parser d10_Parser = (v10_Parser){};
v2_Token (^m10_peek_Parser)(v10_Parser*);
void (^m10_eat_Parser)(v10_Parser*);
void (^m10_eatRaw_Parser)(v10_Parser*);
void (^m10_clean_Parser)(v10_Parser*);
void (^m10_error_Parser)(v10_Parser*, i8*);
v10_ParserState (^m10_state_Parser)(v10_Parser*);
v9_Stmt* (^m10_stmtNode_Parser)(v10_Parser*, v10_ParserState*);
v9_Expr* (^m10_exprNode_Parser)(v10_Parser*, v10_ParserState*);
v9_Type* (^m10_typeNode_Parser)(v10_Parser*, v10_ParserState*);
v2_Token (^m10_expectPri_Parser)(v10_Parser*, v2_PTokenType);
v2_Token (^m10_expectSec_Parser)(v10_Parser*, v2_STokenType);
void (^m10_assert_Parser)(v10_Parser*, bool, i8*);
void * (^m10_identVec_Parser)(v10_Parser*);
void * (^m10_typeVec_Parser)(v10_Parser*);
void * (^m10_decTypeVec_Parser)(v10_Parser*);
void * (^m10_exprVec_Parser)(v10_Parser*);
v9_Stmt* (^m10_globalStmt_Parser)(v10_Parser*);
v9_Stmt* (^m10_globalStmtRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_localStmt_Parser)(v10_Parser*);
v9_Stmt* (^m10_localStmtRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_basicStmt_Parser)(v10_Parser*);
v9_Stmt* (^m10_nullStmt_Parser)(v10_Parser*);
v9_Stmt* (^m10_brak_Parser)(v10_Parser*);
v9_Stmt* (^m10_continuee_Parser)(v10_Parser*);
v9_Stmt* (^m10_defalt_Parser)(v10_Parser*);
v9_Stmt* (^m10_exprStmt_Parser)(v10_Parser*);
v9_Stmt* (^m10_rturn_Parser)(v10_Parser*);
v9_Return (^m10_rturnRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_casee_Parser)(v10_Parser*);
v9_Case (^m10_caseeRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_block_Parser)(v10_Parser*);
v9_Block (^m10_blockRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_imprt_Parser)(v10_Parser*);
v9_Import (^m10_imprtRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_decAssignExpr_Parser)(v10_Parser*);
v9_Stmt* (^m10_dec_Parser)(v10_Parser*);
v9_Stmt* (^m10_decBody_Parser)(v10_Parser*, v10_ParserState*, void*);
v9_Stmt* (^m10_decNoVal_Parser)(v10_Parser*);
v9_Declaration (^m10_decNoValRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_assignBody_Parser)(v10_Parser*, v10_ParserState*, void*);
v9_Stmt* (^m10_funcDec_Parser)(v10_Parser*);
v9_FuncDec (^m10_funcDecRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_labl_Parser)(v10_Parser*);
v9_Label (^m10_lablRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_gotoh_Parser)(v10_Parser*);
v9_Goto (^m10_gotohRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_ifElse_Parser)(v10_Parser*);
v9_IfElse (^m10_ifElseRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_swtch_Parser)(v10_Parser*);
v9_Switch (^m10_swtchRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_loop_Parser)(v10_Parser*);
v9_Loop (^m10_loopRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_del_Parser)(v10_Parser*);
v9_Delete (^m10_delRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_tdef_Parser)(v10_Parser*);
v9_Typedef (^m10_tdefRaw_Parser)(v10_Parser*);
v9_Expr* (^m10_expr_Parser)(v10_Parser*);
v9_Expr* (^m10_expr0_Parser)(v10_Parser*);
v9_Expr* (^m10_expr1_Parser)(v10_Parser*);
v9_Expr* (^m10_expr2_Parser)(v10_Parser*);
v9_Expr* (^m10_expr3_Parser)(v10_Parser*);
v9_Expr* (^m10_expr4_Parser)(v10_Parser*);
v9_Expr* (^m10_expr5_Parser)(v10_Parser*);
v9_Expr* (^m10_expr6_Parser)(v10_Parser*);
v9_Expr* (^m10_expr7_Parser)(v10_Parser*);
v9_Expr* (^m10_expr8_Parser)(v10_Parser*);
v9_Expr* (^m10_expr9_Parser)(v10_Parser*);
v9_Expr* (^m10_expr10_Parser)(v10_Parser*);
v9_Expr* (^m10_expr11_Parser)(v10_Parser*);
v9_Expr* (^m10_exprOrType_Parser)(v10_Parser*);
v9_Expr* (^m10_callExpr_Parser)(v10_Parser*, v9_Expr*, v10_ParserState*);
v9_Expr* (^m10_newExpr_Parser)(v10_Parser*);
v9_NewExpr (^m10_newExprRaw_Parser)(v10_Parser*);
v9_Expr* (^m10_awaitExpr_Parser)(v10_Parser*);
v9_Expr* (^m10_sizeExpr_Parser)(v10_Parser*);
v9_Expr* (^m10_castExpr_Parser)(v10_Parser*);
v9_Expr* (^m10_arrayInitializer_Parser)(v10_Parser*);
void (^m10_compLitData_Parser)(v10_Parser*, v9_CompLit*);
v9_Expr* (^m10_funcExpr_Parser)(v10_Parser*);
v9_FuncExpr (^m10_funcExprRaw_Parser)(v10_Parser*);
v9_Type* (^m10_decType_Parser)(v10_Parser*);
v9_Type* (^m10_type_Parser)(v10_Parser*);
v9_Type* (^m10_type1_Parser)(v10_Parser*);
v9_Type* (^m10_type2_Parser)(v10_Parser*);
v9_Type* (^m10_type3_Parser)(v10_Parser*);
v9_Type* (^m10_funcType_Parser)(v10_Parser*);
v9_FuncType (^m10_funcTypeRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_structTypedef_Parser)(v10_Parser*);
v9_Typedef (^m10_structTypedefRaw_Parser)(v10_Parser*);
v9_Type* (^m10_structType_Parser)(v10_Parser*);
v9_Type* (^m10_structBody_Parser)(v10_Parser*);
v9_StructType (^m10_structBodyRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_enumTypedef_Parser)(v10_Parser*);
v9_Typedef (^m10_enumTypedefRaw_Parser)(v10_Parser*);
v9_Type* (^m10_enumType_Parser)(v10_Parser*);
v9_Type* (^m10_enumBody_Parser)(v10_Parser*);
v9_EnumType (^m10_enumBodyRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_unionTypedef_Parser)(v10_Parser*);
v9_Typedef (^m10_unionTypedefRaw_Parser)(v10_Parser*);
v9_Type* (^m10_unionType_Parser)(v10_Parser*);
v9_Type* (^m10_unionBody_Parser)(v10_Parser*);
v9_UnionType (^m10_unionBodyRaw_Parser)(v10_Parser*);
v9_Stmt* (^m10_tupleTypedef_Parser)(v10_Parser*);
v9_Typedef (^m10_tupleTypedefRaw_Parser)(v10_Parser*);
v9_Type* (^m10_tupleType_Parser)(v10_Parser*);
v9_Type* (^m10_tupleBody_Parser)(v10_Parser*);
v9_TupleType (^m10_tupleBodyRaw_Parser)(v10_Parser*);
;
;
;
;
;
;
;
;;;;;

;
v2_Token (^m10_peek_Parser)(v10_Parser*) = ^v2_Token (v10_Parser (*v10_self)){
	return v10_self->p_current;
};
void (^m10_eat_Parser)(v10_Parser*) = ^void (v10_Parser (*v10_self)){
	({v10_self->p_current = m6_next_Lexer((&(v10_self->p_lexer)));});
};
void (^m10_eatRaw_Parser)(v10_Parser*) = ^void (v10_Parser (*v10_self)){
	({v10_self->p_current = m6_nextRaw_Lexer((&(v10_self->p_lexer)));});
};
void (^m10_clean_Parser)(v10_Parser*) = ^void (v10_Parser (*v10_self)){
	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_SPACE){
		m10_eatRaw_Parser(v10_self);
	} else {
	}
};
void (^m10_error_Parser)(v10_Parser*, i8*) = ^void (v10_Parser (*v10_self), i8 (*v10_msg)){
	printf("Error %zu:%zu ", v10_self->p_lexer.p_line, v10_self->p_lexer.p_column);
	v5_println(v10_msg);
	exit(1);
};
v10_ParserState (^m10_state_Parser)(v10_Parser*) = ^v10_ParserState (v10_Parser (*v10_self)){
	return ((v10_ParserState){.p_line = v10_self->p_current.p_line, .p_column = v10_self->p_current.p_column, .p_buff = v10_self->p_current.p_buff, });
};
v9_Stmt* (^m10_stmtNode_Parser)(v10_Parser*, v10_ParserState*) = ^v9_Stmt* (v10_Parser (*v10_self), v10_ParserState (*v10_state)){
	return new2(v9_Stmt,v9_Stmt,(((v9_Stmt){.p_line = v10_state->p_line, .p_column = v10_state->p_column, .p_buff = v10_state->p_buff, .p_len = ((size_t)((v10_self->p_current.p_buff)-(v10_state->p_buff))), })));
};
v9_Expr* (^m10_exprNode_Parser)(v10_Parser*, v10_ParserState*) = ^v9_Expr* (v10_Parser (*v10_self), v10_ParserState (*v10_state)){
	return new2(v9_Expr,v9_Expr,(((v9_Expr){.p_line = v10_state->p_line, .p_column = v10_state->p_column, .p_buff = v10_state->p_buff, .p_len = ((size_t)((v10_self->p_current.p_buff)-(v10_state->p_buff))), })));
};
v9_Type* (^m10_typeNode_Parser)(v10_Parser*, v10_ParserState*) = ^v9_Type* (v10_Parser (*v10_self), v10_ParserState (*v10_state)){
	return new2(v9_Type,v9_Type,(((v9_Type){.p_line = v10_state->p_line, .p_column = v10_state->p_column, .p_buff = v10_state->p_buff, .p_len = ((size_t)((v10_self->p_current.p_buff)-(v10_state->p_buff))), })));
};
v2_Token (^m10_expectPri_Parser)(v10_Parser*, v2_PTokenType) = ^v2_Token (v10_Parser (*v10_self), v2_PTokenType v10_t){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	if((v10_tok.p_pType)==v10_t){
		return v10_tok;
	} else {
		printf("%u\n", v10_t);
		m2_print_Token((&v10_tok));
		m10_error_Parser(v10_self, "expected {t}, got {tok.pType}.");
	}
	return v10_tok;
};
v2_Token (^m10_expectSec_Parser)(v10_Parser*, v2_STokenType) = ^v2_Token (v10_Parser (*v10_self), v2_STokenType v10_t){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	if((v10_tok.p_sType)==v10_t){
		return v10_tok;
	} else {
		m2_print_Token((&v10_tok));
		m10_error_Parser(v10_self, "expected {t}, got {tok.pType}.");
	}
	return v10_tok;
};
void (^m10_assert_Parser)(v10_Parser*, bool, i8*) = ^void (v10_Parser (*v10_self), bool v10_cond, i8 (*v10_msg)){
	if(v10_cond){
		return ;
	} else {
		m10_error_Parser(v10_self, v10_msg);
	}
};
void * (^m10_identVec_Parser)(v10_Parser*) = ^void * (v10_Parser (*v10_self)){
	VECTOR_TYPE(v9_IdentExpr)v10_idents = new4(v9_IdentExpr, (((v9_IdentExpr[]){})), 0);

	VECTOR_PUSH(v10_idents, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
	m10_eat_Parser(v10_self);
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_idents, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
		m10_eat_Parser(v10_self);
	}
	return v10_idents;
};
void * (^m10_typeVec_Parser)(v10_Parser*) = ^void * (v10_Parser (*v10_self)){
	VECTOR_TYPE(v9_Type*)v10_types = new4(v9_Type*, (((v9_Type*[]){})), 0);

	VECTOR_PUSH(v10_types, m10_type_Parser(v10_self));
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_types, m10_type_Parser(v10_self));
	}
	return v10_types;
};
void * (^m10_decTypeVec_Parser)(v10_Parser*) = ^void * (v10_Parser (*v10_self)){
	VECTOR_TYPE(v9_Type*)v10_types = new4(v9_Type*, (((v9_Type*[]){})), 0);

	VECTOR_PUSH(v10_types, m10_decType_Parser(v10_self));
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_types, m10_decType_Parser(v10_self));
	}
	return v10_types;
};
void * (^m10_exprVec_Parser)(v10_Parser*) = ^void * (v10_Parser (*v10_self)){
	VECTOR_TYPE(v9_Expr*)v10_exprs = new4(v9_Expr*, (((v9_Expr*[]){})), 0);

	VECTOR_PUSH(v10_exprs, m10_expr_Parser(v10_self));
	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
(v10_tok.p_sType)==e2_STokenType_COMMA;
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_exprs, m10_expr_Parser(v10_self));
	}
	return v10_exprs;
};
v9_Stmt* (^m10_globalStmt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v9_Stmt (*v10_s) = m10_globalStmtRaw_Parser(v10_self);

	m10_expectPri_Parser(v10_self, e2_PTokenType_SEMICOLON);
	m10_eat_Parser(v10_self);
	return v10_s;
};
v9_Stmt* (^m10_globalStmtRaw_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_pType){
	case e2_PTokenType_IDENT:
		return m10_dec_Parser(v10_self);
	case e2_PTokenType_SEMICOLON:
		return m10_nullStmt_Parser(v10_self);
	default:
		break;
	}
	switch(v10_tok.p_sType){
	case e2_STokenType_IMPORT:
		return m10_imprt_Parser(v10_self);
	case e2_STokenType_STRUCT:
		return m10_structTypedef_Parser(v10_self);
	case e2_STokenType_ENUM:
		return m10_enumTypedef_Parser(v10_self);
	case e2_STokenType_TUPLE:
		return m10_tupleTypedef_Parser(v10_self);
	case e2_STokenType_UNION:
		return m10_unionTypedef_Parser(v10_self);
	case e2_STokenType_TYPEDEF:
		return m10_tdef_Parser(v10_self);
	case e2_STokenType_FUNC:
		return m10_funcDec_Parser(v10_self);
	default:
		return null;
	}
};
v9_Stmt* (^m10_localStmt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v9_Stmt (*v10_s) = m10_localStmtRaw_Parser(v10_self);

	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_SEMICOLON){
		m10_eat_Parser(v10_self);
	} else {
	}
	return v10_s;
};
v9_Stmt* (^m10_localStmtRaw_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_pType){
	case e2_PTokenType_LCBRACE:
		return m10_block_Parser(v10_self);
	case e2_PTokenType_SEMICOLON:
		return m10_nullStmt_Parser(v10_self);
	default:
		break;
	}
	switch(v10_tok.p_sType){
	case e2_STokenType_RETURN:
		return m10_rturn_Parser(v10_self);
	case e2_STokenType_FUNC:
		return m10_funcDec_Parser(v10_self);
	case e2_STokenType_IF:
		return m10_ifElse_Parser(v10_self);
	case e2_STokenType_SWITCH:
		return m10_swtch_Parser(v10_self);
	case e2_STokenType_FOR:
		return m10_loop_Parser(v10_self);
	case e2_STokenType_DELETE:
		return m10_del_Parser(v10_self);
	case e2_STokenType_BREAK:
goto l_brak;
	case e2_STokenType_CONTINUE:
goto l_continuee;
	case e2_STokenType_STRUCT:
		return m10_structTypedef_Parser(v10_self);
	case e2_STokenType_ENUM:
		return m10_enumTypedef_Parser(v10_self);
	case e2_STokenType_TUPLE:
		return m10_tupleTypedef_Parser(v10_self);
	case e2_STokenType_UNION:
		return m10_unionTypedef_Parser(v10_self);
	case e2_STokenType_TYPEDEF:
		return m10_tdef_Parser(v10_self);
	case e2_STokenType_LABEL:
		return m10_labl_Parser(v10_self);
	case e2_STokenType_GOTO:
		return m10_gotoh_Parser(v10_self);
	case e2_STokenType_CASE:
goto l_casee;
	case e2_STokenType_DEFAULT:
goto l_defalt;
	default:
		return m10_decAssignExpr_Parser(v10_self);
	}
l_brak:;
	if(((v10_self->p_context)&(0x80!=1))&&((v10_self->p_context)&(0x40!=1))){
		m10_error_Parser(v10_self, "bruh break not allowed outside loops and switch statements.");
	} else {
	}
	return m10_brak_Parser(v10_self);
l_continuee:;
	if((v10_self->p_context)&(0x40==0)){
		m10_error_Parser(v10_self, "bruh break not allowed outside loops.");
	} else {
	}
	return m10_continuee_Parser(v10_self);
l_casee:;
	if((v10_self->p_context)&(0x80==0)){
		m10_error_Parser(v10_self, "bruh case not allowed outside switch statements");
	} else {
	}
	return m10_casee_Parser(v10_self);
l_defalt:;
	if((v10_self->p_context)&(0x80==0)){
		m10_error_Parser(v10_self, "bruh default not allowed outside switch statements");
	} else {
	}
	return m10_defalt_Parser(v10_self);
};
v9_Stmt* (^m10_basicStmt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_pType){
	case e2_PTokenType_IDENT:
		return m10_decAssignExpr_Parser(v10_self);
	case e2_PTokenType_SEMICOLON:
		return m10_nullStmt_Parser(v10_self);
	default:
		break;
	}
	switch(v10_tok.p_sType){
	case e2_STokenType_LABEL:
		return m10_labl_Parser(v10_self);
	case e2_STokenType_CASE:
goto l_casee;
	case e2_STokenType_DEFAULT:
goto l_defalt;
	default:
		return m10_exprStmt_Parser(v10_self);
	}
l_casee:;
	if((v10_self->p_context)&(0x80==0)){
		m10_error_Parser(v10_self, "bruh case not allowed outside switch statements");
	} else {
	}
	return m10_casee_Parser(v10_self);
l_defalt:;
	if((v10_self->p_context)&(0x80==0)){
		m10_error_Parser(v10_self, "bruh default not allowed outside switch statements");
	} else {
	}
	return m10_defalt_Parser(v10_self);
};
v9_Stmt* (^m10_nullStmt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_NULL;});
	return v10_stmt;
};
v9_Stmt* (^m10_brak_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_BREAK;});
	return v10_stmt;
};
v9_Stmt* (^m10_continuee_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_CONTINUE;});
	return v10_stmt;
};
v9_Stmt* (^m10_defalt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_DEFAULT;});
	return v10_stmt;
};
v9_Stmt* (^m10_exprStmt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_expr_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_EXPR;});
	({v10_stmt->p_data.p_expr = ((v9_ExprStmt){.p_expr = v10_expr, });});
	return v10_stmt;
};
v9_Stmt* (^m10_rturn_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Return v10_rturn = m10_rturnRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_RETURN;});
	({v10_stmt->p_data.p_rturn = v10_rturn;});
	return v10_stmt;
};
v9_Return (^m10_rturnRaw_Parser)(v10_Parser*) = ^v9_Return (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	return ((v9_Return){.p_val = m10_expr_Parser(v10_self), });
};
v9_Stmt* (^m10_casee_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Case v10_casee = m10_caseeRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_CASE;});
	({v10_stmt->p_data.p_casee = v10_casee;});
	return v10_stmt;
};
v9_Case (^m10_caseeRaw_Parser)(v10_Parser*) = ^v9_Case (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_Case v10_c = ((v9_Case){.p_val = m10_expr_Parser(v10_self), });

	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	return v10_c;
};
v9_Stmt* (^m10_block_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Block v10_block = m10_blockRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_BLOCK;});
	({v10_stmt->p_data.p_block = v10_block;});
	return v10_stmt;
};
v9_Block (^m10_blockRaw_Parser)(v10_Parser*) = ^v9_Block (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_Block v10_block = ((v9_Block){.p_stmts = new4(v9_Stmt, (((v9_Stmt[]){})), 0), });

	for(;(m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RCBRACE;){
		VECTOR_PUSH(v10_block.p_stmts, m10_localStmt_Parser(v10_self));
	}
	m10_eat_Parser(v10_self);
	return v10_block;
};
v9_Stmt* (^m10_imprt_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Import v10_imprt = m10_imprtRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_IMPORT;});
	({v10_stmt->p_data.p_imprt = v10_imprt;});
	return v10_stmt;
};
v9_Import (^m10_imprtRaw_Parser)(v10_Parser*) = ^v9_Import (v10_Parser (*v10_self)){
	v9_Import v10_imprt = ((v9_Import){});

	m10_eat_Parser(v10_self);
	({v10_imprt.p_path = new2(v9_BasicLit,v9_BasicLit,(((v9_BasicLit){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_STR_LIT), })));});
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_pType)==e2_STokenType_AS){
		m10_eat_Parser(v10_self);
		({v10_imprt.p_name = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));});
		m10_eat_Parser(v10_self);
	} else {
	}
	return v10_imprt;
};
v9_Stmt* (^m10_decAssignExpr_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	VECTOR_TYPE(v9_Expr*)v10_exprs = m10_exprVec_Parser(v10_self);

	{
		v2_Token v10_tok = m10_peek_Parser(v10_self);

		if((v10_tok.p_sType)==e2_STokenType_COLON){
			return m10_decBody_Parser(v10_self, (&v10_state), v10_exprs);
		} else if((v10_tok.p_pType)==e2_PTokenType_ASSIGN_OP){
			return m10_assignBody_Parser(v10_self, (&v10_state), v10_exprs);
		} else if((v10_exprs->length)==1){
			v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

			({v10_stmt->p_type = e9_StmtType_EXPR;});
			({v10_stmt->p_data.p_expr = ((v9_ExprStmt){.p_expr = (v10_exprs->mem)[0], });});
			VECTOR_FREE(v10_exprs);
			return v10_stmt;
		} else {
		}
	}
	m10_error_Parser(v10_self, "expected assignment operator, got {s}.");
	return null;
};
v9_Stmt* (^m10_dec_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	VECTOR_TYPE(v9_Expr*)v10_idents = m10_exprVec_Parser(v10_self);

	return m10_decBody_Parser(v10_self, (&v10_state), v10_idents);
};
v9_Stmt* (^m10_decBody_Parser)(v10_Parser*, v10_ParserState*, void*) = ^v9_Stmt* (v10_Parser (*v10_self), v10_ParserState (*v10_statePtr), void (*v10_e)){
	VECTOR_TYPE(v9_Expr*)v10_exprs = ((void *)(v10_e));

	for(
	i32 v10_i = 0;
v10_i<(v10_exprs->length);
	(++v10_i)){
		m10_assert_Parser(v10_self, ((v10_exprs->mem)[v10_i]->p_type)==e9_ExprType_IDENT, "bruh gib identifiers.");
	}
	m10_eat_Parser(v10_self);
	v9_Declaration v10_dec = ((v9_Declaration){.p_idents = v10_exprs, });

	if((m10_peek_Parser(v10_self).p_sType)!=e2_STokenType_EQ){
		({v10_dec.p_types = m10_decTypeVec_Parser(v10_self);});
	} else {
goto l_eq;
		({v10_dec.p_types = null;});
	}
	if((m10_peek_Parser(v10_self).p_sType)==e2_STokenType_EQ){
l_eq:;
		m10_eat_Parser(v10_self);
		({v10_dec.p_values = m10_exprVec_Parser(v10_self);});
	} else {
		({v10_dec.p_values = null;});
	}
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, v10_statePtr);

	({v10_stmt->p_type = e9_StmtType_DEC;});
	({v10_stmt->p_data.p_dec = v10_dec;});
	return v10_stmt;
};
v9_Stmt* (^m10_decNoVal_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Declaration v10_dec = m10_decNoValRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_DEC;});
	({v10_stmt->p_data.p_dec = v10_dec;});
	return v10_stmt;
};
v9_Declaration (^m10_decNoValRaw_Parser)(v10_Parser*) = ^v9_Declaration (v10_Parser (*v10_self)){
	v9_Declaration v10_dec = ((v9_Declaration){.p_idents = m10_exprVec_Parser(v10_self), });

	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	({v10_dec.p_types = m10_decTypeVec_Parser(v10_self);});
	({v10_dec.p_values = null;});
	return v10_dec;
};
v9_Stmt* (^m10_assignBody_Parser)(v10_Parser*, v10_ParserState*, void*) = ^v9_Stmt* (v10_Parser (*v10_self), v10_ParserState (*v10_statePtr), void (*v10_e)){
	VECTOR_TYPE(v9_Expr*)v10_exprs = ((void *)(v10_e));

	v9_Assignment v10_assign = ((v9_Assignment){});

	for(
	i32 v10_i = 0;
v10_i<(v10_exprs->length);
	(++v10_i)){
		v9_Expr (*v10_expr) = (v10_exprs->mem)[v10_i];

		m10_assert_Parser(v10_self, ((((v10_expr->p_type)==e9_ExprType_IDENT)||((v10_expr->p_type)==e9_ExprType_MEMBER))||((v10_expr->p_type)==e9_ExprType_ELEMENT))||(((v10_expr->p_type)==e9_ExprType_UNARY)&&((((v9_Operator*)(v10_expr->p_data.p_unary.p_op))->p_tok.p_sType)==e2_STokenType_MUL)), "bruh gib identifiers.");
	}
	({v10_assign.p_vars = v10_exprs;});
	({v10_assign.p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = m10_peek_Parser(v10_self), })));});
	m10_eat_Parser(v10_self);
	({v10_assign.p_vals = m10_exprVec_Parser(v10_self);});
	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, v10_statePtr);

	({v10_stmt->p_type = e9_StmtType_ASSIGN;});
	({v10_stmt->p_data.p_assign = v10_assign;});
	return v10_stmt;
};
v9_Stmt* (^m10_funcDec_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_FuncDec v10_dec = m10_funcDecRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_FUNC;});
	({v10_stmt->p_data.p_funcDec = v10_dec;});
	return v10_stmt;
};
v9_FuncDec (^m10_funcDecRaw_Parser)(v10_Parser*) = ^v9_FuncDec (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_FuncDec v10_dec = ((v9_FuncDec){});

	({v10_dec.p_type.p_args.p_names = new4(v9_IdentExpr, (((v9_IdentExpr[]){})), 0);});
	({v10_dec.p_type.p_args.p_types = new4(v9_Type*, (((v9_Type*[]){})), 0);});
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	if((v10_tok.p_pType)==e2_PTokenType_IDENT){
		({v10_dec.p_type.p_type = e9_FuncTypeEnum_ORD;});
		({v10_dec.p_name = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = v10_tok, })));});
goto l_funcBody;
	} else {
	}
	switch(v10_tok.p_sType){
	case e2_STokenType_WORK:
		({v10_dec.p_type.p_type = e9_FuncTypeEnum_WORK;});
		m10_eat_Parser(v10_self);
		break;
	case e2_STokenType_ASYNC:
		({v10_dec.p_type.p_type = e9_FuncTypeEnum_ASYNC;});
		m10_eat_Parser(v10_self);
		break;
	case e2_STokenType_NATIVE:
		({v10_dec.p_type.p_type = e9_FuncTypeEnum_NATIVE;});
		m10_eat_Parser(v10_self);
		break;
	default:
		({v10_dec.p_type.p_type = e9_FuncTypeEnum_ORD;});
		break;
	}
	({v10_dec.p_name = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));});
l_funcBody:;
	m10_eat_Parser(v10_self);
	m10_expectPri_Parser(v10_self, e2_PTokenType_LPAREN);
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_RPAREN){
goto l_next;
	} else {
	}
goto l_body;
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
l_body:;
		VECTOR_PUSH(v10_dec.p_type.p_args.p_names, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
		m10_eat_Parser(v10_self);
		m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_dec.p_type.p_args.p_types, m10_type_Parser(v10_self));
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
l_next:;
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_LCBRACE){
		({v10_dec.p_type.p_returnType = null;});
	} else {
		({v10_dec.p_type.p_returnType = m10_type_Parser(v10_self);});
		m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	}
	({v10_dec.p_body = m10_blockRaw_Parser(v10_self);});
	return v10_dec;
};
v9_Stmt* (^m10_labl_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Label v10_labl = m10_lablRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_LABEL;});
	({v10_stmt->p_data.p_labl = v10_labl;});
	return v10_stmt;
};
v9_Label (^m10_lablRaw_Parser)(v10_Parser*) = ^v9_Label (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	return ((v9_Label){.p_name = v10_name, });
};
v9_Stmt* (^m10_gotoh_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Goto v10_gotoh = m10_gotohRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_GOTO;});
	({v10_stmt->p_data.p_gotoh = v10_gotoh;});
	return v10_stmt;
};
v9_Goto (^m10_gotohRaw_Parser)(v10_Parser*) = ^v9_Goto (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	return ((v9_Goto){.p_name = v10_name, });
};
v9_Stmt* (^m10_ifElse_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_IfElse v10_ifElse = m10_ifElseRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_IF_ELSE;});
	({v10_stmt->p_data.p_ifElse = v10_ifElse;});
	return v10_stmt;
};
v9_IfElse (^m10_ifElseRaw_Parser)(v10_Parser*) = ^v9_IfElse (v10_Parser (*v10_self)){
	v9_IfElse v10_ifElse = ((v9_IfElse){.p_conds = new4(v9_Expr*, (((v9_Expr*[]){})), 0), .p_initStmts = new4(v9_Stmt*, (((v9_Stmt*[]){})), 0), .p_blocks = new4(v9_Block, (((v9_Block[]){})), 0), });

l_body:;
	m10_eat_Parser(v10_self);
	v9_Stmt (*v10_stmt) = m10_basicStmt_Parser(v10_self);

	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_LCBRACE){
		VECTOR_PUSH(v10_ifElse.p_initStmts, null);
		m10_assert_Parser(v10_self, (v10_stmt->p_type)==e9_StmtType_EXPR, "bruh gib expression not statement");
		VECTOR_PUSH(v10_ifElse.p_conds, v10_stmt->p_data.p_expr.p_expr);
		delete(v10_stmt);

	} else if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_SEMICOLON){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_ifElse.p_initStmts, v10_stmt);
		VECTOR_PUSH(v10_ifElse.p_conds, m10_expr_Parser(v10_self));
		m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	} else {
	}
	VECTOR_PUSH(v10_ifElse.p_blocks, m10_blockRaw_Parser(v10_self));
	if((m10_peek_Parser(v10_self).p_sType)!=e2_STokenType_ELSE){
		({v10_ifElse.p_elseBlock = ((v9_Block){.p_stmts = null, });});
		return v10_ifElse;
	} else {
	}
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_sType)==e2_STokenType_IF){
goto l_body;
	} else {
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	({v10_ifElse.p_elseBlock = m10_blockRaw_Parser(v10_self);});
	return v10_ifElse;
};
v9_Stmt* (^m10_swtch_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Switch v10_swtch = m10_swtchRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_SWITCH;});
	({v10_stmt->p_data.p_swtch = v10_swtch;});
	return v10_stmt;
};
v9_Switch (^m10_swtchRaw_Parser)(v10_Parser*) = ^v9_Switch (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_Switch v10_swtch = ((v9_Switch){});

	{
		v9_Stmt (*v10_stmt) = m10_basicStmt_Parser(v10_self);

		if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_LCBRACE){
			m10_assert_Parser(v10_self, (v10_stmt->p_type)==e9_StmtType_EXPR, "bruh gib expression, not type");
			({v10_swtch.p_initStmt = null;});
			({v10_swtch.p_expr = v10_stmt->p_data.p_expr.p_expr;});
			delete(v10_stmt);

		} else {
			({v10_swtch.p_initStmt = v10_stmt;});
			m10_expectPri_Parser(v10_self, e2_PTokenType_SEMICOLON);
			m10_eat_Parser(v10_self);
			({v10_swtch.p_expr = m10_expr_Parser(v10_self);});
			m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
		}
	}
	({v10_self->p_context = (v10_self->p_context)|0x80;});
	({v10_swtch.p_block = m10_blockRaw_Parser(v10_self);});
	({v10_self->p_context = (v10_self->p_context)&((~0x80));});
	return v10_swtch;
};
v9_Stmt* (^m10_loop_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Loop v10_loop = m10_loopRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_LOOP;});
	({v10_stmt->p_data.p_loop = v10_loop;});
	return v10_stmt;
};
v9_Loop (^m10_loopRaw_Parser)(v10_Parser*) = ^v9_Loop (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_Loop v10_loop = ((v9_Loop){});

	{
		v2_PTokenType v10_p = m10_peek_Parser(v10_self).p_pType;

		if(v10_p==e2_PTokenType_LCBRACE){
			({v10_loop.p_initStmt = null;});
			({v10_loop.p_cond = null;});
			({v10_loop.p_loopStmt = null;});
goto l_end;
		} else if(v10_p==e2_PTokenType_SEMICOLON){
			({v10_loop.p_initStmt = null;});
goto l_cond;
		} else {
		}
	}
	v9_Stmt (*v10_stmt) = m10_basicStmt_Parser(v10_self);

	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_SEMICOLON){
		({v10_loop.p_initStmt = v10_stmt;});
	} else if((v10_stmt->p_type)==e9_StmtType_EXPR){
		({v10_loop.p_initStmt = null;});
		({v10_loop.p_cond = v10_stmt->p_data.p_expr.p_expr;});
		delete(v10_stmt);

goto l_afterCond;
	} else {
		m10_error_Parser(v10_self, "buh gib expression");
	}
l_cond:;
	m10_eat_Parser(v10_self);
	{
		v2_PTokenType v10_p = m10_peek_Parser(v10_self).p_pType;

		if(v10_p==e2_PTokenType_LCBRACE){
			({v10_loop.p_cond = null;});
			({v10_loop.p_loopStmt = null;});
goto l_end;
		} else if(v10_p!=e2_PTokenType_SEMICOLON){
			({v10_loop.p_cond = m10_expr_Parser(v10_self);});
		} else {
			({v10_loop.p_cond = null;});
goto l_final;
		}
	}
l_afterCond:;
	{
		v2_PTokenType v10_p = m10_peek_Parser(v10_self).p_pType;

		if(v10_p==e2_PTokenType_LCBRACE){
			({v10_loop.p_loopStmt = null;});
goto l_end;
		} else if(v10_p!=e2_PTokenType_SEMICOLON){
			m10_error_Parser(v10_self, "buh gib semicolon");
		} else {
		}
	}
l_final:;
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_LCBRACE){
		({v10_loop.p_loopStmt = null;});
	} else {
		({v10_loop.p_loopStmt = m10_basicStmt_Parser(v10_self);});
	}
l_end:;
	({v10_self->p_context = (v10_self->p_context)|0x40;});
	({v10_loop.p_block = m10_blockRaw_Parser(v10_self);});
	({v10_self->p_context = (v10_self->p_context)&((~0x40));});
	return v10_loop;
};
v9_Stmt* (^m10_del_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Delete v10_del = m10_delRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_DELETE;});
	({v10_stmt->p_data.p_del = v10_del;});
	return v10_stmt;
};
v9_Delete (^m10_delRaw_Parser)(v10_Parser*) = ^v9_Delete (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	return ((v9_Delete){.p_exprs = m10_exprVec_Parser(v10_self), });
};
v9_Stmt* (^m10_tdef_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Typedef v10_tdef = m10_tdefRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_TYPEDEF;});
	({v10_stmt->p_data.p_tdef = v10_tdef;});
	return v10_stmt;
};
v9_Typedef (^m10_tdefRaw_Parser)(v10_Parser*) = ^v9_Typedef (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_Typedef v10_tdef = ((v9_Typedef){});

	({v10_tdef.p_name = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));});
	m10_eat_Parser(v10_self);
	({v10_tdef.p_type = m10_type_Parser(v10_self);});
	return v10_tdef;
};
v9_Expr* (^m10_expr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	return m10_expr0_Parser(v10_self);
};
v9_Expr* (^m10_expr0_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_cond) = m10_expr1_Parser(v10_self);

	{
		v2_Token v10_tok = m10_peek_Parser(v10_self);

		if((v10_tok.p_sType)!=e2_STokenType_QMARK){
			return v10_cond;
		} else {
		}
	}
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_left) = m10_expr0_Parser(v10_self);

	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_right) = m10_expr1_Parser(v10_self);

	v9_TernaryExpr v10_ternary = ((v9_TernaryExpr){.p_left = v10_left, .p_cond = v10_cond, .p_right = v10_right, });

	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_TERNARY;});
	({v10_expr->p_data.p_ternary = v10_ternary;});
	return v10_expr;
};
v9_Expr* (^m10_expr1_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr2_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
(v10_tok.p_pType)==e2_PTokenType_LOGIC_OP;
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr2_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr2_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr3_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
(((v10_tok.p_sType)==e2_STokenType_OR)||((v10_tok.p_sType)==e2_STokenType_AND))||((v10_tok.p_sType)==e2_STokenType_XOR);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr3_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr3_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr4_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
((v10_tok.p_sType)==e2_STokenType_EQEQ)||((v10_tok.p_sType)==e2_STokenType_NOTEQ);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr4_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr4_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr5_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
((((v10_tok.p_sType)==e2_STokenType_GTEQ)||((v10_tok.p_sType)==e2_STokenType_LTEQ))||((v10_tok.p_sType)==e2_STokenType_GT))||((v10_tok.p_sType)==e2_STokenType_LT);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr5_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr5_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr6_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
((v10_tok.p_sType)==e2_STokenType_LSHIFT)||((v10_tok.p_sType)==e2_STokenType_RSHIFT);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr6_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr6_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr7_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
((v10_tok.p_sType)==e2_STokenType_ADD)||((v10_tok.p_sType)==e2_STokenType_SUB);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr7_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr7_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_left) = m10_expr8_Parser(v10_self);

	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
(((v10_tok.p_sType)==e2_STokenType_DIV)||((v10_tok.p_sType)==e2_STokenType_MUL))||((v10_tok.p_sType)==e2_STokenType_MOD);
	({v10_tok = m10_peek_Parser(v10_self);})){
		m10_eat_Parser(v10_self);
		v9_Expr (*v10_right) = m10_expr8_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_BINARY;});
		({v10_expr->p_data.p_binary = ((v9_BinaryExpr){.p_left = v10_left, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), .p_right = v10_right, });});
		({v10_left = v10_expr;});
	}
	return v10_left;
};
v9_Expr* (^m10_expr8_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	if(((((((((v10_tok.p_sType)==e2_STokenType_MUL)||((v10_tok.p_sType)==e2_STokenType_AND))||((v10_tok.p_sType)==e2_STokenType_ADD))||((v10_tok.p_sType)==e2_STokenType_SUB))||((v10_tok.p_sType)==e2_STokenType_LNOT))||((v10_tok.p_sType)==e2_STokenType_BNOT))||((v10_tok.p_sType)==e2_STokenType_ADDADD))||((v10_tok.p_sType)==e2_STokenType_SUBSUB)){
		v10_ParserState v10_state = m10_state_Parser(v10_self);

		m10_eat_Parser(v10_self);
		v9_Expr (*v10_e) = m10_expr8_Parser(v10_self);

		v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

		({v10_expr->p_type = e9_ExprType_UNARY;});
		({v10_expr->p_data.p_unary = ((v9_UnaryExpr){.p_expr = v10_e, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), });});
		return v10_expr;
	} else if((v10_tok.p_sType)==e2_STokenType_CAST){
		return m10_castExpr_Parser(v10_self);
	} else if((v10_tok.p_sType)==e2_STokenType_AWAIT){
		return m10_awaitExpr_Parser(v10_self);
	} else if((v10_tok.p_sType)==e2_STokenType_SIZEOF){
		return m10_sizeExpr_Parser(v10_self);
	} else if((v10_tok.p_sType)==e2_STokenType_NEW){
		return m10_newExpr_Parser(v10_self);
	} else {
	}
	return m10_expr9_Parser(v10_self);
};
v9_Expr* (^m10_expr9_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_e) = m10_expr10_Parser(v10_self);

l_loop:;
	{
		v2_Token v10_tok = m10_peek_Parser(v10_self);

		if((v10_tok.p_pType)==e2_PTokenType_LPAREN){
			({v10_e = m10_callExpr_Parser(v10_self, v10_e, (&v10_state));});
		} else if((v10_tok.p_sType)==e2_STokenType_DOT){
			m10_eat_Parser(v10_self);
			v9_IdentExpr (*v10_prop) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

			m10_eat_Parser(v10_self);
			v9_Expr (*v10_x) = m10_exprNode_Parser(v10_self, (&v10_state));

			({v10_x->p_type = e9_ExprType_MEMBER;});
			({v10_x->p_data.p_member = ((v9_MemberExpr){.p_base = v10_e, .p_prop = v10_prop, });});
			({v10_e = v10_x;});
		} else if((v10_tok.p_pType)==e2_PTokenType_LBRACE){
			m10_eat_Parser(v10_self);
			v9_Expr (*v10_index) = m10_expr_Parser(v10_self);

			m10_expectPri_Parser(v10_self, e2_PTokenType_RBRACE);
			m10_eat_Parser(v10_self);
			v9_Expr (*v10_x) = m10_exprNode_Parser(v10_self, (&v10_state));

			({v10_x->p_type = e9_ExprType_ELEMENT;});
			({v10_x->p_data.p_element = ((v9_ElementExpr){.p_base = v10_e, .p_index = v10_index, });});
			({v10_e = v10_x;});
		} else if(((v10_tok.p_sType)==e2_STokenType_ADDADD)||((v10_tok.p_sType)==e2_STokenType_SUBSUB)){
			m10_eat_Parser(v10_self);
			v9_Expr (*v10_x) = m10_exprNode_Parser(v10_self, (&v10_state));

			({v10_x->p_type = e9_ExprType_PUNARY;});
			({v10_x->p_data.p_unary = ((v9_UnaryExpr){.p_expr = v10_e, .p_op = new2(v9_Operator,v9_Operator,(((v9_Operator){.p_tok = v10_tok, }))), });});
			({v10_e = v10_x;});
		} else {
			return v10_e;
		}
	}
goto l_loop;
};
v9_Expr* (^m10_expr10_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Type (*v10_e);

	switch(m10_peek_Parser(v10_self).p_pType){
	case e2_PTokenType_LPAREN:
		({v10_e = m10_type_Parser(v10_self);});
		break;
	case e2_PTokenType_LCBRACE:
		return m10_arrayInitializer_Parser(v10_self);
	default:
		return m10_expr11_Parser(v10_self);
	}
	if((m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_LCBRACE){
		m10_clean_Parser(v10_self);
		m10_assert_Parser(v10_self, (v10_e->p_type)==e9_TypeType_BASIC, "gib expression, not type.");
		v9_Expr (*v10_expr) = ((v9_Expr*)(v10_e->p_data.p_basic.p_expr));

		delete(v10_e);

		return v10_expr;
	} else {
	}
	v9_CompLit v10_c = ((v9_CompLit){.p_type = v10_e, });

	m10_compLitData_Parser(v10_self, (&v10_c));
	v9_Expr (*v10_ee) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_ee->p_type = e9_ExprType_COMPLIT;});
	({v10_ee->p_data.p_compLit = v10_c;});
	return v10_ee;
};
v9_Expr* (^m10_expr11_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v2_Token v10_tok = m10_peek_Parser(v10_self);

	v9_Expr (*v10_expr);

	switch(v10_tok.p_pType){
	case e2_PTokenType_IDENT:
		m10_eat_Parser(v10_self);
		({v10_expr = m10_exprNode_Parser(v10_self, (&v10_state));});
		({v10_expr->p_type = e9_ExprType_IDENT;});
goto l_end;
	case e2_PTokenType_STR_LIT:
		m10_eat_Parser(v10_self);
		({v10_expr = m10_exprNode_Parser(v10_self, (&v10_state));});
		({v10_expr->p_type = e9_ExprType_STR_LIT;});
goto l_end;
	case e2_PTokenType_CHAR_LIT:
		m10_eat_Parser(v10_self);
		({v10_expr = m10_exprNode_Parser(v10_self, (&v10_state));});
		({v10_expr->p_type = e9_ExprType_CHR_LIT;});
goto l_end;
	case e2_PTokenType_NUM_LIT:
		m10_eat_Parser(v10_self);
		({v10_expr = m10_exprNode_Parser(v10_self, (&v10_state));});
		({v10_expr->p_type = e9_ExprType_NUM_LIT;});
goto l_end;
	default:
		break;
	}
	switch(v10_tok.p_sType){
	case e2_STokenType_FUNC:
		return m10_funcExpr_Parser(v10_self);
	default:
		break;
	}
	m2_print_Token((&v10_tok));
	m10_error_Parser(v10_self, "expected expr, got {tok}");
	return null;
l_end:;
	({v10_expr->p_buff = v10_tok.p_buff;});
	({v10_expr->p_len = v10_tok.p_len;});
	return v10_expr;
};
v9_Expr* (^m10_exprOrType_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	return m10_expr_Parser(v10_self);
};
v9_Expr* (^m10_callExpr_Parser)(v10_Parser*, v9_Expr*, v10_ParserState*) = ^v9_Expr* (v10_Parser (*v10_self), v9_Expr (*v10_function), v10_ParserState (*v10_statePtr)){
	m10_eat_Parser(v10_self);
	v9_CallExpr v10_c = ((v9_CallExpr){.p_function = v10_function, });

	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_RPAREN){
		({v10_c.p_args = null;});
	} else {
		({v10_c.p_args = m10_exprVec_Parser(v10_self);});
		m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
	}
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_e) = m10_exprNode_Parser(v10_self, v10_statePtr);

	({v10_e->p_type = e9_ExprType_CALL;});
	({v10_e->p_data.p_callExpr = v10_c;});
	return v10_e;
};
v9_Expr* (^m10_newExpr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_NewExpr v10_newExpr = m10_newExprRaw_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_NEW;});
	({v10_expr->p_data.p_newExpr = v10_newExpr;});
	return v10_expr;
};
v9_NewExpr (^m10_newExprRaw_Parser)(v10_Parser*) = ^v9_NewExpr (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_NewExpr v10_newExpr = ((v9_NewExpr){});

	if((m10_peek_Parser(v10_self).p_pType)==e2_PTokenType_LPAREN){
		({v10_newExpr.p_type = null;});
		({v10_newExpr.p_val = m10_expr_Parser(v10_self);});
		return v10_newExpr;
	} else {
	}
	({v10_newExpr.p_type = m10_type_Parser(v10_self);});
	{
		v2_Token v10_tok = m10_peek_Parser(v10_self);

		if((v10_tok.p_pType)==e2_PTokenType_LPAREN){
			({v10_newExpr.p_val = m10_expr_Parser(v10_self);});
		} else {
		}
	}
	return v10_newExpr;
};
v9_Expr* (^m10_awaitExpr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_Expr (*v10_e) = m10_expr_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_AWAIT;});
	({v10_expr->p_data.p_awaitExpr = ((v9_AwaitExpr){.p_expr = v10_e, });});
	return v10_expr;
};
v9_Expr* (^m10_sizeExpr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	m10_expectPri_Parser(v10_self, e2_PTokenType_LPAREN);
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_e) = m10_expr_Parser(v10_self);

	m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_SIZEOF;});
	({v10_expr->p_data.p_sizeExpr = ((v9_SizeExpr){.p_expr = v10_e, });});
	return v10_expr;
};
v9_Expr* (^m10_castExpr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	m10_expectPri_Parser(v10_self, e2_PTokenType_LPAREN);
	m10_eat_Parser(v10_self);
	v9_Type (*v10_type) = m10_type_Parser(v10_self);

	m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_e) = m10_expr8_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_UNARY;});
	({v10_expr->p_data.p_castExpr = ((v9_CastExpr){.p_expr = v10_e, .p_type = v10_type, });});
	return v10_expr;
};
v9_Expr* (^m10_arrayInitializer_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	VECTOR_TYPE(v9_Expr*)v10_elements = m10_exprVec_Parser(v10_self);

	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	m10_eat_Parser(v10_self);
	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_ARRLIT;});
	({v10_expr->p_data.p_arrayLit = ((v9_ArrayLit){.p_elements = ((void*)(v10_elements)), });});
	return v10_expr;
};
void (^m10_compLitData_Parser)(v10_Parser*, v9_CompLit*) = ^void (v10_Parser (*v10_self), v9_CompLit (*v10_lit)){
	m10_eat_Parser(v10_self);
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	if((v10_tok.p_pType)==e2_PTokenType_RCBRACE){
		({v10_lit->p_fields = null;});
		({v10_lit->p_values = null;});
		m10_eat_Parser(v10_self);
		return ;
	} else {
	}
	v9_Expr (*v10_e) = m10_expr_Parser(v10_self);

	{
		v2_Token v10_t = m10_peek_Parser(v10_self);

		if(((v10_e->p_type)!=e9_ExprType_IDENT)||((v10_t.p_sType)!=e2_STokenType_COLON)){
			({v10_lit->p_fields = null;});
			({v10_lit->p_values = new4(v9_Expr*, (((v9_Expr*[]){})), 0);});
			VECTOR_PUSH(v10_lit->p_values, v10_e);
			if((v10_t.p_pType)==e2_PTokenType_RCBRACE){
				m10_eat_Parser(v10_self);
				return ;
			} else {
			}
			VECTOR_TYPE(v9_Expr*)v10_exprs = m10_exprVec_Parser(v10_self);

			VECTOR_CONCAT(v10_lit->p_values, v10_exprs);
			VECTOR_FREE(v10_exprs);
goto l_end;
		} else {
		}
	}
	delete(v10_e);

	({v10_lit->p_fields = new4(v9_IdentExpr, (((v9_IdentExpr[]){})), 0);});
	({v10_lit->p_values = new4(v9_Expr*, (((v9_Expr*[]){})), 0);});
	VECTOR_PUSH(v10_lit->p_fields, ((v9_IdentExpr){.p_tok = v10_tok, }));
	m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
	m10_eat_Parser(v10_self);
	VECTOR_PUSH(v10_lit->p_values, m10_expr_Parser(v10_self));
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_lit->p_fields, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
		m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_lit->p_values, m10_expr_Parser(v10_self));
	}
l_end:;
	m10_expectPri_Parser(v10_self, e2_PTokenType_RCBRACE);
	m10_eat_Parser(v10_self);
};
v9_Expr* (^m10_funcExpr_Parser)(v10_Parser*) = ^v9_Expr* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_FuncExpr v10_function = m10_funcExprRaw_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_exprNode_Parser(v10_self, (&v10_state));

	({v10_expr->p_type = e9_ExprType_FUNC;});
	({v10_expr->p_data.p_funcExpr = v10_function;});
	return v10_expr;
};
v9_FuncExpr (^m10_funcExprRaw_Parser)(v10_Parser*) = ^v9_FuncExpr (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_FuncExpr v10_function = ((v9_FuncExpr){});

	({v10_function.p_type = new(v9_FuncType,v9_FuncType);});
	({v10_function.p_type->p_args.p_names = new4(v9_IdentExpr, (((v9_IdentExpr[]){})), 0);});
	({v10_function.p_type->p_args.p_types = new4(v9_Type*, (((v9_Type*[]){})), 0);});
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_sType){
	case e2_STokenType_WORK:
		({v10_function.p_type->p_type = e9_FuncTypeEnum_WORK;});
		m10_eat_Parser(v10_self);
		break;
	case e2_STokenType_ASYNC:
		({v10_function.p_type->p_type = e9_FuncTypeEnum_ASYNC;});
		m10_eat_Parser(v10_self);
		break;
	default:
		({v10_function.p_type->p_type = e9_FuncTypeEnum_ORD;});
		break;
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_LPAREN);
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RPAREN){
goto l_body;
	} else {
goto l_next;
	}
	for(;(m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA;){
		m10_eat_Parser(v10_self);
l_body:;
		VECTOR_PUSH(v10_function.p_type->p_args.p_names, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
		m10_expectSec_Parser(v10_self, e2_STokenType_COLON);
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_function.p_type->p_args.p_types, m10_type_Parser(v10_self));
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
l_next:;
	m10_eat_Parser(v10_self);
	({v10_function.p_type->p_returnType = m10_type_Parser(v10_self);});
	({v10_function.p_body = m10_blockRaw_Parser(v10_self);});
	return v10_function;
};
v9_Type* (^m10_decType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	switch(m10_peek_Parser(v10_self).p_sType){
	case e2_STokenType_STATIC:
		m10_eat_Parser(v10_self);
		v9_StaticType v10_statc = ((v9_StaticType){.p_base = m10_type_Parser(v10_self), });

		v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

		({v10_type->p_type = e9_TypeType_STATIC;});
		({v10_type->p_data.p_statc = v10_statc;});
		return v10_type;
	}
	return m10_type_Parser(v10_self);
};
v9_Type* (^m10_type_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	if((m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_LBRACE){
		return m10_type1_Parser(v10_self);
	} else {
	}
	m10_eat_Parser(v10_self);
	v9_Type (*v10_type);

	if((m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RBRACE){
		v9_BasicLit (*v10_size) = new2(v9_BasicLit,v9_BasicLit,(((v9_BasicLit){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_NUM_LIT), })));

		m10_eat_Parser(v10_self);
		m10_expectPri_Parser(v10_self, e2_PTokenType_RBRACE);
		m10_eat_Parser(v10_self);
		v9_Type (*v10_base) = m10_type_Parser(v10_self);

		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_ARRAY;});
		({v10_type->p_data.p_array = ((v9_ArrayType){.p_base = v10_base, .p_size = v10_size, });});
	} else {
		m10_eat_Parser(v10_self);
		v9_Type (*v10_base) = m10_type_Parser(v10_self);

		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_IMPARRAY;});
		({v10_type->p_data.p_impArray = ((v9_ImpArrayType){.p_base = v10_base, });});
	}
	return v10_type;
};
v9_Type* (^m10_type1_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	if((m10_peek_Parser(v10_self).p_sType)!=e2_STokenType_MUL){
		return m10_type2_Parser(v10_self);
	} else {
	}
	m10_eat_Parser(v10_self);
	v9_Type (*v10_base) = m10_type_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_POINTER;});
	({v10_type->p_data.p_pointer = ((v9_PointerType){.p_base = v10_base, });});
	return v10_type;
};
v9_Type* (^m10_type2_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v9_Type (*v10_type);

	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Type (*v10_t);

	switch(m10_peek_Parser(v10_self).p_sType){
	case e2_STokenType_VEC:
		m10_eat_Parser(v10_self);
		({v10_t = m10_type_Parser(v10_self);});
		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_VECTOR;});
		({v10_type->p_data.p_vector = ((v9_VectorType){.p_base = v10_t, });});
		break;
	case e2_STokenType_CONST:
		m10_eat_Parser(v10_self);
		({v10_t = m10_type_Parser(v10_self);});
		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_CONST;});
		({v10_type->p_data.p_cnst = ((v9_ConstType){.p_base = v10_t, });});
		break;
	case e2_STokenType_CAPTURE:
		m10_eat_Parser(v10_self);
		({v10_t = m10_type_Parser(v10_self);});
		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_CAPTURE;});
		({v10_type->p_data.p_cpture = ((v9_CaptureType){.p_base = v10_t, });});
		break;
	case e2_STokenType_PROMISE:
		m10_eat_Parser(v10_self);
		({v10_t = m10_type_Parser(v10_self);});
		({v10_type = m10_typeNode_Parser(v10_self, (&v10_state));});
		({v10_type->p_type = e9_TypeType_PROMISE;});
		({v10_type->p_data.p_promse = ((v9_PromiseType){.p_base = v10_t, });});
		break;
	default:
		return m10_type3_Parser(v10_self);
	}
	return v10_type;
};
v9_Type* (^m10_type3_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_sType){
	case e2_STokenType_FUNC:
		return m10_funcType_Parser(v10_self);
	case e2_STokenType_STRUCT:
		return m10_structType_Parser(v10_self);
	case e2_STokenType_UNION:
		return m10_unionType_Parser(v10_self);
	case e2_STokenType_TUPLE:
		return m10_tupleType_Parser(v10_self);
	case e2_STokenType_ENUM:
		return m10_enumType_Parser(v10_self);
	}
	switch(v10_tok.p_pType){
	case e2_PTokenType_LPAREN:
		m10_eat_Parser(v10_self);
		v9_Type (*v10_t) = m10_type_Parser(v10_self);

		m10_expectPri_Parser(v10_self, e2_PTokenType_RPAREN);
		m10_eat_Parser(v10_self);
		(v10_t->p_buff)--;
		({v10_t->p_len += 2;});
		return v10_t;
	case e2_PTokenType_IDENT:
		break;
	default:
		break;
	}
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Expr (*v10_expr) = m10_expr_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_BASIC;});
	({v10_type->p_data.p_basic = ((v9_BasicType){.p_expr = v10_expr, });});
	return v10_type;
};
v9_Type* (^m10_funcType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_FuncType v10_fnc = m10_funcTypeRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_FUNC;});
	({v10_type->p_data.p_fnc = v10_fnc;});
	return v10_type;
};
v9_FuncType (^m10_funcTypeRaw_Parser)(v10_Parser*) = ^v9_FuncType (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_FuncType v10_t = ((v9_FuncType){});

	v2_Token v10_tok = m10_peek_Parser(v10_self);

	switch(v10_tok.p_sType){
	case e2_STokenType_WORK:
		({v10_t.p_type = e9_FuncTypeEnum_WORK;});
		m10_eat_Parser(v10_self);
		break;
	case e2_STokenType_ASYNC:
		({v10_t.p_type = e9_FuncTypeEnum_ASYNC;});
		m10_eat_Parser(v10_self);
		break;
	case e2_STokenType_NATIVE:
		({v10_t.p_type = e9_FuncTypeEnum_NATIVE;});
		m10_eat_Parser(v10_self);
		break;
	default:
		({v10_t.p_type = e9_FuncTypeEnum_ORD;});
		break;
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_LPAREN);
	m10_eat_Parser(v10_self);
	({v10_t.p_args.p_names = null;});
	({v10_t.p_args.p_types = new4(v9_Type*, (((v9_Type*[]){})), 0);});
	if((m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RPAREN){
goto l_body;
	} else {
goto l_next;
	}
	for(;(m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RPAREN;){
		m10_expectSec_Parser(v10_self, e2_STokenType_COMMA);
		m10_eat_Parser(v10_self);
l_body:;
		VECTOR_PUSH(v10_t.p_args.p_types, m10_type_Parser(v10_self));
	}
l_next:;
	m10_eat_Parser(v10_self);
	{
		v2_Token v10_tok = m10_peek_Parser(v10_self);

		if(((((v10_tok.p_sType)!=e2_STokenType_COMMA)&&((v10_tok.p_pType)!=e2_PTokenType_SEMICOLON))&&((v10_tok.p_pType)!=e2_PTokenType_RPAREN))&&((v10_tok.p_pType)!=e2_PTokenType_LCBRACE)){
			({v10_t.p_returnType = m10_type_Parser(v10_self);});
		} else {
			({v10_t.p_returnType = null;});
		}
	}
	return v10_t;
};
v9_Stmt* (^m10_structTypedef_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Typedef v10_tdef = m10_structTypedefRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_TYPEDEF;});
	({v10_stmt->p_data.p_tdef = v10_tdef;});
	return v10_stmt;
};
v9_Typedef (^m10_structTypedefRaw_Parser)(v10_Parser*) = ^v9_Typedef (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	v9_Type (*v10_type) = m10_structBody_Parser(v10_self);

	return ((v9_Typedef){.p_name = v10_name, .p_type = v10_type, });
};
v9_Type* (^m10_structType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_StructType v10_strct = m10_structBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_STRUCT;});
	({v10_type->p_data.p_strct = v10_strct;});
	return v10_type;
};
v9_Type* (^m10_structBody_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_StructType v10_strct = m10_structBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_STRUCT;});
	({v10_type->p_data.p_strct = v10_strct;});
	return v10_type;
};
v9_StructType (^m10_structBodyRaw_Parser)(v10_Parser*) = ^v9_StructType (v10_Parser (*v10_self)){
	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	m10_eat_Parser(v10_self);
	v9_StructType v10_strct = ((v9_StructType){});

	({v10_strct.p_props = new4(v9_Stmt*, (((v9_Stmt*[]){})), 0);});
	({v10_strct.p_methods = new4(v9_Stmt*, (((v9_Stmt*[]){})), 0);});
	({v10_strct.p_superStructs = new4(v9_Expr*, (((v9_Expr*[]){})), 0);});
	for(
	v2_Token v10_tok = m10_peek_Parser(v10_self);
(v10_tok.p_pType)!=e2_PTokenType_RCBRACE;
	({v10_tok = m10_peek_Parser(v10_self);})){
		if((v10_tok.p_sType)==e2_STokenType_DOTDOT){
			m10_eat_Parser(v10_self);
			VECTOR_PUSH(v10_strct.p_superStructs, m10_expr_Parser(v10_self));
		} else if((v10_tok.p_sType)==e2_STokenType_FUNC){
			VECTOR_PUSH(v10_strct.p_methods, m10_funcDec_Parser(v10_self));
		} else {
			VECTOR_PUSH(v10_strct.p_props, m10_dec_Parser(v10_self));
		}
		m10_expectPri_Parser(v10_self, e2_PTokenType_SEMICOLON);
		m10_eat_Parser(v10_self);
	}
	m10_eat_Parser(v10_self);
	return v10_strct;
};
v9_Stmt* (^m10_enumTypedef_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Typedef v10_tdef = m10_enumTypedefRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_TYPEDEF;});
	({v10_stmt->p_data.p_tdef = v10_tdef;});
	return v10_stmt;
};
v9_Typedef (^m10_enumTypedefRaw_Parser)(v10_Parser*) = ^v9_Typedef (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	v9_Type (*v10_type) = m10_enumBody_Parser(v10_self);

	return ((v9_Typedef){.p_name = v10_name, .p_type = v10_type, });
};
v9_Type* (^m10_enumType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_EnumType v10_enm = m10_enumBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_ENUM;});
	({v10_type->p_data.p_enm = v10_enm;});
	return v10_type;
};
v9_Type* (^m10_enumBody_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_EnumType v10_enm = m10_enumBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_ENUM;});
	({v10_type->p_data.p_enm = v10_enm;});
	return v10_type;
};
v9_EnumType (^m10_enumBodyRaw_Parser)(v10_Parser*) = ^v9_EnumType (v10_Parser (*v10_self)){
	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	m10_eat_Parser(v10_self);
	v9_EnumType v10_enm = ((v9_EnumType){.p_idents = new4(v9_IdentExpr, (((v9_IdentExpr[]){})), 0), .p_values = new4(v9_Expr*, (((v9_Expr*[]){})), 0), });

l_body:;
	VECTOR_PUSH(v10_enm.p_idents, ((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), }));
	m10_eat_Parser(v10_self);
	if((m10_peek_Parser(v10_self).p_sType)==e2_STokenType_EQ){
		m10_eat_Parser(v10_self);
		VECTOR_PUSH(v10_enm.p_values, m10_expr_Parser(v10_self));
	} else {
		VECTOR_PUSH(v10_enm.p_values, null);
	}
	if((m10_peek_Parser(v10_self).p_sType)==e2_STokenType_COMMA){
		m10_eat_Parser(v10_self);
goto l_body;
	} else {
	}
	m10_expectPri_Parser(v10_self, e2_PTokenType_RCBRACE);
	m10_eat_Parser(v10_self);
	return v10_enm;
};
v9_Stmt* (^m10_unionTypedef_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Typedef v10_tdef = m10_unionTypedefRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_TYPEDEF;});
	({v10_stmt->p_data.p_tdef = v10_tdef;});
	return v10_stmt;
};
v9_Typedef (^m10_unionTypedefRaw_Parser)(v10_Parser*) = ^v9_Typedef (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	v9_Type (*v10_type) = m10_unionBody_Parser(v10_self);

	return ((v9_Typedef){.p_name = v10_name, .p_type = v10_type, });
};
v9_Type* (^m10_unionType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_UnionType v10_unon = m10_unionBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_UNION;});
	({v10_type->p_data.p_unon = v10_unon;});
	return v10_type;
};
v9_Type* (^m10_unionBody_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_UnionType v10_unon = m10_unionBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_UNION;});
	({v10_type->p_data.p_unon = v10_unon;});
	return v10_type;
};
v9_UnionType (^m10_unionBodyRaw_Parser)(v10_Parser*) = ^v9_UnionType (v10_Parser (*v10_self)){
	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	m10_eat_Parser(v10_self);
	v9_UnionType v10_unon = ((v9_UnionType){.p_decs = new4(v9_Declaration, (((v9_Declaration[]){})), 0), });

	for(;(m10_peek_Parser(v10_self).p_pType)!=e2_PTokenType_RCBRACE;){
		VECTOR_PUSH(v10_unon.p_decs, m10_decNoVal_Parser(v10_self));
		m10_expectPri_Parser(v10_self, e2_PTokenType_SEMICOLON);
		m10_eat_Parser(v10_self);
	}
	m10_eat_Parser(v10_self);
	return v10_unon;
};
v9_Stmt* (^m10_tupleTypedef_Parser)(v10_Parser*) = ^v9_Stmt* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_Typedef v10_tdef = m10_tupleTypedefRaw_Parser(v10_self);

	v9_Stmt (*v10_stmt) = m10_stmtNode_Parser(v10_self, (&v10_state));

	({v10_stmt->p_type = e9_StmtType_TYPEDEF;});
	({v10_stmt->p_data.p_tdef = v10_tdef;});
	return v10_stmt;
};
v9_Typedef (^m10_tupleTypedefRaw_Parser)(v10_Parser*) = ^v9_Typedef (v10_Parser (*v10_self)){
	m10_eat_Parser(v10_self);
	v9_IdentExpr (*v10_name) = new2(v9_IdentExpr,v9_IdentExpr,(((v9_IdentExpr){.p_tok = m10_expectPri_Parser(v10_self, e2_PTokenType_IDENT), })));

	m10_eat_Parser(v10_self);
	v9_Type (*v10_type) = m10_tupleBody_Parser(v10_self);

	return ((v9_Typedef){.p_name = v10_name, .p_type = v10_type, });
};
v9_Type* (^m10_tupleType_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	m10_eat_Parser(v10_self);
	v9_TupleType v10_tupl = m10_tupleBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_TUPLE;});
	({v10_type->p_data.p_tupl = v10_tupl;});
	return v10_type;
};
v9_Type* (^m10_tupleBody_Parser)(v10_Parser*) = ^v9_Type* (v10_Parser (*v10_self)){
	v10_ParserState v10_state = m10_state_Parser(v10_self);

	v9_TupleType v10_tupl = m10_tupleBodyRaw_Parser(v10_self);

	v9_Type (*v10_type) = m10_typeNode_Parser(v10_self, (&v10_state));

	({v10_type->p_type = e9_TypeType_TUPLE;});
	({v10_type->p_data.p_tupl = v10_tupl;});
	return v10_type;
};
v9_TupleType (^m10_tupleBodyRaw_Parser)(v10_Parser*) = ^v9_TupleType (v10_Parser (*v10_self)){
	m10_expectPri_Parser(v10_self, e2_PTokenType_LCBRACE);
	m10_eat_Parser(v10_self);
	v9_TupleType v10_tupl = ((v9_TupleType){.p_types = m10_typeVec_Parser(v10_self), });

	m10_expectPri_Parser(v10_self, e2_PTokenType_RCBRACE);
	m10_eat_Parser(v10_self);
	return v10_tupl;
};
;
#endif