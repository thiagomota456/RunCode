#include<stdio.h>

void dec2bin(int dec);

int main(){

	int num;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	printf("Resultado: ");
	dec2bin(num);

}//end main

void dec2bin(int dec){


	if(dec == 0)//Caso seja 0
		printf("0");

	else{

		if(dec == 1){//caso seja 1

			printf("1");

		}//end if interno

		else{//Todos os outros casos

			if( ((dec/2) == 1) )
				printf("1");
			else
				dec2bin(dec/2);

			printf("%d", dec%2);

		}//end else interno

	}//end else externo
	
}//end dec2bin


/*1. b) Decimal para Binário

Disciplina: LAED - Laboratório de Algoritmos e Estruturas de Dados I 
Prazo de Entrega: 09/08/2018 23:55:55 Aberto
Um problema típico em computação consiste em converter um número da sua forma decimal para a forma binária. Por exemplo, o número 12 tem a sua representação binária igual a 1100. A forma mais simples de fazer isso é usando o método das divisões sucessivas: divide-se o número sucessivamente por 2, onde o resto da i-ésima divisão vai ser o dígito i do número binário (da direita para a esquerda).

Por exemplo:

12/2 = 6 resto 0
 6/2 = 3 resto 0 
 3/2 = 1 resto 1
 1/2 = 0 resto 1
Resultado: 12 = 1100 (restos tomados de baixo para cima)

Escreva uma função recursiva que, dado um número decimal, imprima a sua representação binária corretamente. O protótipo da função deverá, obrigatoriamente, ser:

void dec2bin(int dec);

Não será permitido utilizar variáveis globais, vetores, listas ou qualquer outra estrutura de dados para armazenar o número em binário, pois este será impresso à medida que for sendo calculado dentro da função.

O programa deverá conter, além da função recursiva, uma função principal (main) para realização de testes, com o formato de saída de acordo com o exemplo a seguir:

Digite um numero inteiro: 34
Resultado: 100010
*/
