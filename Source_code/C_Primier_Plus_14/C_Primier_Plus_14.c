#include<stdio.h>
#include<string.h>
#include"func_14.h"


#define MAXTITL 41  //��������� + 1
#define MAXAUTL 31  //������������󳤶� + 1


struct book //�ṹģ�壬���λbook
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; //�ṹģ�����


int main()
{
	//�����嵥14.1
	//book.c -- һ�����ͼ��Ŀ¼
	struct book library; //��library����λbook���ͱ���
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); //���ַ�¼�뵽�ṹ�е�title����
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s:$%.2f\n", library.title, library.author, library.value);
	printf("%s:\"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");
	
	




	return 0;
}