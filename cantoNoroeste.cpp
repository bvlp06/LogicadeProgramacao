#include<stdio.h>
#include <locale.h>
///// uema 2016
///// engenharia de computa��o - 2� periodo
//// bianca val�ria lopes pereira 1609119

int main (){
	
	setlocale(LC_ALL, "Portuguese");	

int a, l, j , i, custo=0, aux=0;

	printf("   CANTO NOROESTE  ");
	printf ("\n Digite o n�mero de armaz�ns \n");
	scanf("%d", &a );
	printf(" Digite o n�mero de lojas \n");
	scanf("%d", &l);

int vet1[a], vet2[l];
int matriz[a][l];

for (j=0; j<a; j++){
	printf(" \n digite a quantidade de produtos do armaz�m %d \n", j+1);
	scanf("%d", &vet1[j]);
	}
for (j=0;j<l;j++){
	printf(" \n digite a demanda da loja %d \n ", j+1);
	scanf("%d", &vet2[j]);
}	

for (i=0;i<a;i++){
	for (j=0;j<l;j++){
		printf("digite a posi��o [%d] [%d] da tabela de custo de transporte de produtos \n",i+1,j+1);
		scanf("%d", &matriz[i][j] );
	}
}

    for (i=0; i<a; i++)	{
    
    	for (j=0;j<l;j++){
    		
          	if (vet1[i]<vet2[j]) {
		
	        	vet2[j]= vet2[j]-vet1[i];
		
				custo = custo + vet1[i]*matriz[i][j] ;
	         	vet1[i]=0;
	    	}
		    else if (vet1[i]==vet2[j]){
			
				   custo = custo + vet1[i]*matriz[i][j] ;
			       vet1[i] = 0 ;
		           vet2[j] = 0 ;
		         }
	     	else {
		
	         	vet1[i] = vet1[i] - vet2[j] ;
		
				custo = custo + vet2[j]*matriz[i][j] ;
				vet2[j] = 0 ;
		    }
				
		}
	}
	
	
	for(i=0;i<a;i++){
	for (j=0;j<l;j++){ 
	aux = aux + vet2[j] + vet1[i];
	}
}
	if (aux==0) {
	printf ("\n sucess! \n o custo � de %d" , custo);	
} else printf("\n fail");

	
	
}




