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

//���1-100֮�������

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


//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("����������\n");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	/*if (age < 18)
//		printf("δ����\n");
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
//	struct Book b1 = {"C���Գ������",55};
//	struct Book* pb = &b1;//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	strcpy(b1.name,"C++");
//	//����pb��ӡ���ҵ������ͼ۸�
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%dԪ\n", b1.price);
//	//b1.price = 20;
//	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
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
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//�����ò�����
//	printf("a= %d", a);
//	return 0;
//}