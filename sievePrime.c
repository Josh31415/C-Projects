#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

	int fnumber = atoi(argv[1]);
	int snumber = atoi(argv[2]);	
	int z = sqrt(fnumber);
	int A[z];
	int x = 0;
	z = sqrt(snumber);

	for(int i = 2; i <= z; i++){

		if(A[i] = 0){

			for(int j = (i * i) + (x * i); i < z; j++){
				A[j] = 1;
			}
		}
		x++;
	}
	for(int i = 0; i < sqrt(snumber); i++){
		printf("%d\n", A[i]);

	}
	
	return 0;
}
