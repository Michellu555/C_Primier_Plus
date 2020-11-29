#include<stdio.h>
#include<stdbool.h>

//练习26使用
int recursion(int n);

int main()
{   
    //C练习示例4
    //输入某年某月某日，判断这一天是这一年的第几天？
    // int year, month, day, days;
    // int list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    // printf("Please enter the year, month and day: \n");
    // scanf("%d%d%d", &year, &month, &day);
    // for (int i = 1; i <= month; i++)
    // {
    //     days += list[i - 1];
    // }
    // days += day;
    // if (month > 2)//月份大约2月
    // {
    //     if (year % 100 == 0 && year % 400 == 0)//百年需要除以400
    //     {
    //         days++;
    //     }
    //     else if (year % 100 != 0 && year & 4 == 0)//普通年除以4
    //     {
    //         days++;
    //     }
    // }
    // printf("The  %d/%d/%d is the %d days in %d year.\n", year, month, day, days, year);
    

    //C练习实例8
    //输出9*9口诀
    // for (int i = 1; i <= 9; i++)//控制行数
    // {
    //     for (int j = 1; j <= i; j++)//控制每一行里的组数目
    //     {
    //         printf("%d x %d = %-5d", i, j, i * j);
    //     }
    //     printf("\n");
    // }
    
    
    //C练习实例12
    //判断101到200之间的素数
    // int num, div;
    // bool isPrime;
    // for (num = 101; num <=200; num++)
    // {
    //     for (div = 2, isPrime = true; div * div <= num; div++)
    //     {
    //         if (num % div == 0)//如果能整除，代表为合数，直接跳出
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime == true)
    //     {
    //         printf("%d is prime.\n", num);
    //     }
    // }



    //C练习实例13
    //打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
    // int j, k, m;
    // for (int i = 100; i <= 999; i++)
    // {
    //     j = i / 100;//百位数
    //     k = (i - j * 100) / 10;//十位数
    //     m = i - j * 100 - k * 10;//个位数
    //     j = j * j * j;
    //     k = k * k * k;
    //     m = m * m * m;
    //     if (i == j + k + m)
    //     {
    //         printf("%d is narcissistic number.\n", i);
    //     }
    // }


    //C练习实例14
    //将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
    //分析：先将2全部分解出来，然后再分解3，再依次增加
    // int num;
    // printf("Please enter a integer: \n");
    // scanf("%d", &num);
    // printf("%d = ", num);
    // for (int i = 2; i <= num; i++)
    // {
    //     while (num % i == 0)
    //     {
    //         printf("%d", i);
    //         num /= i;
    //         if (num != 1)
    //         {
    //             printf(" * ");
    //         }
    //     }
    // }
    

    //19.一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
    // int num;
    // for (int i = 2; i < 1000; i++)//1到1000之间
    // {
    //     int sum = 0;
    //     num = i;
    //     for (int j = 2; j < num; j++)//从2开始找约数, 
    //     {
    //         if (num % j == 0)//错误点：并不是做因式分解，是为了找出所有的因子
    //         {
    //             sum += j;
    //         }
    //     }
    //     sum++;
    //     if (sum == i)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    
    
    //20.一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
    //求第十次反弹高度
    // int time;//运动次数
    // float heigh = 100.0f;//当前高度
    // float sum = 100.0f;//总行程
    // printf("Please enter the time you want: \n");
    // scanf("%d", &time);
    // for (int i = 2; i <= time; i++)
    // {
    //     if (i % 2 == 0)//偶数次为上升过程
    //     {
    //         heigh /= 2;
    //         sum += heigh;
    //     }
    //     else
    //     {
    //         sum += heigh;
    //     }
    // }
    // printf("%.5f  %.5f\n", heigh, sum);
    
    
    //21.猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个, 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
    //以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
    // int sum = 1;
    // for (int i = 1; i < 10; i++)//错误点：实际上吃桃子的日子只有9天，第十天没有吃桃子
    // {
    //     sum += 1;
    //     sum *= 2;
    // }
    // printf("%d", sum);


    //23.打印出如下图案（菱形）。
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)//打印空格
    //     {
    //         printf(" ");
    //     }
    //     for (int m = 1; m <= 2 * i - 1; m++)//打印*
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int k = 1; k <= 3; k++)
    // {
    //     for (int l = 1; l <= k + 1; l++)
    //     {
    //         printf(" ");
    //     }
    //     for (int n = 1; n <= 7 - 2 * k; n++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    

    //24.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
    //前一项的分子等于后一项的分母
    //前一项的分子加分母等于后一项的分子
    // int m = 2;//m为分子
    // int n = 1;//n为分母
    // int temp;
    // float sum = 0;//求和
    // for (int i = 1; i <= 20; i++)
    // {
    //     sum += m / n;
    //     temp = n;//暂存
    //     n = m;
    //     m = m + temp;
    //     // printf("%d/%d  ", m, n);
    // }
    // printf("%f", sum);


    //25.求1+2!+3!+...+20!的和。
    //2!表示2的阶乘：2！ = 2 X 1;
    // long num, sum;
    // int i, j;
    // for (i = 1; i <= 20; i++)
    // {
    //     for (j = 1, num = 1; j <= i; j++)
    //     {
    //         num *= j;
    //     }
    //     sum += num;
    // }
    // printf("%ld", sum);
    

    //26.利用递归方法求5!
    // int num, sum;
    // printf("Please enter a integer:\n");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = recursion(i);
    //     printf("%d\n", sum);
    // }
    


    //29.给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
    
    

    
   
    


    return 0;
}

//26题函数原型
int recursion(int n)
{
    int sum;
    if (n == 0)
    {
        sum = 1;
    }
    else
    {
        sum = n * recursion(n - 1);
    }
    return sum;
}