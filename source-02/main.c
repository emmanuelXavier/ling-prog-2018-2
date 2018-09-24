#include <stdio.h> 

float num1, num2;

float somar(){
	float res = num1 + num2;
	return res;
}             
                                      
int main(){
	
	num1 = 150;
	num2 = 20;
	
	float resultado = somar(); 
	
	printf("%f", resultado);
	
	return 0;
}




