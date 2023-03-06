#include<stdio.h>

int main(){
    float n1,n2;
    char opcao;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("digite a operacao desejada: ");
    scanf(" %c",&opcao);
     printf("Digite um numero: ");
    scanf("%f", &n2);
    
    switch (opcao){
    	
    	case '+':
    printf ("Primeiro numero: %.1f\nSegundo numero: %.1f\nResultado: %.1f",n1,n2,n1+n2);
    	break;
    	    	case '-':
    printf ("Primeiro numero: %.1f\nSegundo numero: %.1f\nResultado: %.1f",n1,n2,n1-n2);
    	break;
    	    	case '*':
    printf ("Primeiro numero: %.1f\nSegundo numero: %.1f\nResultado: %.1f",n1,n2,n1*n2);
    	break;
    	    	case '/':
    printf ("Primeiro numero: %.1f\nSegundo numero: %.1f\nResultado: %.1f",n1,n2,n1/n2);
    	break;
	}

	
	
	
}
