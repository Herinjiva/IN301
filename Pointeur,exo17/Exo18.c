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


int alea(int k) {
	return rand()%k;
	
}



struct tableau rand_int(int n,int k) {       ;          // => intialise un tableau aléatoirement
	Tab T;
	T.taille=n;
	int i;
	for(i=0;i<n;i++) {
		T.tab[i]=alea(k);
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
	T.taille=T.taille+1;
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


Tab suppr_hasard(Tab T) {  //a modifier si vraiment nombre aleatoire
	int i,s;
	s=alea(T.taille-1);
	printf("sup=%d\n",s);
	for(i=s;i<T.taille;i++) {
		T=echange(T,i,i+1);
	}
	T.taille=T.taille-1;
	return T;
}

Tab suppr_elm(Tab T,int s) {
	int i;
	for(i=s;i<T.taille;i++) {
		T=echange(T,i,i+1);
	}
	T.taille=T.taille-1;
	return T;
	
}

Tab elim_doublon(Tab T) {
	int i,j;
	for(i=0;i<T.taille;i++) {
		j=i+1;
		while(j<T.taille) {
				if(T.tab[i]==T.tab[j]) {
					T=suppr_elm(T,j);
					j=i+1;
				}
				else j++;
			}
			
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
	monTab= rand_int(n,20);
	//affiche_tableau(monTab);

	/*int mult;
	mult=mult_tableau(monTab);
	printf("mult=%d",mult);
	* */
	
	int min;
	min=valeur_minimale(monTab,0);
	printf("min=%d",min);
	
	Tab Ttrie;
	Ttrie=trie_bulle(monTab);
	affiche_tableau(Ttrie);
	
	
	/*
	Tab Ttrie,Tinv;
	Ttrie=trie_selection(monTab);
	affiche_tableau(Ttrie);	printf("\n");
	
	Ttrie=insere_trie(Ttrie,12);
	affiche_tableau(Ttrie);
	
	printf("\n");
	Tinv=inversertab(Ttrie);
	affiche_tableau(Tinv);
	
	printf("\n");
	monTab=suppr_hasard(monTab);
	affiche_tableau(monTab);
	*/
	
	printf("\n");
	Tab sansD;
	sansD=elim_doublon(Ttrie);
	affiche_tableau(sansD);
	
	
	
	  return 0;
	
}
		
	
	
	

