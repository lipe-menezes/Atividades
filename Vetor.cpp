#include<stdio.h>

int main (){
	
	float notas[10]={0}, maior,menor;
	int i=0,  tam = 0;
	char continuar='s';
	
	
	do{
		printf("Informe a nota");
		scanf("%f",&notas[i]);
		i++;

		printf("Deseja continuar (s/n?)");
		scanf(" %c",&continuar);
		
		
	}while(i<10 && continuar=='s');
	
	tam = i;
	
	for (i=0;i<tam;i++){
		printf("Nota %d: %.1f\n",i+1,notas[i]);
		
				if(i==0){
			menor=notas[i];
			maior=notas[i];
		}else{
		if(notas[i]<menor){
		menor=notas[i];
		}
		if(notas[i]>maior){
		maior=notas[i];
		}
	}
	}
	
	printf("A menor nota foi: %.1f\n",menor);
	printf("A maior nota foi: %.1f\n",maior);
	
	
}
