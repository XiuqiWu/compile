
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CACTParser.
 */
class  CACTVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CACTParser.
   */
    virtual std::any visitWholeProgram(CACTParser::WholeProgramContext *context) = 0;

    virtual std::any visitCompilationUnit(CACTParser::CompilationUnitContext *context) = 0;

    virtual std::any visitDeclaration(CACTParser::DeclarationContext *context) = 0;

    virtual std::any visitBasicType(CACTParser::BasicTypeContext *context) = 0;

    virtual std::any visitConstantDeclaration(CACTParser::ConstantDeclarationContext *context) = 0;

    virtual std::any visitConstantDefinition(CACTParser::ConstantDefinitionContext *context) = 0;

    virtual std::any visitConstantInitialValue(CACTParser::ConstantInitialValueContext *context) = 0;

    virtual std::any visitVariableDeclaration(CACTParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitVariableDefinition(CACTParser::VariableDefinitionContext *context) = 0;

    virtual std::any visitArrayDimensions(CACTParser::ArrayDimensionsContext *context) = 0;

    virtual std::any visitFunctionDefinition(CACTParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitFunctionReturnType(CACTParser::FunctionReturnTypeContext *context) = 0;

    virtual std::any visitFunctionFormalParams(CACTParser::FunctionFormalParamsContext *context) = 0;

    virtual std::any visitFunctionFormalParam(CACTParser::FunctionFormalParamContext *context) = 0;

    virtual std::any visitArrayDimensionsOptional(CACTParser::ArrayDimensionsOptionalContext *context) = 0;

    virtual std::any visitCodeBlock(CACTParser::CodeBlockContext *context) = 0;

    virtual std::any visitBlockItem(CACTParser::BlockItemContext *context) = 0;

    virtual std::any visitStatement(CACTParser::StatementContext *context) = 0;

    virtual std::any visitExpression(CACTParser::ExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(CACTParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitCondition(CACTParser::ConditionContext *context) = 0;

    virtual std::any visitLeftValue(CACTParser::LeftValueContext *context) = 0;

    virtual std::any visitArrayIndices(CACTParser::ArrayIndicesContext *context) = 0;

    virtual std::any visitNumberValue(CACTParser::NumberValueContext *context) = 0;

    virtual std::any visitFunctionActualParams(CACTParser::FunctionActualParamsContext *context) = 0;

    virtual std::any visitPrimaryExpression(CACTParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(CACTParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitUnaryOperator(CACTParser::UnaryOperatorContext *context) = 0;

    virtual std::any visitMultiplicationExpression(CACTParser::MultiplicationExpressionContext *context) = 0;

    virtual std::any visitMultiplicationOperator(CACTParser::MultiplicationOperatorContext *context) = 0;

    virtual std::any visitAdditionExpression(CACTParser::AdditionExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(CACTParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitRelationalOperator(CACTParser::RelationalOperatorContext *context) = 0;

    virtual std::any visitEqualityExpression(CACTParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitEqualityOperator(CACTParser::EqualityOperatorContext *context) = 0;

    virtual std::any visitLogicalAndExpression(CACTParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(CACTParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitIntegerConstant(CACTParser::IntegerConstantContext *context) = 0;


};

