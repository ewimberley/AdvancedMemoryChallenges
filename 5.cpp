/*********************************************
 * Don't try this one yet, it isn't finished.*
 *********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * A class that contains a character array, provides a method for reading standard input into it.
 */
class Test{
	public:

	Test(){
		printf("Making a new test...\n");
	}

	/**
	 * Scan a string into the character array.
	 */
	void a(){
		printf("Reading string...\n");
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
		printf("Making a new command...\n");
		command[0] = 'l';
		command[1] = 's';
		command[2] = '\0';
	}

	/**
	 * Execute the command in the character array.
	 */
	void a(){
		printf("Running shell command %s\n", command);
		system(command);
	}
	
	private:
	char command[10];
};

class Fluff{
	char fluff[128];
};

int main(){

	char action[32];
	Test* tests[10];
	int onTest = 0;
	Command* commands[10];
	int onCommand = 0;
	Fluff* someFluff[5];
	int onFluff = 0;
	
	do {
		scanf("%31s", action);
		printf("running action %s\n", action);
		if(strcmp("newtest",action) == 0){
			if(onTest < 10){
				tests[onTest] = new Test();
				onTest++;
			}
		}
		else if(strcmp("newcommand",action) == 0){
			if(onFluff < 5){
				someFluff[onFluff] = new Fluff();
				onFluff++;
			}
			if(onCommand < 10){
				commands[onCommand] = new Command();
				onCommand++;
			}
		}
		else if(strcmp("settest",action) == 0){
			for(int i = 0; i < 5; i++){
				delete someFluff[i];
			}
			if(onCommand < 10){
				tests[onTest]->a();
			}
		}
		else if(strcmp("runcommand",action) == 0){
			if(onCommand < 10){
				commands[onCommand]->a();
			}
		}
		
	} while(strcmp("quit",action) != 0);
	//delete c1;
}
