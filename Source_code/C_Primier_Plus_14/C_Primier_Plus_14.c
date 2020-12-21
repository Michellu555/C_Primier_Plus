#include<stdio.h>
#include<string.h>
#include<time.h>
#include"func_14.h"


#define MAXTITL 41  //书名的最长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1
#define MAXBKS 3  //书籍的最大数量
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

struct book //结构模板，标记位book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; //结构模板结束

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};




//double sum(double, double);
//double sum(const struct funds*); //sum函数的形参为结构指针
//double sum(struct funds moolah); //sum函数的形参为结构





int main()
{
	//程序清单14.1
	//book.c -- 一本书的图书目录
	//struct book library; //将library声明位book类型变量
	//printf("Please enter the book title.\n");
	//s_gets(library.title, MAXTITL); //将字符录入到结构中的title部分
	//printf("Now enter the author.\n");
	//s_gets(library.author, MAXAUTL);
	//printf("Now enter the value.\n");
	//scanf("%f", &library.value);
	//printf("%s by %s:$%.2f\n", library.title, library.author, library.value);
	//printf("%s:\"%s\"($%.2f)\n", library.author, library.title, library.value);
	//printf("Done.\n");


	//程序清单14.2
	//manybook.c -- 包含多本书的图书目录
	//声明结构数组 → 录入书名，作者名及价格 → 判断是否输入完成，如果没有就继续输入 → 输出
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



	//程序清单14.3
	//friend.c -- 嵌套结构示例
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


	//程序清单14.4
	//friends.c -- 使用指向结构的指针
	//struct  guy fellow[2] =  //定义结构指针
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
	//struct guy* him; //声明结构指针
	//printf("address #1:%p #2:%p\n", &fellow[0], &fellow[1]);
	//him = &fellow[0]; //将指针指向机构数组
	//printf("pointer #1:%p #2:%p\n", him, him + 1);
	//printf("him->income is $%.2f:(*him).income is $%.2f\n", him->income, (*him).income);
	//him++;
	//printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);
	
	
	//程序清单14.5funds1.c
	//funds1.c -- 把结构成员作为参数传递
	/*struct funds stan = 
	{
		"Galic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));*/


	//程序清单14.6funds2.c
	//funds2.c -- 传递指向结构的指针
	//struct funds stan =
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(&stan)); //将指针传递进去


	//程序清单14.7funds3.c
	//fundds3.c -- 传递一个结构
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

//double sum(const struct funds *money) //sum函数的形参为结构指针
//{
//	return (money->bankfund + money->savefund);
//}

//double sum(struct funds moolah)
//{
//	return (moolah.bankfund + moolah.savefund);
//}
