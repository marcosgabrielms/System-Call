#include <stdio.h> //Funções de arquivo: fopen, fputs, fclose, perror

int main() {
    //Definição do nome do arquivo e conteúdo
    const char *nome_arquivo = "alegria_c.txt";
    const char *conteudo = "Só alegria hahaha";
    
    FILE *arquivo = fopen(nome_arquivo, "w"); // Abre o arquivo em modo de escrita ("w" = write).

    // Se o arquivo não existir, ele será criado.
    // Se o arquivo já existir, seu conteúdo será apagado.
    
    if (arquivo == NULL) { 
        perror("Erro ao tentar criar/abrir o arquivo");
        return 1; // Termina o programa com um código de erro
    }

    fputs(conteudo, arquivo); // Escreve a string de conteúdo no arquivo.

    fclose(arquivo); // Fecha o arquivo.

    printf("Sucesso! O arquivo '%s' foi criado e o texto foi escrito.\n", nome_arquivo);

    return 0;

}
