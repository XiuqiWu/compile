
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1


#include "CACTVisitor.h"

#include "CACTParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CACTParserStaticData final {
  CACTParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CACTParserStaticData(const CACTParserStaticData&) = delete;
  CACTParserStaticData(CACTParserStaticData&&) = delete;
  CACTParserStaticData& operator=(const CACTParserStaticData&) = delete;
  CACTParserStaticData& operator=(CACTParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cactParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CACTParserStaticData *cactParserStaticData = nullptr;

void cactParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cactParserStaticData != nullptr) {
    return;
  }
#else
  assert(cactParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CACTParserStaticData>(
    std::vector<std::string>{
      "wholeProgram", "compilationUnit", "declaration", "basicType", "constantDeclaration", 
      "constantDefinition", "constantInitialValue", "variableDeclaration", 
      "variableDefinition", "arrayDimensions", "functionDefinition", "functionReturnType", 
      "functionFormalParams", "functionFormalParam", "arrayDimensionsOptional", 
      "codeBlock", "blockItem", "statement", "expression", "constantExpression", 
      "condition", "leftValue", "arrayIndices", "numberValue", "functionActualParams", 
      "primaryExpression", "unaryExpression", "unaryOperator", "multiplicationExpression", 
      "multiplicationOperator", "additionExpression", "relationalExpression", 
      "relationalOperator", "equalityExpression", "equalityOperator", "logicalAndExpression", 
      "logicalOrExpression", "integerConstant"
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
  	4,1,45,350,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,1,0,1,0,1,1,1,1,4,1,81,8,1,11,1,12,1,82,1,1,1,
  	1,1,2,1,2,3,2,89,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,98,8,4,10,4,12,4,
  	101,9,4,1,4,1,4,1,5,1,5,3,5,107,8,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,5,
  	6,117,8,6,10,6,12,6,120,9,6,3,6,122,8,6,1,6,3,6,125,8,6,1,7,1,7,1,7,1,
  	7,5,7,131,8,7,10,7,12,7,134,9,7,1,7,1,7,1,8,1,8,3,8,140,8,8,1,8,1,8,3,
  	8,144,8,8,1,9,1,9,1,9,1,9,4,9,150,8,9,11,9,12,9,151,1,10,1,10,1,10,1,
  	10,3,10,158,8,10,1,10,1,10,1,10,1,11,1,11,3,11,165,8,11,1,12,1,12,1,12,
  	5,12,170,8,12,10,12,12,12,173,9,12,1,13,1,13,1,13,3,13,178,8,13,1,14,
  	1,14,3,14,182,8,14,1,14,1,14,3,14,186,8,14,1,15,1,15,5,15,190,8,15,10,
  	15,12,15,193,9,15,1,15,1,15,1,16,1,16,3,16,199,8,16,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,214,8,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,228,8,17,1,
  	17,1,17,3,17,232,8,17,1,17,3,17,235,8,17,1,18,1,18,1,19,1,19,1,20,1,20,
  	1,21,1,21,3,21,245,8,21,1,22,1,22,1,22,1,22,4,22,251,8,22,11,22,12,22,
  	252,1,23,1,23,1,23,1,23,3,23,259,8,23,1,24,1,24,1,24,5,24,264,8,24,10,
  	24,12,24,267,9,24,1,25,1,25,1,25,1,25,1,25,1,25,3,25,275,8,25,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,3,26,284,8,26,1,26,3,26,287,8,26,1,27,1,27,
  	1,28,1,28,1,28,1,28,5,28,295,8,28,10,28,12,28,298,9,28,1,29,1,29,1,30,
  	1,30,1,30,5,30,305,8,30,10,30,12,30,308,9,30,1,31,1,31,1,31,1,31,5,31,
  	314,8,31,10,31,12,31,317,9,31,1,32,1,32,1,33,1,33,1,33,1,33,5,33,325,
  	8,33,10,33,12,33,328,9,33,1,34,1,34,1,35,1,35,1,35,5,35,335,8,35,10,35,
  	12,35,338,9,35,1,36,1,36,1,36,5,36,343,8,36,10,36,12,36,346,9,36,1,37,
  	1,37,1,37,0,0,38,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,
  	38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,0,7,1,0,2,5,
  	1,0,20,22,1,0,23,25,1,0,20,21,1,0,29,32,1,0,27,28,1,0,14,16,358,0,76,
  	1,0,0,0,2,80,1,0,0,0,4,88,1,0,0,0,6,90,1,0,0,0,8,92,1,0,0,0,10,104,1,
  	0,0,0,12,124,1,0,0,0,14,126,1,0,0,0,16,137,1,0,0,0,18,149,1,0,0,0,20,
  	153,1,0,0,0,22,164,1,0,0,0,24,166,1,0,0,0,26,174,1,0,0,0,28,179,1,0,0,
  	0,30,187,1,0,0,0,32,198,1,0,0,0,34,234,1,0,0,0,36,236,1,0,0,0,38,238,
  	1,0,0,0,40,240,1,0,0,0,42,242,1,0,0,0,44,250,1,0,0,0,46,258,1,0,0,0,48,
  	260,1,0,0,0,50,274,1,0,0,0,52,286,1,0,0,0,54,288,1,0,0,0,56,290,1,0,0,
  	0,58,299,1,0,0,0,60,301,1,0,0,0,62,309,1,0,0,0,64,318,1,0,0,0,66,320,
  	1,0,0,0,68,329,1,0,0,0,70,331,1,0,0,0,72,339,1,0,0,0,74,347,1,0,0,0,76,
  	77,3,2,1,0,77,1,1,0,0,0,78,81,3,4,2,0,79,81,3,20,10,0,80,78,1,0,0,0,80,
  	79,1,0,0,0,81,82,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,84,1,0,0,0,84,
  	85,5,0,0,1,85,3,1,0,0,0,86,89,3,8,4,0,87,89,3,14,7,0,88,86,1,0,0,0,88,
  	87,1,0,0,0,89,5,1,0,0,0,90,91,7,0,0,0,91,7,1,0,0,0,92,93,5,1,0,0,93,94,
  	3,6,3,0,94,99,3,10,5,0,95,96,5,41,0,0,96,98,3,10,5,0,97,95,1,0,0,0,98,
  	101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,99,1,0,0,
  	0,102,103,5,42,0,0,103,9,1,0,0,0,104,106,5,13,0,0,105,107,3,18,9,0,106,
  	105,1,0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,109,5,26,0,0,109,110,
  	3,12,6,0,110,11,1,0,0,0,111,125,3,38,19,0,112,121,5,37,0,0,113,118,3,
  	12,6,0,114,115,5,41,0,0,115,117,3,12,6,0,116,114,1,0,0,0,117,120,1,0,
  	0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,121,
  	113,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,125,5,38,0,0,124,111,
  	1,0,0,0,124,112,1,0,0,0,125,13,1,0,0,0,126,127,3,6,3,0,127,132,3,16,8,
  	0,128,129,5,41,0,0,129,131,3,16,8,0,130,128,1,0,0,0,131,134,1,0,0,0,132,
  	130,1,0,0,0,132,133,1,0,0,0,133,135,1,0,0,0,134,132,1,0,0,0,135,136,5,
  	42,0,0,136,15,1,0,0,0,137,139,5,13,0,0,138,140,3,18,9,0,139,138,1,0,0,
  	0,139,140,1,0,0,0,140,143,1,0,0,0,141,142,5,26,0,0,142,144,3,12,6,0,143,
  	141,1,0,0,0,143,144,1,0,0,0,144,17,1,0,0,0,145,146,5,39,0,0,146,147,3,
  	74,37,0,147,148,5,40,0,0,148,150,1,0,0,0,149,145,1,0,0,0,150,151,1,0,
  	0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,19,1,0,0,0,153,154,3,22,11,0,
  	154,155,5,13,0,0,155,157,5,35,0,0,156,158,3,24,12,0,157,156,1,0,0,0,157,
  	158,1,0,0,0,158,159,1,0,0,0,159,160,5,36,0,0,160,161,3,30,15,0,161,21,
  	1,0,0,0,162,165,3,6,3,0,163,165,5,6,0,0,164,162,1,0,0,0,164,163,1,0,0,
  	0,165,23,1,0,0,0,166,171,3,26,13,0,167,168,5,41,0,0,168,170,3,26,13,0,
  	169,167,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,25,
  	1,0,0,0,173,171,1,0,0,0,174,175,3,6,3,0,175,177,5,13,0,0,176,178,3,28,
  	14,0,177,176,1,0,0,0,177,178,1,0,0,0,178,27,1,0,0,0,179,181,5,39,0,0,
  	180,182,3,74,37,0,181,180,1,0,0,0,181,182,1,0,0,0,182,183,1,0,0,0,183,
  	185,5,40,0,0,184,186,3,18,9,0,185,184,1,0,0,0,185,186,1,0,0,0,186,29,
  	1,0,0,0,187,191,5,37,0,0,188,190,3,32,16,0,189,188,1,0,0,0,190,193,1,
  	0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,194,1,0,0,0,193,191,1,0,0,0,
  	194,195,5,38,0,0,195,31,1,0,0,0,196,199,3,4,2,0,197,199,3,34,17,0,198,
  	196,1,0,0,0,198,197,1,0,0,0,199,33,1,0,0,0,200,201,3,42,21,0,201,202,
  	5,26,0,0,202,203,3,36,18,0,203,204,5,42,0,0,204,235,1,0,0,0,205,235,3,
  	30,15,0,206,207,5,7,0,0,207,208,5,35,0,0,208,209,3,40,20,0,209,210,5,
  	36,0,0,210,213,3,34,17,0,211,212,5,8,0,0,212,214,3,34,17,0,213,211,1,
  	0,0,0,213,214,1,0,0,0,214,235,1,0,0,0,215,216,5,9,0,0,216,217,5,35,0,
  	0,217,218,3,40,20,0,218,219,5,36,0,0,219,220,3,34,17,0,220,235,1,0,0,
  	0,221,222,5,10,0,0,222,235,5,42,0,0,223,224,5,11,0,0,224,235,5,42,0,0,
  	225,227,5,12,0,0,226,228,3,36,18,0,227,226,1,0,0,0,227,228,1,0,0,0,228,
  	229,1,0,0,0,229,235,5,42,0,0,230,232,3,36,18,0,231,230,1,0,0,0,231,232,
  	1,0,0,0,232,233,1,0,0,0,233,235,5,42,0,0,234,200,1,0,0,0,234,205,1,0,
  	0,0,234,206,1,0,0,0,234,215,1,0,0,0,234,221,1,0,0,0,234,223,1,0,0,0,234,
  	225,1,0,0,0,234,231,1,0,0,0,235,35,1,0,0,0,236,237,3,60,30,0,237,37,1,
  	0,0,0,238,239,3,46,23,0,239,39,1,0,0,0,240,241,3,72,36,0,241,41,1,0,0,
  	0,242,244,5,13,0,0,243,245,3,44,22,0,244,243,1,0,0,0,244,245,1,0,0,0,
  	245,43,1,0,0,0,246,247,5,39,0,0,247,248,3,36,18,0,248,249,5,40,0,0,249,
  	251,1,0,0,0,250,246,1,0,0,0,251,252,1,0,0,0,252,250,1,0,0,0,252,253,1,
  	0,0,0,253,45,1,0,0,0,254,259,3,74,37,0,255,259,5,18,0,0,256,259,5,17,
  	0,0,257,259,5,19,0,0,258,254,1,0,0,0,258,255,1,0,0,0,258,256,1,0,0,0,
  	258,257,1,0,0,0,259,47,1,0,0,0,260,265,3,36,18,0,261,262,5,41,0,0,262,
  	264,3,36,18,0,263,261,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,266,
  	1,0,0,0,266,49,1,0,0,0,267,265,1,0,0,0,268,269,5,35,0,0,269,270,3,36,
  	18,0,270,271,5,36,0,0,271,275,1,0,0,0,272,275,3,42,21,0,273,275,3,46,
  	23,0,274,268,1,0,0,0,274,272,1,0,0,0,274,273,1,0,0,0,275,51,1,0,0,0,276,
  	287,3,50,25,0,277,278,3,54,27,0,278,279,3,52,26,0,279,287,1,0,0,0,280,
  	281,5,13,0,0,281,283,5,35,0,0,282,284,3,48,24,0,283,282,1,0,0,0,283,284,
  	1,0,0,0,284,285,1,0,0,0,285,287,5,36,0,0,286,276,1,0,0,0,286,277,1,0,
  	0,0,286,280,1,0,0,0,287,53,1,0,0,0,288,289,7,1,0,0,289,55,1,0,0,0,290,
  	296,3,52,26,0,291,292,3,58,29,0,292,293,3,52,26,0,293,295,1,0,0,0,294,
  	291,1,0,0,0,295,298,1,0,0,0,296,294,1,0,0,0,296,297,1,0,0,0,297,57,1,
  	0,0,0,298,296,1,0,0,0,299,300,7,2,0,0,300,59,1,0,0,0,301,306,3,56,28,
  	0,302,303,7,3,0,0,303,305,3,56,28,0,304,302,1,0,0,0,305,308,1,0,0,0,306,
  	304,1,0,0,0,306,307,1,0,0,0,307,61,1,0,0,0,308,306,1,0,0,0,309,315,3,
  	60,30,0,310,311,3,64,32,0,311,312,3,60,30,0,312,314,1,0,0,0,313,310,1,
  	0,0,0,314,317,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,63,1,0,0,0,
  	317,315,1,0,0,0,318,319,7,4,0,0,319,65,1,0,0,0,320,326,3,62,31,0,321,
  	322,3,68,34,0,322,323,3,62,31,0,323,325,1,0,0,0,324,321,1,0,0,0,325,328,
  	1,0,0,0,326,324,1,0,0,0,326,327,1,0,0,0,327,67,1,0,0,0,328,326,1,0,0,
  	0,329,330,7,5,0,0,330,69,1,0,0,0,331,336,3,66,33,0,332,333,5,33,0,0,333,
  	335,3,66,33,0,334,332,1,0,0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,337,
  	1,0,0,0,337,71,1,0,0,0,338,336,1,0,0,0,339,344,3,70,35,0,340,341,5,34,
  	0,0,341,343,3,70,35,0,342,340,1,0,0,0,343,346,1,0,0,0,344,342,1,0,0,0,
  	344,345,1,0,0,0,345,73,1,0,0,0,346,344,1,0,0,0,347,348,7,6,0,0,348,75,
  	1,0,0,0,37,80,82,88,99,106,118,121,124,132,139,143,151,157,164,171,177,
  	181,185,191,198,213,227,231,234,244,252,258,265,274,283,286,296,306,315,
  	326,336,344
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cactParserStaticData = staticData.release();
}

}

CACTParser::CACTParser(TokenStream *input) : CACTParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CACTParser::CACTParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CACTParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cactParserStaticData->atn, cactParserStaticData->decisionToDFA, cactParserStaticData->sharedContextCache, options);
}

