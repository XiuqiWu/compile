grammar CACT;

@header {
    #include <vector>
}

/**************** Parser Rules ****************/

wholeProgram
    : compilationUnit
    ;

compilationUnit
    : (declaration | functionDefinition)+ EOF
    ;

declaration
    : constantDeclaration
    | variableDeclaration
    ;

basicType
    : INTEGER_KEYWORD
    | CHAR_KEYWORD
    | DOUBLE_KEYWORD
    | FLOAT_KEYWORD
    ;

constantDeclaration
    : CONSTANT_KEYWORD basicType constantDefinition (COMMA constantDefinition)* SEMICOLON
    ;

constantDefinition
    : IDENTIFIER arrayDimensions? ASSIGNMENT constantInitialValue
    ;

constantInitialValue
    : constantExpression
    | LEFT_BRACE (constantInitialValue (COMMA constantInitialValue)* )? RIGHT_BRACE
    ;

variableDeclaration
    : basicType variableDefinition (COMMA variableDefinition)* SEMICOLON
    ;

variableDefinition
    : IDENTIFIER arrayDimensions? (ASSIGNMENT constantInitialValue)?
    ;

arrayDimensions
    : (LEFT_BRACKET integerConstant RIGHT_BRACKET)+
    ;

functionDefinition
    : functionReturnType IDENTIFIER LEFT_PAREN functionFormalParams? RIGHT_PAREN codeBlock
    ;

functionReturnType
    : basicType
    | VOID_KEYWORD
    ;

functionFormalParams
    : functionFormalParam (COMMA functionFormalParam)*
    ;

functionFormalParam
    : basicType IDENTIFIER arrayDimensionsOptional?
    ;

arrayDimensionsOptional
    : LEFT_BRACKET integerConstant? RIGHT_BRACKET arrayDimensions?
    ;

codeBlock
    : LEFT_BRACE blockItem* RIGHT_BRACE
    ;

blockItem
    : declaration
    | statement
    ;

statement
    : leftValue ASSIGNMENT expression SEMICOLON
    | codeBlock
    | IF_KEYWORD LEFT_PAREN condition RIGHT_PAREN statement (ELSE_KEYWORD statement)?
    | WHILE_KEYWORD LEFT_PAREN condition RIGHT_PAREN statement
    | BREAK_KEYWORD SEMICOLON
    | CONTINUE_KEYWORD SEMICOLON
    | RETURN_KEYWORD expression? SEMICOLON
    | expression? SEMICOLON
    ;

/************* Expressions *************/

expression
    : additionExpression
    ;

constantExpression
    : numberValue
    ;

condition
    : logicalOrExpression
    ;

leftValue
    : IDENTIFIER arrayIndices?
    ;

arrayIndices
    : (LEFT_BRACKET expression RIGHT_BRACKET)+
    ;

numberValue
    : integerConstant
    | FLOATING_POINT_CONSTANT
    | EXPONENT_NUMBER
    | CHARACTER_CONSTANT
    ;

functionActualParams
    : expression (COMMA expression)*
    ;

primaryExpression
    : LEFT_PAREN expression RIGHT_PAREN
    | leftValue
    | numberValue
    ;

unaryExpression
    : primaryExpression
    | unaryOperator unaryExpression
    | IDENTIFIER LEFT_PAREN functionActualParams? RIGHT_PAREN
    ;

unaryOperator
    : PLUS_OPERATOR
    | MINUS_OPERATOR
    | NOT_OPERATOR
    ;

multiplicationExpression
    : unaryExpression (multiplicationOperator unaryExpression)*
    ;

multiplicationOperator
    : MULTIPLICATION_OPERATOR
    | DIVISION_OPERATOR
    | MODULUS_OPERATOR
    ;

additionExpression
    : multiplicationExpression ((PLUS_OPERATOR | MINUS_OPERATOR) multiplicationExpression)*
    ;

relationalExpression
    : additionExpression (relationalOperator additionExpression)*
    ;

relationalOperator
    : GREATER_THAN_OPERATOR
    | LESS_THAN_OPERATOR
    | GREATER_OR_EQUAL_OPERATOR
    | LESS_OR_EQUAL_OPERATOR
    ;

equalityExpression
    : relationalExpression (equalityOperator relationalExpression)*
    ;

equalityOperator
    : EQUALITY_OPERATOR
    | INEQUALITY_OPERATOR
    ;

logicalAndExpression
    : equalityExpression (LOGICAL_AND_OPERATOR equalityExpression)*
    ;

logicalOrExpression
    : logicalAndExpression (LOGICAL_OR_OPERATOR logicalAndExpression)*
    ;

integerConstant
    : DECIMAL_NUMBER
    | OCTAL_NUMBER
    | HEXADECIMAL_NUMBER
    ;

/**************** Lexer Rules ****************/

CONSTANT_KEYWORD    : 'const';
INTEGER_KEYWORD     : 'int';
CHAR_KEYWORD        : 'char';
DOUBLE_KEYWORD      : 'double';
FLOAT_KEYWORD       : 'float';
VOID_KEYWORD        : 'void';

IF_KEYWORD          : 'if';
ELSE_KEYWORD        : 'else';
WHILE_KEYWORD       : 'while';
BREAK_KEYWORD       : 'break';
CONTINUE_KEYWORD    : 'continue';
RETURN_KEYWORD      : 'return';

IDENTIFIER          : [a-zA-Z_][a-zA-Z_0-9]*;

DECIMAL_NUMBER      : [1-9][0-9]*;
OCTAL_NUMBER        : '0' [0-7]*;
HEXADECIMAL_NUMBER  : ('0x' | '0X') [0-9a-fA-F]+;

EXPONENT_NUMBER
    : (DECIMAL_NUMBER | FLOATING_POINT_CONSTANT) [eE] [+\-]? [0-9]+ [fF]?
    ;

FLOATING_POINT_CONSTANT
    : [0-9]* '.' [0-9]+ [fF]? 
    | [0-9]+ '.' [0-9]* [fF]?
    ;

CHARACTER_CONSTANT
    : '\'' REGULAR_CHARACTER '\''
    ;

fragment REGULAR_CHARACTER
    : ESCAPE_CHARACTER
    | ~['\\]
    ;

fragment ESCAPE_CHARACTER
    : '\\n'
    | '\\t'
    | '\\\''
    | '\\"'
    | '\\\\'
    | '\\0'
    ;

PLUS_OPERATOR       : '+';
MINUS_OPERATOR      : '-';
NOT_OPERATOR        : '!';

MULTIPLICATION_OPERATOR : '*';
DIVISION_OPERATOR   : '/';
MODULUS_OPERATOR    : '%';

ASSIGNMENT          : '=';
EQUALITY_OPERATOR   : '==';
INEQUALITY_OPERATOR : '!=';

GREATER_THAN_OPERATOR      : '>';
LESS_THAN_OPERATOR         : '<';
GREATER_OR_EQUAL_OPERATOR  : '>=';
LESS_OR_EQUAL_OPERATOR     : '<=';

LOGICAL_AND_OPERATOR : '&&';
LOGICAL_OR_OPERATOR  : '||';

LEFT_PAREN      : '(';
RIGHT_PAREN     : ')';
LEFT_BRACE      : '{';
RIGHT_BRACE     : '}';
LEFT_BRACKET    : '[';
RIGHT_BRACKET   : ']';
COMMA           : ',';
SEMICOLON       : ';';

WHITESPACE : [ \t\r\n]+ -> skip;

SINGLE_LINE_COMMENT : '//' ~[\r\n]* -> skip;

MULTI_LINE_COMMENT  : '/*' .*? '*/' -> skip;
