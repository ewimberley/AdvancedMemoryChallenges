#include <stdio.h>
#include <stdlib.h>

class Test{
public:

Test(){
	format[0] = '%';
	format[1] = 's';
	format[2] = '\n';
	format[3] = '\0';

	buffer2[0] = 'b';
	buffer2[1] = '\0';
	
	secret[0] = '1';
	secret[1] = '3';
	secret[2] = '3';
	secret[3] = '7';
	secret[4] = '\0';
}

void a(){
	while(true){
		scanf("%s", buffer);
		printf(format, buffer2);
	}
}

private:
	char buffer[10];
	char format[10];
	char buffer2[10];
	char secret[10];
};

int main(){
	Test aTest = Test();
	aTest.a();
}
