#include <stdio.h>
int main(){

char str [28];
int vogais = 0;
int consoantes = 0;
int i;


printf("Entre com uma palavra de mais de 28 carateres diferentes:");
gets(str);

//for para tirar os espaços e contar o numero de vogais e consoantes
 for(i =0;str[i]!='\0';i++){
 if(str[i] == ' ' ){
 continue;
 }
 if(str[i] == 'a' || str[i] == 'e' || str [i] == 'i' || str[i] == 'o' || str[i] == 'u'){
 vogais++;
}
else{
 consoantes++;
}
 }

printf("vogais %d consoantes %d", vogais, consoantes);




  return 0;
}