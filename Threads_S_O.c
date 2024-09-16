#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

/*
cada log eh composto por:
endereco ip - - data e hora "pegando do endereco tal" tamanho1 tamanho2 "link do endereco" "navegador usado" e "-" (indica proximo log)


*/

#define SIZE 277 //10 mil

/*
void *function(void *arg) {
	
	if(t1 < SIZE) {
		
	}
}
*/

int main()  {
	/*
	pthread_t t1;
	pthread_create(&t1, NULL, function, (void *) (&vetor[SIZE]);
	
	pthread_join(t1, NULL);
	*/
		
	int vetor[SIZE]; //cria um vetor para receber o tamanho que tem dentro do arquivo
	int i; //para iteração do for
	
	
	char vetor1[SIZE] = "178.252.149.46 - - [23/Jan/2019:12:27:45 +0330] \"GET /settings/logo HTTP/1.1\" 200 4120 \"https://www.zanbil.ir/browse/cell-phone/%DA%AF%D9%88%D8%B4%DB%8C-%D9%85%D9%88%D8%A8%D8%A7%DB%8C%D9%84\" \"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:64.0) Gecko/20100101 Firefox/64.0\" \"-\"";
	char *t;
	
	t = strtok(vetor1, "\"");
	while(t != NULL){
		printf("%s\n", t);
		t=strtok(NULL, "\"");
	}
	
	/*
	FILE *arquivo; //cria um arquivo
	arquivo = fopen("C:\\Users\\User\\OneDrive\\Área de Trabalho\\logs.txt", "r"); //abre o arquivo para leitura usando duas contrabarras
	
	//utiliza for para caminhar sobre cada caracter do arquivo para escrever no vetor
	for(i = 0; i < SIZE; i++) //talvez seja SIZE +1, para i ler até o ultimo digito
		fscanf(arquivo, "%d\n", &vetor[i]);
	
	
	
	arquivo = fopen("teste02.txt", "w"); //nesse caso, como não existia teste02, a funçao cria ele e habilita para escrever dentro
	
	//utiliza for para escrever no arquivo, porém o novo arquivo terá somado cada número +2
	for(i=0; i<6; i++)
		fprintf(arquivo, "%d\n", vetor[i]+2);
	
	fclose(arquivo); //para fechar o arquivo
	
	printf("\"", t); //jeito certo de se fazer o \" indica uma " (aspa dupla)
	*/
	
}

