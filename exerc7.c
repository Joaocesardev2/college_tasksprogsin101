#include <stdio.h>

int main(){

char str[50];
char str2[50];
int i;

printf("Entre com a primeira string:");
gets(str);
printf("Entre com a segunda string:");
gets(str2);


for(i=0;str[i]!='\0';i++){

    if(str[i] == str2[i]){
printf("As strings sao iguais");
break;
}else{
printf("As strings sao diferentes");
break;
}
}

    return 0;
}