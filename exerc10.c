#include <stdio.h>

int main(){

char str[50],str2[50],str3[50];

printf("Entre com a string 1");
gets(str);
printf("Entre com a string 2");
gets(str2);
printf("Entre com a string 3");
gets(str3);

strcat(str,str2,str3);

printf("%s",str);


    return 0;
}