#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ�������
//	return 0;
//}

////memset - memory set - �ڴ�����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//ǰ����ַ����Ϊ*��
//	printf("%s\n", arr);
//	return 0;
//}

////���庯��
// int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	max = get_max(200, 100);
//	printf("max = %d\n", max);
//	return 0;
//}

////дһ�����������������ͱ����ĺ���
////Swap1Ϊ��ֵ����
//void Swap1(int x, int y)//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
////Swap2Ϊ��ֵ����
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;//a��ַ�����ݸ�tmp
//	*pa = *pb;//b��ַ�����ݸ�a��ַ������
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//����Swap����
//	Swap2(&a, &b);//ȡa��b�ĵ�ַ��
//	/*Swap1(a, b);*/
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<math.h>
////������ʱ����1�����Ƿ���0
//int is_prime(int n)
//{
//	int m = 2;
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////�ж�һ���ǲ�������
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//			printf("%d ",year);
//	}
//	return 0;
//}

////���ֲ���
////��һ������������	���Ҿ����ĳ����
//
//
////                    ����arr��һ��ָ��
//int binary_search(int arr[], int k , int  sz)
//{
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                     ���ݹ�ȥ����������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	return 0;
//}

////дһ��������ÿ����һ�κ�����num����1
//
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));//��ʽ
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));//43�س�3�س�2
//	return 0;
//}

////��������
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

