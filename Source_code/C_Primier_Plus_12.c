#include<stdio.h>




void trystat(void); 
void critic(void);
void report_count();
void accumulate(int k);



int nuits = 0; //�����ⲿ����
int count = 0; //�ļ��������ⲿ����




int main()
{
	//�����嵥12.1
	//hiding.c -- �ڲ������鶨����ͬ�ı���
	//int x = 30; //ԭʼ��x
	//printf("x in outer block: %d at %p\n", x, &x);
	//{
	//	int x = 77; //�µ�x��������ԭ����x
	//	printf("x in inner block: %d at %p\n", x, &x);
	//}
	//printf("x in outer block: %d at %p\n", x, &x); //���ڲ�����������������
	//while (x++ < 33) //�˴�Ϊ�����x
	//{
	//	int x = 100; //�˴�Ϊ�µ��ڴ���x
	//	x++;
	//	printf("x in while loop: %d at %p\n", x, &x);
	//}
	//printf("x in outer block: %d at %p\n", x, &x); //�����x
	

	//�����嵥12.2
	//forc99.c -- �µ�C99�����
	//int n = 8; //����
	//printf(" Initially, n = %d at %p\n", n, &n);
	//for (int n = 1; n < 3; n++) //�ڲ��1
	//printf(" loop 1: n = %d at %p\n", n, &n);

	//printf("After loop 1, n = %d at %p\n", n, &n);
	//for (int  n = 1; n < 3; n++) //�ڲ��2
	//{
	//	printf("loop 2 index n = %d at %p\n", n, &n);
	//	int n = 6;
	//	printf(" loop 2: n = %d at %p\n", n, &n);
	//	n++;
	//}
	//printf("After loop 2, n = %d at %p\n", n, &n);



	//�����嵥12.3
	//loc_stat.c -- ʹ�þֲ���̬��������������̬����
	//int count; //���������Զ�����
	//for (count = 1; count <= 3; count++)
	//{
	//	printf("Here comes iteration %d:\n", count);
	//	trystat();
	//}



	//�����嵥12.4
	//global.c -- ʹ���ⲿ����
	//extern int nuits; //��ѡ���ظ�����
	//printf("How many pounds to a firkin of butter?\n");
	//scanf("%d", &nuits);
	//while (nuits != 56) //ʹ�����ⲿ����
	//{
	//	critic();
	//}
	//printf("You must hvae looked it up!\n");



	//�����嵥12.5
	//parta.c -- ��ͬ�Ĵ洢���
	//��partb.cһ�����
	int value; //�Զ�����
	register int i; //�Ĵ�������
	printf("Enter a positive integer(0 to quit):");
	while (fscanf("%d", &value) == 1 && value > 0)
	{
		++count; //ʹ���ļ����������
		for (i = value; i >= 0; i++)
		{
			accumulate(i);
		}
		printf("Enter a positive integer(0 to quit): ");
	}
	report_count();






	return 0;
}




void trystat(void)
{
	int fade = 1; //���������Զ�����
	static int stay = 1; //�������򣬾�̬����
	printf("fade = %d and stay = %d\n", fade++, stay++); //fade��ֵһֱ��1��stay��ֵ��1��2��3
}



void critic(void)
{
	//ɾ���˿�ѡ���ظ�����
	printf("No luck, my fried. Try again.\n");
	scanf("%d", &nuits);
}


void report_count()
{
	printf("Loop executed %d times\n", count);
}
