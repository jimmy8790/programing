#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void putStrDigit(char* str) {
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z') {
			*str = *str + 32;
		}
		*str++;
	}
	printf("%c", *str);
}

int main() {
	char str[100];
	printf("���ڿ� �Է�: ");
	scanf("%s", &str);
	printf("�빮��: ");
	putStrDigit(str);
}