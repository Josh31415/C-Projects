#include <stdio.h>
#include <sys/time.h> // for clock_gettime()
#include <unistd.h> // for usleep()

int main(int argc, char *argv[]){
	struct timeval started, ended;
    	long secs_used,micros_used;

	int start, end, y;
	int x = 1;
	int bl = 0;
	

    	gettimeofday(&started, NULL);

	start = atoi(argv[1]);
	end = atoi(argv[2]);
	int primes[(end/2) - (end % 2)];
	primes[0] = 2;

	for(int i = 3; i < end; i++){

		if(i == start){
			y = x;
		}
		for(int j = 0; j < x; j++){
			if(i % primes[j] == 0){
				bl = 0;
				break;
			}
			else{
				bl = 1;
			}
		}
		if(bl == 1){
			primes[x] = i;
			++x;
		}	
			
	}

	for(int i = y; i < x; i++){
		printf("%d\n", primes[i]);
	}

	gettimeofday(&ended, NULL);
	printf("start: %d secs, %d usecs\n",started.tv_sec,started.tv_usec);
    	printf("end: %d secs, %d usecs\n",ended.tv_sec,ended.tv_usec);

    	secs_used=(ended.tv_sec - started.tv_sec); //avoid overflow by subtracting first
    	micros_used= ((secs_used*1000000) + ended.tv_usec) - (started.tv_usec);

    	printf("micro_second_used: %d\n",micros_used);
	return 0;
}

