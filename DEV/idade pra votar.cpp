#include<stdio.h>
 #include<locale.h>
 
 main(){
 setlocale(LC_ALL, "Portuguese");
 int ano, anos;

 printf("Ol�! Escreva o ano em que voc� nasceu:");
 scanf("%d", &ano);
 
  anos = 2022 - ano;
 
 if (ano >= 16){
  printf ("Voc� sabia que j� tem a idade necess�ria para votar? Agora que est� sabendo fa�a seu t�tulo de eleitor e ajude a nossa democracia! \n");
 }
 
 if (ano < 16){
  printf("Infelizmente voc� ainda n�o tem a idade necess�ria para poder votal, espere mais um pouco para ajudar a nosa democracia! \n");
 }
 
system("pause");

}
