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
	printf("���ڿ� �Է� : ");
	scanf("%s", &str);
	printf("���ڿ��� ���� : %d\n", str_len(str));
}