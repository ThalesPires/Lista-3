#include <stdio.h>

int main(){
	
	char s[20];
	int i;
	
	gets(s);
	for(i = 0; s[i] != '\0' && i < sizeof(s); i++);
	printf("%d", i);
	
}
