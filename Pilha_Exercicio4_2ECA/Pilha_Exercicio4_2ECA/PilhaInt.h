
#include <stdlib.h>

/* declaracao do no */
	struct no {
        int dado;   //tipo do elemento da pilha
	    struct no *prox;
	};

/*Defini��o do tipo de dado pilha */
	typedef struct no* TipoPilha;


void init (TipoPilha *topo){
    *topo = NULL;
}

int isEmpty (TipoPilha topo) {
	if (topo == NULL)
		return(1);
	else
		return(0);
}

void push (TipoPilha *topo, int elem) {
TipoPilha novo;
novo = (TipoPilha) malloc (sizeof(struct no));
if (novo != NULL)
	{
	novo->dado=elem;
	novo->prox=*topo;
	*topo = novo;
	}
else
	cout << "Stack overflow \n";
}

int pop (TipoPilha *topo,int *elem){
TipoPilha aux;
aux = *topo;
if (!isEmpty(*topo)) {
     *elem=aux->dado;
     *topo=(*topo)->prox;
     free(aux);
     return(1);
     }
else {
       return(0);
       }
}

int top (TipoPilha topo,int *elem){
    if (!isEmpty(topo)) {
        *elem=topo->dado;
        return(1);
        }
    return(0);
}
