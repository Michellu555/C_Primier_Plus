#include<stdio.h>
#include<stdlib.h>


char color = 'B';


void first(void);
void second(void);



int main()
{
	//��ϰ��
	//1.��Щ���ı������Գ�Ϊ�����ں����ľֲ�������
	//��̬��������������Զ��������Ĵ�������


	//2.��Щ���ı����������ڳ����������һֱ���ڣ�
	//��̬�ڲ����ӱ�������̬�ⲿ���ӱ�������̬�����������


	//3.��Щ���ı������Ա�����ļ�ʹ�ã���Щ���ı�����������һ���ļ���ʹ�ã�	
	//��̬�ⲿ���ӱ������Ա�����ļ�ʹ�ã���̬�ڲ����ӱ�����������һ���ļ���ʹ��

	//4.���������������ʲô�������ԣ�
	//����������


	//5.extern�ؼ�����ʲô��;��
	//����ʽ���������ⲿ�������Եı���


	//6.�����������д��룬������Ľ�������к���ͬ��
	//int* p1 = (int*)malloc(100 * sizeof(int));
	//int* p1 = (int*)calloc(100, sizeof(int));
	//calloc����Ķ�̬�ռ��Ѿ���ʼ��Ϊ0�ˣ�malloc��δ��ʼ��
	//calloc��malloc����Ķ�̬�ռ��ַ��ͬ


	//7.����ı�������Щ�����ɼ��������Ƿ�����
	

	//8.����ĳ�����ӡʲô��
	//extern char color;
	//printf("color in main() is %c\n", color); //B
	//first(); //R
	//printf("color in main() is %c\n", color); //B
	//second(); //G
	//printf("color in main() is %c\n", color); //G


	//9.�����ļ��Ŀ�ʼ��������������
	//static int plink;
	//int value_ct(const int arr[], int value, int n);
	//a.�������������˳���Ա��ʲô��ͼ��
	//static�޶�Ϊ�ڲ���������
	//const�޶���arr���鲻�ɸ���


	//b.��const int value��const int n�ֱ��滻int value��int n, �Ƿ�����������ֵ��ǿ������
	//���ǣ���Ϊ�������value��n������������ı��ݣ�����Ӱ����������


	

	return 0;
}


void first(void)
{
	char color;
	color = 'R';
	printf("color in first() is %c\n", color);
}


void second(void)
{
	color = 'G';
	printf("color in second() is %c\n", color);
}