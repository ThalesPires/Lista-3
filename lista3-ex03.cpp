#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	char s1[15];
	char s2[15];
	printf("Digite o primeiro texto: ");
	gets(s1);
	printf("Digite o segundo texto: ");
	gets(s2);
	int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
	}
	if(s1[i] == '\0' && s2[i] == '\0'){
		printf("são iguais");
	}else{
		printf("são diferentes");
	}
}
