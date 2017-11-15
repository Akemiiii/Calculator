#include<stdio.h>
bool IsEmpty(int *size) //栈是否为空
{
	if (*size == 0)
		return true;
	return false;
}

void Clear(int *size)  //清空栈
{
	*size = 0;
	return;
}

void Push(char *S,int *size,char *x) //将一个元素推入栈中
{
	*(S + *size) = *x;
	(*size)++;
	return;
}

void Pop(int *size) //弹出最上方元素
{
	(*size)--;
	return;
}

char Top(char *S, int *size) //输出最上方元素
{
	return *(S + *size - 1);
}

int trans(char n) //没有用的函数
{
	if (n >= 80 && n <= 89)
		return n - 80;
}