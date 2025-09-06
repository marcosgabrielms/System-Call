#include <iostream> // Para funções std::cout e std:cerr (Escrever no console)
#include <fstream> // Para std::ofstream (escrever em aquivos)
#include <string> // Para a classe std::string

int main() {
    // Definição do nome do arquivo e seu respectivo conteúdo
    std::string nome_arquivo = "alegria_cpp.txt";
    std::string conteudo = "Só alegria hahaha";

    // Cria um objeto ofstream (output file stream)
    // Depois de criado, ele já tenta abrir o arquivo em modo escrita

    std::ofstream arquivo(nome_arquivo);

    if(arquivo.is_open()) { // is_open() verifica se o arquivo foi aberto com sucesso.
        arquivo << conteudo; // Escrevemos no arquivo usando o operador <<, o mesmo que usamos para o console.

        // O arquivo é fechado automaticamente quando o objeto 'arquivo' sai de escopo (princípio RAII)
        std::cout << "Sucesso! O arquivo '" << nome_arquivo << "' foi criado e o texto foi escrito." << std::endl; 
    } else {
        // Se não foi possível abrir, exibe uma mensagem de erro.
        std::cerr << "Erro ao tentar criar/abrir o arquivo." << std::endl;
        return 1;
    }
    return 0; //Sucesso
}