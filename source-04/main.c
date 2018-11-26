#include <stdio.h>             
                                      
int main(){
	FILE * leitura, * escrita;
	char nome[50], telefone[20];
	
	while (1) {
		leitura = fopen("dados.txt","r");
		printf("\n\n\nContatos da agenda\n\n");
		while (1){
			if (fscanf(leitura,"%s %s", nome, telefone) != 2)
				break;
			printf("Nome\n%s\nTelefone\n%s\n\n",nome,telefone);
		}	
		
		
		scanf("%s %s", nome, telefone);
		escrita = fopen("dados.txt","a");
		fprintf(escrita,"%s %s\n", nome, telefone);
		fclose(escrita);
		fclose(leitura);
	}
	

	return 0;
}




