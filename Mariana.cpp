#include <stdio.h>

int main (){
	
	int n, i;
	int vet1[100], vet2[100], vet3[100];
	
	printf("Qual o numero de elementos dos vetores?");
	scanf("%d", &n);
	
	while (n < i || n > 100){
		printf ("Valor invalido, digite um novo valor:");
		scanf("%d",&n);
	}
	for (i=0;i<n;i++) {
	
		printf("Digite um elemento para o primeiro vetor:");
		scanf("%d", &vet1[i]);
		}
	for(i=0;i<n;i++) {
		printf("Digite um elemento para o segundo vetor:");
		scanf("%d", &vet2[i]);
		
	}
	for(i=0;i<n;i++){
		vet3[i]=2*vet1[i]-3*vet2[i];
		
	}
	for(i=0;i<n;i++){
		
		printf("%d", vet3[i]);
	}
	
		return 0; 
		
	}
 


