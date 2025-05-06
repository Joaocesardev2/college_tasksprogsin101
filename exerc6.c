#include <stdio.h>
#include <string.h>


int main(){

char copia[50],str[50];
int tam =strlen(str);
int i,j;

printf("Entre com um palindromo");
gets(str);

strcpy(copia,str);
j = tam - 2;
for(i = 0; i<tam - 2;i++){
if(str[i] != copia[j]){

   
    printf("Nao eh palindromo");
  
  
    return 0;
  
}
j--;
}

printf("Eh palindromo!");

return 0;




    }