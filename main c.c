#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int c;
    int soma;

    soma = 0;

     printf("Digite um numero inteiro positivo:");
     scanf("%d",&n);

     for(c=1;c<=n/2;c++){
        if(n%c==0){
            soma = soma + c;
            }
     }
     if(soma == n && n!=0){
        printf("%d e um numero perfeito.\n",n);
     }
     else{
        printf("%d nao e perfeito.\n",n);
     }

     return 0;
}
