#ifndef H_9
#define H_9
#include "internal/default.h"
#include "io.vo.h"
#include "tokens.vo.h"
typedef struct dummy_v9_IdentExpr v9_IdentExpr;
typedef struct dummy_v9_BasicLit v9_BasicLit;
typedef struct dummy_v9_Operator v9_Operator;
typedef struct dummy_v9_Args v9_Args;
typedef struct dummy_v9_FuncType v9_FuncType;
typedef struct dummy_v9_Block v9_Block;
typedef struct dummy_v9_UnaryExpr v9_UnaryExpr;
typedef struct dummy_v9_BinaryExpr v9_BinaryExpr;
typedef struct dummy_v9_TernaryExpr v9_TernaryExpr;
typedef struct dummy_v9_CallExpr v9_CallExpr;
typedef struct dummy_v9_CastExpr v9_CastExpr;
typedef struct dummy_v9_MemberExpr v9_MemberExpr;
typedef struct dummy_v9_ElementExpr v9_ElementExpr;
typedef struct dummy_v9_CompLit v9_CompLit;
typedef struct dummy_v9_ArrayLit v9_ArrayLit;
typedef struct dummy_v9_NewExpr v9_NewExpr;
typedef struct dummy_v9_SizeExpr v9_SizeExpr;
typedef struct dummy_v9_AwaitExpr v9_AwaitExpr;
typedef struct dummy_v9_FuncExpr v9_FuncExpr;
typedef union dummy_v9_ExprUnion v9_ExprUnion;
typedef struct dummy_v9_Expr v9_Expr;
typedef struct dummy_v9_BasicType v9_BasicType;
typedef struct dummy_v9_ArrayType v9_ArrayType;
typedef struct dummy_v9_ImpArrayType v9_ImpArrayType;
typedef struct dummy_v9_UnionType v9_UnionType;
typedef struct dummy_v9_EnumType v9_EnumType;
typedef struct dummy_v9_TupleType v9_TupleType;
typedef struct dummy_v9_StructType v9_StructType;
typedef struct dummy_v9_StaticType v9_StaticType;
typedef struct dummy_v9_ConstType v9_ConstType;
typedef struct dummy_v9_PromiseType v9_PromiseType;
typedef struct dummy_v9_CaptureType v9_CaptureType;
typedef struct dummy_v9_VectorType v9_VectorType;
typedef struct dummy_v9_PointerType v9_PointerType;
typedef union dummy_v9_TypeUnion v9_TypeUnion;
typedef struct dummy_v9_Type v9_Type;
typedef struct dummy_v9_Declaration v9_Declaration;
typedef struct dummy_v9_Import v9_Import;
typedef struct dummy_v9_Loop v9_Loop;
typedef struct dummy_v9_Switch v9_Switch;
typedef struct dummy_v9_IfElse v9_IfElse;
typedef struct dummy_v9_Return v9_Return;
typedef struct dummy_v9_Case v9_Case;
typedef struct dummy_v9_Assignment v9_Assignment;
typedef struct dummy_v9_Delete v9_Delete;
typedef struct dummy_v9_Export v9_Export;
typedef struct dummy_v9_Typedef v9_Typedef;
typedef struct dummy_v9_FuncDec v9_FuncDec;
typedef struct dummy_v9_Label v9_Label;
typedef struct dummy_v9_Goto v9_Goto;
typedef struct dummy_v9_ExprStmt v9_ExprStmt;
typedef union dummy_v9_StmtUnion v9_StmtUnion;
typedef struct dummy_v9_Stmt v9_Stmt;
typedef enum {
	e9_ExprType_NULL = 0,
	e9_ExprType_NEW,
	e9_ExprType_FUNC,
	e9_ExprType_CALL,
	e9_ExprType_CAST,
	e9_ExprType_AWAIT,
	e9_ExprType_IDENT,
	e9_ExprType_UNARY,
	e9_ExprType_PUNARY,
	e9_ExprType_SIZEOF,
	e9_ExprType_MEMBER,
	e9_ExprType_ARRLIT,
	e9_ExprType_BINARY,
	e9_ExprType_TERNARY,
	e9_ExprType_COMPLIT,
	e9_ExprType_ELEMENT,
	e9_ExprType_NUM_LIT,
	e9_ExprType_CHR_LIT,
	e9_ExprType_STR_LIT,
} v9_ExprType;
typedef struct dummy_v9_IdentExpr {
	v2_Token p_tok;
} v9_IdentExpr;
v9_IdentExpr d9_IdentExpr = (v9_IdentExpr){};
typedef struct dummy_v9_BasicLit {
	v2_Token p_tok;
} v9_BasicLit;
v9_BasicLit d9_BasicLit = (v9_BasicLit){};
typedef struct dummy_v9_Operator {
	v2_Token p_tok;
} v9_Operator;
v9_Operator d9_Operator = (v9_Operator){};
typedef enum {
	e9_FuncTypeEnum_ORD = 0,
	e9_FuncTypeEnum_WORK,
	e9_FuncTypeEnum_ASYNC,
	e9_FuncTypeEnum_NATIVE,
} v9_FuncTypeEnum;
typedef struct dummy_v9_Args {
	VECTOR_TYPE(v9_IdentExpr)p_names;
	VECTOR_TYPE(v9_Type*)p_types;
} v9_Args;
v9_Args d9_Args = (v9_Args){};
typedef struct dummy_v9_FuncType {
	v9_Args p_args;
	v9_FuncTypeEnum p_type;
	v9_Type (*p_returnType);
} v9_FuncType;
v9_FuncType d9_FuncType = (v9_FuncType){};
typedef struct dummy_v9_Block {
	VECTOR_TYPE(v9_Stmt*)p_stmts;
} v9_Block;
v9_Block d9_Block = (v9_Block){};
typedef struct dummy_v9_UnaryExpr {
	v9_Expr (*p_expr);
	v9_Operator (*p_op);
} v9_UnaryExpr;
v9_UnaryExpr d9_UnaryExpr = (v9_UnaryExpr){};
typedef struct dummy_v9_BinaryExpr {
	v9_Expr (*p_left);
	v9_Expr (*p_right);
	v9_Operator (*p_op);
} v9_BinaryExpr;
v9_BinaryExpr d9_BinaryExpr = (v9_BinaryExpr){};
typedef struct dummy_v9_TernaryExpr {
	v9_Expr (*p_left);
	v9_Expr (*p_cond);
	v9_Expr (*p_right);
} v9_TernaryExpr;
v9_TernaryExpr d9_TernaryExpr = (v9_TernaryExpr){};
typedef struct dummy_v9_CallExpr {
	v9_Expr (*p_function);
	VECTOR_TYPE(v9_Expr*)p_args;
} v9_CallExpr;
v9_CallExpr d9_CallExpr = (v9_CallExpr){};
typedef struct dummy_v9_CastExpr {
	v9_Expr (*p_expr);
	v9_Type (*p_type);
} v9_CastExpr;
v9_CastExpr d9_CastExpr = (v9_CastExpr){};
typedef struct dummy_v9_MemberExpr {
	v9_Expr (*p_base);
	v9_IdentExpr (*p_prop);
} v9_MemberExpr;
v9_MemberExpr d9_MemberExpr = (v9_MemberExpr){};
typedef struct dummy_v9_ElementExpr {
	v9_Expr (*p_base);
	v9_Expr (*p_index);
} v9_ElementExpr;
v9_ElementExpr d9_ElementExpr = (v9_ElementExpr){};
typedef struct dummy_v9_CompLit {
	v9_Type (*p_type);
	VECTOR_TYPE(v9_Expr*)p_values;
	VECTOR_TYPE(v9_IdentExpr)p_fields;
} v9_CompLit;
v9_CompLit d9_CompLit = (v9_CompLit){};
typedef struct dummy_v9_ArrayLit {
	VECTOR_TYPE(v9_Expr*)p_elements;
} v9_ArrayLit;
v9_ArrayLit d9_ArrayLit = (v9_ArrayLit){};
typedef struct dummy_v9_NewExpr {
	v9_Type (*p_type);
	v9_Expr (*p_val);
} v9_NewExpr;
v9_NewExpr d9_NewExpr = (v9_NewExpr){};
typedef struct dummy_v9_SizeExpr {
	v9_Expr (*p_expr);
} v9_SizeExpr;
v9_SizeExpr d9_SizeExpr = (v9_SizeExpr){};
typedef struct dummy_v9_AwaitExpr {
	v9_Expr (*p_expr);
} v9_AwaitExpr;
v9_AwaitExpr d9_AwaitExpr = (v9_AwaitExpr){};
typedef struct dummy_v9_FuncExpr {
	v9_FuncType (*p_type);
	v9_Block p_body;
} v9_FuncExpr;
v9_FuncExpr d9_FuncExpr = (v9_FuncExpr){};
typedef union dummy_v9_ExprUnion {
	v9_UnaryExpr p_unary;
	v9_BinaryExpr p_binary;
	v9_TernaryExpr p_ternary;
	v9_CallExpr p_callExpr;
	v9_SizeExpr p_sizeExpr;
	v9_CastExpr p_castExpr;
	v9_CompLit p_compLit;
	v9_ArrayLit p_arrayLit;
	v9_NewExpr p_newExpr;
	v9_FuncExpr p_funcExpr;
	v9_AwaitExpr p_awaitExpr;
	v9_MemberExpr p_member;
	v9_ElementExpr p_element;
} v9_ExprUnion;
typedef struct dummy_v9_Expr {
	i8 (*p_buff);
	size_t p_len;
	size_t p_line;
	size_t p_column;
	v9_ExprType p_type;
	v9_ExprUnion p_data;
	v9_Type (*p_eType);
} v9_Expr;
v9_Expr d9_Expr = (v9_Expr){};
void (^m9_print_Expr)(v9_Expr*);
void (^m9_println_Expr)(v9_Expr*);
typedef enum {
	e9_TypeType_NULL = 0,
	e9_TypeType_BASIC,
	e9_TypeType_FUNC,
	e9_TypeType_ENUM,
	e9_TypeType_TUPLE,
	e9_TypeType_CONST,
	e9_TypeType_ARRAY,
	e9_TypeType_UNION,
	e9_TypeType_STRUCT,
	e9_TypeType_VECTOR,
	e9_TypeType_STATIC,
	e9_TypeType_CAPTURE,
	e9_TypeType_PROMISE,
	e9_TypeType_POINTER,
	e9_TypeType_IMPARRAY,
} v9_TypeType;
typedef struct dummy_v9_BasicType {
	v9_Expr (*p_expr);
} v9_BasicType;
v9_BasicType d9_BasicType = (v9_BasicType){};
typedef struct dummy_v9_ArrayType {
	v9_BasicLit (*p_size);
	v9_Type (*p_base);
} v9_ArrayType;
v9_ArrayType d9_ArrayType = (v9_ArrayType){};
typedef struct dummy_v9_ImpArrayType {
	v9_Type (*p_base);
} v9_ImpArrayType;
v9_ImpArrayType d9_ImpArrayType = (v9_ImpArrayType){};
typedef struct dummy_v9_UnionType {
	VECTOR_TYPE(v9_Stmt*)p_decs;
} v9_UnionType;
v9_UnionType d9_UnionType = (v9_UnionType){};
typedef struct dummy_v9_EnumType {
	VECTOR_TYPE(v9_IdentExpr)p_idents;
	VECTOR_TYPE(v9_Expr*)p_values;
} v9_EnumType;
v9_EnumType d9_EnumType = (v9_EnumType){};
typedef struct dummy_v9_TupleType {
	VECTOR_TYPE(v9_Type*)p_types;
} v9_TupleType;
v9_TupleType d9_TupleType = (v9_TupleType){};
typedef struct dummy_v9_StructType {
	VECTOR_TYPE(v9_Stmt*)p_props;
	VECTOR_TYPE(v9_Stmt*)p_methods;
	VECTOR_TYPE(v9_Expr*)p_superStructs;
} v9_StructType;
v9_StructType d9_StructType = (v9_StructType){};
typedef struct dummy_v9_StaticType {
	v9_Type (*p_base);
} v9_StaticType;
v9_StaticType d9_StaticType = (v9_StaticType){};
typedef struct dummy_v9_ConstType {
	v9_Type (*p_base);
} v9_ConstType;
v9_ConstType d9_ConstType = (v9_ConstType){};
typedef struct dummy_v9_PromiseType {
	v9_Type (*p_base);
} v9_PromiseType;
v9_PromiseType d9_PromiseType = (v9_PromiseType){};
typedef struct dummy_v9_CaptureType {
	v9_Type (*p_base);
} v9_CaptureType;
v9_CaptureType d9_CaptureType = (v9_CaptureType){};
typedef struct dummy_v9_VectorType {
	v9_Type (*p_base);
} v9_VectorType;
v9_VectorType d9_VectorType = (v9_VectorType){};
typedef struct dummy_v9_PointerType {
	v9_Type (*p_base);
} v9_PointerType;
v9_PointerType d9_PointerType = (v9_PointerType){};
typedef union dummy_v9_TypeUnion {
	v9_FuncType p_fnc;
	v9_EnumType p_enm;
	v9_TupleType p_tupl;
	v9_ConstType p_cnst;
	v9_UnionType p_unon;
	v9_ArrayType p_array;
	v9_BasicType p_basic;
	v9_StructType p_strct;
	v9_StaticType p_statc;
	v9_PromiseType p_promse;
	v9_VectorType p_vector;
	v9_CaptureType p_cpture;
	v9_PointerType p_pointer;
	v9_ImpArrayType p_impArray;
} v9_TypeUnion;
typedef struct dummy_v9_Type {
	i8 (*p_buff);
	size_t p_len;
	size_t p_line;
	size_t p_column;
	v9_TypeType p_type;
	v9_TypeUnion p_data;
} v9_Type;
v9_Type d9_Type = (v9_Type){};
void (^m9_print_Type)(v9_Type*);
void (^m9_println_Type)(v9_Type*);
typedef enum {
	e9_StmtType_NULL = 0,
	e9_StmtType_DEC,
	e9_StmtType_LOOP,
	e9_StmtType_EXPR,
	e9_StmtType_GOTO,
	e9_StmtType_FUNC,
	e9_StmtType_CASE,
	e9_StmtType_BLOCK,
	e9_StmtType_LABEL,
	e9_StmtType_BREAK,
	e9_StmtType_ASSIGN,
	e9_StmtType_EXPORT,
	e9_StmtType_IMPORT,
	e9_StmtType_SWITCH,
	e9_StmtType_RETURN,
	e9_StmtType_DELETE,
	e9_StmtType_DEFAULT,
	e9_StmtType_IF_ELSE,
	e9_StmtType_TYPEDEF,
	e9_StmtType_CONTINUE,
} v9_StmtType;
typedef struct dummy_v9_Declaration {
	VECTOR_TYPE(v9_Expr*)p_idents;
	VECTOR_TYPE(v9_Type*)p_types;
	VECTOR_TYPE(v9_Expr*)p_values;
} v9_Declaration;
v9_Declaration d9_Declaration = (v9_Declaration){};
typedef struct dummy_v9_Import {
	v9_BasicLit (*p_path);
	v9_IdentExpr (*p_name);
} v9_Import;
v9_Import d9_Import = (v9_Import){};
typedef struct dummy_v9_Loop {
	v9_Stmt (*p_initStmt);
	v9_Stmt (*p_loopStmt);
	v9_Expr (*p_cond);
	v9_Block p_block;
} v9_Loop;
v9_Loop d9_Loop = (v9_Loop){};
typedef struct dummy_v9_Switch {
	v9_Expr (*p_expr);
	v9_Block p_block;
	v9_Stmt (*p_initStmt);
} v9_Switch;
v9_Switch d9_Switch = (v9_Switch){};
typedef struct dummy_v9_IfElse {
	VECTOR_TYPE(v9_Expr*)p_conds;
	VECTOR_TYPE(v9_Stmt*)p_initStmts;
	VECTOR_TYPE(v9_Block)p_blocks;
	v9_Block p_elseBlock;
} v9_IfElse;
v9_IfElse d9_IfElse = (v9_IfElse){};
typedef struct dummy_v9_Return {
	v9_Expr (*p_val);
} v9_Return;
v9_Return d9_Return = (v9_Return){};
typedef struct dummy_v9_Case {
	v9_Expr (*p_val);
} v9_Case;
v9_Case d9_Case = (v9_Case){};
typedef struct dummy_v9_Assignment {
	VECTOR_TYPE(v9_Expr*)p_vars;
	VECTOR_TYPE(v9_Expr*)p_vals;
	v9_Operator (*p_op);
} v9_Assignment;
v9_Assignment d9_Assignment = (v9_Assignment){};
typedef struct dummy_v9_Delete {
	VECTOR_TYPE(v9_Expr*)p_exprs;
} v9_Delete;
v9_Delete d9_Delete = (v9_Delete){};
typedef struct dummy_v9_Export {
	v9_Stmt (*p_stmt);
} v9_Export;
v9_Export d9_Export = (v9_Export){};
typedef struct dummy_v9_Typedef {
	v9_IdentExpr (*p_name);
	v9_Type (*p_type);
} v9_Typedef;
v9_Typedef d9_Typedef = (v9_Typedef){};
typedef struct dummy_v9_FuncDec {
	v9_IdentExpr (*p_name);
	v9_FuncType p_type;
	v9_Block p_body;
} v9_FuncDec;
v9_FuncDec d9_FuncDec = (v9_FuncDec){};
typedef struct dummy_v9_Label {
	v9_IdentExpr (*p_name);
} v9_Label;
v9_Label d9_Label = (v9_Label){};
typedef struct dummy_v9_Goto {
	v9_IdentExpr (*p_name);
} v9_Goto;
v9_Goto d9_Goto = (v9_Goto){};
typedef struct dummy_v9_ExprStmt {
	v9_Expr (*p_expr);
} v9_ExprStmt;
v9_ExprStmt d9_ExprStmt = (v9_ExprStmt){};
typedef union dummy_v9_StmtUnion {
	v9_Delete p_del;
	v9_Declaration p_dec;
	v9_Loop p_loop;
	v9_Typedef p_tdef;
	v9_Block p_block;
	v9_Return p_rturn;
	v9_Import p_imprt;
	v9_Switch p_swtch;
	v9_Export p_exprt;
	v9_IfElse p_ifElse;
	v9_Assignment p_assign;
	v9_FuncDec p_funcDec;
	v9_ExprStmt p_expr;
	v9_Label p_labl;
	v9_Goto p_gotoh;
	v9_Case p_casee;
} v9_StmtUnion;
typedef struct dummy_v9_Stmt {
	i8 (*p_buff);
	size_t p_len;
	size_t p_line;
	size_t p_column;
	v9_StmtType p_type;
	v9_StmtUnion p_data;
} v9_Stmt;
v9_Stmt d9_Stmt = (v9_Stmt){};
void (^m9_print_Stmt)(v9_Type*);
void (^m9_println_Stmt)(v9_Type*);
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;;;
;
;
;;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;;
void (^m9_print_Expr)(v9_Expr*) = ^void (v9_Expr (*v9_self)){
	v5_printn(((i8*)(v9_self->p_buff)), v9_self->p_len);
};
void (^m9_println_Expr)(v9_Expr*) = ^void (v9_Expr (*v9_self)){
	v5_printnln(((i8*)(v9_self->p_buff)), v9_self->p_len);
};
;;
;
;
;
;
;
;
;
;
;
;
;
;
;;
void (^m9_print_Type)(v9_Type*) = ^void (v9_Type (*v9_self)){
	v5_printn(((i8*)(v9_self->p_buff)), v9_self->p_len);
};
void (^m9_println_Type)(v9_Type*) = ^void (v9_Type (*v9_self)){
	v5_printnln(((i8*)(v9_self->p_buff)), v9_self->p_len);
};
;;
;
;
;
;
;
;

;
;
;
;
;
;
;
;;
void (^m9_print_Stmt)(v9_Type*) = ^void (v9_Type (*v9_self)){
	v5_printn(v9_self->p_buff, v9_self->p_len);
};
void (^m9_println_Stmt)(v9_Type*) = ^void (v9_Type (*v9_self)){
	v5_printnln(v9_self->p_buff, v9_self->p_len);
};
;
#endif