
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CACTParser : public antlr4::Parser {
public:
  enum {
    CONSTANT_KEYWORD = 1, INTEGER_KEYWORD = 2, CHAR_KEYWORD = 3, DOUBLE_KEYWORD = 4, 
    FLOAT_KEYWORD = 5, VOID_KEYWORD = 6, IF_KEYWORD = 7, ELSE_KEYWORD = 8, 
    WHILE_KEYWORD = 9, BREAK_KEYWORD = 10, CONTINUE_KEYWORD = 11, RETURN_KEYWORD = 12, 
    IDENTIFIER = 13, DECIMAL_NUMBER = 14, OCTAL_NUMBER = 15, HEXADECIMAL_NUMBER = 16, 
    EXPONENT_NUMBER = 17, FLOATING_POINT_CONSTANT = 18, CHARACTER_CONSTANT = 19, 
    PLUS_OPERATOR = 20, MINUS_OPERATOR = 21, NOT_OPERATOR = 22, MULTIPLICATION_OPERATOR = 23, 
    DIVISION_OPERATOR = 24, MODULUS_OPERATOR = 25, ASSIGNMENT = 26, EQUALITY_OPERATOR = 27, 
    INEQUALITY_OPERATOR = 28, GREATER_THAN_OPERATOR = 29, LESS_THAN_OPERATOR = 30, 
    GREATER_OR_EQUAL_OPERATOR = 31, LESS_OR_EQUAL_OPERATOR = 32, LOGICAL_AND_OPERATOR = 33, 
    LOGICAL_OR_OPERATOR = 34, LEFT_PAREN = 35, RIGHT_PAREN = 36, LEFT_BRACE = 37, 
    RIGHT_BRACE = 38, LEFT_BRACKET = 39, RIGHT_BRACKET = 40, COMMA = 41, 
    SEMICOLON = 42, WHITESPACE = 43, SINGLE_LINE_COMMENT = 44, MULTI_LINE_COMMENT = 45
  };

  enum {
    RuleWholeProgram = 0, RuleCompilationUnit = 1, RuleDeclaration = 2, 
    RuleBasicType = 3, RuleConstantDeclaration = 4, RuleConstantDefinition = 5, 
    RuleConstantInitialValue = 6, RuleVariableDeclaration = 7, RuleVariableDefinition = 8, 
    RuleArrayDimensions = 9, RuleFunctionDefinition = 10, RuleFunctionReturnType = 11, 
    RuleFunctionFormalParams = 12, RuleFunctionFormalParam = 13, RuleArrayDimensionsOptional = 14, 
    RuleCodeBlock = 15, RuleBlockItem = 16, RuleStatement = 17, RuleExpression = 18, 
    RuleConstantExpression = 19, RuleCondition = 20, RuleLeftValue = 21, 
    RuleArrayIndices = 22, RuleNumberValue = 23, RuleFunctionActualParams = 24, 
    RulePrimaryExpression = 25, RuleUnaryExpression = 26, RuleUnaryOperator = 27, 
    RuleMultiplicationExpression = 28, RuleMultiplicationOperator = 29, 
    RuleAdditionExpression = 30, RuleRelationalExpression = 31, RuleRelationalOperator = 32, 
    RuleEqualityExpression = 33, RuleEqualityOperator = 34, RuleLogicalAndExpression = 35, 
    RuleLogicalOrExpression = 36, RuleIntegerConstant = 37
  };

  explicit CACTParser(antlr4::TokenStream *input);

  CACTParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CACTParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class WholeProgramContext;
  class CompilationUnitContext;
  class DeclarationContext;
  class BasicTypeContext;
  class ConstantDeclarationContext;
  class ConstantDefinitionContext;
  class ConstantInitialValueContext;
  class VariableDeclarationContext;
  class VariableDefinitionContext;
  class ArrayDimensionsContext;
  class FunctionDefinitionContext;
  class FunctionReturnTypeContext;
  class FunctionFormalParamsContext;
  class FunctionFormalParamContext;
  class ArrayDimensionsOptionalContext;
  class CodeBlockContext;
  class BlockItemContext;
  class StatementContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class ConditionContext;
  class LeftValueContext;
  class ArrayIndicesContext;
  class NumberValueContext;
  class FunctionActualParamsContext;
  class PrimaryExpressionContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class MultiplicationExpressionContext;
  class MultiplicationOperatorContext;
  class AdditionExpressionContext;
  class RelationalExpressionContext;
  class RelationalOperatorContext;
  class EqualityExpressionContext;
  class EqualityOperatorContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class IntegerConstantContext; 

  class  WholeProgramContext : public antlr4::ParserRuleContext {
  public:
    WholeProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompilationUnitContext *compilationUnit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WholeProgramContext* wholeProgram();

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<FunctionDefinitionContext *> functionDefinition();
    FunctionDefinitionContext* functionDefinition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    VariableDeclarationContext *variableDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BasicTypeContext : public antlr4::ParserRuleContext {
  public:
    BasicTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_KEYWORD();
    antlr4::tree::TerminalNode *CHAR_KEYWORD();
    antlr4::tree::TerminalNode *DOUBLE_KEYWORD();
    antlr4::tree::TerminalNode *FLOAT_KEYWORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicTypeContext* basicType();

  class  ConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTANT_KEYWORD();
    BasicTypeContext *basicType();
    std::vector<ConstantDefinitionContext *> constantDefinition();
    ConstantDefinitionContext* constantDefinition(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class  ConstantDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ConstantInitialValueContext *constantInitialValue();
    ArrayDimensionsContext *arrayDimensions();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionContext* constantDefinition();

  class  ConstantInitialValueContext : public antlr4::ParserRuleContext {
  public:
    ConstantInitialValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<ConstantInitialValueContext *> constantInitialValue();
    ConstantInitialValueContext* constantInitialValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantInitialValueContext* constantInitialValue();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    std::vector<VariableDefinitionContext *> variableDefinition();
    VariableDefinitionContext* variableDefinition(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  VariableDefinitionContext : public antlr4::ParserRuleContext {
  public:
    VariableDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArrayDimensionsContext *arrayDimensions();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ConstantInitialValueContext *constantInitialValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDefinitionContext* variableDefinition();

  class  ArrayDimensionsContext : public antlr4::ParserRuleContext {
  public:
    ArrayDimensionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LEFT_BRACKET();
    antlr4::tree::TerminalNode* LEFT_BRACKET(size_t i);
    std::vector<IntegerConstantContext *> integerConstant();
    IntegerConstantContext* integerConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_BRACKET();
    antlr4::tree::TerminalNode* RIGHT_BRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDimensionsContext* arrayDimensions();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionReturnTypeContext *functionReturnType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    CodeBlockContext *codeBlock();
    FunctionFormalParamsContext *functionFormalParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    antlr4::tree::TerminalNode *VOID_KEYWORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionReturnTypeContext* functionReturnType();

  class  FunctionFormalParamsContext : public antlr4::ParserRuleContext {
  public:
    FunctionFormalParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionFormalParamContext *> functionFormalParam();
    FunctionFormalParamContext* functionFormalParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionFormalParamsContext* functionFormalParams();

  class  FunctionFormalParamContext : public antlr4::ParserRuleContext {
  public:
    FunctionFormalParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArrayDimensionsOptionalContext *arrayDimensionsOptional();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionFormalParamContext* functionFormalParam();

  class  ArrayDimensionsOptionalContext : public antlr4::ParserRuleContext {
  public:
    ArrayDimensionsOptionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    IntegerConstantContext *integerConstant();
    ArrayDimensionsContext *arrayDimensions();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDimensionsOptionalContext* arrayDimensionsOptional();

  class  CodeBlockContext : public antlr4::ParserRuleContext {
  public:
    CodeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_BRACE();
    antlr4::tree::TerminalNode *RIGHT_BRACE();
    std::vector<BlockItemContext *> blockItem();
    BlockItemContext* blockItem(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeBlockContext* codeBlock();

  class  BlockItemContext : public antlr4::ParserRuleContext {
  public:
    BlockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockItemContext* blockItem();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeftValueContext *leftValue();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    CodeBlockContext *codeBlock();
    antlr4::tree::TerminalNode *IF_KEYWORD();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE_KEYWORD();
    antlr4::tree::TerminalNode *WHILE_KEYWORD();
    antlr4::tree::TerminalNode *BREAK_KEYWORD();
    antlr4::tree::TerminalNode *CONTINUE_KEYWORD();
    antlr4::tree::TerminalNode *RETURN_KEYWORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditionExpressionContext *additionExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberValueContext *numberValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  LeftValueContext : public antlr4::ParserRuleContext {
  public:
    LeftValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ArrayIndicesContext *arrayIndices();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftValueContext* leftValue();

  class  ArrayIndicesContext : public antlr4::ParserRuleContext {
  public:
    ArrayIndicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LEFT_BRACKET();
    antlr4::tree::TerminalNode* LEFT_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_BRACKET();
    antlr4::tree::TerminalNode* RIGHT_BRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayIndicesContext* arrayIndices();

  class  NumberValueContext : public antlr4::ParserRuleContext {
  public:
    NumberValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    antlr4::tree::TerminalNode *FLOATING_POINT_CONSTANT();
    antlr4::tree::TerminalNode *EXPONENT_NUMBER();
    antlr4::tree::TerminalNode *CHARACTER_CONSTANT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberValueContext* numberValue();

  class  FunctionActualParamsContext : public antlr4::ParserRuleContext {
  public:
    FunctionActualParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionActualParamsContext* functionActualParams();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    LeftValueContext *leftValue();
    NumberValueContext *numberValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    UnaryOperatorContext *unaryOperator();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LEFT_PAREN();
    antlr4::tree::TerminalNode *RIGHT_PAREN();
    FunctionActualParamsContext *functionActualParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *NOT_OPERATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  MultiplicationExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryExpressionContext *> unaryExpression();
    UnaryExpressionContext* unaryExpression(size_t i);
    std::vector<MultiplicationOperatorContext *> multiplicationOperator();
    MultiplicationOperatorContext* multiplicationOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicationExpressionContext* multiplicationExpression();

  class  MultiplicationOperatorContext : public antlr4::ParserRuleContext {
  public:
    MultiplicationOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLICATION_OPERATOR();
    antlr4::tree::TerminalNode *DIVISION_OPERATOR();
    antlr4::tree::TerminalNode *MODULUS_OPERATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicationOperatorContext* multiplicationOperator();

  class  AdditionExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiplicationExpressionContext *> multiplicationExpression();
    MultiplicationExpressionContext* multiplicationExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS_OPERATOR();
    antlr4::tree::TerminalNode* PLUS_OPERATOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS_OPERATOR();
    antlr4::tree::TerminalNode* MINUS_OPERATOR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionExpressionContext* additionExpression();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdditionExpressionContext *> additionExpression();
    AdditionExpressionContext* additionExpression(size_t i);
    std::vector<RelationalOperatorContext *> relationalOperator();
    RelationalOperatorContext* relationalOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  RelationalOperatorContext : public antlr4::ParserRuleContext {
  public:
    RelationalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GREATER_THAN_OPERATOR();
    antlr4::tree::TerminalNode *LESS_THAN_OPERATOR();
    antlr4::tree::TerminalNode *GREATER_OR_EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LESS_OR_EQUAL_OPERATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalOperatorContext* relationalOperator();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    std::vector<EqualityOperatorContext *> equalityOperator();
    EqualityOperatorContext* equalityOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  EqualityOperatorContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALITY_OPERATOR();
    antlr4::tree::TerminalNode *INEQUALITY_OPERATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityOperatorContext* equalityOperator();

  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGICAL_AND_OPERATOR();
    antlr4::tree::TerminalNode* LOGICAL_AND_OPERATOR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGICAL_OR_OPERATOR();
    antlr4::tree::TerminalNode* LOGICAL_OR_OPERATOR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  IntegerConstantContext : public antlr4::ParserRuleContext {
  public:
    IntegerConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_NUMBER();
    antlr4::tree::TerminalNode *OCTAL_NUMBER();
    antlr4::tree::TerminalNode *HEXADECIMAL_NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerConstantContext* integerConstant();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

