#include <stdio.h>

int main(){

    int mat [4][4];
    int i,j;

for(i=0;i<4;i++){
for(j=0;j<4;j++){     
printf("Entre com a matriz:");
scanf("%d", &mat[i][j]);
}
}
//para mostrar a matriz, fique calmo Leandro é so para eu me guiar no código,não é IA
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d",mat[i][j]);

}
printf("\n");
}

//para mostrar numeros pares

for(i=0;i<4;i++){
for(j=0;j<4;j++){
if(mat[i][j]%2 == 0){
printf("\n%d", mat[i][j]);
}
}
}

 return 0;
}