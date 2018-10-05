#include <stdio.h>
int main()
{

float num_1, num_2, operacao, c=1;
char op;

while(c)
	{
	printf("\n Entre com a operacao desejada: (+), (-) \n");
	scanf("%s",&op);
	printf("Entre com o 1o. : ");
	scanf("%f",&num_1);
	printf("Entre com o 2o. Numero: \n");
	scanf("%f",&num_2);
	switch(op){
		case '+' :operacao = num_1+num_2;
		printf("\nA soma destes numeros e' %.2f", operacao);
		break;
		case '-' :operacao = num_1-num_2;
		printf("\nA subtracao destes numeros e' %.2f", operacao);
		break;
		default  : printf("Operador desconhecido\n");
		}
	printf("\nDeseja realizar outra operação? Digite 0 para sair do sistema");
	scanf("%f",&c);
		}
}

