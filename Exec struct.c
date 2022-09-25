#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[100];
    char tel[100];
    char email[100];
    int N;
    int T;
    int E;

    printf ("Digite seu nome: ");
    scanf ("%s", &nome);
    N = strlen(nome);

    printf ("Digite seu telefone: ");
    scanf ("%s", &tel);
    T = strlen(tel);

    printf ("Digite seu email: ");
    scanf ("%s", &email);
    E = strlen(email);

    system("clear || cls");
    printf("\n---------------CONTAGEM DE CARACTERES---------------\n");

    printf ("\nSeu nome possui %d caracteres\n", N);
    printf ("\nSeu telefone possui %d caracteres\n", T);
    printf ("\nSeu  email possui %d caracteres\n", E);

    return 0;
}
