#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char nome[50], letra;
    int tamanho = 0, i = 0, contador = 0;
    
    strcpy(nome,"Filipe Bispo"); //#1
    printf("Nome: %s\n", nome);
    
    printf("Tamanho: %d\n", strlen(nome)); //#2
    
    tamanho = strlen(nome);
    
    printf("Primeira letra: %c\n",nome[0]);
    printf("Ultima letra: %c\n",nome[tamanho-1]);
    
    //3 ctype.h
    printf("Primeira letra upper: %c\n", toupper(nome[0]));
    printf("Primeira letra lower: %c\n", tolower(nome[0]));
 
    printf("Ultima letra upper: %c\n", toupper(nome[tamanho-1]));
    printf("Ultima letra lower: %c\n", tolower(nome[tamanho-1]));
    
    printf("Nome originalmente informado: %s\n", nome);
    
    printf("Nome na vertical\n");
    for(i=0;i<tamanho;i++){
        printf("%c\n", nome[i]);    
    }
    
    printf("Nome Upper\n");
    for(i=0;i<tamanho;i++){
        printf("%c", toupper(nome[i])); 
    }
    
    printf("\nNome invertido\n");
    for(i=tamanho-1;i>=0;i--){
        printf("%c", nome[i]);  
    }
    printf("\n");
    
    printf("Informe uma letra para buscar: ");
    scanf(" %c",&letra);
    
    printf("Busca pela letra %c\n",letra);
    
    for(i=0;i<tamanho;i++){
        if(nome[i]==letra){
            contador++;
        }
    }   
    
    if(contador>0){
        if(contador==1){
            printf("Foi encontrado %d resultado na string", contador);
        }else{
            printf("Foram encontrados %d resultados na string", contador);  
        }
    }else{
        printf("Nao foi encontrada a respectiva letra no nome informado");
    }
 
    contador = 0;
    printf("Busca pela letra IGNORANDO case sensitive\n");
    printf("Informe uma letra para buscar: ");
    scanf(" %c",&letra);
    
    letra = tolower(letra);
    
    printf("Busca pela letra %c\n",letra);
    
    for(i=0;i<tamanho;i++){
        if(tolower(nome[i])==letra){
            contador++;
        }
    }   
    
    if(contador>0){
        if(contador==1){
            printf("Foi encontrado %d resultado na string", contador);
        }else{
            printf("Foram encontrados %d resultados na string", contador);  
        }
    }else{
        printf("Nao foi encontrada a respectiva letra no nome informado");
    }
    
    return 0;
}
 
 
/*
#include <stdio.h>
#include <string.h>
 
int main(){
    char nome[50];
    int tamanho = 0;
        
    printf("Informe o nome: ");
    scanf("%[^\n]s",&nome);
    
    printf("Nome informado: %s\n", nome);
    
    printf("Primeira letra: %c\n",nome[0]);
    
    tamanho = strlen(nome);
    
    printf("Tamanho do nome %d",tamanho);
    
    return 0;
}
*/
