Aqui está uma descrição que você pode usar no GitHub para o repositório **CPPrint**:  

---

# CPPrint - Simplificando o C++ como Python 🚀  

CPPrint é uma biblioteca minimalista que simplifica a sintaxe do C++, tornando-a mais parecida com a do Python. Com funções intuitivas para impressão (`print()`) e entrada de dados (`input()`), você pode escrever código mais limpo e legível sem precisar usar `std::cout` e `std::cin` repetidamente.  

## 🛠 Recursos  

- **`print()`**: Função sobrecarregada que permite imprimir múltiplos valores sem necessidade de `std::cout`.  
- **`input()`**: Captura entrada do usuário com conversão automática para diferentes tipos.  
- **Uso intuitivo**: Sem precisar de `std::endl` ou operadores de fluxo (`<<`).  

## 📌 Exemplo de Uso  

```cpp
#include "cpprint.h"

int main() {
    print("Olá, mundo!");
    print("A soma de 2 + 2 é", 2 + 2);

    std::string nome = input("Digite seu nome: ");
    int idade = input<int>("Digite sua idade: ");

    print("Nome:", nome, "| Idade:", idade);
    return 0;
}
```

## 🚀 Instalação  

Basta incluir o arquivo `cpprint.h` no seu projeto e começar a usar!  

## 📜 Licença  

Este projeto está licenciado sob a **MIT License** – fique à vontade para contribuir!  

---
