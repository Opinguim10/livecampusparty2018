//Carrega a bibilhoteca b�scia do C
// Bibilhotecas servem para ler de forma certa, as fun��es.
#include<stdio.h>
//Inicio do projeto
main(){
	//Criando uma vari�vel do tipo inteiro
	//variaveis inteiras s�o aquelas que podem ser: 1 ou 2 ou 3;etc....
	int escolha;
	//Imprimir algo na tela
	// o /n � para pular linha
	printf("Bem-vindo ao mundo de hazghost um mundo macabro cheio de inimigos \n Digite algum numero \n");
	//Scanf l� algo do usu�rio.
	//%d � para ler inteiros
	//o & � para dizer que � para mandar para a vari�vel
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
