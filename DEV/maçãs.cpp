#include<stdio.h>
 #include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 float num, conta;

 printf("Ol�! Escreva o n�mero de ma��s que voc� comprou:");
 scanf("%f", &num);
 
 if (num < 12){
 	conta = num * 0.30;
 }
 
 if (num >= 12){
 	conta = num * 0.25;
 }
 
 printf("O valor final da sua compra � R$: %f \n", conta);
 
 system("pause");
 
}
