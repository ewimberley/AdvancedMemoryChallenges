#include <stdio.h>
#include <stdlib.h>

/**
 * An object that contains two character arrays, one determined by the user, and one that contains a shell command.
 */
class Test{
public:

/**
 * Set the command buffer to the command "ls".
 */
Test(){
	command[0] = 'l';
	command[1] = 's';
	command[2] = '\0';
}

/**
 * Read a string from standard input, then execute the command in the command character array.
 */
void a(){
	scanf("%s", buffer); //read from standard input until null byte
	system(command); //execute the command in the command character array
}

private:
char buffer[10]; //stores a 10 character string
char command[10]; //stores a 10 character command passed to the
};

int main(){
	//this object is stored on the stack
	Test aTest = Test();
	aTest.a();
}
