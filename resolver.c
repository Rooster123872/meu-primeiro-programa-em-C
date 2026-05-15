#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

//esse codigo foi feito por mim (rooster) com auxilio do curso da desec security, mais especificamente do ricardo longatto que e o professor

int main(int argc, char *argv[]){

	if(argc <2){
		printf("feito por rooster123872 =) \n");
		printf("Modo de uso:  ./resolver www.businesscorp.com.br\n");
		printf ("ADENDO: Voce coloca o URL do site no lugar desse www.businesscorp.com.br que ele vai traduzir o para o endereco de ip\n");
	return 0;
} else {

	struct hostent *alvo = gethostbyname(argv[1]);
	
       if (alvo == NULL){

		printf("OCORREU UM ERRO, TENTA EXECUTAR O PROGRAMA SEM PASSAR ARGUMENTO AI SENHOR, PRA VER SE VC FARMA AURA :(  \n");
	} else {
	printf("ip: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
	}
}
}
