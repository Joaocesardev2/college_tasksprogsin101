#include <stdio.h>

int main(){

char str[50];
int i,cons,vog;

for(i=0;str[i]!= '\0';i++){

    if(str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){

     vog++;

    }else{
        cons++;
    }
}

printf("O numeor de consoante eh %d",cons);
    return 0;
}