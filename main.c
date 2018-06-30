//Carrega a bibilhoteca báscia do C
// Bibilhotecas servem para ler de forma certa, as funções.
#include<stdio.h>
//Inicio do projeto
main(){
	//Criando uma variável do tipo inteiro
	//variaveis inteiras são aquelas que podem ser: 1 ou 2 ou 3;etc....
	int escolha;
	//Imprimir algo na tela
	// o /n é para pular linha
	printf("Bem-vindo ao mundo de hazghost um mundo macabro cheio de inimigos \n Digite algum numero \n");
	//Scanf lê algo do usuário.
	//%d é para ler inteiros
	//o & é para dizer que é para mandar para a variável
	scanf("%d",&escolha);
	//Main menu
	printf("---------------- Main menu-----------------------------------------------------------------\n");
	printf("\n1- Novo jogo\n2- Carrgar jogo\n3- Sair\n");
	scanf("%d",&escolha);
	printf("\n-----------------------------------------------------------------------------------------\n");
	if( escolha == 1){
		printf(" Comecando jogo\n");
	}
	else if(escolha == 2){
		printf(" Em breve\n");
	}
	else if(escolha == 3){
		printf(" Saindo\n");
	}
	else{
		printf(" Oq vc digitou mesmo?\n");
	}
}
