#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int str_conCat(char* str1, char* str2) {
	while (*str1)
	{
		*str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		*str1++;
		*str2++;
	}
	*str1 = '\0';
}

int main() {
	char str1[100] = "sunrin";
	char str2[100] = "internet";
	str_conCat(str1, str2);
	printf("%s\n", str1);
}