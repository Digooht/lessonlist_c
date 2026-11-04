#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	switch(n) 
	{
		case 1:
			printf("《C语言程序设计》");
			break;
		case 2:
			printf("没课");
			break;
		case 3:
			printf("《数据结构》");
			break;
		case 4:
			printf("没课");
			break;
		case 5:
			printf("《python语言程序设计》");
			break;
		default:
			printf("输入数字需要在1~5之间"); 
	}
	return 0;
}