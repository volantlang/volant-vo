#ifndef H_11
#define H_11
#include "internal/default.h"
#include "tokens.vo.h"
#include "lexer.vo.h"
#include "ast.vo.h"
#include "parser.vo.h"
#include "io.vo.h"
#include "mem.vo.h"
typedef struct dummy_v11_TypeContext v11_TypeContext;
typedef struct dummy_v11_Compiler v11_Compiler;
typedef struct dummy_v11_TypeContext {
	size_t p_bottom;
	VECTOR_TYPE(i8)p_buf;
} v11_TypeContext;
v11_TypeContext d11_TypeContext = (v11_TypeContext){.p_bottom = 0, };
void (^m11_insert_TypeContext)(v11_TypeContext*, i8*, size_t);
void (^m11_append_TypeContext)(v11_TypeContext*, i8*, size_t);
void (^m11_push_TypeContext)(v11_TypeContext*, i8);
void (^m11_num_TypeContext)(v11_TypeContext*, v9_BasicLit*);
typedef struct dummy_v11_Compiler {
	u32 p_scopeCount;
	u8 p_context[50];
	VECTOR_TYPE(i8)p_buff;
} v11_Compiler;
v11_Compiler d11_Compiler = (v11_Compiler){};
void (^m11_push_Compiler)(v11_Compiler*, u8);
void (^m11_append_Compiler)(v11_Compiler*, i8*, size_t);
void (^m11_openParen_Compiler)(v11_Compiler*);
void (^m11_closeParen_Compiler)(v11_Compiler*);
void (^m11_openBrace_Compiler)(v11_Compiler*);
void (^m11_closeBrace_Compiler)(v11_Compiler*);
void (^m11_openCBrace_Compiler)(v11_Compiler*);
void (^m11_closeCBrace_Compiler)(v11_Compiler*);
void (^m11_dot_Compiler)(v11_Compiler*);
void (^m11_colon_Compiler)(v11_Compiler*);
void (^m11_comma_Compiler)(v11_Compiler*);
void (^m11_semicolon_Compiler)(v11_Compiler*);
void (^m11_equal_Compiler)(v11_Compiler*);
void (^m11_newline_Compiler)(v11_Compiler*);
void (^m11_space_Compiler)(v11_Compiler*);
void (^m11_tab_Compiler)(v11_Compiler*);
void (^m11_pushScope_Compiler)(v11_Compiler*);
void (^m11_popScope_Compiler)(v11_Compiler*);
void (^m11_indent_Compiler)(v11_Compiler*);
void (^m11_ident_Compiler)(v11_Compiler*, v9_IdentExpr*);
void (^m11_operator_Compiler)(v11_Compiler*, v9_Operator*);
void (^m11_basicLit_Compiler)(v11_Compiler*, v9_Expr*);
void (^m11_stmt_Compiler)(v11_Compiler*, v9_Stmt*);
void (^m11_stmtRaw_Compiler)(v11_Compiler*, v9_Stmt*);
void (^m11_defalt_Compiler)(v11_Compiler*);
void (^m11_brak_Compiler)(v11_Compiler*);
void (^m11_continuee_Compiler)(v11_Compiler*);
void (^m11_casee_Compiler)(v11_Compiler*, v9_Case);
void (^m11_del_Compiler)(v11_Compiler*, v9_Delete);
void (^m11_exprStmt_Compiler)(v11_Compiler*, v9_ExprStmt);
void (^m11_dec_Compiler)(v11_Compiler*, v9_Declaration);
void (^m11_decNoVal_Compiler)(v11_Compiler*, v9_Declaration);
void (^m11_funcDec_Compiler)(v11_Compiler*, v9_FuncDec);
void (^m11_funcDecOrd_Compiler)(v11_Compiler*, v9_FuncDec);
void (^m11_funcDecNative_Compiler)(v11_Compiler*, v9_FuncDec);
void (^m11_block_Compiler)(v11_Compiler*, v9_Block);
void (^m11_rturn_Compiler)(v11_Compiler*, v9_Return);
void (^m11_ifElse_Compiler)(v11_Compiler*, v9_IfElse);
void (^m11_swtch_Compiler)(v11_Compiler*, v9_Switch);
void (^m11_loop_Compiler)(v11_Compiler*, v9_Loop);
void (^m11_labl_Compiler)(v11_Compiler*, v9_Label);
void (^m11_gotoh_Compiler)(v11_Compiler*, v9_Goto);
void (^m11_tdef_Compiler)(v11_Compiler*, v9_Typedef);
void (^m11_expr_Compiler)(v11_Compiler*, v9_Expr*);
void (^m11_newExpr_Compiler)(v11_Compiler*, v9_NewExpr);
void (^m11_compLit_Compiler)(v11_Compiler*, v9_CompLit);
void (^m11_numLit_Compiler)(v11_Compiler*, v9_Expr*);
void (^m11_exprVec_Compiler)(v11_Compiler*, void*);
void (^m11_type_Compiler)(v11_Compiler*, v9_Type*);
void (^m11_decType_Compiler)(v11_Compiler*, v9_Type*, v9_Expr*);
void (^m11_decTypeIdent_Compiler)(v11_Compiler*, v9_Type*, v9_IdentExpr*);
void (^m11_typeRaw_Compiler)(v11_Compiler*, v9_Type*, v11_TypeContext*);
void (^m11_funcDecType_Compiler)(v11_Compiler*, v9_FuncType, v9_IdentExpr*);
void (^m11_funcType_Compiler)(v11_Compiler*, v9_FuncType, v11_TypeContext*);
void (^m11_funcTypeArgs_Compiler)(v11_Compiler*, v9_Args, v11_TypeContext*);
void (^m11_structType_Compiler)(v11_Compiler*, v9_StructType, v11_TypeContext*);
void (^m11_unionType_Compiler)(v11_Compiler*, v9_UnionType);
void (^m11_enumType_Compiler)(v11_Compiler*, v9_EnumType);
void (^m11_tupleType_Compiler)(v11_Compiler*, v9_TupleType);
;
;
;
;
;
;
;
;
;;;;;;
void (^m11_insert_TypeContext)(v11_TypeContext*, i8*, size_t) = ^void (v11_TypeContext (*v11_self), i8 (*v11_buf), size_t v11_len){
	VECTOR_TYPE(i8)v11_newBuf = new4(i8, (((i8[]){})), 0);

	for(
	i32 v11_i = 0;
v11_i<(v11_self->p_bottom);
	(++v11_i)){
		VECTOR_PUSH(v11_newBuf, (v11_self->p_buf->mem)[v11_i]);
	}
	for(
	i32 v11_i = 0;
v11_i<v11_len;
	(++v11_i)){
		VECTOR_PUSH(v11_newBuf, v11_buf[v11_i]);
	}
	for(
	size_t v11_i = v11_self->p_bottom;
v11_i<(v11_self->p_buf->length);
	(++v11_i)){
		VECTOR_PUSH(v11_newBuf, (v11_self->p_buf->mem)[v11_i]);
	}
	VECTOR_FREE(v11_self->p_buf);
	({v11_self->p_buf = v11_newBuf;});
	({v11_self->p_bottom += v11_len;});
};
void (^m11_append_TypeContext)(v11_TypeContext*, i8*, size_t) = ^void (v11_TypeContext (*v11_self), i8 (*v11_buf), size_t v11_len){
	VECTOR_APPEND(v11_self->p_buf, v11_buf, v11_len);
};
void (^m11_push_TypeContext)(v11_TypeContext*, i8) = ^void (v11_TypeContext (*v11_self), i8 v11_char){
	VECTOR_PUSH(v11_self->p_buf, v11_char);
};
void (^m11_num_TypeContext)(v11_TypeContext*, v9_BasicLit*) = ^void (v11_TypeContext (*v11_self), v9_BasicLit (*v11_lit)){
	if((v11_lit->p_tok.p_buff[1])==111){
		m11_push_TypeContext(v11_self, 48);
		m11_append_TypeContext(v11_self, (v11_lit->p_tok.p_buff)+2, (v11_lit->p_tok.p_len)-2);
	} else {
		m11_append_TypeContext(v11_self, v11_lit->p_tok.p_buff, v11_lit->p_tok.p_len);
	}
};

