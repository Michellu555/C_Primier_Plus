#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "func_12_test.h"






int main()
{
	//1.��ʹ��ȫ�ֱ�������д�����嵥12.4��
	/*int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf_s("%d", &units);
	while (units != 56)
	{
		units = critic();
	}
	printf("You must have looked it up!\n");*/



	//2.��������ͨ����Ӣ��/�����������ͺģ���ŷ�ޣ�����/100���������㡣
	//�����ǳ����һ���֣���ʾ�û�ѡ�����ģʽ�����ƻ��ƣ�, Ȼ��������ݲ������ͺġ�
	//����û������˲���ȷ��ģʽ���������û�������ʾ��Ϣ��ʹ����һ���������ȷģʽ��
	//���ṩpe12-2a.hͷ�ļ���pe12-2a.cԴ�ļ���
	//Դ�����ļ�Ӧ����3�������ļ��������ڲ����ӵı�����һ����ʾģʽ��һ����ʾ���롢һ����ʾ���ĵ�ȼ�ϡ�
	//get_info()���������û������ģʽ��ʾ�û�������Ӧ���ݣ������䴢�浽�ļ�����������С�
	//show_info()�����������õ�ģʽ���㲢��ʾ�ͺġ����Լ����û�����Ķ�����ֵ���ݡ�
	//pe12-2b.c
	/*int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit): ");
		scanf_s("%d", &mode);
	}
	printf("Done.\n");*/



	//4.��һ��ѭ���б�д������һ���������ú��������������õĴ���
	/*int num;
	printf("Please eneter a integer (q to quit): ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		called_time();
		printf("The called_time function has been called %d times.\n", call_time);
	}*/



	//5.��дһ����������100��1~10��Χ�ڵ�����������Խ������У����԰ѵ�11�µ������㷨�ԼӸĶ��������������������������������򣩡�
	//��������� �� ¼�뵽������ �� ��������
	//�����������rand��srand, time����
	//¼�뵽������
	//int ar[100];
	//srand((unsigned int)time(0)); //�������
	//for (int i = 0; i < 100; i++)
	//{
	//	ar[i] = rand() % 10 + 1;
	//}

	////����
	//int temp;
	//for (int m = 0; m < 99; m++)
	//{
	//	for (int n = m + 1; n < 100; n++)
	//	{
	//		if (ar[m] < ar[n])
	//		{
	//			temp = ar[m];
	//			ar[m] = ar[n];
	//			ar[n] = temp;
	//		}
	//	}
	//}
	//
	////��ӡ����
	//for (int j = 0; j < 100; j++)
	//{
	//	printf("%-4d", ar[j]);
	//	if ((j + 1) % 10 == 0)
	//	{
	//		putchar('\n');
	//	}
	//}
	
	

	//6.��дһ����������1000��1~10��Χ�ڵ�����������ñ�����ӡ��Щ���֣�����ӡÿ�������ֵĴ�����
	//��10����ͬ������ֵ���У����ɵ����ֳ��ֵĴ����Ƿ���ͬ��
	//����ʹ�ñ����Զ���ĺ�����ANSIC��rand()��srand()���������ǵĸ�ʽ��ͬ��
	//����һ�������ض����������������Եķ�����
	//����1000�����
	/*int num;
	int count[10];
	for (int m = 0; m < 10; m++)
	{
		count[m] = 0;
	}
	for (int i = 0; i < 1000; i++)
	{
		num = rand() % 10 + 1;
		count[num - 1]++;
		
	}
	for (int j = 0; j < 10; j++)
	{
		printf("Number %d has appeared %d times.\n", j + 1, count[j]);
	}*/
	
	
	//7.��дһ�����򣬰��ճ����嵥12.13���ʾ���������۵����ݣ��޸ĸó���ʹ��������ƣ�
	//Enter the number of sets; enter q to stop : 18
	//How many sides and how many dice ? 6 3
	//Here are 18 sets of 3 6-sided throws.
	//12 10 6 9 8 14 8 15 9 14 12 17 11 7 10 13 8 14
	//How many sets ? Enter q to stop : q
	//���������ӵĴ��� �� ���������������������������Ӳ����ܵ��ε��� �� ��ӡ����
	/*printf("Enter the number of set; enter q to stop: ");
	while (scanf("%d", &sets))
	{
		roll(sets);
		printf("How many sets? Enter q to stop: ");
	}*/
	

	//8.�����ǳ����һ���֣����ṩmake_array()��show_array()�����Ķ��壬��ɸó���
	//make_array()��������������������1��������int���������Ԫ�ظ�������2��������Ҫ����ÿ��Ԫ�ص�ֵ��
	//�ú�������malloc()����һ����С���ʵ����飬����ÿ��Ԫ������Ϊָ����ֵ��������һ��ָ��������ָ�롣
	//show_array()������ʾ��������ݣ�һ����ʾ8������
	/*int* pa;
	int size;
	int value;
	printf("Enter the number of elements: ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit): ");
	}
	printf("Done.\n");*/



	//9.��дһ���������������ĺ��������ȣ�ѯ���û���Ҫ������ٸ����ʡ�Ȼ�󣬽����û�����ĵ��ʣ�����ʾ������
	//ʹ��malloc()���ش��1�����⣨��Ҫ������ٸ����ʣ�,����һ����̬���飬�������ں���Ӧ��ָ��char��ָ��
	//��ע�⣬���������ÿ��Ԫ�ض���ָ��char��ָ�룬�������ڴ���malloc()����ֵ��ָ��Ӧ����һ��ָ��ָ���ָ�룬������ָ���ָ��ָ��char)��
	//�ڶ�ȡ�ַ���ʱ���ó���Ӧ�ðѵ��ʶ���һ����ʱ��char���飬ʹ��malloc()�����㹻�Ĵ洢�ռ������浥�ʣ�
	//���ѵ�ַ�����ָ������(��������ÿ��Ԫ�ض���ָ��char��ָ�룩��
	//Ȼ�󣬴���ʱ�����аѵ��ʿ�������̬����Ĵ洢�ռ��С���ˣ���һ���ַ�ָ�����飬ÿ��ָ�붼ָ��һ�����󣬸ö���Ĵ�С���������ɱ�������ض����ʡ�
	//�����Ǹó����һ������ʾ����
	/*How many words do you wish to enter ? 5
	Enter 5 words now :
	I enjoyed doing this exerise
	Here are your words :
	I
	enjoyed
	doing
	this
	exercise*/
	int size;
	char ch[50];
	printf("How many words do you wish to enter? ");
	scanf("%d", &size);
	while (getchar() != '\n')
	{
		continue;
	}
	printf("Enter %d words now: \n", size);


	char** st;
	st = (char**)malloc(size * sizeof(char*));
	for (int i = 0; i < size; i++) //Ϊÿ�����ʷ���ռ�
	{
		scanf("%50s", ch); //�����ַ���
		st[i] = (char*)malloc((strlen(ch) + 1) * sizeof(char));
		strncpy(st[i], ch, strlen(ch));
		st[i][strlen(ch)] = '\0';
	}

	printf("Here are your words:\n");
	for (int m = 0; m < size; m++)
	{
		puts(st[m]);
	}
	free(st);
	












	return 0;
}


