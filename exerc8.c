#include <stdio.h>

int main(){


char str[50];
int tam;

printf("Entre com uma string");
gets(str);

while(str!='\0'){
    tam++;
}

printf("O tamanho da string eh %d",tam);

return 0;
}