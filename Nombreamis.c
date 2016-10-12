#include "stdio.h"

int main() {
	
	printf("entrer deux entiers naturels positif\n");
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("n= %d et m= %d\n",n,m);

	int i,reste,somme,y,x;	
	y=0;
	x=0;
	somme=0;
	i=1;
	while (i<= n/2) {
		reste=n%i;
		if(reste==0) {
			somme+=i;
		}
		i++;
	}

		if(somme==m);
		{
			x=1;
		}
	i=1;
	somme=0;		
	
	while (i<= m/2) {  
		reste=m%i;
		if(reste==0) {
			somme+=i;
		}
		i++;
	}
		if(somme==n) {
			y=1;
		}
		if((y==1)&&(x==1)) {
			printf("%d et %d sont amis\n",n,m);
		}
		else {
			printf("%d et %d sont pas amis\n",n,m);
		}
	}
	

	
	
/* int somme-div(int a) {
 * int s=0;
 * for(int i=1; i<a;i++) {
 * 		if(!(a%i)) s+=i;
 * return s;
 * 
 * int estami(int a,int b)
 * return (Sommediv(a)==b&& Sommediv(b)==a)
*/
