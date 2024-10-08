#include <stdio.h>

int main()
{
   int n1, n2, n3;
   
   printf("\tMaior de três números!\n\n");
   
   printf("Digite um inteiro: ");
   scanf("%d", &n1);
   
   printf("\nDigite outro inteiro: ");
   scanf("%d", &n2);
   
   printf("\nDigite outro inteiro: ");
   scanf("%d", &n3);
   
   if(n1 >= n2 && n1 >= n3){
       printf("\n%d é o maior número!", n1);
   }else {
   
    if(n2 >= n1 && n2 >= n3){
       printf("\n%d é o maior número!", n2);
   }
       else{
            if(n3 >= n2 && n3 >= n1){
       printf("\n%d é o maior número!", n3);
   }
       }
   }
   
   
   return 0;
}
