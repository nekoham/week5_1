#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int factorial1(int num) {
	//the maximum number this function can calculate is up to 12
	int result = num;

	if (num < 13 && num > 0) {
		for (num; num > 1; num--) {
			result = (num - 1) * result;
		}
	}
	else if (num >= 13) {
		result = (0);
	}
	else if (num == 0) {
		result = (1);
	}
	else if (num < 0) {
		result = (0);
	}

	return result;
}

int main() {
	int n;
	printf("Note : You can't enter negative numbers and the maximum this program can calculate is 12!\n");
	printf("\n");
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("The factorial of %d is %lu", n, factorial1(n));


	return 0;
}
