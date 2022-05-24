#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a >= b) {
		printf("a is greater than or equal to b");
	}else {
		printf("a is smaller than b");
	}
	return 0;
}
