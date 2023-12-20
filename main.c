// main.c
#include <stdio.h>

int main() {
	int a, b, c;
	printf("Введите 2 числа: ");
	scanf("%d %d", &a, &b);
	if(a == 0 || b == 0) {
		printf("Не ноль введите");
		return 1;
	}
	printf("a + b = %d\n", c);
	c = a + b;
	return 0;
}