CACTParser::~CACTParser() {
  delete _interpreter;
}

const atn::ATN& CACTParser::getATN() const {
  return *cactParserStaticData->atn;
}

std::string CACTParser::getGrammarFileName() const {
  return "CACT.g4";
}

const std::vector<std::string>& CACTParser::getRuleNames() const {
  return cactParserStaticData->ruleNames;
}

const dfa::Vocabulary& CACTParser::getVocabulary() const {
  return cactParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CACTParser::getSerializedATN() const {
  return cactParserStaticData->serializedATN;
}


//----------------- WholeProgramContext ------------------------------------------------------------------

CACTParser::WholeProgramContext::WholeProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::CompilationUnitContext* CACTParser::WholeProgramContext::compilationUnit() {
  return getRuleContext<CACTParser::CompilationUnitContext>(0);
}


size_t CACTParser::WholeProgramContext::getRuleIndex() const {
  return CACTParser::RuleWholeProgram;
}


std::any CACTParser::WholeProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitWholeProgram(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::WholeProgramContext* CACTParser::wholeProgram() {
  WholeProgramContext *_localctx = _tracker.createInstance<WholeProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CACTParser::RuleWholeProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    compilationUnit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

CACTParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::CompilationUnitContext::EOF() {
  return getToken(CACTParser::EOF, 0);
}

std::vector<CACTParser::DeclarationContext *> CACTParser::CompilationUnitContext::declaration() {
  return getRuleContexts<CACTParser::DeclarationContext>();
}

CACTParser::DeclarationContext* CACTParser::CompilationUnitContext::declaration(size_t i) {
  return getRuleContext<CACTParser::DeclarationContext>(i);
}

std::vector<CACTParser::FunctionDefinitionContext *> CACTParser::CompilationUnitContext::functionDefinition() {
  return getRuleContexts<CACTParser::FunctionDefinitionContext>();
}

CACTParser::FunctionDefinitionContext* CACTParser::CompilationUnitContext::functionDefinition(size_t i) {
  return getRuleContext<CACTParser::FunctionDefinitionContext>(i);
}


size_t CACTParser::CompilationUnitContext::getRuleIndex() const {
  return CACTParser::RuleCompilationUnit;
}


std::any CACTParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CompilationUnitContext* CACTParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 2, CACTParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(80);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(78);
        declaration();
        break;
      }

      case 2: {
        setState(79);
        functionDefinition();
        break;
      }

      default:
        break;
      }
      setState(82); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0));
    setState(84);
    match(CACTParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CACTParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ConstantDeclarationContext* CACTParser::DeclarationContext::constantDeclaration() {
  return getRuleContext<CACTParser::ConstantDeclarationContext>(0);
}

CACTParser::VariableDeclarationContext* CACTParser::DeclarationContext::variableDeclaration() {
  return getRuleContext<CACTParser::VariableDeclarationContext>(0);
}


size_t CACTParser::DeclarationContext::getRuleIndex() const {
  return CACTParser::RuleDeclaration;
}


std::any CACTParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::DeclarationContext* CACTParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, CACTParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::CONSTANT_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(86);
        constantDeclaration();
        break;
      }

      case CACTParser::INTEGER_KEYWORD:
      case CACTParser::CHAR_KEYWORD:
      case CACTParser::DOUBLE_KEYWORD:
      case CACTParser::FLOAT_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

CACTParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::BasicTypeContext::INTEGER_KEYWORD() {
  return getToken(CACTParser::INTEGER_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::BasicTypeContext::CHAR_KEYWORD() {
  return getToken(CACTParser::CHAR_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::BasicTypeContext::DOUBLE_KEYWORD() {
  return getToken(CACTParser::DOUBLE_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::BasicTypeContext::FLOAT_KEYWORD() {
  return getToken(CACTParser::FLOAT_KEYWORD, 0);
}


size_t CACTParser::BasicTypeContext::getRuleIndex() const {
  return CACTParser::RuleBasicType;
}


std::any CACTParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BasicTypeContext* CACTParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, CACTParser::RuleBasicType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

CACTParser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ConstantDeclarationContext::CONSTANT_KEYWORD() {
  return getToken(CACTParser::CONSTANT_KEYWORD, 0);
}

CACTParser::BasicTypeContext* CACTParser::ConstantDeclarationContext::basicType() {
  return getRuleContext<CACTParser::BasicTypeContext>(0);
}

std::vector<CACTParser::ConstantDefinitionContext *> CACTParser::ConstantDeclarationContext::constantDefinition() {
  return getRuleContexts<CACTParser::ConstantDefinitionContext>();
}

CACTParser::ConstantDefinitionContext* CACTParser::ConstantDeclarationContext::constantDefinition(size_t i) {
  return getRuleContext<CACTParser::ConstantDefinitionContext>(i);
}

tree::TerminalNode* CACTParser::ConstantDeclarationContext::SEMICOLON() {
  return getToken(CACTParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> CACTParser::ConstantDeclarationContext::COMMA() {
  return getTokens(CACTParser::COMMA);
}

tree::TerminalNode* CACTParser::ConstantDeclarationContext::COMMA(size_t i) {
  return getToken(CACTParser::COMMA, i);
}


size_t CACTParser::ConstantDeclarationContext::getRuleIndex() const {
  return CACTParser::RuleConstantDeclaration;
}


std::any CACTParser::ConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstantDeclarationContext* CACTParser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, CACTParser::RuleConstantDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(CACTParser::CONSTANT_KEYWORD);
    setState(93);
    basicType();
    setState(94);
    constantDefinition();
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::COMMA) {
      setState(95);
      match(CACTParser::COMMA);
      setState(96);
      constantDefinition();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(CACTParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

CACTParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ConstantDefinitionContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

tree::TerminalNode* CACTParser::ConstantDefinitionContext::ASSIGNMENT() {
  return getToken(CACTParser::ASSIGNMENT, 0);
}

CACTParser::ConstantInitialValueContext* CACTParser::ConstantDefinitionContext::constantInitialValue() {
  return getRuleContext<CACTParser::ConstantInitialValueContext>(0);
}

CACTParser::ArrayDimensionsContext* CACTParser::ConstantDefinitionContext::arrayDimensions() {
  return getRuleContext<CACTParser::ArrayDimensionsContext>(0);
}


size_t CACTParser::ConstantDefinitionContext::getRuleIndex() const {
  return CACTParser::RuleConstantDefinition;
}


std::any CACTParser::ConstantDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstantDefinition(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstantDefinitionContext* CACTParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, CACTParser::RuleConstantDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(CACTParser::IDENTIFIER);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::LEFT_BRACKET) {
      setState(105);
      arrayDimensions();
    }
    setState(108);
    match(CACTParser::ASSIGNMENT);
    setState(109);
    constantInitialValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantInitialValueContext ------------------------------------------------------------------

CACTParser::ConstantInitialValueContext::ConstantInitialValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ConstantExpressionContext* CACTParser::ConstantInitialValueContext::constantExpression() {
  return getRuleContext<CACTParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CACTParser::ConstantInitialValueContext::LEFT_BRACE() {
  return getToken(CACTParser::LEFT_BRACE, 0);
}

tree::TerminalNode* CACTParser::ConstantInitialValueContext::RIGHT_BRACE() {
  return getToken(CACTParser::RIGHT_BRACE, 0);
}

std::vector<CACTParser::ConstantInitialValueContext *> CACTParser::ConstantInitialValueContext::constantInitialValue() {
  return getRuleContexts<CACTParser::ConstantInitialValueContext>();
}

CACTParser::ConstantInitialValueContext* CACTParser::ConstantInitialValueContext::constantInitialValue(size_t i) {
  return getRuleContext<CACTParser::ConstantInitialValueContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::ConstantInitialValueContext::COMMA() {
  return getTokens(CACTParser::COMMA);
}

tree::TerminalNode* CACTParser::ConstantInitialValueContext::COMMA(size_t i) {
  return getToken(CACTParser::COMMA, i);
}


size_t CACTParser::ConstantInitialValueContext::getRuleIndex() const {
  return CACTParser::RuleConstantInitialValue;
}


std::any CACTParser::ConstantInitialValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstantInitialValue(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstantInitialValueContext* CACTParser::constantInitialValue() {
  ConstantInitialValueContext *_localctx = _tracker.createInstance<ConstantInitialValueContext>(_ctx, getState());
  enterRule(_localctx, 12, CACTParser::RuleConstantInitialValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::DECIMAL_NUMBER:
      case CACTParser::OCTAL_NUMBER:
      case CACTParser::HEXADECIMAL_NUMBER:
      case CACTParser::EXPONENT_NUMBER:
      case CACTParser::FLOATING_POINT_CONSTANT:
      case CACTParser::CHARACTER_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(111);
        constantExpression();
        break;
      }

      case CACTParser::LEFT_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(112);
        match(CACTParser::LEFT_BRACE);
        setState(121);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 137439985664) != 0)) {
          setState(113);
          constantInitialValue();
          setState(118);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CACTParser::COMMA) {
            setState(114);
            match(CACTParser::COMMA);
            setState(115);
            constantInitialValue();
            setState(120);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(123);
        match(CACTParser::RIGHT_BRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

CACTParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BasicTypeContext* CACTParser::VariableDeclarationContext::basicType() {
  return getRuleContext<CACTParser::BasicTypeContext>(0);
}

std::vector<CACTParser::VariableDefinitionContext *> CACTParser::VariableDeclarationContext::variableDefinition() {
  return getRuleContexts<CACTParser::VariableDefinitionContext>();
}

CACTParser::VariableDefinitionContext* CACTParser::VariableDeclarationContext::variableDefinition(size_t i) {
  return getRuleContext<CACTParser::VariableDefinitionContext>(i);
}

tree::TerminalNode* CACTParser::VariableDeclarationContext::SEMICOLON() {
  return getToken(CACTParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> CACTParser::VariableDeclarationContext::COMMA() {
  return getTokens(CACTParser::COMMA);
}

tree::TerminalNode* CACTParser::VariableDeclarationContext::COMMA(size_t i) {
  return getToken(CACTParser::COMMA, i);
}


size_t CACTParser::VariableDeclarationContext::getRuleIndex() const {
  return CACTParser::RuleVariableDeclaration;
}


std::any CACTParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VariableDeclarationContext* CACTParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, CACTParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    basicType();
    setState(127);
    variableDefinition();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::COMMA) {
      setState(128);
      match(CACTParser::COMMA);
      setState(129);
      variableDefinition();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
    match(CACTParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDefinitionContext ------------------------------------------------------------------

CACTParser::VariableDefinitionContext::VariableDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::VariableDefinitionContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

CACTParser::ArrayDimensionsContext* CACTParser::VariableDefinitionContext::arrayDimensions() {
  return getRuleContext<CACTParser::ArrayDimensionsContext>(0);
}

tree::TerminalNode* CACTParser::VariableDefinitionContext::ASSIGNMENT() {
  return getToken(CACTParser::ASSIGNMENT, 0);
}

CACTParser::ConstantInitialValueContext* CACTParser::VariableDefinitionContext::constantInitialValue() {
  return getRuleContext<CACTParser::ConstantInitialValueContext>(0);
}


size_t CACTParser::VariableDefinitionContext::getRuleIndex() const {
  return CACTParser::RuleVariableDefinition;
}


std::any CACTParser::VariableDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVariableDefinition(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VariableDefinitionContext* CACTParser::variableDefinition() {
  VariableDefinitionContext *_localctx = _tracker.createInstance<VariableDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, CACTParser::RuleVariableDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(CACTParser::IDENTIFIER);
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::LEFT_BRACKET) {
      setState(138);
      arrayDimensions();
    }
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::ASSIGNMENT) {
      setState(141);
      match(CACTParser::ASSIGNMENT);
      setState(142);
      constantInitialValue();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimensionsContext ------------------------------------------------------------------

CACTParser::ArrayDimensionsContext::ArrayDimensionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CACTParser::ArrayDimensionsContext::LEFT_BRACKET() {
  return getTokens(CACTParser::LEFT_BRACKET);
}

tree::TerminalNode* CACTParser::ArrayDimensionsContext::LEFT_BRACKET(size_t i) {
  return getToken(CACTParser::LEFT_BRACKET, i);
}

std::vector<CACTParser::IntegerConstantContext *> CACTParser::ArrayDimensionsContext::integerConstant() {
  return getRuleContexts<CACTParser::IntegerConstantContext>();
}

CACTParser::IntegerConstantContext* CACTParser::ArrayDimensionsContext::integerConstant(size_t i) {
  return getRuleContext<CACTParser::IntegerConstantContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::ArrayDimensionsContext::RIGHT_BRACKET() {
  return getTokens(CACTParser::RIGHT_BRACKET);
}

tree::TerminalNode* CACTParser::ArrayDimensionsContext::RIGHT_BRACKET(size_t i) {
  return getToken(CACTParser::RIGHT_BRACKET, i);
}


size_t CACTParser::ArrayDimensionsContext::getRuleIndex() const {
  return CACTParser::RuleArrayDimensions;
}


std::any CACTParser::ArrayDimensionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitArrayDimensions(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ArrayDimensionsContext* CACTParser::arrayDimensions() {
  ArrayDimensionsContext *_localctx = _tracker.createInstance<ArrayDimensionsContext>(_ctx, getState());
  enterRule(_localctx, 18, CACTParser::RuleArrayDimensions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(145);
      match(CACTParser::LEFT_BRACKET);
      setState(146);
      integerConstant();
      setState(147);
      match(CACTParser::RIGHT_BRACKET);
      setState(151); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CACTParser::LEFT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CACTParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::FunctionReturnTypeContext* CACTParser::FunctionDefinitionContext::functionReturnType() {
  return getRuleContext<CACTParser::FunctionReturnTypeContext>(0);
}

tree::TerminalNode* CACTParser::FunctionDefinitionContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

tree::TerminalNode* CACTParser::FunctionDefinitionContext::LEFT_PAREN() {
  return getToken(CACTParser::LEFT_PAREN, 0);
}

tree::TerminalNode* CACTParser::FunctionDefinitionContext::RIGHT_PAREN() {
  return getToken(CACTParser::RIGHT_PAREN, 0);
}

CACTParser::CodeBlockContext* CACTParser::FunctionDefinitionContext::codeBlock() {
  return getRuleContext<CACTParser::CodeBlockContext>(0);
}

CACTParser::FunctionFormalParamsContext* CACTParser::FunctionDefinitionContext::functionFormalParams() {
  return getRuleContext<CACTParser::FunctionFormalParamsContext>(0);
}


size_t CACTParser::FunctionDefinitionContext::getRuleIndex() const {
  return CACTParser::RuleFunctionDefinition;
}


std::any CACTParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FunctionDefinitionContext* CACTParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, CACTParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    functionReturnType();
    setState(154);
    match(CACTParser::IDENTIFIER);
    setState(155);
    match(CACTParser::LEFT_PAREN);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0)) {
      setState(156);
      functionFormalParams();
    }
    setState(159);
    match(CACTParser::RIGHT_PAREN);
    setState(160);
    codeBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReturnTypeContext ------------------------------------------------------------------

CACTParser::FunctionReturnTypeContext::FunctionReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BasicTypeContext* CACTParser::FunctionReturnTypeContext::basicType() {
  return getRuleContext<CACTParser::BasicTypeContext>(0);
}

tree::TerminalNode* CACTParser::FunctionReturnTypeContext::VOID_KEYWORD() {
  return getToken(CACTParser::VOID_KEYWORD, 0);
}


size_t CACTParser::FunctionReturnTypeContext::getRuleIndex() const {
  return CACTParser::RuleFunctionReturnType;
}


std::any CACTParser::FunctionReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFunctionReturnType(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FunctionReturnTypeContext* CACTParser::functionReturnType() {
  FunctionReturnTypeContext *_localctx = _tracker.createInstance<FunctionReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, CACTParser::RuleFunctionReturnType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::INTEGER_KEYWORD:
      case CACTParser::CHAR_KEYWORD:
      case CACTParser::DOUBLE_KEYWORD:
      case CACTParser::FLOAT_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        basicType();
        break;
      }

      case CACTParser::VOID_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        match(CACTParser::VOID_KEYWORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionFormalParamsContext ------------------------------------------------------------------

CACTParser::FunctionFormalParamsContext::FunctionFormalParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::FunctionFormalParamContext *> CACTParser::FunctionFormalParamsContext::functionFormalParam() {
  return getRuleContexts<CACTParser::FunctionFormalParamContext>();
}

CACTParser::FunctionFormalParamContext* CACTParser::FunctionFormalParamsContext::functionFormalParam(size_t i) {
  return getRuleContext<CACTParser::FunctionFormalParamContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::FunctionFormalParamsContext::COMMA() {
  return getTokens(CACTParser::COMMA);
}

tree::TerminalNode* CACTParser::FunctionFormalParamsContext::COMMA(size_t i) {
  return getToken(CACTParser::COMMA, i);
}


size_t CACTParser::FunctionFormalParamsContext::getRuleIndex() const {
  return CACTParser::RuleFunctionFormalParams;
}


std::any CACTParser::FunctionFormalParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFunctionFormalParams(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FunctionFormalParamsContext* CACTParser::functionFormalParams() {
  FunctionFormalParamsContext *_localctx = _tracker.createInstance<FunctionFormalParamsContext>(_ctx, getState());
  enterRule(_localctx, 24, CACTParser::RuleFunctionFormalParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    functionFormalParam();
    setState(171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::COMMA) {
      setState(167);
      match(CACTParser::COMMA);
      setState(168);
      functionFormalParam();
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionFormalParamContext ------------------------------------------------------------------

CACTParser::FunctionFormalParamContext::FunctionFormalParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::BasicTypeContext* CACTParser::FunctionFormalParamContext::basicType() {
  return getRuleContext<CACTParser::BasicTypeContext>(0);
}

tree::TerminalNode* CACTParser::FunctionFormalParamContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

CACTParser::ArrayDimensionsOptionalContext* CACTParser::FunctionFormalParamContext::arrayDimensionsOptional() {
  return getRuleContext<CACTParser::ArrayDimensionsOptionalContext>(0);
}


size_t CACTParser::FunctionFormalParamContext::getRuleIndex() const {
  return CACTParser::RuleFunctionFormalParam;
}


std::any CACTParser::FunctionFormalParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFunctionFormalParam(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FunctionFormalParamContext* CACTParser::functionFormalParam() {
  FunctionFormalParamContext *_localctx = _tracker.createInstance<FunctionFormalParamContext>(_ctx, getState());
  enterRule(_localctx, 26, CACTParser::RuleFunctionFormalParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    basicType();
    setState(175);
    match(CACTParser::IDENTIFIER);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::LEFT_BRACKET) {
      setState(176);
      arrayDimensionsOptional();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimensionsOptionalContext ------------------------------------------------------------------

CACTParser::ArrayDimensionsOptionalContext::ArrayDimensionsOptionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ArrayDimensionsOptionalContext::LEFT_BRACKET() {
  return getToken(CACTParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* CACTParser::ArrayDimensionsOptionalContext::RIGHT_BRACKET() {
  return getToken(CACTParser::RIGHT_BRACKET, 0);
}

CACTParser::IntegerConstantContext* CACTParser::ArrayDimensionsOptionalContext::integerConstant() {
  return getRuleContext<CACTParser::IntegerConstantContext>(0);
}

CACTParser::ArrayDimensionsContext* CACTParser::ArrayDimensionsOptionalContext::arrayDimensions() {
  return getRuleContext<CACTParser::ArrayDimensionsContext>(0);
}


size_t CACTParser::ArrayDimensionsOptionalContext::getRuleIndex() const {
  return CACTParser::RuleArrayDimensionsOptional;
}


std::any CACTParser::ArrayDimensionsOptionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitArrayDimensionsOptional(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ArrayDimensionsOptionalContext* CACTParser::arrayDimensionsOptional() {
  ArrayDimensionsOptionalContext *_localctx = _tracker.createInstance<ArrayDimensionsOptionalContext>(_ctx, getState());
  enterRule(_localctx, 28, CACTParser::RuleArrayDimensionsOptional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(CACTParser::LEFT_BRACKET);
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114688) != 0)) {
      setState(180);
      integerConstant();
    }
    setState(183);
    match(CACTParser::RIGHT_BRACKET);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::LEFT_BRACKET) {
      setState(184);
      arrayDimensions();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeBlockContext ------------------------------------------------------------------

CACTParser::CodeBlockContext::CodeBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::CodeBlockContext::LEFT_BRACE() {
  return getToken(CACTParser::LEFT_BRACE, 0);
}

tree::TerminalNode* CACTParser::CodeBlockContext::RIGHT_BRACE() {
  return getToken(CACTParser::RIGHT_BRACE, 0);
}

std::vector<CACTParser::BlockItemContext *> CACTParser::CodeBlockContext::blockItem() {
  return getRuleContexts<CACTParser::BlockItemContext>();
}

CACTParser::BlockItemContext* CACTParser::CodeBlockContext::blockItem(size_t i) {
  return getRuleContext<CACTParser::BlockItemContext>(i);
}


size_t CACTParser::CodeBlockContext::getRuleIndex() const {
  return CACTParser::RuleCodeBlock;
}


std::any CACTParser::CodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCodeBlock(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CodeBlockContext* CACTParser::codeBlock() {
  CodeBlockContext *_localctx = _tracker.createInstance<CodeBlockContext>(_ctx, getState());
  enterRule(_localctx, 30, CACTParser::RuleCodeBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(CACTParser::LEFT_BRACE);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4569853591230) != 0)) {
      setState(188);
      blockItem();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(CACTParser::RIGHT_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CACTParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::DeclarationContext* CACTParser::BlockItemContext::declaration() {
  return getRuleContext<CACTParser::DeclarationContext>(0);
}

CACTParser::StatementContext* CACTParser::BlockItemContext::statement() {
  return getRuleContext<CACTParser::StatementContext>(0);
}


size_t CACTParser::BlockItemContext::getRuleIndex() const {
  return CACTParser::RuleBlockItem;
}


std::any CACTParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BlockItemContext* CACTParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 32, CACTParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::CONSTANT_KEYWORD:
      case CACTParser::INTEGER_KEYWORD:
      case CACTParser::CHAR_KEYWORD:
      case CACTParser::DOUBLE_KEYWORD:
      case CACTParser::FLOAT_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(196);
        declaration();
        break;
      }

      case CACTParser::IF_KEYWORD:
      case CACTParser::WHILE_KEYWORD:
      case CACTParser::BREAK_KEYWORD:
      case CACTParser::CONTINUE_KEYWORD:
      case CACTParser::RETURN_KEYWORD:
      case CACTParser::IDENTIFIER:
      case CACTParser::DECIMAL_NUMBER:
      case CACTParser::OCTAL_NUMBER:
      case CACTParser::HEXADECIMAL_NUMBER:
      case CACTParser::EXPONENT_NUMBER:
      case CACTParser::FLOATING_POINT_CONSTANT:
      case CACTParser::CHARACTER_CONSTANT:
      case CACTParser::PLUS_OPERATOR:
      case CACTParser::MINUS_OPERATOR:
      case CACTParser::NOT_OPERATOR:
      case CACTParser::LEFT_PAREN:
      case CACTParser::LEFT_BRACE:
      case CACTParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(197);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CACTParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::LeftValueContext* CACTParser::StatementContext::leftValue() {
  return getRuleContext<CACTParser::LeftValueContext>(0);
}

tree::TerminalNode* CACTParser::StatementContext::ASSIGNMENT() {
  return getToken(CACTParser::ASSIGNMENT, 0);
}

CACTParser::ExpressionContext* CACTParser::StatementContext::expression() {
  return getRuleContext<CACTParser::ExpressionContext>(0);
}

tree::TerminalNode* CACTParser::StatementContext::SEMICOLON() {
  return getToken(CACTParser::SEMICOLON, 0);
}

CACTParser::CodeBlockContext* CACTParser::StatementContext::codeBlock() {
  return getRuleContext<CACTParser::CodeBlockContext>(0);
}

tree::TerminalNode* CACTParser::StatementContext::IF_KEYWORD() {
  return getToken(CACTParser::IF_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::StatementContext::LEFT_PAREN() {
  return getToken(CACTParser::LEFT_PAREN, 0);
}

CACTParser::ConditionContext* CACTParser::StatementContext::condition() {
  return getRuleContext<CACTParser::ConditionContext>(0);
}

tree::TerminalNode* CACTParser::StatementContext::RIGHT_PAREN() {
  return getToken(CACTParser::RIGHT_PAREN, 0);
}

std::vector<CACTParser::StatementContext *> CACTParser::StatementContext::statement() {
  return getRuleContexts<CACTParser::StatementContext>();
}

CACTParser::StatementContext* CACTParser::StatementContext::statement(size_t i) {
  return getRuleContext<CACTParser::StatementContext>(i);
}

tree::TerminalNode* CACTParser::StatementContext::ELSE_KEYWORD() {
  return getToken(CACTParser::ELSE_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::StatementContext::WHILE_KEYWORD() {
  return getToken(CACTParser::WHILE_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::StatementContext::BREAK_KEYWORD() {
  return getToken(CACTParser::BREAK_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::StatementContext::CONTINUE_KEYWORD() {
  return getToken(CACTParser::CONTINUE_KEYWORD, 0);
}

tree::TerminalNode* CACTParser::StatementContext::RETURN_KEYWORD() {
  return getToken(CACTParser::RETURN_KEYWORD, 0);
}


size_t CACTParser::StatementContext::getRuleIndex() const {
  return CACTParser::RuleStatement;
}


std::any CACTParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::StatementContext* CACTParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 34, CACTParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(200);
      leftValue();
      setState(201);
      match(CACTParser::ASSIGNMENT);
      setState(202);
      expression();
      setState(203);
      match(CACTParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(205);
      codeBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(206);
      match(CACTParser::IF_KEYWORD);
      setState(207);
      match(CACTParser::LEFT_PAREN);
      setState(208);
      condition();
      setState(209);
      match(CACTParser::RIGHT_PAREN);
      setState(210);
      statement();
      setState(213);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(211);
        match(CACTParser::ELSE_KEYWORD);
        setState(212);
        statement();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(215);
      match(CACTParser::WHILE_KEYWORD);
      setState(216);
      match(CACTParser::LEFT_PAREN);
      setState(217);
      condition();
      setState(218);
      match(CACTParser::RIGHT_PAREN);
      setState(219);
      statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
      match(CACTParser::BREAK_KEYWORD);
      setState(222);
      match(CACTParser::SEMICOLON);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(223);
      match(CACTParser::CONTINUE_KEYWORD);
      setState(224);
      match(CACTParser::SEMICOLON);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(225);
      match(CACTParser::RETURN_KEYWORD);
      setState(227);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 34368118784) != 0)) {
        setState(226);
        expression();
      }
      setState(229);
      match(CACTParser::SEMICOLON);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 34368118784) != 0)) {
        setState(230);
        expression();
      }
      setState(233);
      match(CACTParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CACTParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::AdditionExpressionContext* CACTParser::ExpressionContext::additionExpression() {
  return getRuleContext<CACTParser::AdditionExpressionContext>(0);
}


size_t CACTParser::ExpressionContext::getRuleIndex() const {
  return CACTParser::RuleExpression;
}


std::any CACTParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ExpressionContext* CACTParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, CACTParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    additionExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

CACTParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::NumberValueContext* CACTParser::ConstantExpressionContext::numberValue() {
  return getRuleContext<CACTParser::NumberValueContext>(0);
}


size_t CACTParser::ConstantExpressionContext::getRuleIndex() const {
  return CACTParser::RuleConstantExpression;
}


std::any CACTParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstantExpressionContext* CACTParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CACTParser::RuleConstantExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    numberValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CACTParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::LogicalOrExpressionContext* CACTParser::ConditionContext::logicalOrExpression() {
  return getRuleContext<CACTParser::LogicalOrExpressionContext>(0);
}


size_t CACTParser::ConditionContext::getRuleIndex() const {
  return CACTParser::RuleCondition;
}


std::any CACTParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConditionContext* CACTParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 40, CACTParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    logicalOrExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftValueContext ------------------------------------------------------------------

CACTParser::LeftValueContext::LeftValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::LeftValueContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

CACTParser::ArrayIndicesContext* CACTParser::LeftValueContext::arrayIndices() {
  return getRuleContext<CACTParser::ArrayIndicesContext>(0);
}


size_t CACTParser::LeftValueContext::getRuleIndex() const {
  return CACTParser::RuleLeftValue;
}


std::any CACTParser::LeftValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLeftValue(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LeftValueContext* CACTParser::leftValue() {
  LeftValueContext *_localctx = _tracker.createInstance<LeftValueContext>(_ctx, getState());
  enterRule(_localctx, 42, CACTParser::RuleLeftValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(CACTParser::IDENTIFIER);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::LEFT_BRACKET) {
      setState(243);
      arrayIndices();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayIndicesContext ------------------------------------------------------------------

CACTParser::ArrayIndicesContext::ArrayIndicesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CACTParser::ArrayIndicesContext::LEFT_BRACKET() {
  return getTokens(CACTParser::LEFT_BRACKET);
}

tree::TerminalNode* CACTParser::ArrayIndicesContext::LEFT_BRACKET(size_t i) {
  return getToken(CACTParser::LEFT_BRACKET, i);
}

std::vector<CACTParser::ExpressionContext *> CACTParser::ArrayIndicesContext::expression() {
  return getRuleContexts<CACTParser::ExpressionContext>();
}

CACTParser::ExpressionContext* CACTParser::ArrayIndicesContext::expression(size_t i) {
  return getRuleContext<CACTParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::ArrayIndicesContext::RIGHT_BRACKET() {
  return getTokens(CACTParser::RIGHT_BRACKET);
}

tree::TerminalNode* CACTParser::ArrayIndicesContext::RIGHT_BRACKET(size_t i) {
  return getToken(CACTParser::RIGHT_BRACKET, i);
}


size_t CACTParser::ArrayIndicesContext::getRuleIndex() const {
  return CACTParser::RuleArrayIndices;
}


std::any CACTParser::ArrayIndicesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitArrayIndices(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ArrayIndicesContext* CACTParser::arrayIndices() {
  ArrayIndicesContext *_localctx = _tracker.createInstance<ArrayIndicesContext>(_ctx, getState());
  enterRule(_localctx, 44, CACTParser::RuleArrayIndices);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(246);
      match(CACTParser::LEFT_BRACKET);
      setState(247);
      expression();
      setState(248);
      match(CACTParser::RIGHT_BRACKET);
      setState(252); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CACTParser::LEFT_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberValueContext ------------------------------------------------------------------

CACTParser::NumberValueContext::NumberValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::IntegerConstantContext* CACTParser::NumberValueContext::integerConstant() {
  return getRuleContext<CACTParser::IntegerConstantContext>(0);
}

tree::TerminalNode* CACTParser::NumberValueContext::FLOATING_POINT_CONSTANT() {
  return getToken(CACTParser::FLOATING_POINT_CONSTANT, 0);
}

tree::TerminalNode* CACTParser::NumberValueContext::EXPONENT_NUMBER() {
  return getToken(CACTParser::EXPONENT_NUMBER, 0);
}

tree::TerminalNode* CACTParser::NumberValueContext::CHARACTER_CONSTANT() {
  return getToken(CACTParser::CHARACTER_CONSTANT, 0);
}


size_t CACTParser::NumberValueContext::getRuleIndex() const {
  return CACTParser::RuleNumberValue;
}


std::any CACTParser::NumberValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitNumberValue(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::NumberValueContext* CACTParser::numberValue() {
  NumberValueContext *_localctx = _tracker.createInstance<NumberValueContext>(_ctx, getState());
  enterRule(_localctx, 46, CACTParser::RuleNumberValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::DECIMAL_NUMBER:
      case CACTParser::OCTAL_NUMBER:
      case CACTParser::HEXADECIMAL_NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(254);
        integerConstant();
        break;
      }

      case CACTParser::FLOATING_POINT_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(255);
        match(CACTParser::FLOATING_POINT_CONSTANT);
        break;
      }

      case CACTParser::EXPONENT_NUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(256);
        match(CACTParser::EXPONENT_NUMBER);
        break;
      }

      case CACTParser::CHARACTER_CONSTANT: {
        enterOuterAlt(_localctx, 4);
        setState(257);
        match(CACTParser::CHARACTER_CONSTANT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionActualParamsContext ------------------------------------------------------------------

CACTParser::FunctionActualParamsContext::FunctionActualParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::ExpressionContext *> CACTParser::FunctionActualParamsContext::expression() {
  return getRuleContexts<CACTParser::ExpressionContext>();
}

CACTParser::ExpressionContext* CACTParser::FunctionActualParamsContext::expression(size_t i) {
  return getRuleContext<CACTParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::FunctionActualParamsContext::COMMA() {
  return getTokens(CACTParser::COMMA);
}

tree::TerminalNode* CACTParser::FunctionActualParamsContext::COMMA(size_t i) {
  return getToken(CACTParser::COMMA, i);
}


size_t CACTParser::FunctionActualParamsContext::getRuleIndex() const {
  return CACTParser::RuleFunctionActualParams;
}


std::any CACTParser::FunctionActualParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFunctionActualParams(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FunctionActualParamsContext* CACTParser::functionActualParams() {
  FunctionActualParamsContext *_localctx = _tracker.createInstance<FunctionActualParamsContext>(_ctx, getState());
  enterRule(_localctx, 48, CACTParser::RuleFunctionActualParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    expression();
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::COMMA) {
      setState(261);
      match(CACTParser::COMMA);
      setState(262);
      expression();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CACTParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::PrimaryExpressionContext::LEFT_PAREN() {
  return getToken(CACTParser::LEFT_PAREN, 0);
}

CACTParser::ExpressionContext* CACTParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CACTParser::ExpressionContext>(0);
}

tree::TerminalNode* CACTParser::PrimaryExpressionContext::RIGHT_PAREN() {
  return getToken(CACTParser::RIGHT_PAREN, 0);
}

CACTParser::LeftValueContext* CACTParser::PrimaryExpressionContext::leftValue() {
  return getRuleContext<CACTParser::LeftValueContext>(0);
}

CACTParser::NumberValueContext* CACTParser::PrimaryExpressionContext::numberValue() {
  return getRuleContext<CACTParser::NumberValueContext>(0);
}


size_t CACTParser::PrimaryExpressionContext::getRuleIndex() const {
  return CACTParser::RulePrimaryExpression;
}


std::any CACTParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::PrimaryExpressionContext* CACTParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, CACTParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::LEFT_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(268);
        match(CACTParser::LEFT_PAREN);
        setState(269);
        expression();
        setState(270);
        match(CACTParser::RIGHT_PAREN);
        break;
      }

      case CACTParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(272);
        leftValue();
        break;
      }

      case CACTParser::DECIMAL_NUMBER:
      case CACTParser::OCTAL_NUMBER:
      case CACTParser::HEXADECIMAL_NUMBER:
      case CACTParser::EXPONENT_NUMBER:
      case CACTParser::FLOATING_POINT_CONSTANT:
      case CACTParser::CHARACTER_CONSTANT: {
        enterOuterAlt(_localctx, 3);
        setState(273);
        numberValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CACTParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::PrimaryExpressionContext* CACTParser::UnaryExpressionContext::primaryExpression() {
  return getRuleContext<CACTParser::PrimaryExpressionContext>(0);
}

CACTParser::UnaryOperatorContext* CACTParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CACTParser::UnaryOperatorContext>(0);
}

CACTParser::UnaryExpressionContext* CACTParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<CACTParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CACTParser::UnaryExpressionContext::IDENTIFIER() {
  return getToken(CACTParser::IDENTIFIER, 0);
}

tree::TerminalNode* CACTParser::UnaryExpressionContext::LEFT_PAREN() {
  return getToken(CACTParser::LEFT_PAREN, 0);
}

tree::TerminalNode* CACTParser::UnaryExpressionContext::RIGHT_PAREN() {
  return getToken(CACTParser::RIGHT_PAREN, 0);
}

CACTParser::FunctionActualParamsContext* CACTParser::UnaryExpressionContext::functionActualParams() {
  return getRuleContext<CACTParser::FunctionActualParamsContext>(0);
}


size_t CACTParser::UnaryExpressionContext::getRuleIndex() const {
  return CACTParser::RuleUnaryExpression;
}


std::any CACTParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::UnaryExpressionContext* CACTParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, CACTParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      primaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(277);
      unaryOperator();
      setState(278);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(280);
      match(CACTParser::IDENTIFIER);
      setState(281);
      match(CACTParser::LEFT_PAREN);
      setState(283);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 34368118784) != 0)) {
        setState(282);
        functionActualParams();
      }
      setState(285);
      match(CACTParser::RIGHT_PAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CACTParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::UnaryOperatorContext::PLUS_OPERATOR() {
  return getToken(CACTParser::PLUS_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::UnaryOperatorContext::MINUS_OPERATOR() {
  return getToken(CACTParser::MINUS_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::UnaryOperatorContext::NOT_OPERATOR() {
  return getToken(CACTParser::NOT_OPERATOR, 0);
}


size_t CACTParser::UnaryOperatorContext::getRuleIndex() const {
  return CACTParser::RuleUnaryOperator;
}


std::any CACTParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::UnaryOperatorContext* CACTParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 54, CACTParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7340032) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicationExpressionContext ------------------------------------------------------------------

CACTParser::MultiplicationExpressionContext::MultiplicationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::UnaryExpressionContext *> CACTParser::MultiplicationExpressionContext::unaryExpression() {
  return getRuleContexts<CACTParser::UnaryExpressionContext>();
}

CACTParser::UnaryExpressionContext* CACTParser::MultiplicationExpressionContext::unaryExpression(size_t i) {
  return getRuleContext<CACTParser::UnaryExpressionContext>(i);
}

std::vector<CACTParser::MultiplicationOperatorContext *> CACTParser::MultiplicationExpressionContext::multiplicationOperator() {
  return getRuleContexts<CACTParser::MultiplicationOperatorContext>();
}

CACTParser::MultiplicationOperatorContext* CACTParser::MultiplicationExpressionContext::multiplicationOperator(size_t i) {
  return getRuleContext<CACTParser::MultiplicationOperatorContext>(i);
}


size_t CACTParser::MultiplicationExpressionContext::getRuleIndex() const {
  return CACTParser::RuleMultiplicationExpression;
}


std::any CACTParser::MultiplicationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitMultiplicationExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::MultiplicationExpressionContext* CACTParser::multiplicationExpression() {
  MultiplicationExpressionContext *_localctx = _tracker.createInstance<MultiplicationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CACTParser::RuleMultiplicationExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    unaryExpression();
    setState(296);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 58720256) != 0)) {
      setState(291);
      multiplicationOperator();
      setState(292);
      unaryExpression();
      setState(298);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicationOperatorContext ------------------------------------------------------------------

CACTParser::MultiplicationOperatorContext::MultiplicationOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::MultiplicationOperatorContext::MULTIPLICATION_OPERATOR() {
  return getToken(CACTParser::MULTIPLICATION_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::MultiplicationOperatorContext::DIVISION_OPERATOR() {
  return getToken(CACTParser::DIVISION_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::MultiplicationOperatorContext::MODULUS_OPERATOR() {
  return getToken(CACTParser::MODULUS_OPERATOR, 0);
}


size_t CACTParser::MultiplicationOperatorContext::getRuleIndex() const {
  return CACTParser::RuleMultiplicationOperator;
}


std::any CACTParser::MultiplicationOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitMultiplicationOperator(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::MultiplicationOperatorContext* CACTParser::multiplicationOperator() {
  MultiplicationOperatorContext *_localctx = _tracker.createInstance<MultiplicationOperatorContext>(_ctx, getState());
  enterRule(_localctx, 58, CACTParser::RuleMultiplicationOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 58720256) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionExpressionContext ------------------------------------------------------------------

CACTParser::AdditionExpressionContext::AdditionExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::MultiplicationExpressionContext *> CACTParser::AdditionExpressionContext::multiplicationExpression() {
  return getRuleContexts<CACTParser::MultiplicationExpressionContext>();
}

CACTParser::MultiplicationExpressionContext* CACTParser::AdditionExpressionContext::multiplicationExpression(size_t i) {
  return getRuleContext<CACTParser::MultiplicationExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::AdditionExpressionContext::PLUS_OPERATOR() {
  return getTokens(CACTParser::PLUS_OPERATOR);
}

tree::TerminalNode* CACTParser::AdditionExpressionContext::PLUS_OPERATOR(size_t i) {
  return getToken(CACTParser::PLUS_OPERATOR, i);
}

std::vector<tree::TerminalNode *> CACTParser::AdditionExpressionContext::MINUS_OPERATOR() {
  return getTokens(CACTParser::MINUS_OPERATOR);
}

tree::TerminalNode* CACTParser::AdditionExpressionContext::MINUS_OPERATOR(size_t i) {
  return getToken(CACTParser::MINUS_OPERATOR, i);
}


size_t CACTParser::AdditionExpressionContext::getRuleIndex() const {
  return CACTParser::RuleAdditionExpression;
}


std::any CACTParser::AdditionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAdditionExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::AdditionExpressionContext* CACTParser::additionExpression() {
  AdditionExpressionContext *_localctx = _tracker.createInstance<AdditionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, CACTParser::RuleAdditionExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    multiplicationExpression();
    setState(306);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::PLUS_OPERATOR

    || _la == CACTParser::MINUS_OPERATOR) {
      setState(302);
      _la = _input->LA(1);
      if (!(_la == CACTParser::PLUS_OPERATOR

      || _la == CACTParser::MINUS_OPERATOR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(303);
      multiplicationExpression();
      setState(308);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CACTParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::AdditionExpressionContext *> CACTParser::RelationalExpressionContext::additionExpression() {
  return getRuleContexts<CACTParser::AdditionExpressionContext>();
}

CACTParser::AdditionExpressionContext* CACTParser::RelationalExpressionContext::additionExpression(size_t i) {
  return getRuleContext<CACTParser::AdditionExpressionContext>(i);
}

std::vector<CACTParser::RelationalOperatorContext *> CACTParser::RelationalExpressionContext::relationalOperator() {
  return getRuleContexts<CACTParser::RelationalOperatorContext>();
}

CACTParser::RelationalOperatorContext* CACTParser::RelationalExpressionContext::relationalOperator(size_t i) {
  return getRuleContext<CACTParser::RelationalOperatorContext>(i);
}


size_t CACTParser::RelationalExpressionContext::getRuleIndex() const {
  return CACTParser::RuleRelationalExpression;
}


std::any CACTParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::RelationalExpressionContext* CACTParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, CACTParser::RuleRelationalExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    additionExpression();
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8053063680) != 0)) {
      setState(310);
      relationalOperator();
      setState(311);
      additionExpression();
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalOperatorContext ------------------------------------------------------------------

CACTParser::RelationalOperatorContext::RelationalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::RelationalOperatorContext::GREATER_THAN_OPERATOR() {
  return getToken(CACTParser::GREATER_THAN_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::RelationalOperatorContext::LESS_THAN_OPERATOR() {
  return getToken(CACTParser::LESS_THAN_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::RelationalOperatorContext::GREATER_OR_EQUAL_OPERATOR() {
  return getToken(CACTParser::GREATER_OR_EQUAL_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::RelationalOperatorContext::LESS_OR_EQUAL_OPERATOR() {
  return getToken(CACTParser::LESS_OR_EQUAL_OPERATOR, 0);
}


size_t CACTParser::RelationalOperatorContext::getRuleIndex() const {
  return CACTParser::RuleRelationalOperator;
}


std::any CACTParser::RelationalOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitRelationalOperator(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::RelationalOperatorContext* CACTParser::relationalOperator() {
  RelationalOperatorContext *_localctx = _tracker.createInstance<RelationalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 64, CACTParser::RuleRelationalOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8053063680) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CACTParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::RelationalExpressionContext *> CACTParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<CACTParser::RelationalExpressionContext>();
}

CACTParser::RelationalExpressionContext* CACTParser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<CACTParser::RelationalExpressionContext>(i);
}

std::vector<CACTParser::EqualityOperatorContext *> CACTParser::EqualityExpressionContext::equalityOperator() {
  return getRuleContexts<CACTParser::EqualityOperatorContext>();
}

CACTParser::EqualityOperatorContext* CACTParser::EqualityExpressionContext::equalityOperator(size_t i) {
  return getRuleContext<CACTParser::EqualityOperatorContext>(i);
}


size_t CACTParser::EqualityExpressionContext::getRuleIndex() const {
  return CACTParser::RuleEqualityExpression;
}


std::any CACTParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::EqualityExpressionContext* CACTParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, CACTParser::RuleEqualityExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    relationalExpression();
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::EQUALITY_OPERATOR

    || _la == CACTParser::INEQUALITY_OPERATOR) {
      setState(321);
      equalityOperator();
      setState(322);
      relationalExpression();
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityOperatorContext ------------------------------------------------------------------

CACTParser::EqualityOperatorContext::EqualityOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::EqualityOperatorContext::EQUALITY_OPERATOR() {
  return getToken(CACTParser::EQUALITY_OPERATOR, 0);
}

tree::TerminalNode* CACTParser::EqualityOperatorContext::INEQUALITY_OPERATOR() {
  return getToken(CACTParser::INEQUALITY_OPERATOR, 0);
}


size_t CACTParser::EqualityOperatorContext::getRuleIndex() const {
  return CACTParser::RuleEqualityOperator;
}


std::any CACTParser::EqualityOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitEqualityOperator(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::EqualityOperatorContext* CACTParser::equalityOperator() {
  EqualityOperatorContext *_localctx = _tracker.createInstance<EqualityOperatorContext>(_ctx, getState());
  enterRule(_localctx, 68, CACTParser::RuleEqualityOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _la = _input->LA(1);
    if (!(_la == CACTParser::EQUALITY_OPERATOR

    || _la == CACTParser::INEQUALITY_OPERATOR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CACTParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::EqualityExpressionContext *> CACTParser::LogicalAndExpressionContext::equalityExpression() {
  return getRuleContexts<CACTParser::EqualityExpressionContext>();
}

CACTParser::EqualityExpressionContext* CACTParser::LogicalAndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<CACTParser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::LogicalAndExpressionContext::LOGICAL_AND_OPERATOR() {
  return getTokens(CACTParser::LOGICAL_AND_OPERATOR);
}

tree::TerminalNode* CACTParser::LogicalAndExpressionContext::LOGICAL_AND_OPERATOR(size_t i) {
  return getToken(CACTParser::LOGICAL_AND_OPERATOR, i);
}


size_t CACTParser::LogicalAndExpressionContext::getRuleIndex() const {
  return CACTParser::RuleLogicalAndExpression;
}


std::any CACTParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LogicalAndExpressionContext* CACTParser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, CACTParser::RuleLogicalAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    equalityExpression();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::LOGICAL_AND_OPERATOR) {
      setState(332);
      match(CACTParser::LOGICAL_AND_OPERATOR);
      setState(333);
      equalityExpression();
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CACTParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::LogicalAndExpressionContext *> CACTParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<CACTParser::LogicalAndExpressionContext>();
}

CACTParser::LogicalAndExpressionContext* CACTParser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<CACTParser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::LogicalOrExpressionContext::LOGICAL_OR_OPERATOR() {
  return getTokens(CACTParser::LOGICAL_OR_OPERATOR);
}

tree::TerminalNode* CACTParser::LogicalOrExpressionContext::LOGICAL_OR_OPERATOR(size_t i) {
  return getToken(CACTParser::LOGICAL_OR_OPERATOR, i);
}


size_t CACTParser::LogicalOrExpressionContext::getRuleIndex() const {
  return CACTParser::RuleLogicalOrExpression;
}


std::any CACTParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LogicalOrExpressionContext* CACTParser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, CACTParser::RuleLogicalOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    logicalAndExpression();
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::LOGICAL_OR_OPERATOR) {
      setState(340);
      match(CACTParser::LOGICAL_OR_OPERATOR);
      setState(341);
      logicalAndExpression();
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext ------------------------------------------------------------------

CACTParser::IntegerConstantContext::IntegerConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::IntegerConstantContext::DECIMAL_NUMBER() {
  return getToken(CACTParser::DECIMAL_NUMBER, 0);
}

tree::TerminalNode* CACTParser::IntegerConstantContext::OCTAL_NUMBER() {
  return getToken(CACTParser::OCTAL_NUMBER, 0);
}

tree::TerminalNode* CACTParser::IntegerConstantContext::HEXADECIMAL_NUMBER() {
  return getToken(CACTParser::HEXADECIMAL_NUMBER, 0);
}


size_t CACTParser::IntegerConstantContext::getRuleIndex() const {
  return CACTParser::RuleIntegerConstant;
}


std::any CACTParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::IntegerConstantContext* CACTParser::integerConstant() {
  IntegerConstantContext *_localctx = _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 74, CACTParser::RuleIntegerConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114688) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CACTParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cactParserInitialize();
#else
  ::antlr4::internal::call_once(cactParserOnceFlag, cactParserInitialize);
#endif
}
