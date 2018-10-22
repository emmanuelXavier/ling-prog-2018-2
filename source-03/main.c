#include <stdio.h> 

float num1, num2;

float somar(float * n1, float * n2){
	*n1 += 5;
	return *n1 + *n2;
}             
                                      
int main(){
	printf("Informe os numeros: ");
	scanf("%f %f",&num1,&num2);
	
	float resultado = somar(&num1,&num2); 
	
	printf("%.0f\n", resultado);
	printf("%.0f",num1);
	
	/*Enderecos da memória
	 * int n[10],i;
	for (i = 0; i < 10; i++)
		printf("%p\n", &n[i]);*/
		
	/*Tamanho alocado
	 * 
	char * c;
	printf("%d",sizeof(c));
	*/
	
	
	
	return 0;
}




