#include<stdio.h>
bool IsEmpty(int *size) //ջ�Ƿ�Ϊ��
{
	if (*size == 0)
		return true;
	return false;
}

void Clear(int *size)  //���ջ
{
	*size = 0;
	return;
}

void Push(char *S,int *size,char *x) //��һ��Ԫ������ջ��
{
	*(S + *size) = *x;
	(*size)++;
	return;
}

void Pop(int *size) //�������Ϸ�Ԫ��
{
	(*size)--;
	return;
}

char Top(char *S, int *size) //������Ϸ�Ԫ��
{
	return *(S + *size - 1);
}

int trans(char n) //û���õĺ���
{
	if (n >= 80 && n <= 89)
		return n - 80;
}