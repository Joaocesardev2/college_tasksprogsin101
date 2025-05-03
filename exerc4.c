#include <stdio.h>
int main (){
int mat [3][3];
int maior= 0 ,menor= 0;
int i,j;

//a logica vai ser a verificação das variaveis,fazendo a contagem

for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&mat[i][j]);
}
}

//looping para definir qual é maior ou menor da matriz
for(i=0;i<3;i++){
for(j=0;j<3;j++){

    if(mat [i][j]> maior){
        maior = mat [i] [j];
    }
    if(mat [i] [j] < menor){
        menor = mat [i] [j];
    }
}
}

printf("O maior numero da matriz eh %d",maior);
printf("O menor numero da matriz eh %d", menor);
return 0;
}
