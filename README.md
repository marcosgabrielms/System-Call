# Exercício: Criação de Arquivo (C e C++)

Este repositório contém as soluções em C e C++ para o exercício acadêmico de criação e escrita de arquivos, proposto na disciplina de Sistemas Operacionais.

O objetivo é criar um programa que gera um arquivo de texto com o conteúdo "Só alegria hahaha".

## 📂 Estrutura de Pastas

O projeto está organizado da seguinte forma para separar as implementações:

```
/
├── C/
│   └── criar_arquivo.c
├── C++/
│   └── criar_arquivo.cpp
├── .gitignore
└── README.md
```

## ⚙️ Pré-requisitos

Para compilar e executar os códigos deste repositório, você precisará de um compilador C e C++.

* **Para Windows:** Recomenda-se a instalação do [MinGW-w64](https://www.mingw-w64.org/), que fornece os compiladores GCC (para C) e G++ (para C++).
* **Para Linux/macOS:** Geralmente já vêm instalados. Caso contrário, instale o `build-essential` ou as "Command Line Tools".

## 🚀 Como Compilar e Executar

Siga os passos abaixo para a linguagem de sua escolha. Todos os comandos devem ser executados a partir da **pasta raiz do repositório** no seu terminal.

### 🐘 Solução em C

1.  **Navegue para a pasta `C`**
    A partir da raiz do projeto, entre na pasta que contém o código em C.
    ```bash
    cd C
    ```

2.  **Compile o código**
    Este comando irá ler o arquivo `.c` e criar um programa executável.
    ```bash
    # Comando para Windows
    gcc -o criar_arquivo_c.exe criar_arquivo.c

    # Comando para Linux ou macOS
    gcc -o criar_arquivo_c criar_arquivo.c
    ```

3.  **Execute o programa**
    Rode o arquivo que acabamos de criar.
    ```bash
    # Comando para Windows
    ./criar_arquivo_c.exe

    # Comando para Linux ou macOS
    ./criar_arquivo_c
    ```

4.  **Verifique o resultado**
    Um arquivo chamado `alegria_c.txt` será criado dentro da pasta `C/`. Para ver seu conteúdo:
    ```bash
    # Comando para Windows
    type alegria_c.txt

    # Comando para Linux ou macOS
    cat alegria_c.txt
    ```

### ➕ Solução em C++

1.  **Navegue para a pasta `C++`**
    Se você estava na pasta `C`, primeiro volte para a raiz do projeto com `cd ..`. Depois, entre na pasta de C++.
    ```bash
    # Primeiro, volte para a pasta principal (caso estivesse em C/)
    cd ..

    # Agora, entre na pasta C++
    cd C++
    ```

2.  **Compile o código**
    Este comando irá ler o arquivo `.cpp` e criar um programa executável.
    ```bash
    # Comando para Windows
    g++ -o criar_arquivo_cpp.exe criar_arquivo.cpp

    # Comando para Linux ou macOS
    g++ -o criar_arquivo_cpp criar_arquivo.cpp
    ```

3.  **Execute o programa**
    Rode o arquivo que acabamos de criar.
    ```bash
    # Comando para Windows
    ./criar_arquivo_cpp.exe

    # Comando para Linux ou macOS
    ./criar_arquivo_cpp
    ```

4.  **Verifique o resultado**
    Um arquivo chamado `alegria_cpp.txt` será criado dentro da pasta `C++/`. Para ver seu conteúdo:
    ```bash
    # Comando para Windows
    type alegria_cpp.txt

    # Comando para Linux ou macOS
    cat alegria_cpp.txt
    ```