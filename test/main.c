#include <stdio.h>
#include <stdbool.h>


void call() {
	printf("Calling User...\n");
}

bool midCall(bool x) {
	return x;
}


int main() {
	call();

	if (midCall(false) == true) {

		printf("Call In Progress...\n");

	}
	else {
		printf("Call Failed. Try Again Later.");
	}
}