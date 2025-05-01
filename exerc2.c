#include <stdio.h>

int main(){

int mat [5][5];
int i,j;



//looping para escanear a matriz, mais uma vez não é IA leandro, apenas para localização kkkkkk
for(i=0;i<5;i++){
for(j=0;j<5;j++){

    scanf("%d ",&mat[i][j]);

}
}


  for(i=0;i<5;i++){

  printf("%d", mat[i][i]);
   
  }
  

    

    
    return 0;
}