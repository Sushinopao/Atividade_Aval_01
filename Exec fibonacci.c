#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    int a = 1;
    int b = 1;
    int x = 0;

    printf ("Infome o n�mero inteiro maior que 3: ");
    scanf("%d",&n);
    if (n < 3 ){

        printf("!!!!!DIGITE UM N�MERO INTEIRO MAIOR QUE 3!!!!!");

    }else{

        printf("S�rie de Fibonacci com %d posi��es:1, 1",n);

    for (int i = 0; i <= n - 3; i++){
        x = a + b;
        a = x;
        b = x - b;
        printf(", %d",x);
    }

    return 0;
    }
}
