#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

/*
 * Note: this version may only work in Visual Studio. 
 * It would be nice to get it working in gcc, but jno didn't seem to have an effect.
 * Maybe an instruction ordering problem? Does something reset the overflow bit in the flag register?
 */

int a(){
	int position = 0;
	char in;
	char vuln[10] = "dir";
	char buff[10] = "dir";

	printf("vuln position: %p\n", buff);
	printf("buff position: %p\n", vuln);
	
	scanf_s("%d\n", &position);
	if (position < 0){
		printf("nice try...\n");
		exit(1);
	}

	position = position * 2;
	__asm
	{
		jno NO_OVERFLOW;
		jmp abort
		NO_OVERFLOW :
	}

	in = 0;
	while (position < 9){
		printf("%p\n", &vuln[position]);
		vuln[position] = getchar();
		position++;
	}
	
	printf("vuln: %s\n", buff);
	printf("buff: %s\n", vuln);
	
	system(buff);
	return 0;
}

int _tmain(int argc, _TCHAR* argv[]){
	a();
	return 0;
}
