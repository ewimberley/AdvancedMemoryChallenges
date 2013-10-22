#include <stdio.h>
#include <stdlib.h>

class Test{
public:

Test(){
	command[0] = 'l';
	command[1] = 's';
	command[2] = '\0';
}

void a(){
	scanf("%s", buffer);
	system(command);
}

private:
char buffer[10];
char command[10];
};

int main(){
	Test aTest = Test();
	aTest.a();
}
