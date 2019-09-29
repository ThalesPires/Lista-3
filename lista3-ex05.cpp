#include <stdio.h>

int main(){
	
    char str1[25];
    char str2[25];
    char cat[60];
    gets(str1);
    gets(str2);
    sprintf(cat,"%s %s",str1, str2);
    puts(cat);
    
}
