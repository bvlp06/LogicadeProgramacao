#include <stdio.h>
#include <stdlib.h>

//funcao que imprime a matriz
void printMatriz(int **m,int dim){
   int x,y; 
   printf("Imprimindo matriz: \n");
   for(x=0; x< dim; x++){
       for(y=0; y< dim;y++){
           printf("%d ",m[x][y]);
           if(y == (dim-1))printf("\n");
       }
   }
}

//funcao que instancia a matriz
int ** createMatriz(int dim){
   int x,y; 
   int**m = malloc( sizeof(int*)*dim ); //vetor de ponteiros pra inteiro
   for(x=0; x< dim; x++){
       m[x] = malloc( sizeof(int)*dim ); //para cada posicao do vetor é alocado outro vetor de inteiros
   }   
   return m; //retorna a matriz criada
}

//funcao que faz a leitura da matriz
void readMatriz(int ** m,int dim){
    int x,y; 
     for(x=0; x< dim; x++){
       for(y=0; y< dim; y++){
           scanf("%d",&m[x][y]);
       }
   }   
}

int main(){
   //iterador dos laços e dimensao da matriz 
   
   int dim;
   printf("Digite a dimensão da matriz de adjacencia: \n");
   scanf("%d",&dim);

   //criar a matriz com a dimensao desejada
   int**m = createMatriz(dim);
   
   //ler a entrada da matriz
   readMatriz(m,dim);

   //imprimir a matriz
   printMatriz(m,dim);
}
