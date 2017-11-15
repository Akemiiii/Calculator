#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"
#define MAX 1000

int main(void)
{
	char S[MAX];   //符号处理数组（栈）
	char output[MAX]; //输出数组
	int size = 0;  //栈的大小
	char ch; 
	int number;
	int index = 0;
	int a = 0;
	while (ch = getchar()) //输入
	{
		if (ch != '\n')
		{
			if (ch >= '0'&& ch <= '9') //输入为数字
			{
				output[a] = ch;
				a++;
			}
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/')      //输入为+-*/
			{
				while (size != 0)
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Push(S, &size, &ch);
			}
			if (ch == '(')  //输入为（
			{
				while (Top(S, &size) != '+' || Top(S, &size) != '-' || Top(S, &size) != '*' || Top(S, &size) != '/')
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Push(S, &size, &ch);
			}
			if (ch == ')')  //输入为）
			{
				while (Top(S, &size) != '(')
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Pop(&size);
			}
		}
		else
			break;
	}
	for (int k = 0; k < strlen(output); k++) //输出
		printf_s("%c", output[k]);
	system("pause");
	return 0;
}
