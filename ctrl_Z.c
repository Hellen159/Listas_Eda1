#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    char str[110];
    struct celula *prox;
}celula;

celula *cria_lista () {
  celula *le;
  le = malloc(sizeof(celula));
  le -> prox = NULL;
  return le;
}

int empilha (celula *p, char str[]){
    celula *novo = malloc(sizeof(celula));
    strcpy(novo->str, str);
    novo->prox = p->prox;
    p->prox = novo;
    return 0;
}

int desempilha (celula *p){
    int i, j;
    char enter[] = "inserir ";

    celula *lixo = p->prox;
    if(lixo == NULL){
        printf("NULL\n");
        return 1;
    }
    p->prox = lixo->prox;
    for(i = 0, j = 0; i < strlen(lixo->str) ; i++){
        if(lixo->str[i] == enter[j]) j++;
        else{
            if(j>0){
                if(enter[j] == '\0') {
                    printf("%c", lixo->str[i]);
                }
            }
        }
    }
    free(lixo);
    printf("\n");
    return 0;
}

int compara(char str[]){
    int i, j, aux;
    char reset[] = "desfazer ";

    for(i = 0, j = 0; i < strlen(str) ; i++){
        if(str[i] == reset[j]) j++;
        else{
            if(j>0){
                if(reset[j] == '\0') {
                    return 1;
                }
            }else return 0;
        }
    }
}

int main(){
    char str[110];

    celula *le;
    le = cria_lista ();

    while (scanf(" %[^\n]", str) != EOF){
        int aux = compara(str);
        if(aux > 0 ) desempilha(le);
        else empilha(le,str);
        // imprime_pilha(le);
    }

    return 0;
}