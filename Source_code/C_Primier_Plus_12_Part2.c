#include<stdio.h>




extern int count; //引用式声明，外部链接
static int total = 0; //静态变量，内部链接
static unsigned long int next = 1; //种子




void accumulate(int k); //函数原型
unsigned int rand0(void); //生成随机数算法
int rand1(void); //另一个生产随机数算法
void srand1(unsigned int); //种子函数





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


