#include <stdio.h>
#include<math.h>

main(){

   int A = 15, B = 12, C = 8, D = 7, maior, menor;

    

   //verificando o maior de todos
   if(A > B && A > C && A > D){
        maior  = A;
   }else if(B > A && B > C && B > D){
        maior = B;
   }else if(C > A && C > B && C > D){
        maior = C;
   }else{
        maior = D;
   }

   //verificar o menor de todos

   if(A < B && A < C && A < D){
        menor = A;
   }else if(B < A && B < C && B < D){
        menor = B;
   }else if(C < A && C < B && C < D){
        menor = C;
   }else{
        menor = D;
   }
    printf("Maior: %d. Menor: %d", maior, menor);
 
}