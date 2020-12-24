#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"func_14.h"


#define MAXTITL 41  //书名的最长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1
#define MAXBKS 10  //书籍的最大数量
#define LEN 20
#define FUNDLEN 50
#define NLEN 30
#define SLEN 81
#define N 2




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

struct flex
{
	size_t count;
	double average;
	double scores[]; //伸缩数组成员
};

union hold
{
	int digit;
	double bigfl;
	char letter;
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
	//int count = 0;
	//struct book library[MAXBKS];
	//printf("Please enter the book title.\n");
	//printf("Press enter key at the start of a line to stop.\n");
	//while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0]!= '\0')
	//{
	//	printf("Now enter the author.\n");
	//	s_gets(library[count].author, MAXAUTL);
	//	printf("Now enter the value.\n");
	//	scanf("%f", &library[count++].value);
	//	while (getchar() != '\n')
	//	{
	//		continue;
	//	}
	//	if (count < MAXBKS)
	//	{
	//		printf("Enter the next title.\n");
	//	}
	//}
	//if (count > 0)
	//{
	//	for (int index = 0; index < count; index++)
	//	{
	//		printf("Here is the list of your books:\n");
	//		printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
	//	}
	//}
	//else
	//{
	//	printf("No books? Too bad.\n");
	//}


	//程序清单14.3
	//friend.c -- 嵌套结构示例
	//struct guy fellow =
	//{
	//	{"Ewen", "Villard"},
	//	"grilled salmon", 
	//	"personality coach",
	//	68112.00
	//};
	//printf("Dear %s, \n\n", fellow.handle.first);
	//printf("%s%s\n", msgs[0], fellow.handle.first);
	//printf("%s%s\n", msgs[1], fellow.job);
	//printf("%s\n", msgs[2]);
	//printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	//if (fellow.income > 150000.0)
	//{
	//	puts("!!");
	//}
	//else if (fellow.income > 75000.0)
	//{
	//	puts("!");
	//}
	//else
	//{
	//	puts(".");
	//}
	//printf("\n%40s%s\n", " ", "See you soon,");
	//printf("%40s%s\n", " ", "Shalala");


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
	//struct funds stan = 
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));


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
	//struct funds stan =
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(stan));


	


	//程序清单14.8nemes1.c
	//names1.c -- 使用指向结构的指针
	//struct namect person;
	//getinfo(&person);
	//makeinfo(&person);
	//showinfo(&person);


	//程序清单14.9names2.c
	//names2.c -- 传递并返回结构
	//struct namect person;
	//person = getinfo();
	//person = makeinfo(person);
	//showinfo(person);
	//showinfo(makeinfo(getinfo()));

	
	//程序清单14.10names3.c
	//names3.c -- 使用指针和malloc()
	//struct namectt person;
	//getinfoo(&person);
	//makeinfoo(&person);
	//showinfoo(&person);
	//cleanup(&person);

	
	//程序清单14.11
	//complit.c -- 复合字面量
	//用简单的方式使用结构
	//struct book readfirst;
	//int score;
	//printf("Enter test score: ");
	//scanf("%d", &score);
	//if (score >= 84)
	//{
	//	readfirst = (struct book){ "Crime and Punishment", "Fyodor Dostoyevsky", 11.25 };
	//}
	//else
	//{
	//	readfirst = (struct book){ "Mr.Bouncy's Nice Hat", "Fred Winsome", 5.99 };
	//}
	//printf("Your assigned reading:\n");
	//printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

	
	//程序清单14.12
	//flexmemb.c -- 伸缩型数组成员
	//struct flex *pf1, *pf2;
	//int n = 5;
	//int top = 0;
	//pf1 = malloc(sizeof(struct flex) + n * sizeof(int));
	//pf1->count = n;
	//for (int i = 0; i < n; i++)
	//{
	//	pf1->scores[i] = 20.0 - i;
	//	top += pf1->scores[i];
	//}
	//pf1->average = top / n;
	//showFlex(pf1);
	//n = 9;
	//pf2 = malloc(sizeof(struct flex) + n * sizeof(int));
	//pf2->count = n;
	//for (int i = 0; i < n; i++)
	//{
	//	pf2->scores[i] = 20.0 - i / 2;
	//	top += pf2->scores[i];
	//}
	//pf2->average = top / n;
	//showFlex(pf2);
	//free(pf1);
	//free(pf2);


	//程序清单14.13
	//funds4.c -- 把结构数组传递给函数
	//struct funds jones[N] = 
	//{
	//	{
	//		"Garlic-Melon Bank",
	//		4032.27,
	//		"Lucky's Savings and Loan",
	//		8543.97
	//	},
	//	{
	//		"Honest Jack's Bnak",
	//		3620.88,
	//		"Party Time Savings",
	//		3802.91
	//	}
	//};
	//printf("The Joneses have a total of $%.2f.\n", sum(jones, N));


	//程序清单14.14
	//booksave.c -- 在文件中保存结构中的内容
    //a+b模式打开文件并判断是否能打开 → rewind定位到文件开头 → while循环判断并充文件输入 → 输出 → 判断文件输出是否完全
	//struct book library[MAXBKS];
	//int count = 0;
	//int index, filecount;
	//FILE* pbooks;
	//int size = sizeof(struct book);
	//if ((pbooks = fopen("bool.dat", "a+b")) == NULL)
	//{
	//	fprintf(stdout, "Can't open the file.\n");
	//	exit(1);
	//}
	//rewind(pbooks);
	//while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	//{
	//	if (count == 0)
	//	{
	//		puts("Current contents of book.dat:");
	//	}
	//	printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
	//	count++;
	//}
	//filecount = count;
	//if (count == MAXBKS) //如果文件已经填满就不需要再填充了，直接退出
	//{
	//	fprintf("The book.dat file is full.\n", stderr);
	//	exit(2);
	//}
	////提示输入 → while+s_gets判断输入 → 输入作者 → 输入值 → 清理输入行 → 判断是否输入完 → 打印输出 → 写入数据
	//puts("Please add new book title.");
	//puts("Press [enter] at the start of a line to stop.");
	//while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	//{
	//	printf("Now enter the author.\n");
	//	s_gets(library[count].author, MAXAUTL);
	//	puts("Now enter the value.");
	//	scanf("%f", &library[count++].value);
	//	while (getchar() != '\n')
	//	{
	//		continue;
	//	}
	//	if (count < MAXBKS)
	//	{
	//		puts("Enter the next title.");
	//	}
	//}
	//if (count > 0) //打印数据
	//{
	//	puts("Here is the list of your book:\n");
	//	for (int i = 0; i < count; i++)
	//	{
	//		printf("%s by %s:$%.2f.\n", library[i].title, library[i].author, library[i].value);
	//	}
	//	fwrite(&library[filecount], size, count - filecount, pbooks);
	//}
	//else
	//{
	//	puts("No books? Too bad.");
	//	puts("Bye!");
	//}
	//fclose(pbooks);
	

	//程序清单14.15
	//enum.c -- 使用枚举类型的值
	//enum spectrum
	//{
	//	red,
	//	orange,
	//	yellow,
	//	green,
	//	blue,
	//	violet
	//};
	//enum spectrum color; //将color声明为枚举型
	//char choice[LEN];
	//bool color_is_found = false;
	//char* color_menu[] = { "red", "orange", "yellow", "green", "bleu", "violet" };
	//printf("Enter a color(empty line to quit):");
	//while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	//{
	//	for (color = red; color <= violet; color++)
	//	{
	//		if (strcmp(choice, color_menu[color]) == 0)
	//		{
	//			color_is_found = true;
	//			break;
	//		}
	//	}
	//}
	//if (color_is_found)
	//{
	//	switch (color)
	//	{
	//	case red: puts("Rose are red.");
	//		break;
	//	case orange: puts("Poppies are orange.");
	//		break;
	//	case yellow: puts("Sunflowers are yellow.");
	//		break;
	//	case green: puts("Grass is green.");
	//		break;
	//	case blue: puts("Bluebells are blue.");
	//		break;
	//	case violet: puts("Violets are violet.");
	//		break;
	//	default:
	//		break;
	//	}
	//}
	//else
	//{
	//	printf("I don't know about the color %s.\n", choice);
	//	color_is_found = false;
	//	puts("Next color, please(empty line to quit):");
	//}
	//puts("God bye!\n");
	

	//程序清单14.16
	//func_ptr.c --使用函数指针
	char line[SLEN];
	char copy[SLEN];
	char choice;
	void (*fp)(char*); //函数指针
	puts("Enter a strin(empty line to quit):");
	while (s_gets(line, LEN) != NULL && line[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u': fp = ToUpper;
				break;
			case 'l': fp = ToLower;
				break;
			case 't': fp = Transpose;
				break;
			case 'o': fp = Dummy;
				break;
			}
			strcpy(copy, line);
			show(fp, copy);
		}
		puts("Enter a string(empty line to quit):");
	}
	puts("Bye!");
	



	


	























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

void showFlex(const struct flex* p)
{
	printf("Scores: ");
	for (int i = 0; i < p->count; i++)
	{
		printf("%g ", p->scores[i]);
	}
	printf("\nAverage:%g\n", p->average);
}

double sum(const struct funds money[], int n)
{
	double summary = 0.0;
	for (int i = 0; i < n; i++)
	{
		summary += money[i].bankfund + money[i].savefund;
	}
	return summary;
}

int squre(int n)
{
	return n * n;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int calc(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}

char showmenu(void) //获取输入
{
	char ans;
	puts("Enter menu choice:");
	puts("u)uppercase        l)lowercase");
	puts("t)transpose case   o)original case");
	puts("n)next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();
	while (strchr("ulton", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, ot n:");
		ans = tolower(getchar());
		eatline();
	}

	return ans;
}

void eatline(void) //读取至行末尾
{
	while (getchar() != '\n')
	{
		continue;
	}
}

void show(void(*fp)(char*), char* str)
{
	(*fp)(str);
	puts(str);
}

void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}
void Transpose(char* str) //大小写转置
{
	while (*str)
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		else if (isupper(*str))
		{
			*str = tolower(*str);	
		}
		str++;
	}
}
void Dummy(char* str) //不更改字符串
{

}

