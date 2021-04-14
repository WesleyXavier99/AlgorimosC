//importa��o de bibliotecas
#include <stdio.h>
#define MAX 10

void main(){
	
	//Declara��o de vari�veis
	int Pilha[MAX],topo=0;
	int i=0,valor,removido;
	
	//La�o para o Menu
	while(i!=-4){
		
		//Menu
		printf("Digite a opera��o:\n1-inserir no topo\n2-remover do topo\n3-exibir topo\n4-sair\n");
		scanf("%d",&i);
		
		switch(i)
		{	
			//inserir
			case 1:
				
				printf("Digite o valor a ser inserido: \n");
			 	scanf("%d",&valor);
			 	
				if(inserir(Pilha,&topo,valor)==1){
					printf("\nValor inserido com sucesso!!\n");
				}
				
			break;
			
			//remover
			case 2:
				
				removido = remover(Pilha,&topo,valor);
				if(removido!=-1){
					printf("\nO valor %d foi removido do topo!!\n",removido);
				}
			break;
			
			//exibir
			case 3:
				exibir(Pilha,topo);
			break;
			
			//finalizar
			case 4: 
				printf("Programa encerrado\\n");
			break;
			
			//valor invalido
			default:
				printf("Digite um valor valido\n");
		}
	}
	
	
}

//Fun��o para inserir valor no Topo
int inserir(int Pilha[],int *topo,int valor){
	
	if((*topo)==MAX){
		printf("Lista Cheia!!\n");
		return 0;
	}else{
		//inserindo valor no topo
		Pilha[(*topo)]= valor;
		
		//incrementando topo
		(*topo)++;
		
		return 1;
	}
	
	
}

//Fun��o para remover valor do Topo
int remover(int Pilha[],int *topo,int valor){
	int removido;
	
	//testando se o vetor est� vazio
	if((*topo)==0){
		printf("Pilha Vazia!!\n");
		return -1;
		
	}else{
		//salvar o valor removido
		removido = Pilha[(*topo)-1];
		
		//decrementando topo
		(*topo)--;
		
		//retornando o valor removido
		return removido;
	}
	
}

//Fun��o para exibir o topo
int exibir(int Pilha[],int topo){

	//Exibindo Topo da Pilha
	printf("\n");
		printf("Topo = %d ",Pilha[topo-1]);
		printf("\n");
}

