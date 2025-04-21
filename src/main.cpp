#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"

#include "CACTLexer.h"
#include "CACTParser.h"
#include "CACTBaseVisitor.h"

using namespace antlr4;

class Analysis : public CACTBaseVisitor {
};

// 自定义错误监听器：遇到语法错误就退出
class BailErrorListener : public BaseErrorListener {
public:
    void syntaxError(Recognizer *recognizer,
                     Token *offendingSymbol,
                     size_t line,
                     size_t charPositionInLine,
                     const std::string &msg,
                     std::exception_ptr e) override {
        std::cerr << "Syntax Error at line " << line << ":" << charPositionInLine
                  << " - " << msg << std::endl;
        exit(EXIT_FAILURE);
    }
};

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: ./compiler <source_file>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Cannot open file: " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    CACTLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CACTParser parser(&tokens);

    // 去掉默认错误监听器，换成自定义的
    lexer.removeErrorListeners();
    parser.removeErrorListeners();
    lexer.addErrorListener(new BailErrorListener());
    parser.addErrorListener(new BailErrorListener());

    // 获取语法树
    CACTParser::WholeProgramContext *tree = parser.wholeProgram();

    std::cout << "Syntax Right!" << std::endl;

    Analysis visitor;
    visitor.visit(tree);  

    return 0;
}
