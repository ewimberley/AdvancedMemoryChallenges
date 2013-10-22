#include <stdio.h>
#include <stdlib.h>

int a(char* buff2){
	char buff[10];
	scanf("%s", buff);
	system(buff2);
}

int main(){
    	char buff2[10] = "dir"; 
	a(buff2);
}
