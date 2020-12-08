#include<stdio.h>
#include<stdlib.h>
#include "diceroll.h"




extern int count; //引用式声明，外部链接
static int total = 0; //静态变量，内部链接
static unsigned long int next = 1; //种子
int roll_count = 0; //外部链接





void accumulate(int k); //函数原型
unsigned int rand0(void); //生成随机数算法
int rand1(void); //另一个生产随机数算法
void srand1(unsigned int); //种子函数
static int rollem(int sides); //计算透出的骰子的点数和次数





//程序清单12.6
//与partb.c -- 一起编译
 void accumulate(int k) //k具有块作用域，无连接
 {
     static int subtotal = 0; //静态变量，块作用域，无连接
     if (k <= 0)
     {
         printf("loop cycle: %d\n", count); //count = 0, 在另一个文件中已定义
         printf("subtotal: %d; total: %d\n", subtotal, total);
         subtotal = 0;
     }
     else
     {
         subtotal += k;
         total += k;
     }
 }




//程序清单12.7
//rand0.c -- 生产随机数
//使用ANSI C可移植算法
 unsigned int rand0(void)  //生成随机数算法
 {
     next = next * 1103515245 + 12345;
     return (unsigned int)(next / 65636) % 23768;
 }



//程序清单12.9
//s_and_r.c-- 包含rand1()和srand1()的文件
//使用ANSI C可移植算法
int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}


void srand1(unsigned int seed)
{
    next = seed;
}




//程序清单12.11
//*diceroll.c--扔骰子模拟程序
//*与mandydice.c一起编译
static int rollem(int sides) //计算透出的骰子的点数和次数
{
    int roll;
    roll = rand() % sides + 1;
    roll_count++;
    return roll;
}


int roll_n_dice(int dice, int sides) //计算骰子数量和总点数
{
    int roll;
    int total = 0;
    if (sides < 2) //骰子面数
    {
        puts("Need at least 2 sides.");
        return -2;
    }
    if (dice < 1) //骰子数量
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