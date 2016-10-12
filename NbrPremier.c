#include "stdio.h"

int main() {
	
	int nbr;
	scanf("%d",&nbr);
	
	if(nbr%2==0) {
		printf("%d n'est pas un nombre premier",nbr);
	}
		else {
			if(nbr%3==0) {
				printf("%d n'est pas un nombre premier",nbr);
			}
			else {
					if(nbr%5==0) {
						printf("%d n'est pas un nombre premier",nbr);
					}
					else {
						if(nbr%7==0) {
						printf("%d n'est pas un nombre premier",nbr);
					}
					else {
						printf("%d est un nombre premier",nbr);
					}
				}
			}
		}
	}
	
					
			
			
	
	



						
