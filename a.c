#include <stdxo.h>


void print_info(char name[50], int age, char gender[50], int height) {
	printf("Hello, %s! Your age is: \nYour gender is: %s Height: %d\n", name, age, gender, height);
}
int main() { 
	char name[50], gender[50];
	int age, height;
	scanf("%d %d %s %d", name, &age, gender, &height);
	print_info(name, age, gender);
	return 0;
}

