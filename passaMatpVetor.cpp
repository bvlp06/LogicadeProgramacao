#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int n, m, p;
	int i, j, k;
	printf("digite as dimensões 'n' 'm' e 'p' da matriz\n");
	
	printf("digite o n\n");
	scanf("%d", &n);
	
	printf("\ndigite o m\n");
	scanf("%d", &m);
	
	printf("\ndigite o p\n");
	scanf("%d", &p);

	int sizevet = (n*m*p);
	
	//alocar a matriz
	int ***matrizA;
	matrizA = (int***)(malloc(sizeof(int)*n));
	
	for (i = 0; i < (n); i++) {
		matrizA[i] = (int**)(malloc(sizeof(int)*m));

		for (j = 0; j < (m); j++) {
			matrizA[i][j] = (int*)malloc(sizeof(int)*p);
		}
	}

// aloca o vetor
	int *vetorUa;
	vetorUa = (int*)malloc(sizeof(int)*sizevet);
	
	for(i=0;i<(n);i++){
		for(j=0;j<(m);j++){
			for(k=0;k<(p);k++){
				
				printf("digite o valor da matriz na posição[%d][%d][%d]",(i),(j),(k));
				//receber na matriz
				scanf("%d", &matrizA[i][j][k]);
				//passa p vetor 
				vetorUa[i*m+j*p+k] = matrizA[i][j][k];

			}
		}
	}
	
					printf("\n");
					
					/// imprime a matriz e o vetor

	for(i=0;i<(n);i++){
		for(j=0;j<(m);j++){
			for(k=0;k<(p);k++){
				printf("%d   ", matrizA[i][j][k]);
			}
		}
	}
		
	printf("\n");
	
	for(i=0;i<sizevet;i++) printf("%d  ", vetorUa[i]);
	
	return 0;
}
