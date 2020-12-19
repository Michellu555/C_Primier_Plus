#include<stdio.h>
#include<string.h>
#include"func_14.h"


#define MAXTITL 41  //书名的最长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1


struct book //结构模板，标记位book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; //结构模板结束


int main()
{
	//程序清单14.1
	//book.c -- 一本书的图书目录
	struct book library; //将library声明位book类型变量
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); //将字符录入到结构中的title部分
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s:$%.2f\n", library.title, library.author, library.value);
	printf("%s:\"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");
	
	




	return 0;
}