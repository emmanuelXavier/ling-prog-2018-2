#include <stdio.h> 

float num1, num2;

float somar(float n1, float n2){
	float res = n1 + n2;
	return res;
}             
                                      
int main(){
	printf("Informe os numeros: ");
	scanf("%f %f",&num1,&num2);
	float resultado = somar(num1,num2); 
	
	printf("%.0f", resultado);
	
	return 0;
}




