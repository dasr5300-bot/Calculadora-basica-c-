#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float soma(float a,float b);

float sub(float a,float b);

float divisao(float a,float b);

float multiplicacao(float a,float b);

void menu();

float soma(float a,float b){
return(a+b);
}
float sub(float a,float b){
return(a-b);
}
float divisao(float a,float b){
return(a/b);
}
float multiplicacao(float a,float b){
return(a*b);
}
void menu(){
	float a,b,res;
	char op;
	setlocale(LC_ALL, "Portuguese");
	printf("-------------Calculadora com funções----------\n");
	printf("Insira (a operador b)\n");
	scanf("%f %c %f",&a,&op,&b);
	switch(op){
		case '+':
			res=soma(a,b);
			printf("Res = %.2f",res);
			break;
		case '-':
			res=sub(a,b);
			printf("Res = %.2f",res);
			break;
		case '/':
			if(b==0)
			printf("Não existem numeros divisiveis por 0.");
			else{
			res=divisao(a,b);
			printf("Res = %.2f",res);
			}
			return;
		case '*':
			res=multiplicacao(a,b);
			printf("Res = %.2f",res);
			break;
		default:
		printf("Inseriu errado.");
		return;	
	}	
}

void main(){
	menu();
}


