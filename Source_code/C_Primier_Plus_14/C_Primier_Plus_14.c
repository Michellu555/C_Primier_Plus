#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"func_14.h"


#define MAXTITL 41  //��������� + 1
#define MAXAUTL 31  //������������󳤶� + 1
#define MAXBKS 10  //�鼮���������
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
	char* fname; //��ָ�������
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

struct flex
{
	size_t count;
	double average;
	double scores[]; //���������Ա
};

union hold
{
	int digit;
	double bigfl;
	char letter;
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


	//�����嵥14.3
	//friend.c -- Ƕ�׽ṹʾ��
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
	//struct funds stan = 
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));


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
	//struct funds stan =
	//{
	//	"Galic-Melon Bank",
	//	4032.27,
	//	"Lucky's Savings and Loan",
	//	8543.94
	//};
	//printf("Stan has a total of $%.2f.\n", sum(stan));


	


	//�����嵥14.8nemes1.c
	//names1.c -- ʹ��ָ��ṹ��ָ��
	//struct namect person;
	//getinfo(&person);
	//makeinfo(&person);
	//showinfo(&person);


	//�����嵥14.9names2.c
	//names2.c -- ���ݲ����ؽṹ
	//struct namect person;
	//person = getinfo();
	//person = makeinfo(person);
	//showinfo(person);
	//showinfo(makeinfo(getinfo()));

	
	//�����嵥14.10names3.c
	//names3.c -- ʹ��ָ���malloc()
	//struct namectt person;
	//getinfoo(&person);
	//makeinfoo(&person);
	//showinfoo(&person);
	//cleanup(&person);

	
	//�����嵥14.11
	//complit.c -- ����������
	//�ü򵥵ķ�ʽʹ�ýṹ
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

	
	//�����嵥14.12
	//flexmemb.c -- �����������Ա
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


	//�����嵥14.13
	//funds4.c -- �ѽṹ���鴫�ݸ�����
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


	//�����嵥14.14
	//booksave.c -- ���ļ��б���ṹ�е�����
    //a+bģʽ���ļ����ж��Ƿ��ܴ� �� rewind��λ���ļ���ͷ �� whileѭ���жϲ����ļ����� �� ��� �� �ж��ļ�����Ƿ���ȫ
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
	//if (count == MAXBKS) //����ļ��Ѿ������Ͳ���Ҫ������ˣ�ֱ���˳�
	//{
	//	fprintf("The book.dat file is full.\n", stderr);
	//	exit(2);
	//}
	////��ʾ���� �� while+s_gets�ж����� �� �������� �� ����ֵ �� ���������� �� �ж��Ƿ������� �� ��ӡ��� �� д������
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
	//if (count > 0) //��ӡ����
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
	

	//�����嵥14.15
	//enum.c -- ʹ��ö�����͵�ֵ
	//enum spectrum
	//{
	//	red,
	//	orange,
	//	yellow,
	//	green,
	//	blue,
	//	violet
	//};
	//enum spectrum color; //��color����Ϊö����
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
	

	//�����嵥14.16
	//func_ptr.c --ʹ�ú���ָ��
	char line[SLEN];
	char copy[SLEN];
	char choice;
	void (*fp)(char*); //����ָ��
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

//double sum(const struct funds *money) //sum�������β�Ϊ�ṹָ��
//{
//	return (money->bankfund + money->savefund);
//}

//double sum(struct funds moolah)
//{
//	return (moolah.bankfund + moolah.savefund);
//}

//void getinfo(struct namect* pst) //ָ��namect�ṹ��ָ��
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
	s_gets(temp, NLEN); //�������룻
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

char showmenu(void) //��ȡ����
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

void eatline(void) //��ȡ����ĩβ
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
void Transpose(char* str) //��Сдת��
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
void Dummy(char* str) //�������ַ���
{

}

