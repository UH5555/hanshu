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
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度
//	return 0;
//}

////memset - memory set - 内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//前五个字符变更为*。
//	printf("%s\n", arr);
//	return 0;
//}

////定义函数
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

////写一个函数交换两个整型变量的函数
////Swap1为传值调用
//void Swap1(int x, int y)//当实参传给形参的时候，形参其实是实参的一份临时拷贝。
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
////Swap2为传值调用
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;//a地址的数据给tmp
//	*pa = *pb;//b地址的数据给a地址的数据
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//调用Swap函数
//	Swap2(&a, &b);//取a，b的地址。
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
////是素数时返回1，不是返回0
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
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}