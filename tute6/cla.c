#include <stdio.h>

int main(int argc, char ** argv){
	printf("you typed in %d args\n", argc);
	int i ;
	for(i=0; i<argc; i++){
		printf("%s \n", argv[i]);
	}
	return 0;
}
