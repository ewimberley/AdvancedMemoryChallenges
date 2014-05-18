#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int messageLength = 0;
	char in;
	char message[10];
	char secret[10] = "isASecret";
	char response[30];
	printf("Type a message length:");
	scanf("%d", &messageLength);
	printf("Type a message:");
	scanf("\n");
	int i;
	for(i = 0; i < messageLength && i < 10; i++){
		scanf("%c", &in);
		message[i] = in;
	}

	//memcpy(&response, &message, messageLength);
	for(int i = 0; i < messageLength && i < 30; i++){
		response[i] = message[i];		
	}

	//printf("Your message was:");
	//printf("%10c\n", message);	
	printf("Your response is:");
	for(int i = 0; i < messageLength && i < 30; i++){
		printf("%c", response[i]);	
	}
	printf("\n");
}
