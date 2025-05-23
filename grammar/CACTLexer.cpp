
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1


#include "CACTLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CACTLexerStaticData final {
  CACTLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CACTLexerStaticData(const CACTLexerStaticData&) = delete;
  CACTLexerStaticData(CACTLexerStaticData&&) = delete;
  CACTLexerStaticData& operator=(const CACTLexerStaticData&) = delete;
  CACTLexerStaticData& operator=(CACTLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cactlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CACTLexerStaticData *cactlexerLexerStaticData = nullptr;

void cactlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cactlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(cactlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CACTLexerStaticData>(
    std::vector<std::string>{
      "CONSTANT_KEYWORD", "INTEGER_KEYWORD", "CHAR_KEYWORD", "DOUBLE_KEYWORD", 
      "FLOAT_KEYWORD", "VOID_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "WHILE_KEYWORD", 
      "BREAK_KEYWORD", "CONTINUE_KEYWORD", "RETURN_KEYWORD", "IDENTIFIER", 
      "DECIMAL_NUMBER", "OCTAL_NUMBER", "HEXADECIMAL_NUMBER", "EXPONENT_NUMBER", 
      "FLOATING_POINT_CONSTANT", "CHARACTER_CONSTANT", "REGULAR_CHARACTER", 
      "ESCAPE_CHARACTER", "PLUS_OPERATOR", "MINUS_OPERATOR", "NOT_OPERATOR", 
      "MULTIPLICATION_OPERATOR", "DIVISION_OPERATOR", "MODULUS_OPERATOR", 
      "ASSIGNMENT", "EQUALITY_OPERATOR", "INEQUALITY_OPERATOR", "GREATER_THAN_OPERATOR", 
      "LESS_THAN_OPERATOR", "GREATER_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", 
      "LOGICAL_AND_OPERATOR", "LOGICAL_OR_OPERATOR", "LEFT_PAREN", "RIGHT_PAREN", 
      "LEFT_BRACE", "RIGHT_BRACE", "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA", 
      "SEMICOLON", "WHITESPACE", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'const'", "'int'", "'char'", "'double'", "'float'", "'void'", 
      "'if'", "'else'", "'while'", "'break'", "'continue'", "'return'", 
      "", "", "", "", "", "", "", "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", 
      "'='", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'&&'", "'||'", 
      "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "';'"
    },
    std::vector<std::string>{
      "", "CONSTANT_KEYWORD", "INTEGER_KEYWORD", "CHAR_KEYWORD", "DOUBLE_KEYWORD", 
      "FLOAT_KEYWORD", "VOID_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "WHILE_KEYWORD", 
      "BREAK_KEYWORD", "CONTINUE_KEYWORD", "RETURN_KEYWORD", "IDENTIFIER", 
      "DECIMAL_NUMBER", "OCTAL_NUMBER", "HEXADECIMAL_NUMBER", "EXPONENT_NUMBER", 
      "FLOATING_POINT_CONSTANT", "CHARACTER_CONSTANT", "PLUS_OPERATOR", 
      "MINUS_OPERATOR", "NOT_OPERATOR", "MULTIPLICATION_OPERATOR", "DIVISION_OPERATOR", 
      "MODULUS_OPERATOR", "ASSIGNMENT", "EQUALITY_OPERATOR", "INEQUALITY_OPERATOR", 
      "GREATER_THAN_OPERATOR", "LESS_THAN_OPERATOR", "GREATER_OR_EQUAL_OPERATOR", 
      "LESS_OR_EQUAL_OPERATOR", "LOGICAL_AND_OPERATOR", "LOGICAL_OR_OPERATOR", 
      "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE", "LEFT_BRACKET", 
      "RIGHT_BRACKET", "COMMA", "SEMICOLON", "WHITESPACE", "SINGLE_LINE_COMMENT", 
      "MULTI_LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,45,350,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,1,0,1,0,1,0,1,0,1,0,
  	1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,5,
  	12,167,8,12,10,12,12,12,170,9,12,1,13,1,13,5,13,174,8,13,10,13,12,13,
  	177,9,13,1,14,1,14,5,14,181,8,14,10,14,12,14,184,9,14,1,15,1,15,1,15,
  	1,15,3,15,190,8,15,1,15,4,15,193,8,15,11,15,12,15,194,1,16,1,16,3,16,
  	199,8,16,1,16,1,16,3,16,203,8,16,1,16,4,16,206,8,16,11,16,12,16,207,1,
  	16,3,16,211,8,16,1,17,5,17,214,8,17,10,17,12,17,217,9,17,1,17,1,17,4,
  	17,221,8,17,11,17,12,17,222,1,17,3,17,226,8,17,1,17,4,17,229,8,17,11,
  	17,12,17,230,1,17,1,17,5,17,235,8,17,10,17,12,17,238,9,17,1,17,3,17,241,
  	8,17,3,17,243,8,17,1,18,1,18,1,18,1,18,1,19,1,19,3,19,251,8,19,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,265,8,20,1,
  	21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,
  	28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,
  	33,1,33,1,34,1,34,1,34,1,35,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,
  	39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,44,4,44,320,8,44,11,
  	44,12,44,321,1,44,1,44,1,45,1,45,1,45,1,45,5,45,330,8,45,10,45,12,45,
  	333,9,45,1,45,1,45,1,46,1,46,1,46,1,46,5,46,341,8,46,10,46,12,46,344,
  	9,46,1,46,1,46,1,46,1,46,1,46,1,342,0,47,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,0,41,0,43,20,45,21,47,22,49,23,51,24,53,25,55,26,57,27,59,28,61,
  	29,63,30,65,31,67,32,69,33,71,34,73,35,75,36,77,37,79,38,81,39,83,40,
  	85,41,87,42,89,43,91,44,93,45,1,0,12,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,1,0,49,57,1,0,48,57,1,0,48,55,3,0,48,57,65,70,97,102,
  	2,0,69,69,101,101,2,0,43,43,45,45,2,0,70,70,102,102,2,0,39,39,92,92,3,
  	0,9,10,13,13,32,32,2,0,10,10,13,13,372,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,
  	1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,
  	1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,
  	0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,
  	0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,1,95,
  	1,0,0,0,3,101,1,0,0,0,5,105,1,0,0,0,7,110,1,0,0,0,9,117,1,0,0,0,11,123,
  	1,0,0,0,13,128,1,0,0,0,15,131,1,0,0,0,17,136,1,0,0,0,19,142,1,0,0,0,21,
  	148,1,0,0,0,23,157,1,0,0,0,25,164,1,0,0,0,27,171,1,0,0,0,29,178,1,0,0,
  	0,31,189,1,0,0,0,33,198,1,0,0,0,35,242,1,0,0,0,37,244,1,0,0,0,39,250,
  	1,0,0,0,41,264,1,0,0,0,43,266,1,0,0,0,45,268,1,0,0,0,47,270,1,0,0,0,49,
  	272,1,0,0,0,51,274,1,0,0,0,53,276,1,0,0,0,55,278,1,0,0,0,57,280,1,0,0,
  	0,59,283,1,0,0,0,61,286,1,0,0,0,63,288,1,0,0,0,65,290,1,0,0,0,67,293,
  	1,0,0,0,69,296,1,0,0,0,71,299,1,0,0,0,73,302,1,0,0,0,75,304,1,0,0,0,77,
  	306,1,0,0,0,79,308,1,0,0,0,81,310,1,0,0,0,83,312,1,0,0,0,85,314,1,0,0,
  	0,87,316,1,0,0,0,89,319,1,0,0,0,91,325,1,0,0,0,93,336,1,0,0,0,95,96,5,
  	99,0,0,96,97,5,111,0,0,97,98,5,110,0,0,98,99,5,115,0,0,99,100,5,116,0,
  	0,100,2,1,0,0,0,101,102,5,105,0,0,102,103,5,110,0,0,103,104,5,116,0,0,
  	104,4,1,0,0,0,105,106,5,99,0,0,106,107,5,104,0,0,107,108,5,97,0,0,108,
  	109,5,114,0,0,109,6,1,0,0,0,110,111,5,100,0,0,111,112,5,111,0,0,112,113,
  	5,117,0,0,113,114,5,98,0,0,114,115,5,108,0,0,115,116,5,101,0,0,116,8,
  	1,0,0,0,117,118,5,102,0,0,118,119,5,108,0,0,119,120,5,111,0,0,120,121,
  	5,97,0,0,121,122,5,116,0,0,122,10,1,0,0,0,123,124,5,118,0,0,124,125,5,
  	111,0,0,125,126,5,105,0,0,126,127,5,100,0,0,127,12,1,0,0,0,128,129,5,
  	105,0,0,129,130,5,102,0,0,130,14,1,0,0,0,131,132,5,101,0,0,132,133,5,
  	108,0,0,133,134,5,115,0,0,134,135,5,101,0,0,135,16,1,0,0,0,136,137,5,
  	119,0,0,137,138,5,104,0,0,138,139,5,105,0,0,139,140,5,108,0,0,140,141,
  	5,101,0,0,141,18,1,0,0,0,142,143,5,98,0,0,143,144,5,114,0,0,144,145,5,
  	101,0,0,145,146,5,97,0,0,146,147,5,107,0,0,147,20,1,0,0,0,148,149,5,99,
  	0,0,149,150,5,111,0,0,150,151,5,110,0,0,151,152,5,116,0,0,152,153,5,105,
  	0,0,153,154,5,110,0,0,154,155,5,117,0,0,155,156,5,101,0,0,156,22,1,0,
  	0,0,157,158,5,114,0,0,158,159,5,101,0,0,159,160,5,116,0,0,160,161,5,117,
  	0,0,161,162,5,114,0,0,162,163,5,110,0,0,163,24,1,0,0,0,164,168,7,0,0,
  	0,165,167,7,1,0,0,166,165,1,0,0,0,167,170,1,0,0,0,168,166,1,0,0,0,168,
  	169,1,0,0,0,169,26,1,0,0,0,170,168,1,0,0,0,171,175,7,2,0,0,172,174,7,
  	3,0,0,173,172,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,
  	176,28,1,0,0,0,177,175,1,0,0,0,178,182,5,48,0,0,179,181,7,4,0,0,180,179,
  	1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,30,1,0,0,
  	0,184,182,1,0,0,0,185,186,5,48,0,0,186,190,5,120,0,0,187,188,5,48,0,0,
  	188,190,5,88,0,0,189,185,1,0,0,0,189,187,1,0,0,0,190,192,1,0,0,0,191,
  	193,7,5,0,0,192,191,1,0,0,0,193,194,1,0,0,0,194,192,1,0,0,0,194,195,1,
  	0,0,0,195,32,1,0,0,0,196,199,3,27,13,0,197,199,3,35,17,0,198,196,1,0,
  	0,0,198,197,1,0,0,0,199,200,1,0,0,0,200,202,7,6,0,0,201,203,7,7,0,0,202,
  	201,1,0,0,0,202,203,1,0,0,0,203,205,1,0,0,0,204,206,7,3,0,0,205,204,1,
  	0,0,0,206,207,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,1,0,0,0,
  	209,211,7,8,0,0,210,209,1,0,0,0,210,211,1,0,0,0,211,34,1,0,0,0,212,214,
  	7,3,0,0,213,212,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,
  	0,216,218,1,0,0,0,217,215,1,0,0,0,218,220,5,46,0,0,219,221,7,3,0,0,220,
  	219,1,0,0,0,221,222,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,
  	0,0,0,224,226,7,8,0,0,225,224,1,0,0,0,225,226,1,0,0,0,226,243,1,0,0,0,
  	227,229,7,3,0,0,228,227,1,0,0,0,229,230,1,0,0,0,230,228,1,0,0,0,230,231,
  	1,0,0,0,231,232,1,0,0,0,232,236,5,46,0,0,233,235,7,3,0,0,234,233,1,0,
  	0,0,235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,240,1,0,0,0,238,
  	236,1,0,0,0,239,241,7,8,0,0,240,239,1,0,0,0,240,241,1,0,0,0,241,243,1,
  	0,0,0,242,215,1,0,0,0,242,228,1,0,0,0,243,36,1,0,0,0,244,245,5,39,0,0,
  	245,246,3,39,19,0,246,247,5,39,0,0,247,38,1,0,0,0,248,251,3,41,20,0,249,
  	251,8,9,0,0,250,248,1,0,0,0,250,249,1,0,0,0,251,40,1,0,0,0,252,253,5,
  	92,0,0,253,265,5,110,0,0,254,255,5,92,0,0,255,265,5,116,0,0,256,257,5,
  	92,0,0,257,265,5,39,0,0,258,259,5,92,0,0,259,265,5,34,0,0,260,261,5,92,
  	0,0,261,265,5,92,0,0,262,263,5,92,0,0,263,265,5,48,0,0,264,252,1,0,0,
  	0,264,254,1,0,0,0,264,256,1,0,0,0,264,258,1,0,0,0,264,260,1,0,0,0,264,
  	262,1,0,0,0,265,42,1,0,0,0,266,267,5,43,0,0,267,44,1,0,0,0,268,269,5,
  	45,0,0,269,46,1,0,0,0,270,271,5,33,0,0,271,48,1,0,0,0,272,273,5,42,0,
  	0,273,50,1,0,0,0,274,275,5,47,0,0,275,52,1,0,0,0,276,277,5,37,0,0,277,
  	54,1,0,0,0,278,279,5,61,0,0,279,56,1,0,0,0,280,281,5,61,0,0,281,282,5,
  	61,0,0,282,58,1,0,0,0,283,284,5,33,0,0,284,285,5,61,0,0,285,60,1,0,0,
  	0,286,287,5,62,0,0,287,62,1,0,0,0,288,289,5,60,0,0,289,64,1,0,0,0,290,
  	291,5,62,0,0,291,292,5,61,0,0,292,66,1,0,0,0,293,294,5,60,0,0,294,295,
  	5,61,0,0,295,68,1,0,0,0,296,297,5,38,0,0,297,298,5,38,0,0,298,70,1,0,
  	0,0,299,300,5,124,0,0,300,301,5,124,0,0,301,72,1,0,0,0,302,303,5,40,0,
  	0,303,74,1,0,0,0,304,305,5,41,0,0,305,76,1,0,0,0,306,307,5,123,0,0,307,
  	78,1,0,0,0,308,309,5,125,0,0,309,80,1,0,0,0,310,311,5,91,0,0,311,82,1,
  	0,0,0,312,313,5,93,0,0,313,84,1,0,0,0,314,315,5,44,0,0,315,86,1,0,0,0,
  	316,317,5,59,0,0,317,88,1,0,0,0,318,320,7,10,0,0,319,318,1,0,0,0,320,
  	321,1,0,0,0,321,319,1,0,0,0,321,322,1,0,0,0,322,323,1,0,0,0,323,324,6,
  	44,0,0,324,90,1,0,0,0,325,326,5,47,0,0,326,327,5,47,0,0,327,331,1,0,0,
  	0,328,330,8,11,0,0,329,328,1,0,0,0,330,333,1,0,0,0,331,329,1,0,0,0,331,
  	332,1,0,0,0,332,334,1,0,0,0,333,331,1,0,0,0,334,335,6,45,0,0,335,92,1,
  	0,0,0,336,337,5,47,0,0,337,338,5,42,0,0,338,342,1,0,0,0,339,341,9,0,0,
  	0,340,339,1,0,0,0,341,344,1,0,0,0,342,343,1,0,0,0,342,340,1,0,0,0,343,
  	345,1,0,0,0,344,342,1,0,0,0,345,346,5,42,0,0,346,347,5,47,0,0,347,348,
  	1,0,0,0,348,349,6,46,0,0,349,94,1,0,0,0,22,0,168,175,182,189,194,198,
  	202,207,210,215,222,225,230,236,240,242,250,264,321,331,342,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cactlexerLexerStaticData = staticData.release();
}

}

CACTLexer::CACTLexer(CharStream *input) : Lexer(input) {
  CACTLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cactlexerLexerStaticData->atn, cactlexerLexerStaticData->decisionToDFA, cactlexerLexerStaticData->sharedContextCache);
}

CACTLexer::~CACTLexer() {
  delete _interpreter;
}

std::string CACTLexer::getGrammarFileName() const {
  return "CACT.g4";
}

const std::vector<std::string>& CACTLexer::getRuleNames() const {
  return cactlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CACTLexer::getChannelNames() const {
  return cactlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CACTLexer::getModeNames() const {
  return cactlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CACTLexer::getVocabulary() const {
  return cactlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CACTLexer::getSerializedATN() const {
  return cactlexerLexerStaticData->serializedATN;
}

const atn::ATN& CACTLexer::getATN() const {
  return *cactlexerLexerStaticData->atn;
}




void CACTLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cactlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(cactlexerLexerOnceFlag, cactlexerLexerInitialize);
#endif
}
