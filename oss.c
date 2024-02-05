#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

void help() { 
	printf("This program is designed to launch child processes specified by the user. Here are the parameters:\n"); 
	printf("[-h] - outputs a help message and terminates the program.\n");
	printf("[-n proc] - specifies total number of child processes.\n");
	printf("[-s simul] - specifies maximum number of child processes that can simultaneously run.\n");
	printf("[-t iter] - number of iterations. \n");
	printf("EX: if you wanted to run 5 processes, 3 to run simultaneously and have each process perform 2 iterations, then it'd look like:\n");
	printf("./oss -n 5 -s 3 -t 2\n"); 
}

int main(int argc, char *argv[]) { 
	const char optstr[] = "hn:s:t:"; 
	int n = 0; // total number of processes 
	int s = 0; // maximum number of child processes that can simultaneously run
	int t; // number of iterations 
	while ((opt = getopt(argc, argv, optstr)) != -1) { 
		switch(opt) { 
			case 'h': 
				help(); 
				break; 
			case 'n': 
				n = atoi; 
				break; 
		}
	}


} 

