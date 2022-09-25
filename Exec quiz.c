#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int d, m, a, p1, p2, p3;


    printf("Vamos descobrir o seu perfil através da sua data de nascimento :)\n");
    printf("\nDigite o dia em que você nasceu: ");
    scanf("%d", &d);
    printf("\nDigite o mes em que você nasceu: ");
    scanf("%d", &m);
    printf("\nDigite o ano em que você nasceu: ");
    scanf("%d", &a);

    p1 = ((d*100) + m) + a;
    p2 = (p1/100) + (p1%100);
    p3 = p2 % 5;

    if(p3 == 0 )
        printf("\nO seu perfil é Tímido\n");
        else
    if(p3 == 1 )
        printf("\nO seu perfil é Sonhador\n");
        else
    if(p3 == 2 )
        printf("\nO seu perfil é Paquerador\n");
        else
    if(p3 == 3 )
        printf("\nO seu perfil é Atraente\n");
        else
    if(p3 == 4 )
        printf("\nO seu perfil é Irresistível\n");

    return 0;

}
