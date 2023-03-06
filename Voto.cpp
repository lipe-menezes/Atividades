#include<stdio.h>
#include<locale.h>
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int IDADE;
	printf("A idade mínima para voto é 18 anos. \n");
	printf("Digite sua idade:");
	scanf("%d",&IDADE);
	{

	if(IDADE ==82)
	printf("Voto não obrigatório, mas você tem um prêmio a receber $$$.\n");
	if (IDADE >=65)
	printf("Voto não obrigatório\n");
    if (IDADE == 41)
    printf("Voto obrigatório, você tem um prêmio a receber $$$.\n");
	if (IDADE <64>18)
	printf("Voto obrigatório.\n");
	if (IDADE <17>16)
	printf("Voto não obrigatório\n");
	else
	{
	printf("Voto obrigatório\n");}
}  
}
