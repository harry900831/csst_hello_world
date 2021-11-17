#include <stdio.h>


void print_info(char name[50], int age) {
	printf("Hello, %s! Your age is: \n", name, age);
}
int main() { 
	char name[50];
	int age;
	scanf("%d %d", name, &age);
	print_info(name, age);
	return 0;
}

