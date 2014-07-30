#include <stdio.h>
#include <stdlib.h>

/**
 * A class that contains a character array, provides a method for reading standard input into it.
 */
class Test{
	public:

	Test(){
	}

	/**
	 * Scan a string into the character array.
	 */
	void a(){
		printf("Input position:");
		scanf("%d", &position);
		if(position > 9)
			position = 9;
		if(position < 0)
			position = 0;
		printf("Input a string:");
		scanf("%s", &buffer);
		printf("You entered string: %s\n", buffer);
	}

	char buffer[10];
	int position;
};

int a(){
	int things[10];
	printf("things addr:%p\n", &things);
	for(int i = 0; i < 10; i++){
		things[i] = i;
	}
	int input = -1;
	while(input != 0){
		Test* aTest = new Test();
		aTest->a();
		printf("Input value:");
		scanf("%d", &input);		
		printf("Setting index %d (%p) to %d\n", aTest->position, things + aTest->position, input);
		things[aTest->position] = input;
	}
}

int main(){
	char command[10] = "ls";
	printf("command addr:%p\n", &command);
	a();
	system(command);
}
