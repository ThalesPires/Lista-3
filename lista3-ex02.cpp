#include <stdio.h>

int main(){
	
	char s[20];
	int i;
	int cont = 0;
	printf("Digite um texto: ");
	gets(s);
	for(i = 0; s[i] != '\0' && i < sizeof(s); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A'
		|| s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
			cont++;
		}
	}
	printf("A palavra tem %d vogais", cont);
	
}
