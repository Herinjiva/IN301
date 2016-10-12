#include "stdio.h"

int main() {
	int t,sec,min,heu;
	char s,m,h;
	s='s';
	m='s';
	h='s';
	printf("Donner temps en secondes");
	scanf("%d",&t);
	
	sec=t%60;
	min=(t/60)%60;
	heu=t/3600;
	
	if(sec<=0){
		s=0;
	}
	
	if(min<=0){
		m=0;
	}
	
	if(heu<=0){
		h=0;
	}
		
		 
	
	printf("%d seconde%c correspond à %d heure%c, %d minute%c et %d seconde%c\n",t,s,heu,h,min,m,sec,s);
	
}

