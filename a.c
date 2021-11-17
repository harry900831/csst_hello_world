#include <stdio.h>


void print_info(char name[50], int age, char gender[50]) {
	printf("Hello, %s! Your age is: %d Your gender is: %s\n", name, age,gender);
}
int main() { 
	char name[50],gender[50];
	int age;
	scanf("%s %d %s", name, &age, gender);
	print_info(name, age);
	return 0;
}

