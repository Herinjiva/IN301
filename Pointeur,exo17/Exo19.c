#include "stdlib.h"  //=> pour utiliser man et srand
#include "time.h"
#include "stdio.h"

typedef struct element {
	int valeur;
	struct element* suivant;
	
}element;

typedef struct element* liste;

liste creer_liste_vide() {
	return NULL;
}

int liste_est_vide(liste L) {
	return L== NULL;
}


void affiche_liste(liste L) {
	if(liste_est_vide(L)) {
		printf("\n");
	}
	else printf("%d\n",L->valeur);
	affiche_liste(L->suivant);
	
	
	
}

/*
 * void affiche(liste L) {             => iterratif
 * 		liste temp=L;
 * 		while(!liste_vide(temp)){
 * 			printf("%d",temp->val);
 * 			temp=temp->suivant;
 * 		}
 * 		printf("\n");
 * */


liste insere_debut(liste L, int x) {
	liste new=malloc(sizeof(element));
	new->valeur=x;
	new->suivant=L;
	return new;
}


liste libere_memoire(liste L) {
	if(!liste_est_vide(L)) {
		libere_memoire(L->suivant);
	}
		free(L);
	
	return L;
	
}

int alea(int n) {
	return rand()%n;
	
}

int main() {
	srand(time(NULL));
	liste L;
	int i;
	L=creer_liste_vide();
	//printf("%d\n",liste_est_vide(L));
	for(i=0;i<10;i++) {
		L=insere_debut(L,alea(100));
	}	
	
	affiche_liste(L);
	printf("\n");
	L=libere_memoire(L);
	affiche_liste(L);
	
	
	
	
	
	
}
