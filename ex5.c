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
	printf("문자열 입력: ");
	scanf("%s", &str);
	printf("대문자: ");
	putStrDigit(str);
}