#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

	double pi = 4;
	float y = -1.0;
	double x = 3.0;
	int fterm = 0;
	int sterm = 0;
	int thterm = 0;
	int foterm = 0;
	int z;

	while(1){

		pi += 4.0 / x * y;
		x += 2.0;
		y = -y;
		z = (x - 3)/2;
		printf("pi = %f after %d terms\n", pi, z);

		if(fabs(pi - 3.14159) < 0.000009 && foterm == 0){
			foterm = (x - 3) / 2;
			break;
		}
		else if(fabs(pi - 3.1415) < 0.00009 && thterm == 0){
			thterm = (x - 3) / 2;
			continue;
		}
		else if(fabs(pi - 3.141) < 0.0009 && sterm == 0){
			sterm = (x - 3) / 2;
			continue;
		}
		else if(fabs(pi - 3.14) < 0.009 && fterm == 0){
			fterm = (x - 3) / 2;
			continue;
		}	
	}

	printf("It took %d terms to reach 3.14\n", fterm);
	printf("It took %d terms to reach 3.141\n", sterm);
	printf("It took %d terms to reach 3.1415\n", thterm);
	printf("It took %d terms to reach 3.14159\n", foterm);

	return 0;
}
