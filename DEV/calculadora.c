#include <stdio.h>
#include <locale.h>
main (){
setlocale(LC_ALL, "Portuguese");
int operador, num1, num2, conta;
printf("Entre com um operador de 1 a 4:");
scanf ("%d", &operador );
printf("Entre com o primeiro n�mero:");
scanf ("%d", &num1 );
printf("Entre com o segundo n�mero:");
scanf ("%d", &num2 );

if (operador == 1){
	conta = num1 + num2;
}

if (operador == 2){
	conta = num1 - num2;
}

if (operador == 3){
	conta = num1 * num2;
}

if (operador == 4){
	conta = num1 / num2;
}


printf ("O resultado � %d \n", conta);
system ("pause");

}
