#include<stdio.h>




void trystat(void); 



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






	return 0;
}




void trystat(void)
{
	int fade = 1; //���������Զ�����
	static int stay = 1; //�������򣬾�̬����
	printf("fade = %d and stay = %d\n", fade++, stay++); //fade��ֵһֱ��1��stay��ֵ��1��2��3
}