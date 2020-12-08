#include<stdio.h>
#include<stdlib.h>
#include "diceroll.h"




extern int count; //����ʽ�������ⲿ����
static int total = 0; //��̬�������ڲ�����
static unsigned long int next = 1; //����
int roll_count = 0; //�ⲿ����





void accumulate(int k); //����ԭ��
unsigned int rand0(void); //����������㷨
int rand1(void); //��һ������������㷨
void srand1(unsigned int); //���Ӻ���
static int rollem(int sides); //����͸�������ӵĵ����ʹ���





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




//�����嵥12.11
//*diceroll.c--������ģ�����
//*��mandydice.cһ�����
static int rollem(int sides) //����͸�������ӵĵ����ʹ���
{
    int roll;
    roll = rand() % sides + 1;
    roll_count++;
    return roll;
}


int roll_n_dice(int dice, int sides) //���������������ܵ���
{
    int roll;
    int total = 0;
    if (sides < 2) //��������
    {
        puts("Need at least 2 sides.");
        return -2;
    }
    if (dice < 1) //��������
    {
        puts("Need at least 1 die.");
        return -1;
    }
    for (int i = 0; i < dice; i++)
    {
        total += rollem(sides);
        return total;
    }
}