;
void (^m11_push_Compiler)(v11_Compiler*, u8) = ^void (v11_Compiler (*v11_self), u8 v11_char){
	VECTOR_PUSH(v11_self->p_buff, v11_char);
};
void (^m11_append_Compiler)(v11_Compiler*, i8*, size_t) = ^void (v11_Compiler (*v11_self), i8 (*v11_str), size_t v11_len){
	VECTOR_APPEND(v11_self->p_buff, ((u8*)(v11_str)), v11_len);
};
void (^m11_openParen_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 40);
};
void (^m11_closeParen_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 41);
};
void (^m11_openBrace_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 91);
};
void (^m11_closeBrace_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 93);
};
void (^m11_openCBrace_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 123);
};
void (^m11_closeCBrace_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 125);
};
void (^m11_dot_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 46);
};
void (^m11_colon_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 58);
};
void (^m11_comma_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 44);
};
void (^m11_semicolon_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 59);
};
void (^m11_equal_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 61);
};
void (^m11_newline_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 10);
};
void (^m11_space_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 32);
};
void (^m11_tab_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_push_Compiler(v11_self, 9);
};
void (^m11_pushScope_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	(++(v11_self->p_scopeCount));
};
void (^m11_popScope_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	(--(v11_self->p_scopeCount));
};
void (^m11_indent_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	for(
	i32 v11_i = 0;
v11_i<(v11_self->p_scopeCount);
	(++v11_i)){
		m11_tab_Compiler(v11_self);
	}
};
void (^m11_ident_Compiler)(v11_Compiler*, v9_IdentExpr*) = ^void (v11_Compiler (*v11_self), v9_IdentExpr (*v11_ident)){
	m11_append_Compiler(v11_self, ((i8*)(v11_ident->p_tok.p_buff)), v11_ident->p_tok.p_len);
};
void (^m11_operator_Compiler)(v11_Compiler*, v9_Operator*) = ^void (v11_Compiler (*v11_self), v9_Operator (*v11_op)){
	m11_append_Compiler(v11_self, ((i8*)(v11_op->p_tok.p_buff)), v11_op->p_tok.p_len);
};
void (^m11_basicLit_Compiler)(v11_Compiler*, v9_Expr*) = ^void (v11_Compiler (*v11_self), v9_Expr (*v11_lit)){
	m11_append_Compiler(v11_self, ((i8*)(v11_lit->p_buff)), v11_lit->p_len);
};
void (^m11_stmt_Compiler)(v11_Compiler*, v9_Stmt*) = ^void (v11_Compiler (*v11_self), v9_Stmt (*v11_stmt)){
	m11_newline_Compiler(v11_self);
	m11_indent_Compiler(v11_self);
	m11_stmtRaw_Compiler(v11_self, v11_stmt);
	m11_semicolon_Compiler(v11_self);
};
void (^m11_stmtRaw_Compiler)(v11_Compiler*, v9_Stmt*) = ^void (v11_Compiler (*v11_self), v9_Stmt (*v11_stmt)){
	switch(v11_stmt->p_type){
	case e9_StmtType_DEC:
		m11_dec_Compiler(v11_self, v11_stmt->p_data.p_dec);
		break;
	case e9_StmtType_EXPR:
		m11_exprStmt_Compiler(v11_self, v11_stmt->p_data.p_expr);
		break;
	case e9_StmtType_RETURN:
		m11_rturn_Compiler(v11_self, v11_stmt->p_data.p_rturn);
		break;
	case e9_StmtType_IF_ELSE:
		m11_ifElse_Compiler(v11_self, v11_stmt->p_data.p_ifElse);
		break;
	case e9_StmtType_SWITCH:
		m11_swtch_Compiler(v11_self, v11_stmt->p_data.p_swtch);
		break;
	case e9_StmtType_LOOP:
		m11_loop_Compiler(v11_self, v11_stmt->p_data.p_loop);
		break;
	case e9_StmtType_FUNC:
		m11_funcDec_Compiler(v11_self, v11_stmt->p_data.p_funcDec);
		break;
	case e9_StmtType_BLOCK:
		m11_block_Compiler(v11_self, v11_stmt->p_data.p_block);
		break;
	case e9_StmtType_LABEL:
		m11_labl_Compiler(v11_self, v11_stmt->p_data.p_labl);
		break;
	case e9_StmtType_GOTO:
		m11_gotoh_Compiler(v11_self, v11_stmt->p_data.p_gotoh);
		break;
	case e9_StmtType_BREAK:
		m11_brak_Compiler(v11_self);
		break;
	case e9_StmtType_CONTINUE:
		m11_continuee_Compiler(v11_self);
		break;
	case e9_StmtType_CASE:
		m11_casee_Compiler(v11_self, v11_stmt->p_data.p_casee);
		break;
	case e9_StmtType_DELETE:
		m11_del_Compiler(v11_self, v11_stmt->p_data.p_del);
		break;
	case e9_StmtType_DEFAULT:
		m11_defalt_Compiler(v11_self);
		break;
	case e9_StmtType_TYPEDEF:
		m11_tdef_Compiler(v11_self, v11_stmt->p_data.p_tdef);
		break;
	default:
		break;
	}
};
void (^m11_defalt_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_append_Compiler(v11_self, "default:", 8);
};
void (^m11_brak_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_append_Compiler(v11_self, "break", 5);
};
void (^m11_continuee_Compiler)(v11_Compiler*) = ^void (v11_Compiler (*v11_self)){
	m11_append_Compiler(v11_self, "continue", 8);
};
void (^m11_casee_Compiler)(v11_Compiler*, v9_Case) = ^void (v11_Compiler (*v11_self), v9_Case v11_casee){
	m11_append_Compiler(v11_self, "case ", 5);
	m11_expr_Compiler(v11_self, v11_casee.p_val);
	m11_colon_Compiler(v11_self);
};
void (^m11_del_Compiler)(v11_Compiler*, v9_Delete) = ^void (v11_Compiler (*v11_self), v9_Delete v11_del){
	m11_append_Compiler(v11_self, "free(", 5);
	m11_expr_Compiler(v11_self, (v11_del.p_exprs->mem)[0]);
	m11_closeParen_Compiler(v11_self);
	for(
	i32 v11_i = 1;
v11_i<(v11_del.p_exprs->length);
	(++v11_i)){
		m11_semicolon_Compiler(v11_self);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_append_Compiler(v11_self, "free(", 5);
		m11_expr_Compiler(v11_self, (v11_del.p_exprs->mem)[v11_i]);
		m11_closeParen_Compiler(v11_self);
	}
};
void (^m11_exprStmt_Compiler)(v11_Compiler*, v9_ExprStmt) = ^void (v11_Compiler (*v11_self), v9_ExprStmt v11_stmt){
	m11_expr_Compiler(v11_self, v11_stmt.p_expr);
};
void (^m11_dec_Compiler)(v11_Compiler*, v9_Declaration) = ^void (v11_Compiler (*v11_self), v9_Declaration v11_dec){
	i32 v11_i = 0;

	if(((v11_dec.p_values)==null)||((v11_dec.p_values->length)==0)){
		m11_decNoVal_Compiler(v11_self, v11_dec);
		return ;
	} else {
	}
goto l_body;
	for(
;v11_i<(v11_dec.p_idents->length);
	(++v11_i)){
		m11_semicolon_Compiler(v11_self);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
l_body:;
		m11_decType_Compiler(v11_self, (v11_dec.p_types->mem)[v11_i], (v11_dec.p_idents->mem)[v11_i]);
		m11_space_Compiler(v11_self);
		m11_equal_Compiler(v11_self);
		m11_space_Compiler(v11_self);
		m11_expr_Compiler(v11_self, (v11_dec.p_values->mem)[v11_i]);
	}
};
void (^m11_decNoVal_Compiler)(v11_Compiler*, v9_Declaration) = ^void (v11_Compiler (*v11_self), v9_Declaration v11_dec){
	m11_decType_Compiler(v11_self, (v11_dec.p_types->mem)[0], (v11_dec.p_idents->mem)[0]);
	for(
	i32 v11_i = 1;
v11_i<(v11_dec.p_idents->length);
	(++v11_i)){
		m11_semicolon_Compiler(v11_self);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_decType_Compiler(v11_self, (v11_dec.p_types->mem)[v11_i], (v11_dec.p_idents->mem)[v11_i]);
	}
};
void (^m11_funcDec_Compiler)(v11_Compiler*, v9_FuncDec) = ^void (v11_Compiler (*v11_self), v9_FuncDec v11_dec){
	if((v11_dec.p_type.p_type)==e9_FuncTypeEnum_ORD){
		m11_funcDecOrd_Compiler(v11_self, v11_dec);
	} else if((v11_dec.p_type.p_type)==e9_FuncTypeEnum_NATIVE){
		m11_funcDecNative_Compiler(v11_self, v11_dec);
	} else {
	}
};
void (^m11_funcDecOrd_Compiler)(v11_Compiler*, v9_FuncDec) = ^void (v11_Compiler (*v11_self), v9_FuncDec v11_dec){
	m11_funcDecType_Compiler(v11_self, v11_dec.p_type, v11_dec.p_name);
	m11_space_Compiler(v11_self);
	m11_equal_Compiler(v11_self);
	m11_space_Compiler(v11_self);
	m11_push_Compiler(v11_self, 94);
	m11_block_Compiler(v11_self, v11_dec.p_body);
};
void (^m11_funcDecNative_Compiler)(v11_Compiler*, v9_FuncDec) = ^void (v11_Compiler (*v11_self), v9_FuncDec v11_dec){
	m11_funcDecType_Compiler(v11_self, v11_dec.p_type, v11_dec.p_name);
	m11_block_Compiler(v11_self, v11_dec.p_body);
};
void (^m11_block_Compiler)(v11_Compiler*, v9_Block) = ^void (v11_Compiler (*v11_self), v9_Block v11_block){
	m11_openCBrace_Compiler(v11_self);
	m11_pushScope_Compiler(v11_self);
	for(
	i32 v11_i = 0;
v11_i<(v11_block.p_stmts->length);
	(++v11_i)){
		m11_stmt_Compiler(v11_self, (v11_block.p_stmts->mem)[v11_i]);
	}
	m11_popScope_Compiler(v11_self);
	m11_newline_Compiler(v11_self);
	m11_indent_Compiler(v11_self);
	m11_closeCBrace_Compiler(v11_self);
};
void (^m11_rturn_Compiler)(v11_Compiler*, v9_Return) = ^void (v11_Compiler (*v11_self), v9_Return v11_rturn){
	m11_append_Compiler(v11_self, "return", 6);
	m11_space_Compiler(v11_self);
	m11_expr_Compiler(v11_self, v11_rturn.p_val);
};
void (^m11_ifElse_Compiler)(v11_Compiler*, v9_IfElse) = ^void (v11_Compiler (*v11_self), v9_IfElse v11_ifElse){
	i32 v11_c = 0;

	for(
	i32 v11_i = 0;
v11_i<(v11_ifElse.p_blocks->length);
	(++v11_i)){
		v9_Stmt (*v11_init) = (v11_ifElse.p_initStmts->mem)[v11_i];

		v9_Expr (*v11_cond) = (v11_ifElse.p_conds->mem)[v11_i];

		v9_Block v11_block = (v11_ifElse.p_blocks->mem)[v11_i];

		if(v11_init!=null){
			m11_openCBrace_Compiler(v11_self);
			m11_pushScope_Compiler(v11_self);
			m11_stmt_Compiler(v11_self, v11_init);
			m11_newline_Compiler(v11_self);
			m11_indent_Compiler(v11_self);
			(++v11_c);
		} else {
		}
		m11_append_Compiler(v11_self, "if(", 3);
		m11_expr_Compiler(v11_self, v11_cond);
		m11_closeParen_Compiler(v11_self);
		m11_block_Compiler(v11_self, v11_block);
		m11_space_Compiler(v11_self);
		m11_append_Compiler(v11_self, "else ", 5);
	}
	if((v11_ifElse.p_elseBlock.p_stmts)!=null){
		m11_block_Compiler(v11_self, v11_ifElse.p_elseBlock);
	} else {
	}
	m11_semicolon_Compiler(v11_self);
	for(;(v11_c--)!=0;){
		m11_popScope_Compiler(v11_self);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_closeCBrace_Compiler(v11_self);
	}
};
void (^m11_swtch_Compiler)(v11_Compiler*, v9_Switch) = ^void (v11_Compiler (*v11_self), v9_Switch v11_swtch){
	bool v11_c = (v11_swtch.p_initStmt)!=null;

	if(v11_c){
		m11_openCBrace_Compiler(v11_self);
		m11_pushScope_Compiler(v11_self);
		m11_stmt_Compiler(v11_self, v11_swtch.p_initStmt);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
	} else {
	}
	m11_append_Compiler(v11_self, "switch(", 7);
	m11_expr_Compiler(v11_self, v11_swtch.p_expr);
	m11_closeParen_Compiler(v11_self);
	m11_block_Compiler(v11_self, v11_swtch.p_block);
	if(v11_c){
		m11_popScope_Compiler(v11_self);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_closeCBrace_Compiler(v11_self);
	} else {
	}
};
void (^m11_loop_Compiler)(v11_Compiler*, v9_Loop) = ^void (v11_Compiler (*v11_self), v9_Loop v11_loop){
	bool v11_c = (v11_loop.p_initStmt)!=null;

	if(v11_c){
		m11_openCBrace_Compiler(v11_self);
		m11_pushScope_Compiler(v11_self);
		m11_stmt_Compiler(v11_self, v11_loop.p_initStmt);
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
	} else {
	}
	m11_append_Compiler(v11_self, "for(;", 5);
	if((v11_loop.p_cond)!=null){
		m11_expr_Compiler(v11_self, v11_loop.p_cond);
	} else {
	}
	m11_semicolon_Compiler(v11_self);
	if((v11_loop.p_loopStmt)!=null){
		m11_stmtRaw_Compiler(v11_self, v11_loop.p_loopStmt);
	} else {
	}
	m11_closeParen_Compiler(v11_self);
	m11_block_Compiler(v11_self, v11_loop.p_block);
	if(v11_c){
		m11_newline_Compiler(v11_self);
		m11_popScope_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_closeCBrace_Compiler(v11_self);
	} else {
	}
};
void (^m11_labl_Compiler)(v11_Compiler*, v9_Label) = ^void (v11_Compiler (*v11_self), v9_Label v11_labl){
	m11_ident_Compiler(v11_self, v11_labl.p_name);
	m11_colon_Compiler(v11_self);
};
void (^m11_gotoh_Compiler)(v11_Compiler*, v9_Goto) = ^void (v11_Compiler (*v11_self), v9_Goto v11_gotoh){
	m11_append_Compiler(v11_self, "goto ", 5);
	m11_ident_Compiler(v11_self, v11_gotoh.p_name);
};
void (^m11_tdef_Compiler)(v11_Compiler*, v9_Typedef) = ^void (v11_Compiler (*v11_self), v9_Typedef v11_tdef){
	m11_append_Compiler(v11_self, "typedef ", 8);
	m11_decTypeIdent_Compiler(v11_self, v11_tdef.p_type, v11_tdef.p_name);
};
void (^m11_expr_Compiler)(v11_Compiler*, v9_Expr*) = ^void (v11_Compiler (*v11_self), v9_Expr (*v11_expr)){
	switch(v11_expr->p_type){
	case e9_ExprType_IDENT:
		m11_append_Compiler(v11_self, ((i8*)(v11_expr->p_buff)), v11_expr->p_len);
		break;
	case e9_ExprType_UNARY:
		m11_operator_Compiler(v11_self, v11_expr->p_data.p_unary.p_op);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_unary.p_expr);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_PUNARY:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_unary.p_expr);
		m11_closeParen_Compiler(v11_self);
		m11_operator_Compiler(v11_self, v11_expr->p_data.p_unary.p_op);
		break;
	case e9_ExprType_BINARY:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_binary.p_left);
		m11_closeParen_Compiler(v11_self);
		m11_space_Compiler(v11_self);
		m11_operator_Compiler(v11_self, v11_expr->p_data.p_binary.p_op);
		m11_space_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_binary.p_right);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_TERNARY:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_ternary.p_cond);
		m11_closeParen_Compiler(v11_self);
		m11_push_Compiler(v11_self, 63);
		m11_space_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_ternary.p_left);
		m11_closeParen_Compiler(v11_self);
		m11_colon_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_ternary.p_right);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_CALL:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_callExpr.p_function);
		m11_closeParen_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_exprVec_Compiler(v11_self, v11_expr->p_data.p_callExpr.p_args);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_CAST:
		m11_openParen_Compiler(v11_self);
		m11_type_Compiler(v11_self, v11_expr->p_data.p_castExpr.p_type);
		m11_closeParen_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_castExpr.p_expr);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_MEMBER:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_member.p_base);
		m11_closeParen_Compiler(v11_self);
		m11_dot_Compiler(v11_self);
		m11_ident_Compiler(v11_self, v11_expr->p_data.p_member.p_prop);
		break;
	case e9_ExprType_ELEMENT:
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_element.p_base);
		m11_closeParen_Compiler(v11_self);
		m11_openBrace_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_element.p_index);
		m11_closeBrace_Compiler(v11_self);
		break;
	case e9_ExprType_SIZEOF:
		m11_append_Compiler(v11_self, "sizeof(", 7);
		m11_expr_Compiler(v11_self, v11_expr->p_data.p_sizeExpr.p_expr);
		m11_closeParen_Compiler(v11_self);
		break;
	case e9_ExprType_NEW:
		m11_newExpr_Compiler(v11_self, v11_expr->p_data.p_newExpr);
		break;
	case e9_ExprType_NUM_LIT:
		m11_numLit_Compiler(v11_self, v11_expr);
		break;
	case e9_ExprType_COMPLIT:
		m11_compLit_Compiler(v11_self, v11_expr->p_data.p_compLit);
		break;
	default:
		m11_basicLit_Compiler(v11_self, v11_expr);
		break;
	}
};
void (^m11_newExpr_Compiler)(v11_Compiler*, v9_NewExpr) = ^void (v11_Compiler (*v11_self), v9_NewExpr v11_newExpr){
	if((v11_newExpr.p_val)!=null){
		m11_append_Compiler(v11_self, "I_NEW(", 6);
		m11_type_Compiler(v11_self, v11_newExpr.p_type);
		m11_comma_Compiler(v11_self);
		m11_openParen_Compiler(v11_self);
		m11_expr_Compiler(v11_self, v11_newExpr.p_val);
		m11_closeParen_Compiler(v11_self);
		m11_closeParen_Compiler(v11_self);
	} else {
		m11_append_Compiler(v11_self, "I_NEW_NV(", 9);
		m11_openParen_Compiler(v11_self);
		m11_type_Compiler(v11_self, v11_newExpr.p_type);
		m11_closeParen_Compiler(v11_self);
		m11_closeParen_Compiler(v11_self);
	}
};
void (^m11_compLit_Compiler)(v11_Compiler*, v9_CompLit) = ^void (v11_Compiler (*v11_self), v9_CompLit v11_lit){
	m11_openParen_Compiler(v11_self);
	m11_type_Compiler(v11_self, v11_lit.p_type);
	m11_closeParen_Compiler(v11_self);
	m11_openCBrace_Compiler(v11_self);
	if((v11_lit.p_fields)!=null){
		for(
		i32 v11_i = 0;
v11_i<(v11_lit.p_fields->length);
		(++v11_i)){
			m11_ident_Compiler(v11_self, (&((v11_lit.p_fields->mem)[v11_i])));
			m11_colon_Compiler(v11_self);
			m11_space_Compiler(v11_self);
			m11_expr_Compiler(v11_self, (v11_lit.p_values->mem)[v11_i]);
			m11_comma_Compiler(v11_self);
		}
	} else if((v11_lit.p_values)!=null){
		m11_exprVec_Compiler(v11_self, v11_lit.p_values);
	} else {
	}
	m11_closeCBrace_Compiler(v11_self);
};
void (^m11_numLit_Compiler)(v11_Compiler*, v9_Expr*) = ^void (v11_Compiler (*v11_self), v9_Expr (*v11_lit)){
	if(((v11_lit->p_buff)[1])==111){
		m11_push_Compiler(v11_self, (v11_lit->p_buff)[0]);
		m11_append_Compiler(v11_self, (((i8*)(v11_lit->p_buff)))+2, (v11_lit->p_len)-2);
	} else {
		m11_append_Compiler(v11_self, ((i8*)(v11_lit->p_buff)), v11_lit->p_len);
	}
};
void (^m11_exprVec_Compiler)(v11_Compiler*, void*) = ^void (v11_Compiler (*v11_self), void (*v11_e)){
	VECTOR_TYPE(v9_Expr*)v11_exprs = v11_e;

	if((v11_exprs==null)||((v11_exprs->length)==0)){
		return ;
	} else {
	}
	m11_expr_Compiler(v11_self, (v11_exprs->mem)[0]);
	for(
	i32 v11_i = 1;
v11_i<(v11_exprs->length);
	v11_i++){
		m11_comma_Compiler(v11_self);
		m11_space_Compiler(v11_self);
		m11_expr_Compiler(v11_self, (v11_exprs->mem)[v11_i]);
	}
};
void (^m11_type_Compiler)(v11_Compiler*, v9_Type*) = ^void (v11_Compiler (*v11_self), v9_Type (*v11_type)){
	v11_TypeContext v11_ctx = ((v11_TypeContext){.p_buf = new4(u8, (((u8[]){})), 0), .p_bottom = d11_TypeContext.p_bottom, });

	m11_typeRaw_Compiler(v11_self, v11_type, (&v11_ctx));
	m11_append_Compiler(v11_self, v11_ctx.p_buf->mem, v11_ctx.p_buf->length);
	VECTOR_FREE(v11_ctx.p_buf);
};
void (^m11_decType_Compiler)(v11_Compiler*, v9_Type*, v9_Expr*) = ^void (v11_Compiler (*v11_self), v9_Type (*v11_type), v9_Expr (*v11_expr)){
	v11_TypeContext v11_ctx = ((v11_TypeContext){.p_buf = new4(i8, (((i8[]){})), 0), .p_bottom = d11_TypeContext.p_bottom, });

	m11_typeRaw_Compiler(v11_self, v11_type, (&v11_ctx));
	m11_append_Compiler(v11_self, v11_ctx.p_buf->mem, v11_ctx.p_bottom);
	m11_expr_Compiler(v11_self, v11_expr);
	m11_append_Compiler(v11_self, (v11_ctx.p_buf->mem)+(v11_ctx.p_bottom), (v11_ctx.p_buf->length)-(v11_ctx.p_bottom));
	VECTOR_FREE(v11_ctx.p_buf);
};
void (^m11_decTypeIdent_Compiler)(v11_Compiler*, v9_Type*, v9_IdentExpr*) = ^void (v11_Compiler (*v11_self), v9_Type (*v11_type), v9_IdentExpr (*v11_ident)){
	v11_TypeContext v11_ctx = ((v11_TypeContext){.p_buf = new4(i8, (((i8[]){})), 0), .p_bottom = d11_TypeContext.p_bottom, });

	m11_typeRaw_Compiler(v11_self, v11_type, (&v11_ctx));
	m11_append_Compiler(v11_self, v11_ctx.p_buf->mem, v11_ctx.p_bottom);
	m11_ident_Compiler(v11_self, v11_ident);
	m11_append_Compiler(v11_self, (v11_ctx.p_buf->mem)+(v11_ctx.p_bottom), (v11_ctx.p_buf->length)-(v11_ctx.p_bottom));
	VECTOR_FREE(v11_ctx.p_buf);
};
void (^m11_typeRaw_Compiler)(v11_Compiler*, v9_Type*, v11_TypeContext*) = ^void (v11_Compiler (*v11_self), v9_Type (*v11_type), v11_TypeContext (*v11_ctx)){
	switch(v11_type->p_type){
	case e9_TypeType_BASIC:
		m11_expr_Compiler(v11_self, v11_type->p_data.p_basic.p_expr);
		m11_space_Compiler(v11_self);
		break;
	case e9_TypeType_CONST:
		m11_typeRaw_Compiler(v11_self, v11_type->p_data.p_cnst.p_base, v11_ctx);
		break;
	case e9_TypeType_STATIC:
		m11_append_Compiler(v11_self, "static ", 7);
		m11_typeRaw_Compiler(v11_self, v11_type->p_data.p_statc.p_base, v11_ctx);
		break;
	case e9_TypeType_POINTER:
		m11_insert_TypeContext(v11_ctx, "(*", 2);
		m11_push_TypeContext(v11_ctx, 41);
		m11_typeRaw_Compiler(v11_self, v11_type->p_data.p_pointer.p_base, v11_ctx);
		break;
	case e9_TypeType_ARRAY:
		m11_push_TypeContext(v11_ctx, 91);
		m11_num_TypeContext(v11_ctx, v11_type->p_data.p_array.p_size);
		m11_push_TypeContext(v11_ctx, 93);
		m11_typeRaw_Compiler(v11_self, v11_type->p_data.p_array.p_base, v11_ctx);
		break;
	case e9_TypeType_FUNC:
		m11_funcType_Compiler(v11_self, v11_type->p_data.p_fnc, v11_ctx);
		break;
	case e9_TypeType_STRUCT:
		m11_structType_Compiler(v11_self, v11_type->p_data.p_strct, v11_ctx);
		m11_space_Compiler(v11_self);
		break;
	case e9_TypeType_UNION:
		m11_unionType_Compiler(v11_self, v11_type->p_data.p_unon);
		m11_space_Compiler(v11_self);
		break;
	case e9_TypeType_ENUM:
		m11_enumType_Compiler(v11_self, v11_type->p_data.p_enm);
		m11_space_Compiler(v11_self);
		break;
	case e9_TypeType_TUPLE:
		m11_tupleType_Compiler(v11_self, v11_type->p_data.p_tupl);
		m11_space_Compiler(v11_self);
		break;
	default:
		break;
	}
};
void (^m11_funcDecType_Compiler)(v11_Compiler*, v9_FuncType, v9_IdentExpr*) = ^void (v11_Compiler (*v11_self), v9_FuncType v11_fnc, v9_IdentExpr (*v11_ident)){
	v11_TypeContext v11_ctx = ((v11_TypeContext){.p_buf = new4(i8, (((i8[]){})), 0), .p_bottom = d11_TypeContext.p_bottom, });

	m11_funcType_Compiler(v11_self, v11_fnc, (&v11_ctx));
	m11_append_Compiler(v11_self, v11_ctx.p_buf->mem, v11_ctx.p_bottom);
	m11_ident_Compiler(v11_self, v11_ident);
	m11_append_Compiler(v11_self, (v11_ctx.p_buf->mem)+(v11_ctx.p_bottom), (v11_ctx.p_buf->length)-(v11_ctx.p_bottom));
	VECTOR_FREE(v11_ctx.p_buf);
};
void (^m11_funcType_Compiler)(v11_Compiler*, v9_FuncType, v11_TypeContext*) = ^void (v11_Compiler (*v11_self), v9_FuncType v11_fnc, v11_TypeContext (*v11_ctx)){
	if((v11_fnc.p_type)==e9_FuncTypeEnum_ORD){
		m11_push_TypeContext(v11_ctx, 41);
		m11_push_TypeContext(v11_ctx, 40);
		m11_funcTypeArgs_Compiler(v11_self, v11_fnc.p_args, v11_ctx);
		m11_push_TypeContext(v11_ctx, 41);
		if((v11_fnc.p_returnType)==null){
			m11_append_Compiler(v11_self, "void ", 5);
		} else {
			m11_typeRaw_Compiler(v11_self, v11_fnc.p_returnType, v11_ctx);
		}
		m11_insert_TypeContext(v11_ctx, "(^", 2);
	} else if((v11_fnc.p_type)==e9_FuncTypeEnum_NATIVE){
		m11_push_TypeContext(v11_ctx, 40);
		m11_funcTypeArgs_Compiler(v11_self, v11_fnc.p_args, v11_ctx);
		m11_push_TypeContext(v11_ctx, 41);
		if((v11_fnc.p_returnType)==null){
			m11_append_Compiler(v11_self, "void ", 5);
		} else {
			m11_typeRaw_Compiler(v11_self, v11_fnc.p_returnType, v11_ctx);
		}
	} else {
	}
};
void (^m11_funcTypeArgs_Compiler)(v11_Compiler*, v9_Args, v11_TypeContext*) = ^void (v11_Compiler (*v11_self), v9_Args v11_args, v11_TypeContext (*v11_ctx)){
	if((v11_args.p_types->length)==0){
		return ;
	} else {
	}
	v11_Compiler v11_c = ((v11_Compiler){.p_buff = new4(u8, (((u8[]){})), 0), .p_scopeCount = v11_self->p_scopeCount, });

	if((v11_args.p_names)==null){
goto l_onlyTypes;
	} else {
	}
	m11_decTypeIdent_Compiler((&v11_c), (v11_args.p_types->mem)[0], (&((v11_args.p_names->mem)[0])));
	for(
	i32 v11_i = 1;
v11_i<(v11_args.p_types->length);
	(++v11_i)){
		m11_comma_Compiler((&v11_c));
		m11_space_Compiler((&v11_c));
		m11_decTypeIdent_Compiler((&v11_c), (v11_args.p_types->mem)[v11_i], (&((v11_args.p_names->mem)[v11_i])));
	}
goto l_end;
l_onlyTypes:;
	m11_type_Compiler((&v11_c), (v11_args.p_types->mem)[0]);
	for(
	i32 v11_i = 1;
v11_i<(v11_args.p_types->length);
	(++v11_i)){
		m11_comma_Compiler((&v11_c));
		m11_space_Compiler((&v11_c));
		m11_type_Compiler((&v11_c), (v11_args.p_types->mem)[v11_i]);
	}
l_end:;
	m11_append_TypeContext(v11_ctx, v11_c.p_buff->mem, v11_c.p_buff->length);
	VECTOR_FREE(v11_c.p_buff);
};
void (^m11_structType_Compiler)(v11_Compiler*, v9_StructType, v11_TypeContext*) = ^void (v11_Compiler (*v11_self), v9_StructType v11_strct, v11_TypeContext (*v11_ctx)){
	v11_Compiler v11_c = ((v11_Compiler){.p_buff = new4(i8, (((i8[]){})), 0), .p_scopeCount = v11_self->p_scopeCount, });

	m11_append_Compiler(v11_self, "struct {", 8);
	m11_pushScope_Compiler(v11_self);
	for(
	i32 v11_i = 0;
v11_i<(v11_strct.p_props->length);
	(++v11_i)){
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_decNoVal_Compiler(v11_self, (v11_strct.p_props->mem)[v11_i]->p_data.p_dec);
		m11_semicolon_Compiler(v11_self);
	}
	m11_popScope_Compiler(v11_self);
	m11_newline_Compiler(v11_self);
	m11_closeCBrace_Compiler(v11_self);
	for(
	i32 v11_i = 0;
v11_i<(v11_strct.p_methods->length);
	(++v11_i)){
		m11_semicolon_Compiler((&v11_c));
		m11_newline_Compiler((&v11_c));
		m11_indent_Compiler((&v11_c));
		m11_funcDec_Compiler((&v11_c), (v11_strct.p_methods->mem)[v11_i]->p_data.p_funcDec);
	}
	m11_append_TypeContext(v11_ctx, v11_c.p_buff->mem, v11_c.p_buff->length);
	VECTOR_FREE(v11_c.p_buff);
};
void (^m11_unionType_Compiler)(v11_Compiler*, v9_UnionType) = ^void (v11_Compiler (*v11_self), v9_UnionType v11_unon){
	m11_append_Compiler(v11_self, "union {", 7);
	m11_pushScope_Compiler(v11_self);
	for(
	i32 v11_i = 0;
v11_i<(v11_unon.p_decs->length);
	(++v11_i)){
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_decNoVal_Compiler(v11_self, (v11_unon.p_decs->mem)[v11_i]->p_data.p_dec);
		m11_semicolon_Compiler(v11_self);
	}
	m11_popScope_Compiler(v11_self);
	m11_newline_Compiler(v11_self);
	m11_closeCBrace_Compiler(v11_self);
};
void (^m11_enumType_Compiler)(v11_Compiler*, v9_EnumType) = ^void (v11_Compiler (*v11_self), v9_EnumType v11_enm){
	m11_append_Compiler(v11_self, "enum {", 6);
	m11_pushScope_Compiler(v11_self);
	for(
	i32 v11_i = 0;
v11_i<(v11_enm.p_idents->length);
	(++v11_i)){
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_ident_Compiler(v11_self, (&((v11_enm.p_idents->mem)[v11_i])));
		v9_Expr (*v11_val) = (v11_enm.p_values->mem)[v11_i];

		if(v11_val!=null){
			m11_space_Compiler(v11_self);
			m11_equal_Compiler(v11_self);
			m11_space_Compiler(v11_self);
			m11_expr_Compiler(v11_self, v11_val);
		} else {
		}
		m11_comma_Compiler(v11_self);
	}
	m11_popScope_Compiler(v11_self);
	m11_newline_Compiler(v11_self);
	m11_closeCBrace_Compiler(v11_self);
};
void (^m11_tupleType_Compiler)(v11_Compiler*, v9_TupleType) = ^void (v11_Compiler (*v11_self), v9_TupleType v11_tupl){
	m11_append_Compiler(v11_self, "struct {", 8);
	m11_pushScope_Compiler(v11_self);
	v11_TypeContext v11_ctx = ((v11_TypeContext){.p_buf = new4(i8, (((i8[]){})), 0), .p_bottom = d11_TypeContext.p_bottom, });

	for(
	i32 v11_i = 0;
v11_i<(v11_tupl.p_types->length);
	(++v11_i)){
		m11_newline_Compiler(v11_self);
		m11_indent_Compiler(v11_self);
		m11_typeRaw_Compiler(v11_self, (v11_tupl.p_types->mem)[v11_i], (&v11_ctx));
		m11_append_Compiler(v11_self, v11_ctx.p_buf->mem, v11_ctx.p_bottom);
		m11_push_Compiler(v11_self, 95);
		m11_push_Compiler(v11_self, 65+v11_i);
		m11_append_Compiler(v11_self, (v11_ctx.p_buf->mem)+(v11_ctx.p_bottom), (v11_ctx.p_buf->length)-(v11_ctx.p_bottom));
		m11_semicolon_Compiler(v11_self);
		({v11_ctx.p_buf->length = 0;});
		({v11_ctx.p_bottom = 0;});
	}
	VECTOR_FREE(v11_ctx.p_buf);
	m11_popScope_Compiler(v11_self);
	m11_newline_Compiler(v11_self);
	m11_closeCBrace_Compiler(v11_self);
};
;
#endif