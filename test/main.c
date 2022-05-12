#include <stdio.h>
#include <stdbool.h>



	//char a = "X";		//%c
	//char b[] = "Ayaan"; //%s
	//float c = 3.141592; //%f
	//double d = 6.02222222222222222222222; //%lf
	//
	//bool e = true; //%d
	//char f = 100; //%d or %c
	//unsigned char g = 255; //%d or %c

	//short int h = 32767; //%d
	//unsigned short int i = 65535; //%d
	//int j = 32767; //%d
	//unsigned int k = 65535; //%u
	//long long int l = 434254242; //%lld
	//unsigned long long int m = 434254242; //%lld


	//float itemA  = 500.7564;    //%.1 decimal precision
	//float itemB = 20.46;  //%1 minimum field width
	//float itemC = 70.55;   //%- left align
	//printf("Cost: $%8.2f\n", itemA);
	//printf("Cost: $%8.2f\n", itemB);
	//printf("Cost: $%-8.2f\n", itemC);

	//const float PI = 3.141592; //constant can't be changed

	/*int x = 4;
	int y = 9;
	float z = x / (float)y;
	printf("%f", z);
	*/



void call() {
	printf("Calling User...\n");
}

bool midCall(bool x) {
	return x;
}


int main() {
	
	int age;
	char name[26];

	printf("How old are you?\n");
	scanf_s("%d", age);

	printf("What's your name?\n");
	scanf_s("%s", name);


	printf("You are %d years old.", age);
	printf("Hello there %s", name);
	return 0;



	/*call();

	if (midCall(false) == true) {

		printf("Call In Progress...\n");

	}
	else {
		printf("Call Failed. Try Again Later.");
	}
	*/
}


	

