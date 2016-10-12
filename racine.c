#include "stdio.h"

int main() {
	int x;
	scanf("%d",&x);
	
	float calcul_moyenne(float a,float b) {
		float m; 
		m=(a+b)/2;
		return m;
	}
	
	float i;
	float g=0.0;
	float d=x;
	
	
	while((d-g)>0.001) {
		printf("%f  %f\n",g,d);
		i=calcul_moyenne(g,d);
		if((i*i)>x) {
			d=i;
		}
		else {
			g=i;
		}
	}
	printf("la racine de %d est %f",x,d);
}
		
		
		
		
		


	
	
