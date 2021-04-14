//Desenvolva um único algoritmo em C que faça inserções e retiradas em uma fila definida em alocação sequencial.
//Preocupe-se com o possível estouro da fila (overflow) e para isso defina-a com poucos elementos e teste a
//possibilidade de overflow e de retirada em uma fila vazia (underflow). Os campos dos nós da fila devem ser
//matrícula (chave), nome do aluno e situação (AP, RM, RF ou IN). Faça as inserções e retiradas como funções,
//sendo o "main" um menu de escolha da operação a ser realizada. Deixe seu programa pronto para ser executado
//em sala - alguns alunos serão escolhidos para a exibição do seu trabalho.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

//Definição da struct
typedef struct aluno
{
	int chave;
	char nome[40];
	char situacao[3];
}Taluno;

//Escopo das funções usadas
int inserir(Taluno alunos[],int *tam,int matricula,char nome[],char situacao[]);
int remover(Taluno alunos[],int *tam);
void exibir(Taluno alunos[],int tam);

void main(){
	
	//declaração de variáveis
	Taluno alunos[MAX];
	int i=0,matricula,tam=0;
	char nome[40],situacao[3];
	
	//laço para o Menu
	while(i!=4){
		
		//Exibir Menu e obter opção escolhida pelo usuário
		printf("Digite a opcao desejada:\n1-inserir\n2-remover primeiro da fila\n3-exibir primeiro da fila\n4-Encerrar\n");
		scanf("%d",&i);
		
		switch(i){
			
			//inserir no fim da fila
			case 1:
				//pegar matricula
				printf("Digite a matricula: ");
				scanf("%d",&matricula);
				
				//pegar nome
				printf("Digite o nome: ");
				fflush(stdin);
				gets(nome);
				
				//pegar situacao
				printf("Digite a situacao(AP, RM, RF ou IN): ");
				fflush(stdin);
				gets(situacao);
				
				//chamada da função
				if(inserir(alunos,&tam,matricula,nome,situacao)==1){
					printf("O valor foi inserido com sucesso!!\n");
				}else{
					printf("Nao foi possivel inserir!!\n");
				}
				
			break;
			
			//remover o primeiro da fila
			case 2:
				//chamada da função
				if(remover(alunos,&tam)==1){
					printf("Removido com sucesso!!\n");
				}else{
					printf("Impossivel remover!!");
				}
				
			break;
			
			//exibir o primeiro da fila
			case 3:
				//chamada da funçao
				exibir(alunos,tam);
			break;
			
			//sair
			case 4:
				printf("Programa encerrado!!\n");
				
			break;
			
			default :
				printf("Digite um valor valido!!\n");
		}	
	}
}

int inserir(Taluno alunos[],int *tam,int matricula,char nome[],char situacao[]){
	
	//testar se a fila tá cheia
	if((*tam)==MAX){
		return 0;
	}else{
		//colocando informações na ultima posição do vetor
		alunos[(*tam)].chave = matricula;
		strcpy(alunos[(*tam)].nome,nome);
		strcpy(alunos[(*tam)].situacao,situacao);
		
		//incrementando o tamanho da fila
		(*tam)++;
		return 1;
	}
	
}

int remover(Taluno alunos[],int *tam){
	int i;
	
	//testar se fila tá vazia
	if((*tam)==0){
		return 0;
	}else{
		
		//percorrer empurrando os valores uma casa pra frente
		for(i=0;i<(*tam);i++){
			alunos[i].chave = alunos[i+1].chave;
			strcpy(alunos[i].nome,alunos[i+1].nome);
			strcpy(alunos[i].situacao,alunos[i+1].situacao);
		}
		
		//decrementando o tamanho do vetor
		(*tam)--;
		return 1;
	}
}

void exibir(Taluno alunos[],int tam){
	int i;
	
	//testar se a fila tem elementos
	if(tam==0){
		printf("Fila Vazia!!\n");
	}else{
		//exibir definitiva
		printf("Matricula: %d ",alunos[0].chave);
		puts(alunos[0].nome);
		puts(alunos[0].situacao);
		
	}	
}
