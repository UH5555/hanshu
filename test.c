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