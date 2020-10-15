#include "prova.h"

int main(){
    printf("Nome:Leonardo da Silva Souza\n");
    printf("Matricula:20141107853\n\n");

    printf("Inicio do programa...\n\n");
    printf("Criando Arvores...\n\n");

    //Ãrvore BinÃ¡ria
    
    TAB *a0 = inicializar ();
    TAB *a9 = criar (9, NULL, NULL);
    TAB *a8 = criar (1, NULL, NULL);
    TAB *a7 = criar (8, NULL, a9);
    TAB *a6 = criar (6, NULL, NULL);
    TAB *a5 = criar (7, NULL, NULL);
    TAB *a4 = criar (2, NULL, NULL);
    TAB *a3 = criar (7, a6, a7);
    TAB *a2 = criar (3, a4, a5);
    TAB *a1 = criar (5, a2, a3);
    TAB *a10 = copia(a1);
    
    //Ãrvore BinÃ¡ria de Busca
    TABB *b0 = inicializar2 ();
    TABB *b9 = criar2 (9, NULL, NULL);
    TABB *b8 = criar2 (1, NULL, NULL);
    TABB *b7 = criar2 (8, NULL, NULL);
    TABB *b6 = criar2 (6, NULL, NULL);
    TABB *b5 = criar2 (7, NULL, NULL);
    TABB *b4 = criar2(2, b8, NULL);
    TABB *b3 = criar2 (7, b6, b7);
    TABB *b2 = criar2 (3, b4, b5);
    TABB *b1 = criar2 (5, b2, b3);

    printf("Verificando se a arvores estao vazia...\n\n");
    if (vazia(a1)){
        printf("Ãrvore vazia\n");
    }
    else {
        printf("Arvore a1 nao vazia com valor igual a: %d\n",a1->info);
        printf("\nImprime Arvore(a1):\n");
        imprimir(a1);
    }

    if(vazia2(b1)){
        printf("Arvore Binaria de Busca vazia\n");
    }
    else{
        printf("\n\nArvore b1 nao vazia com valor igual a: %d\n",a1->info);
        printf("\nImprime Arvore Binaria de Busca(b1):\n");
        imprimir2(b1);
    }

    
    int op=0;
    do{
        printf("\n\nDigite o numero da questao que voce deseja acessar(1..4)p/sair pressione 0\n\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\nComparacao entre arvore a1 e a2:\n");/*Caso desejar alterar os valores das Ã¡rvores, na seÃ§Ã£o "Ãrvore BinÃ¡ria" Ã© possÃ­vel a alteraÃ§Ã£o.*/
                printf("\nImprime Arvore(a1):\n");
                imprimir(a1);
                printf("\nImprime Arvore(a2):\n");
                imprimir(a2);
                if(igual(a1,a2)==1){
                    printf("\nArvores Iguais\n");
                }
                else{
                    printf("\nArvores Diferentes\n");
                }
                printf("\nNotacao Big(0): Complexidade:O(n)\n");
            break;
            case 2:
                
                printf("\nImprime Arvore(a1) original:\n");
                imprimir(a1);
                printf("\nGerando copia da arvore a1...\n\n");
                copia(a1);
                imprimir(a10);
                printf("\n");
                printf("\nNotacao Big(0): Complexidade:O(n)\n");
            break;
            case 3:
                printf("\nVerificando a quantidade de pais com apenas 1 filho(arvore a1)...\n");
                printf("=%d",conta_pais_um_filho(a1));
                printf("\nNotacao Big(0): Complexidade:O(n)\n");
            break;
            case 4:
                printf("\nVerificando o menor e o maior elemento da Arvore binaria de busca(b1)");
                printf("\nMaior elemento= %d  Menor elemento= %d",maior(b1),menor(b1));
                printf("\nNotacao Big(0): Complexidade:O(n)\n");
            break;
        }
    }while(op!=0);
}
