#include <stdio.h>
#include <stdlib.h>

// eu sou muito bonito
int main(){
    system ("chcp 65001");
    printf ("***********************************\n");
    printf ("*Bem vindo ao jogo da adivinhação!*\n");
    printf ("***********************************\n");

    int NumeroSecreto=42;
    int chute;
    int chances = 3;
    for(int i = 1; i<=3; i++){
        printf ("Qual o seu chute? ");
        printf ("Você tem %d chance(s)\n", chances);
        scanf ("%d", &chute);
        int acertou = (chute == NumeroSecreto);
        printf ("O seu chute foi %d\n", chute);
        if (acertou){
            printf ("Parabéns! você acertou! O número secreto era %d\n", chute);
            break;

        }else if(chute < NumeroSecreto){
            printf ("O seu chute foi menor que o número secreto.\n");
            printf ("Não desanime! Tente de novo.\n");
            chances --;
        }else{
            printf ("O seu chute foi maior que o número secreto.\n");
            printf ("Não desanime! Tente de novo.\n");
            chances --;
        }
    }
    
}

