#include<stdio.h>
#include<stdlib.h> //Ϊsrand()�ṩԭ��
#include<time.h> //Ϊtime()�ṩԭ��
#include "diceroll.h" //Ϊroll_n_dice()�ṩԭ�ͣ�Ϊroll_count�����ṩ����





void trystat(void); 
void critic(void);
void report_count();
extern void accumulate(int k); //�����ⲿ����
extern unsigned int rand0(void); //�����ⲿ����
extern void srand1(unsigned int x);
extern int rand1(void);








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
	//int value; //�Զ�����
	//register int i; //�Ĵ�������
	//printf("Enter a positive integer(0 to quit):");
	//while (scanf("%d", &value) == 1 && value > 0)
	//{
	//	++count; //ʹ���ļ����������
	//	for (i = value; i >= 0; i--)
	//	{
	//		accumulate(i);
	//	}
	//	printf("Enter a positive integer(0 to quit): ");
	//}
	//report_count();




	//�����嵥12.8
	//r_drive0.c -- ����rand0()����
	//��rand0.c -- һ�����
	/*for (int count = 0; count < 5; count++)
	{
	printf("%d\n", rand0());
	}*/




	//�����嵥12.10
	//r_drive1.c -- ����rand1()��srand1()
	//��s_and_r.cһ�����
	//int countt;
	//unsigned seed;
	//printf("Please enter your choice for seed.\n");
	//while (scanf("%u", &seed) == 1)
	//{
	//	srand1(seed); //�û�ȡ����ֵ��������
	//	for (countt = 0; countt < 5; countt++)
	//	{
	//		printf("%d\n", rand1()); //��ӡ�����
	//	}
	//printf("Please enter next seed(q to quit):\n");
	//}
	//printf("Done\n");




	
	
	


	//�����嵥12.14
	//dyn_arr.c -- ��̬��������
	//��ʾ����������� �� �ж��Ƿ���ȷ�������� �� malloc����ռ� �� �ж�ָ���Ƿ���ȷָ�� �� ����¼����ֵ �� ¼����ֵ �� ѭ����ӡ �� 6���ַ��ͻ�һ�� �� ���һ�л��� �� �����ͷ��ڴ�
	//double* ptd;
	//int max, number;
	//int i = 0;
	//puts("what is the maximum number of type double entries?");
	//if (scanf("%d", &max) != 1)
	//{
	//	puts("Number not correctly entered -- bye.");
	//	exit(EXIT_FAILURE);
	//}
	//ptd = (double*)malloc(max * sizeof(double));
	//if (ptd == NULL)
	//{
	//	puts("Memory allocation failed. Goodbye.");
	//	exit(EXIT_FAILURE);
	//}
	//puts("Please enter the value:(q to quit)");
	//while (scanf("%lf", &ptd[i]) == 1 && i < max)
	//{
	//	i++;
	//}
	//printf("Here are your %d entries:\n", i);
	//for (int i = 0; i < max; i++)
	//{
	//	printf("%7.2f", ptd[i]);
	//	if (i % 7 == 6)
	//	{
	//		putchar('\n');
	//	}
	//}
	//if (i % 7 != 0) //�����λ��
	//{
	//	putchar('\n');
	//}
	//puts("Done!");
	//free(ptd);


	
	//�����嵥12.13
	//manydice.c -- ��������ӵ�ģ�����
	//��diceroll.cһ�����
	

	
	
	
	
	








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




