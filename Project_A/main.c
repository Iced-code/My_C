#include <stdio.h>
#include <stdbool.h>


void call() {
	printf("Calling User...\n");
}

bool midCall(bool x) {
	return x;
}


int main() {
	
	char response[20];
	char name[20];


	call();

	if (midCall(true) == true) {

		printf("Call In Progress...\n");


		printf("What is your name?\n");
		scanf_s("%s", name, 20);

		printf("Hello, %s. How are you?\n", name);
		
		scanf_s("%s", response, 20);
		printf("Glad you feel %s\n", response);

	}
	else {
		printf("Call Failed. Try Again Later.");
	}


	;

	//printf("What is your name?\n");

	//get string input. Note that We are not using &name here.   
	//scanf_s("%s", name, 20);

	//print the name
	printf("Welcome to your computer, %s\n", name);

	return 0;
}

