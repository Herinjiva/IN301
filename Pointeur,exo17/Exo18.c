#include "stdlib.h"  //=> pour utiliser man et srand
#include "time.h"
#include "stdio.h"
struct tableau {
	int taille;
	int tab[100];
};
typedef struct tableau Tab;

Tab echange(Tab T,int a,int b) {
	int t;
	t=T.tab[a];
	T.tab[a]=T.tab[b];
	T.tab[b]=t;
	return T;
}


int alea(int n) {
	return rand()%20;
	
}

struct tableau rand_int(int n) {       ;          // => intialise un tableau aléatoirement
	Tab T;
	T.taille=n;
	int i;
	for(i=0;i<n;i++) {
		T.tab[i]=alea(20);
	}
	return T;
}

int mult_tableau(Tab T) {
	int i;
	int res;
	res=1;
	for(i=0;i<T.taille;i++) {
		res=res*T.tab[i];
	}
	return res;
		
		
	
}

int valeur_minimale(Tab T,int d) {
	int i,temp,min,x;
	min=T.tab[d];
	for(i=d;i<T.taille;i++) {
		x=T.tab[i];
			if(x<min) {
				temp=min;
				min=x;
				x=temp;
			}
		}
		return min;
	}

int indice_minimale(Tab T,int d) {
	int i,ind;
	ind=d;
	for(i=d;i<T.taille;i++) {
			if(T.tab[ind]>T.tab[i]) {
				ind=i;
			}
		}
		return ind;
	}




struct tableau trie_bulle(Tab T) {
	int i,TC;
	for(TC=1;TC<T.taille-1;TC++) {
		for(i=T.taille-1;i>=TC;i--) {
			if(T.tab[i-1]>T.tab[i]) {
				T=echange(T,i,i-1);
			}
		}
	}
	return T;
	
}


Tab trie_selection(Tab T) {
	int ind,i;
	for(i=0;i<T.taille;i++) {
		ind=indice_minimale(T,i);
		T=echange(T,i,ind);
	}
	return T;
		
}


Tab decale_droite(Tab T,int d) {
	int i;
	for(i=T.taille-1;i>d;i--) {
		T=echange(T,i,i-1);
		
	}
	return T;
	
}


void affiche_tableau(Tab T) {
	int i;
	for(i=0;i<T.taille;i++) {                       
		printf("tab[%d]= %d\n",i,T.tab[i]);
	}
	
	
	
}

Tab insere_trie(Tab T,int n) {
	int i,d;
	d=0;
	for(i=0;T.tab[i]<n;i++) {
		d++;
	}
	T=decale_droite(T,d);
	T.tab[d]=n;
	return T;
	
	
	
	
}

Tab inversertab(Tab T) {
	int i,t;
	t=T.taille-1;
	for(i=0;i<T.taille/2;i++) {
		T=echange(T,i,t);
		t--;
		
	}
	return T;
	
	
}


int main() {
	//Tab T;
	//T.taille= 10;
	/*
	int s;
	s=sizeof(T);
	printf("taille tableau: %d\n",s);  //=> case de mémoire réservé pour lui
	*/
	//question c: rand et srand
	
	
	
	srand(time(NULL));
	/*int x,n;
	n=100;
	x=alea(n);
	printf("x=%d",x);*/        // => attribue valeur aleatoirement
	
	
	
	Tab monTab;
	int i,n;
	n=10;
	srand(time(NULL));
	monTab= rand_int(n);
	affiche_tableau(monTab);

	/*int mult;
	mult=mult_tableau(monTab);
	printf("mult=%d",mult);
	* */
	
	int min;
	min=valeur_minimale(monTab,0);
	printf("min=%d",min);
	
	/*Tab Ttrie;
	Ttrie=trie_bulle(monTab);
	affiche_tableau(Ttrie);
	* */
	
	
	Tab Ttrie,Tinv;
	Ttrie=trie_selection(monTab);
	affiche_tableau(Ttrie);	printf("\n");
	
	Ttrie=insere_trie(Ttrie,12);
	affiche_tableau(Ttrie);
	
	printf("\n");
	Tinv=inversertab(Ttrie);
	affiche_tableau(Tinv);
	
	
	  return 0;
	
}
		
	
	
	

