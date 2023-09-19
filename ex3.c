#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int str_conCat(char* str1, char* str2, int n) {
	int a = 0;
	while (*str1)
	{
		*str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		*str1++;
		*str2++;
		a++;
		if (a == n) {
			break;
		}
	}
	*str1 = '\0';
}

int main() {
	char str1[100] = "sunrin";
	char str2[100] = "internet";
	str_conCat(str1, str2, 5);
	printf("%s\n", str1);
}