#include <stdio.h>

int main() { 

printf("*************************************\n");
printf("* Bem vindo ao jogo de advinhação!! *\n");
printf("*************************************\n");

int numerosecreto;
numerosecreto = 42;


int chute;
printf("Qual é o seu chute?");
scanf("%d", &chute);
printf("Você chutou o número %d\n", chute);

int acertou = chute == numerosecreto;
if (chute == numerosecreto){
    printf("Você acertou");
}else{
    if(chute > numerosecreto){
        printf("Seuchute foi maior que o número secreto\n");
        }
    if (chute < numerosecreto){
        printf("Seu chute fo menor que o número secreto\n");
        }
    }

}