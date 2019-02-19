#include <stdio.h>

int main()
{

	int age = 21;
	int weight= 0;

	printf("how old are you?\n");
	printf("%d\n", age);
	printf("the address of int age is %p\n", &age);
	
	printf("you are %d years and %d pounds\n", age, weight);

	
	return 0;
}
