#include "stdio.h"

void permute(int *a,int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void reinitPointeur(int *(*b)) {  
	*b=NULL;   // p=NULL ne fait rien car on travaille sur une copie
	
}




int main() {
	/*
	int a;
	a=sizeof(char);
	printf("taille de char est: %d\n",a);
	
	int b;
	b=sizeof(int);
	printf("taille de int est: %d\n",b);
	
	int c;
	c=sizeof(double);
	printf("taille de double est: %d\n",c);
	
	int d;
	d=sizeof(char*);
	printf("taille de char* est: %d\n",d);
	
	int e;
	e=sizeof(void*);
	printf("taille de void* est: %d\n",e);
	
	int f;
	f=sizeof(int*);
	printf("taille de int* est: %d\n",f);
	
	int g;
	g=sizeof(double*);
	printf("taille de double* est: %d\n",g);
	
	
	int h;
	h=sizeof(int**);
	printf("taille de int** est: %d\n",h);
	
	int i;
	i=sizeof(int[10]);
	printf("taille de int[10] est: %d\n",i);
	
	int j;
	j=sizeof(char[7][3]);
	printf("taille de char[7][3] est: %d\n",j);
	
	
	int l;
	l=sizeof(long long int);
	printf("taille de long long int  est: %d\n",l);
	* 
	
	
	int taille;
	char tab[10];
	taille=sizeof(tab);
	printf("taille de tab  est: %d\n",taille);
	
	taille=sizeof(tab[0]);
	printf("taille de tab[0]  est: %d\n",taille);
	
	taille=sizeof(&tab[0]);
	printf("taille de *&tab[0]  est: %d\n",taille);
	
	taille=sizeof(*&tab);
	printf("taille de *&tab  est: %d\n",taille); 
	
	taille=sizeof(*&tab[10]);
	printf("taille de *&tab[10]  est: %d\n",taille);
	
	char (*p)[10]=&tab;
	taille=sizeof(p);
	printf("taille de p  est: %d\n",taille);
	
	taille=sizeof(*p);
	printf("taille de *p  est: %d\n",taille);
	
	taille=sizeof(*p[2]);
	printf("taille de *p[2]  est: %d\n",taille);
	
	taille=sizeof(&(*p)[2]);
	printf("taille de &(p)[2] est: %d\n",taille); //l'adresse d'un adresse => 8/4
	
	*/
	/*
	int a,b;
	a=3;
	b=7;
	permute(&a,&b);
	printf("a vaut %d et b vaut %d\n",a,b);
	* */
	
	int a=1;             //&=> l'adresse     *=> ce qu'il y a à cette adresse
	int *p=&a;
	reinitPointeur(&p);
	printf("p vaut %p \n",p);  
	
	
	
	
	
}
