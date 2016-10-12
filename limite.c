#include "stdio.h"



int main() {
	double i;
	double constant;
	double somme=0.0;
    double sprecede=0.0;
	i= 1.0;
	constant=2;
	
	while((somme-sprecede)<=constant) {
		sprecede=somme;
		somme= sprecede+(1/(i*i));
		i++;
		printf("%f\n",somme);
	}
		
		
	
	
	
	
	
}
