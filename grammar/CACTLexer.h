
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CACTLexer : public antlr4::Lexer {
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

  explicit CACTLexer(antlr4::CharStream *input);

  ~CACTLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

