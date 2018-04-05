#include <stdio.h>


//funcao recursiva que conta de 1 até o número da entrada
void contar(int valor){
    if(valor == 0)return;
    contar(valor-1);
    printf("%d \n",valor);
}

//funcao recursiva que calcula o fatorial da entrada
int fatorial( int valor){
   if(valor == 1) return 1;
   return  valor*fatorial(valor-1);
}

int main(){
   
    
    printf("Contanto até 10: \n");
    contar(10);

    printf("Fatorial de 5: \n");
    printf("%d \n", fatorial(5) ); 
}