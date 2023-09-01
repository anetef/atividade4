#include <stdio.h>
#include<math.h>

main(){

   double numero, resultado;

   printf("Digite um numero");
   scanf("%lf", &numero);

   if(numero >= 0){
     
        resultado = sqrt(numero);
        printf("Raiz quadrada de %.3lf e %.3lf",numero, resultado );
   }else{
        resultado = pow(numero, 2);
        printf("O quadrado de %.3lf e %.3lf", numero, resultado);
   }

}
