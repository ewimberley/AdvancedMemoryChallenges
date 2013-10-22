#include <stdio.h>
#include <stdlib.h>

int a(){
    char buff[10];
    char buff2[4] = "dir"; 
    scanf(buff, "%s");
    system(buff2);
}

int main(){
	a();
}
