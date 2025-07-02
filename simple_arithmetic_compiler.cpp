// simple_arithmetic_compiler.cpp
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

// Recursive Descent Parser for Arithmetic Expressions
class Parser {
public:
    Parser(const std::string& expr) : expr(expr), pos(0) {}

    double parse() {
        double result = expression();
        if (pos < expr.length()) throw std::runtime_error("Unexpected character: " + std::string(1, expr[pos]));
        return result;
    }

private:
    std::string expr;
    size_t pos;

    char peek() {
        return pos < expr.length() ? expr[pos] : '\0';
    }

    char get() {
        return pos < expr.length() ? expr[pos++] : '\0';
    }

    void skipWhitespace() {
        while (isspace(peek())) get();
    }

    double number() {
        skipWhitespace();
        std::string numStr;
        while (isdigit(peek()) || peek() == '.') {
            numStr += get();
        }
        if (numStr.empty()) throw std::runtime_error("Expected number at position " + std::to_string(pos));
        return std::stod(numStr);
    }

    double factor() {
        skipWhitespace();
        if (peek() == '(') {
            get(); // consume '('
            double result = expression();
            if (get() != ')') throw std::runtime_error("Expected ')' at position " + std::to_string(pos));
            return result;
        } else {
            return number();
        }
    }

    double term() {
        double result = factor();
        while (true) {
            skipWhitespace();
            if (peek() == '*') {
                get();
                result *= factor();
            } else if (peek() == '/') {
                get();
                double denom = factor();
                if (denom == 0) throw std::runtime_error("Division by zero");
                result /= denom;
            } else {
                break;
            }
        }
        return result;
    }

    double expression() {
        double result = term();
        while (true) {
            skipWhitespace();
            if (peek() == '+') {
                get();
                result += term();
            } else if (peek() == '-') {
                get();
                result -= term();
            } else {
                break;
            }
        }
        return result;
    }
};

int main() {
    std::string input;
    std::cout << "Simple Arithmetic Compiler\nType 'exit' to quit.\n";
    while (true) {
        std::cout << "\nEnter expression: ";
        std::getline(std::cin, input);
        if (input == "exit") break;
        try {
            Parser parser(input);
            double result = parser.parse();
            std::cout << "Result: " << result << "\n";
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << "\n";
        }
    }
    return 0;
}
