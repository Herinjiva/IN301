#include "stdio.h"




int main() {
	
	
	int x,y,c,res;
	c=0;
	printf("Entre les 2 entiers strictement positif\n");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	
	printf("%d x %d",x,y);
	while(x!=1) {
		if(x%2==0) {
		x=x/2;
		y=2*y;}
		else {
			x=x-1;
			c=c+y; 
			

		}
		printf("= %d x %d + %d\n",x,y,c);
	}
	res=y+c;
	printf("=%d\n",res);
}
			
	

	
		
	
	
	
	
	

