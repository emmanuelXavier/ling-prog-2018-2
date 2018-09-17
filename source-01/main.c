#include <stdio.h>              
                                      
int main(){
	/* tipos de variável e especificadores de tipos
	int      %d     integer
	char     %c     char
	float    %f     real        
	char[20] %s     string        
	*/ 
	
	/*declaracao de variaveis
	idade : integer;
	
	Em C
	int idade; 
	 
	 */
	
	int idade;
	//operadores de atribuicao 
	idade = 100;
	idade += 5; // idade = idade + 5;
	idade -= 5; // idade = idade - 5;
	idade *= 5;
	idade /= 5;
	
	//operadore de incrementacao e decrementacao
	//pos   cont++   cont--
	//pre   ++cont   --cont
	
	int cont = 10;
	printf("%d",cont--);
	//saida write
	printf("%d",cont);
	
	//entrada read
	scanf("%d",&cont);
	
	
	//leia dois numeros e mostre a soma
	//leia dois numeros e mostre a subtracao
	//leia dois numeros e mostre a multiplicacao
	//leia dois numeros e mostre a divisao
	//linha nova
	
 	
	              
	return 0;
}




