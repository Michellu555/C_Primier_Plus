#include<stdio.h>
#include<string.h>
#include<time.h>
#include"func_14.h"


#define MAXTITL 41  //��������� + 1
#define MAXAUTL 31  //������������󳤶� + 1
#define MAXBKS 3  //�鼮���������
#define LEN 20
#define FUNDLEN 50


const char* msgs[5] =
{
	"Thank you for the wonderful evening,",
	"You certainly prove that a",
	"is a special kind of guy. We must get together",
	"over a delicious",
	"and have a few laughs"
};

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

struct book //�ṹģ�壬���λbook
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; //�ṹģ�����

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};




//double sum(double, double);
//double sum(const struct funds*); //sum�������β�Ϊ�ṹָ��
//double sum(struct funds moolah); //sum�������β�Ϊ�ṹ





int main()
{
	//�����嵥14.1
	//book.c -- һ�����ͼ��Ŀ¼
	//struct book library; //��library����λbook���ͱ���
	//printf("Please enter the book title.\n");
	//s_gets(library.title, MAXTITL); //���ַ�¼�뵽�ṹ�е�title����
	//printf("Now enter the author.\n");
	//s_gets(library.author, MAXAUTL);
	//printf("Now enter the value.\n");
	//scanf("%f", &library.value);
	//printf("%s by %s:$%.2f\n", library.title, library.author, library.value);
	//printf("%s:\"%s\"($%.2f)\n", library.author, library.title, library.value);
	//printf("Done.\n");


	//�����嵥14.2
	//manybook.c -- �����౾���ͼ��Ŀ¼
	//�����ṹ���� �� ¼�����������������۸� �� �ж��Ƿ�������ɣ����û�оͼ������� �� ���
	/*int count = 0;
	struct book library[MAXBKS];
	printf("Please enter the book title.\n");
	printf("Press enter key at the start of a line to stop.\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0]!= '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
		{
			continue;
		}
		if (count < MAXBKS)
		{
			printf("Enter the next title.\n");
		}
	}
	if (count > 0)
	{
		for (int index = 0; index < count; index++)
		{
			printf("Here is the list of your books:\n");
			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
		}
	}
	else
	{
		printf("No books? Too bad.\n");
	}*/



	//�����嵥14.3
	//friend.c -- Ƕ�׽ṹʾ��
	/*struct guy fellow =
	{
		{"Ewen", "Villard"},
		"grilled salmon", 
		"personality coach",
		68112.00
	};
	printf("Dear %s, \n\n", fellow.handle.first);
	printf("%s%s\n", msgs[0], fellow.handle.first);
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 150000.0)
	{
		puts("!!");
	}
	else if (fellow.income > 75000.0)
	{
		puts("!");
	}
	else
	{
		puts(".");
	}
	printf("\n%40s%s\n", " ", "See you soon,");
	printf("%40s%s\n", " ", "Shalala");*/


	//�����嵥14.4
	//friends.c -- ʹ��ָ��ṹ��ָ��
	//struct  guy fellow[2] =  //����ṹָ��
	//{
	//	{
	//		{"Ewen", "Villard"},
	//		"grilled salmon",
	//		"personality coach",
	//		68112.00
	//	},
	//	{
	//		{"Rodney", "Swillbelly"},
	//		"tripe",
	//		"tabloid editor",
	//		432400.00
	//	}
	//};
	//struct guy* him; //�����ṹָ��
	//printf("address #1:%p #2:%p\n", &fellow[0], &fellow[1]);
	//him = &fellow[0]; //��ָ��ָ���������
	//printf("pointer #1:%p #2:%p\n", him, him + 1);
	//printf("him->income is $%.2f:(*him).income is $%.2f\n", him->income, (*him).income);
	//him++;
	//printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);
	
	
	//�����嵥14.5funds1.c
	//funds1.c -- �ѽṹ��Ա��Ϊ��������
	/*struct funds stan = 
	{
		"Galic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));*/


	//�����嵥14.6funds2.c
	//funds2.c -- ����ָ��ṹ��ָ��
	//struct funds stan =
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(&stan)); //��ָ�봫�ݽ�ȥ


	//�����嵥14.7funds3.c
	//fundds3.c -- ����һ���ṹ
	/*struct funds stan =
	{
		"Galic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total of $%.2f.\n", sum(stan));*/


	
	
	


	























	return 0;
}



//double sum(double x, double y)
//{
//	return(x + y);
//}

//double sum(const struct funds *money) //sum�������β�Ϊ�ṹָ��
//{
//	return (money->bankfund + money->savefund);
//}

//double sum(struct funds moolah)
//{
//	return (moolah.bankfund + moolah.savefund);
//}
