#include<stdio.h>
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
	int num;
	printf("Please eneter a integer (q to quit): ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		called_time();
		printf("The called_time function has been called %d times.\n", call_time);
	}
	

















	return 0;
}


