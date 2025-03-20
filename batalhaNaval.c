#include <stdio.h>

int main() {
    // Tamanho do tabuleiro e  navios
    int TAMANHO = 10; // Tabuleiro 10x10
    int NAVIO = 3;    // Tamanho fixo dos navios (3 posições)
    
    // Declaração e inicialização do tabuleiro: matriz 10x10
    int tabuleiro[10][10] = {0};  // Garantindo que todos os valores do tabuleiro são 0 (água)
    
    // Declaração e inicialização do vetor de linhas
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Posicionamento dos navios (coordenadas iniciais)
    
    int linhaH = 2, colunaH = 3; 
    
    int linhaV = 5, colunaV = 6; 
    
    // Navio horizontal 
    for (int i = 0; i < NAVIO; i++) {
        
        tabuleiro[linhaH][colunaH + i] = 3; 
    }
    // Navio vertical 
    for (int i = 0; i < NAVIO; i++) {
        
        tabuleiro[linhaV + i][colunaV] = 3; 
    }
    
    // Exibição do tabuleiro
    // Imprimindo as colunas
    printf("   ");
    for (int j = 0; j < TAMANHO; j++) {
        printf("%d ", j);  // Exibe o número de cada coluna (0 a 9)
    }
    printf("\n");
    
    // Imprimindo as linhas do tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        
        printf("%c  ", linhas[i]);
        
        // Exibe os valores do tabuleiro
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);  // 0 = água, 3 = parte do navio
        }
        printf("\n");
    }
    
    return 0;
}