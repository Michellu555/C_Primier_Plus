#include<stdio.h>




extern int count; //����ʽ�������ⲿ����
static int total = 0; //��̬�������ڲ�����
static unsigned long int next = 1; //����




void accumulate(int k); //����ԭ��
unsigned int rand0(void); //����������㷨
int rand1(void); //��һ������������㷨
void srand1(unsigned int); //���Ӻ���





//�����嵥12.6
//��partb.c -- һ�����
 void accumulate(int k) //k���п�������������
 {
     static int subtotal = 0; //��̬��������������������
     if (k <= 0)
     {
         printf("loop cycle: %d\n", count); //count = 0, ����һ���ļ����Ѷ���
         printf("subtotal: %d; total: %d\n", subtotal, total);
         subtotal = 0;
     }
     else
     {
         subtotal += k;
         total += k;
     }
 }




//�����嵥12.7
//rand0.c -- ���������
//ʹ��ANSI C����ֲ�㷨
 unsigned int rand0(void)  //����������㷨
 {
     next = next * 1103515245 + 12345;
     return (unsigned int)(next / 65636) % 23768;
 }



//�����嵥12.9
//s_and_r.c-- ����rand1()��srand1()���ļ�
//ʹ��ANSI C����ֲ�㷨
int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}


void srand1(unsigned int seed)
{
    next = seed;
}


