#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sig)
{
	printf("nice try, must be less than 10...\n");
}

int a(){
	long position = 0;
	char in;
    	char buff2[10] = "dir"; 
	char buff[10];
	printf("buff position: %p\n", buff);
	printf("buff2 position: %p\n", buff2);
	scanf("%ld", &position);
	printf("position: %ld\n", position);
	if(position < 0){
		printf("nice try, must be more than 0...\n");
		exit(1);	
	}
	position = position*2;
	printf("position*2: %ld\n", position);
	in = 0;
	while(position < 10 && in != '\n'){
		scanf("%c", &in);
		buff[position] = in;
		printf("%d\n", position);
		position++;
	} 
	//scanf("%s", buff);
	printf("buff: %s\n", buff);
	printf("buff2: %s\n", buff2);
	system(buff2);
}

int main(){
	signal(SIGABRT, &handler);
	a();
	return 0;
}
