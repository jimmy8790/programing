#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void putStrDigit(char* str) {
	while (*str)
	{
		if (*str >= '0' && *str <= '9') {
			printf("%c", *str);
		}
			*str++;
	}
}

int main() {
	char str[100] = {'\0'};
	printf("���ڿ� �Է�: ");
	scanf("%s", &str);
	putStrDigit(str);
}