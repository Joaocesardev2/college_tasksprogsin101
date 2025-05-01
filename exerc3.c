#include <stdio.h>
int main(){

float mat[3][3];
float s = 0,m = 0;
int j,i;

//para escanear 
printf("Entre com numeros decimais");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%f", &mat[i][j]);
s += mat[i][j];
}
}

m = s/9;


printf("%2.f", m);


    return 0;
}