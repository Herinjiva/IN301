#include "stdio.h"

int main() {
	
	int somme_div(int n) {
		int s;
		s=0;
		int i;
		for(i=1; i<= n/2; i++) 
			if (!(n%i)) s+=i;
			return s;
		}
		
	int est_ami(int n, int m) {
		return(somme_div(n)==m&&somme_div(m)==n);
	}
/*
int x,y,res;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("n= %d et m= %d\n",x,y);	
	res= est_ami(x,y);
	if( res==1) {
		printf("%d et %d sont amis\n",x,y);
	}
	*/
	
	
	int i;
	int n=100000;
	int sommeDei;
		for(i=1;i<n;i++) {
			sommeDei=somme_div(i);
			if((i<=sommeDei)&&(sommeDei<n)) {
				if(i==somme_div(sommeDei)) {
					printf("%d et %d sont amis\n",i,sommeDei);
				}
			}
		}
		return 0;
	}
			

		
			
