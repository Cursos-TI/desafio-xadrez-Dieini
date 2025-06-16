#include <stdio.h>

int main() {
// Variáveis da Torre, Bispo e Rainha //
     int t = 1, b = 1, r = 1;

// Movimentando a Torre 5 casas para a direita //
    while (t<= 5){
       printf("Torre: Direita %d\n", t);
       t++;
    } 
// Movimento Diagonal do Bispo: Direita e Cima //
    do{
     printf("Bispo: Cima Direita %d\n", b);
     b++;

    } while (b <= 5);

// Movimentando a Rainha para a Esquerda //
    for (r = 1; r <= 8; r++){
     printf("Rainha: Esquerda %d\n", r);
} 

 return 0;
}