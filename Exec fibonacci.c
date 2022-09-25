#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    int a = 1;
    int b = 1;
    int x = 0;

    printf ("Infome o número inteiro maior que 3: ");
    scanf("%d",&n);
    if (n < 3 ){

        printf("!!!!!DIGITE UM NÚMERO INTEIRO MAIOR QUE 3!!!!!");

    }else{

        printf("Série de Fibonacci com %d posições:1, 1",n);

    for (int i = 0; i <= n - 3; i++){
        x = a + b;
        a = x;
        b = x - b;
        printf(", %d",x);
    }

    return 0;
    }
}
