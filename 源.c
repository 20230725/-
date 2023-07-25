#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	strcpy(b1.name, "C++");
//	printf("%s", b1.name);
//	//struct Book* pb = &b1;
//	//printf("%s\n%d\n", pb->name, pb->price);
//	/*printf("%s\n%d\n", (*pb).name, (*pb).price);*/
//	//printf("%s\n%d\n", b1.name,b1.price);
//	//b1.price = 15;
//	//printf("%d\n", b1.price);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c", *pc);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	*p = 20;
//	printf("*p = %d a = %d\n", *p,a);
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}
//#define MAX 100
//#define AB(x,y) x+y
//int main()
//{
//	int a = MAX;
//	int b = 20;
//	int max = AB(a, b);
//	printf("%d", max);
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("%d", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	printf("a = %d\n", a); 
//	a++;
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	signed int a = 10;
//	unsigned int b = -2;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	 register int a = 10;
//	printf("%d", a);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a >= b ? 0 : 1;
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 78;
//	int b = ++a;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	printf("%d\n", strlen(arr));
//	printf("%d\n",sizeof( arr));
//	return 0;
//}
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//001
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	a << 1;
//	printf("%d\n", a);
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
////int main()
//{
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	char arr2[] = { 'a','b','c' ,0};
//	/*printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特");
//	while (line < 20)
//	{
//		printf("敲一行代码\n");
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}
////int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//		return 0;
//}
//int main()
//{
//	//printf("%c\n", '\x61');
//	printf("%d", strlen("abcdef"));
//	//printf("%d\n", strlen("c:\test\x32\test.c"));
//	return 0;
//}
//int main()
//{
//	//printf("%s\n", "\"");
//	//printf("%c\n", '\'');
//	//printf("c:\\test\\32\\test.c");
//	return 0;
//}
//int main()
//{
//	char arr1[ ] = "abc";
//	char arr2[ ] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//printf("%s\n", arr2);
//	//printf("%s\n", arr1);
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE,
//};
//int main()
//{
//	enum Color color = BLUE;
//
//	printf("%d", color);
//	return 0;
//}
//enum Sex
//{
//	MALE,
//FEMALE,
//SECRET,
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//	/*const int num = 4;
//	printf("%d", num);*/
//
//
//	/*extern int sum;
//	printf("%d", sum);*/
//	return 0;
//}