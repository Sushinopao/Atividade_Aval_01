#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese");
    int num, i;

    printf("Digite um número para obter a contagem regressiva: ");
    scanf("%d", &num);

    for(i = num; i >= 0; i--){

        printf("\nContagem regressiva: %d ", i);

  }



   return(0);
}
