#include<stdio.h>
#include<locale.h>
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int IDADE;
	printf("A idade m�nima para voto � 18 anos. \n");
	printf("Digite sua idade:");
	scanf("%d",&IDADE);
	{

	if(IDADE ==82)
	printf("Voto n�o obrigat�rio, mas voc� tem um pr�mio a receber $$$.\n");
	if (IDADE >=65)
	printf("Voto n�o obrigat�rio\n");
    if (IDADE == 41)
    printf("Voto obrigat�rio, voc� tem um pr�mio a receber $$$.\n");
	if (IDADE <64>18)
	printf("Voto obrigat�rio.\n");
	if (IDADE <17>16)
	printf("Voto n�o obrigat�rio\n");
	else
	{
	printf("Voto obrigat�rio\n");}
}  
}
