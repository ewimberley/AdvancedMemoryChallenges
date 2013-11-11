#include <stdio.h>
#include <stdlib.h>

int a(){
	int position = 0;
	char in;
    	char buff2[10] = "dir"; 
	char buff[10];
	printf("buff position: %p\n", buff);
	printf("buff2 position: %p\n", buff2);
	scanf("%d\n", &position);
	if(position < 0){
		printf("nice try...\n");
		exit(1);	
	}
	position = position*2;
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
	a();
}
