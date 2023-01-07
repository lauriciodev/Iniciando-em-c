#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ 
  system("clear");
	while(0 == 0){
		printf("====================\n");
		printf("Escolha uma opção \n");
		printf("====================\n");
		printf("0 Sair\n");
		printf("1 Inserir outro numero\n");
		printf("> ");
		int action;
		scanf("%i",&action);
		if(action == 0){
			break;
		}
		if(action == 1){
			  system("clear");
				printf("Digite um numero: ");
				int number;
				scanf("%i",&number);
				for(int i = 1; i < 11; i++ ){
				printf("%i X %i = %i \n",number,i,number*i);
		};
		}
	}
	system("pause");
	return 0;
};



