#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include"func_14.h"


#define MAXTITL 41  //书名的最长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1
#define MAXBKS 3  //书籍的最大数量
#define LEN 20
#define FUNDLEN 50
#define NLEN 30
#define SLEN 81




struct namect
{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

struct namectt
{
	char* fname; //用指针代替数
	char* last;
	int letters;
};



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


	


	//程序清单14.8nemes1.c
	//names1.c -- 使用指向结构的指针
	/*struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);*/


	//程序清单14.9names2.c
	//names2.c -- 传递并返回结构
	/*struct namect person;
	person = getinfo();
	person = makeinfo(person);
	showinfo(person);*/
	//showinfo(makeinfo(getinfo()));

	
	//程序清单14.10names3.c
	//names3.c -- 使用指针和malloc()
	struct namectt person;
	getinfoo(&person);
	makeinfoo(&person);
	showinfoo(&person);
	cleanup(&person);



	
	



	


	























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

//void getinfo(struct namect* pst) //指向namect结构的指针
//{
//	printf("Please enter your first name.\n");
//	s_gets(pst->fname, NLEN);
//	printf("Please enter your last name.\n");
//	s_gets(pst->lname, NLEN);
//};

//void makeinfo(struct namect* pst)
//{
//	pst->letters = strlen(pst->fname) + strlen(pst->lname);
//}

//void showinfo(const struct namect* pst)
//{
//	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
//}

struct namect getinfo(void)
{
	struct namect test;
	printf("Please enter your first name.\n");
	s_gets(test.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(test.lname, NLEN);
	return test;
}

struct namect makeinfo(struct namect test)
{
	test.letters = strlen(test.lname) + strlen(test.fname);
	return test;
}

void showinfo(struct namect test)
{
	printf("%s %s, your name contains %d letters.\n", test.fname, test.lname, test.letters);
}

void getinfoo(struct namectt *pst)
{
	char temp[NLEN];
	printf("Please enter your first name.\n");
	s_gets(temp, NLEN); //数组输入；
	pst->fname = (char*)malloc(strlen(temp) + 1);
	strcpy(pst->fname, temp);
	printf("Please enter your alst name.\n");
	s_gets(temp, NLEN);
	pst->last = (char*)malloc(strlen(temp) + 1);
	strcpy(pst->last, temp);
}

void makeinfoo(struct namectt* pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->last);
}

void showinfoo(struct namectt* pst)
{
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->last, pst->letters);
}

void cleanup(struct namectt* pst)
{
	free(pst->fname);
	free(pst->last);
}