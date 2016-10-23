#include <stdio.h>

int main(){

	long population = 7347592300;
	int increase;
	int x;
	printf("| Year  |  Population  |  Population Increase |\n");
	printf("_______________________________________________\n");

	for(int i = 1; i <= 75; i++){
		
		increase = population * 0.0113;	
		population += increase;
		if(i < 10){	
			printf("|   %d   |  %ld  |      %d      |\n", i, population, increase);
		}
		else if(i >= 10 && i < 18){
			printf("|   %d  |  %ld  |      %d      |\n", i, population, increase);
		}
		else if(i >= 18 && i < 28){
			printf("|   %d  |  %ld  |      %d     |\n", i, population, increase);
		}
		else if(i >= 28){
			printf("|   %d  |  %ld |      %d     |\n", i, population, increase);
		}

		if(population > (7347592300 * 2) && x == 0){
			x = i;
		}
	}

	printf("_______________________________________________\n");
	printf("The population will double after %d years.\n", x);
	
	return 0;
}
