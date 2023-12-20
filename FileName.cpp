#include<stdio.h>
int main(void) {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("result is%d\n", result);

	result = (a + b) * c / d;
	printf("result is%d\n", result);

	result = a = b = 1;
	printf("result is%d", result);

	return 0;


}