#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, i, result;


    printf("Digite um n�mero: ");
    scanf("%d", &num);

    system("clear || cls");
    printf("\n--------------TABUADA AT� O N�MERO %d--------------\n", num);
    for(i = 1; i <= num; i++){

        result = num * i;
        printf("\n%d x %d: %d", num, i, result);


    }

    return 0;
}
