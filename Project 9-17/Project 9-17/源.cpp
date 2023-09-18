#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int month = 0;
	scanf("%d", &month);
	switch (month)
	{
	case 1:
		printf("January\n");
		break;
	case 2:
		printf("February\n");
		break;
	case 3:
		printf("March\n");
		break;
	case 4:
		printf("April\n");
		break;
	case 5:
		printf("May\n");
		break;
	case 6:
		printf("June\n");
		break;
	case 7:
		printf("July\n");
		break;
	case 8:
		printf("August\n");
		break;
	case 9:
		printf("September\n");
		break;
	case 10:
		printf("October\n");
		break;
	case 11:
		printf("November\n");
		break;
	case 12:
		printf("December\n");
		break;
	}
	return 0;
}

//输出1-100之间的奇数

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	//for (int i = 1; i < 101; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//}
//	return 0;
//}


//判断一个数是否为奇数

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("请输入年龄\n");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	/*if (age < 18)
//		printf("未成年\n");
//	return 0;*/
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = {"C语言程序设计",55};
//	struct Book* pb = &b1;//利用结构体类型创建一个该类型的结构体变量
//	strcpy(b1.name,"C++");
//	//利用pb打印出我的书名和价格
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d元\n", b1.price);
//	//b1.price = 20;
//	//printf("修改后的价格：%d元\n", b1.price);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20;
//	printf("%d\n",a);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	*pc = 'w';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//解引用操作符
//	printf("a= %d", a);
//	return 0;
//}