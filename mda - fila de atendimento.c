#include <stdio.h>
int main (){

	int t , i , qtcliente=0;
	
	/*/ BIANCA VALERIA LOPES PEREIRA 1606119 - ENGCOMP.2016 - SEGUNDO ALGORITMO DE MDA . /*/
	
	printf("ALGORITMO DA FILA/ ATENDIMENTO \n ");
	
	printf("digite o periodo total de chegada : \n ");
	scanf("%d", &t);

	int vetor[t];
 	
	for (i=0; i<t; i++){
		printf("\n Digite a quantidade de clientes que chegaram no %d minuto do tempo total de chegada : \n ", i+1);
		scanf("%d", &vetor[i]);
	}
 	
	for (i=0;i<t;i++){
		qtcliente = qtcliente + vetor[i];
	}
	
	int tempo[t];
	
	printf("\n Digite o tempo de espera de %d clientes em minutos : \n ", t);
	
	for (i=0; i<t; i++){
		printf("\n t%d  : \n ", i+1);
		scanf("%d", &tempo[i]);
 	}

	int menor= vetor[t-1], maior= vetor[0];
	
	for (i=0;i<t;i++){
    
		if (vetor[i]<menor){
        	int n = vetor[i];
        	menor = n;
    	}else {
            menor = menor;
        }
	}

	for (i=0;i<t;i++){
    	if (vetor[i]> maior){
        	int n = vetor[i];
        	maior = n;
        }else {
        	maior = maior;
        }
	}
	
	printf(" \n menor quantidade de clientes que chegaram em um minuto : %d \n ", menor);
	printf(" \n maior quantidade de clientes que chegaram em um minuto : %d \n ", maior);
	printf(" \n periodo total de chegada : %d \n ", t);
	printf(" \n quantidade de cliente total: %d \n ", qtcliente);

    float x = qtcliente;
    float y = t;
	float qtcarmin = x/y;

	printf(" \n quantidade de carros(cliente) por minuto : %f \n ", qtcarmin);

	int totespera=0;
	
	for (i=0;i<t;i++) totespera= totespera + tempo[i];
	

	int maitemp= tempo[0] , mentemp= tempo[t-1];
	
	for (i=0;i<t;i++){
    	if (tempo[i]<mentemp){
        	int n = tempo[i];
        	mentemp = n;
        } else {
            mentemp = mentemp;
        }
	}
	for (i=0;i<t;i++){
    	if (tempo[i]> maitemp){
        	int n = tempo[i];
        	maitemp = n;
        }else {
        	maitemp = maitemp;
        }
	}

	float m = totespera;
	float o = t;
	float medespera = m/o;
	float medatendimento = medespera/60;
	float taxatendimento = 1/medatendimento;

	printf("\n menor tempo de espera : %d \n", mentemp);
	printf("\n maior tempo de espera: %d \n", maitemp);
	printf("\n media de espera : %f \n", medespera);
	printf("\n media de atendimento: %f \n", medatendimento);
	printf("\n taxa de atendimento: %f \n ", taxatendimento);

	if ( taxatendimento>= qtcarmin) {
    	printf("\n NÃO TEM FILA \n");
	}else {
    	printf("\n TEM FILA \n ");
    	
		float nmedc= ((qtcarmin*qtcarmin)/(taxatendimento*(qtcarmin-taxatendimento)));
    	
		printf("\n numero medio de clientes na fila: %f  pessoas \n", nmedc);
	}
}
