#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int str_len(const char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		*str++;
	}
	return count;
}

int main() {
	char str[1000];
	printf("문자열 입력 : ");
	scanf("%s", &str);
	printf("문자열의 길이 : %d\n", str_len(str));
}