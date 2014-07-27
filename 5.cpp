#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Logic flows like water,
//powerful and swift.
//If you are not careful
//friend you just might find:
//logic turns against you,
//seeping through a rift.

//To complete this challenge, be like water and find the cracks.
//Note: if you are trying this on a system that doesn't have heap metadata protection, it won't be much fun.

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
	int setTest = 0;
	Command* commands[10];
	int onCommand = 0;
	int runCommand = 0;
	Fluff* someFluff[5];
	int onFluff = 0;
	
	do {
		scanf("%31s", action);
		printf("running action %s\n", action);
		//make a new test
		if(strcmp("newtest", action) == 0){
			if(onTest < 10){
				tests[onTest] = new Test();
				onTest++;
			}
		}
		//make a new command, also add some fluff
		else if(strcmp("newcommand", action) == 0){
			if(onFluff < 5){
				someFluff[onFluff] = new Fluff();
				onFluff++;
			}
			if(onCommand < 10){
				commands[onCommand] = new Command();
				onCommand++;
			}
		}
		//set the value of any test, get rid of some fluff
		else if(strcmp("settest", action) == 0){
			printf("Number of tests:%d Set test number:", onTest);
			scanf("%d", &setTest);
			if(setTest >= 0 && setTest < onTest){
				tests[setTest]->a();
			}
			if(onFluff < 5 && someFluff[onFluff] != NULL){
				delete someFluff[onFluff];
			}
		}
		//run any command
		else if(strcmp("runcommand", action) == 0){
			printf("Number of commands:%d Run command number:", onCommand);
			scanf("%d", &runCommand);
			if(runCommand >= 0 && runCommand < onCommand){
				commands[runCommand]->a();
			}
		}
		
	} while(strcmp("quit",action) != 0);

	//cleanup
	for(int i = 0; i < 10; i++){
		delete commands[i];
	}
	for(int i = 0; i < 10; i++){
		delete tests[i];
	}
}
