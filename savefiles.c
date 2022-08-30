#include <stdio.h>
#include <stdlib.h>

void escreve_texto(int value)
{
    // Ponteiro para arquivos
    FILE *fptr;

    // Abre o arquivo
    fptr = fopen("myfile.txt", "w"); //w - write, b - binário

    // Se houver algum erro sai do programa
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    // Escrita em modo texto
    fprintf(fptr, "%d", value);
    
    fclose(fptr);
}


void escreve_binario(int value)
{
    // Ponteiro para arquivos
    FILE *fptr;

    // Abre o arquivo
    fptr = fopen("myfile.bin", "wb"); //w - write, b - binário

    // Se houver algum erro sai do programa
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    // Escrita em binário
    int x = 32;

    fwrite(&value,sizeof(value),1, fptr);
    
    fclose(fptr);
}

int main() {
 
    int x = 32;
    escreve_texto(x);
    escreve_binario(x);

    return 0;
}