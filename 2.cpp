#include <stdio.h>
#include <stdlib.h>

/**
 * A class that contains a character array, provides a method for reading standard input into it.
 */
class Test{
	public:

	/**
	 * Scan a string into the character array.
	 */
	void a(){
		scanf("%s", buffer);
	}

	private:
	char buffer[10];
};

/**
 * A class that provides a method to execute a command.
 */
class Command{
	public:

	Command(){
		command[0] = 'l';
		command[1] = 's';
		command[2] = '\0';
	}

	/**
	 * Execute the command in the character array.
	 */
	void a(){
		system(command);
	}
	
	private:
	char command[10];
};

int main(){
	//put some objects in the heap
	Test* aTest = new Test();
	Command* c1 = new Command();
	Command* c2 = new Command();
	Command* c3 = new Command();
	Command* c4 = new Command();
	//read from the standard input
	aTest->a();
	//execute some commands
	c2->a();
	delete c2;
	c3->a();
	delete c3;
	c4->a();
	delete c4;
	delete aTest;
	delete c1;
}
