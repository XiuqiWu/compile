
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTVisitor.h"


/**
 * This class provides an empty implementation of CACTVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CACTBaseVisitor : public CACTVisitor {
public:

  virtual std::any visitWholeProgram(CACTParser::WholeProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilationUnit(CACTParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(CACTParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasicType(CACTParser::BasicTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDeclaration(CACTParser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefinition(CACTParser::ConstantDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantInitialValue(CACTParser::ConstantInitialValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(CACTParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDefinition(CACTParser::VariableDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDimensions(CACTParser::ArrayDimensionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(CACTParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionReturnType(CACTParser::FunctionReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionFormalParams(CACTParser::FunctionFormalParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionFormalParam(CACTParser::FunctionFormalParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDimensionsOptional(CACTParser::ArrayDimensionsOptionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCodeBlock(CACTParser::CodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItem(CACTParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CACTParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(CACTParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(CACTParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(CACTParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftValue(CACTParser::LeftValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayIndices(CACTParser::ArrayIndicesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberValue(CACTParser::NumberValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionActualParams(CACTParser::FunctionActualParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(CACTParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(CACTParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(CACTParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicationExpression(CACTParser::MultiplicationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicationOperator(CACTParser::MultiplicationOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionExpression(CACTParser::AdditionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(CACTParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalOperator(CACTParser::RelationalOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(CACTParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityOperator(CACTParser::EqualityOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(CACTParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(CACTParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerConstant(CACTParser::IntegerConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

