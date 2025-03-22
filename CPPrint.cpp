/*
Código desenvolvido por: Cairo Alberto  
Estudante de Engenharia da Computação - PUC Goiás  
Repositório: https://github.com/CairoAlberto123
Data de criação: 21/03/2025  
Descrição:  
Simplificação da sintaxe do C++ para algo semelhante ao Python, incluindo funções de impressão e entrada de dados.  
Tecnologias utilizadas:  
C++ (STD, iostream, string, vector, type_traits)  
Licença: MIT  
2025 Cairo Alberto - Todos os direitos reservados.  


*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <type_traits>

// Função print com sobrecarga para diferentes tipos
void print() {
    std::cout << std::endl;
}

// Template para múltiplos argumentos
template <typename T, typename... Args>
void print(T first, Args... rest) {
    std::cout << first << " ";
    print(rest...);
}

// Função para entrada de dados
std::string input(const std::string& prompt = "") {
    if (!prompt.empty()) {
        std::cout << prompt;
    }
    std::string value;
    std::getline(std::cin, value);
    return value;
}

// Template para converter entrada em tipos específicos
template <typename T>
T input(const std::string& prompt) {
    std::string value = input(prompt);
    std::stringstream ss(value);
    T result;
    ss >> result;
    return result;
}

int main() {
    print("Hello, world!");
    print("O resultado de 2 + 2 é", 2 + 2);
    print("Valor flutuante:", 3.1415);
    
    std::string name = input("Digite seu nome: ");
    int age = input<int>("Digite sua idade: ");
    
    print("Nome:", name, "| Idade:", age);
    return 0;
}
