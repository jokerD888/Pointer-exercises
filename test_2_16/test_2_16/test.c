#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//杨氏矩阵

int FindNum1(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x<=row-1 && y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//找不到
	return 0;
}
int FindNum(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	return 0;
}


//int main(void)
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//		printf("找到了,下标是%d,%d\n",x,y);
//	else
//		printf("找不到!\n");
//	return 0;
//}

int my_strlen(char* arr)
{
	if (*arr != '\0')
	{

		return 1 + my_strlen(arr + 1);
	}
	else
		return 0;
}
int main(void)
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}