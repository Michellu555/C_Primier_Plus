#include<stdio.h>


int main()
{
    // 例1：有人用温度计测量出用华氏温度98°F，现在要求用C语言实现把它转换为以摄氏法表示的温度。
    // 摄氏度等于九分之五乘以华氏度减去32的积
    // float centigrade, f_Degree;
    // printf("Please enter a f_Degree:");
    // scanf("%f", &f_Degree);
    // centigrade = (5.0 / 9) * (f_Degree - 32);
    // printf("The %.2f f_degree transfer to centigrade is %.2f.\n", f_Degree, centigrade);


    // 例2：用C语言计算存款利息。假设有本金1000元，想存一年，有三种方法可选择：
    // 活期，年利率为0.0036；
    // 一年期定期，年利率为0.0225；
    // 存两次半年定期，年利率为0.0198。
    // 请分别计算出一年后按3种方法所得到的本息和
    // float principal, return1, return2, return3, return0;
    // float interest_rate1 = 0.0036;
    // float interest_rate2 = 0.0225;
    // float interest_rate3 = 0.0198;
    // return0 = 1000;
    // //Project 1
    // return1 = return0 * (1 + interest_rate1);
    // //Project 2
    // return2 = return0 * (1 + interest_rate2);
    // //Peoject 3
    // return3 = return0;
    // for (int i = 0; i < 2; i++)
    // {
    //     return3 *= (1 + interest_rate3 / 2);
    // }
    // printf("The interest for these three project is %.2f, %.2f and %.2f.\n", return1, return2, return3);


    //例3：C语言实现将大写字母A，输出为小写字母a
    //解题思路：字符数据以ASCII码存储在内存的，形式与整数的存储形式相同，所以字符型数据和其他算术型数据之间可以互相赋值和运算。
    // printf("%c", 'A' + 32);


    //例4：C语言实现用%f输出实数，且只能得到6位小数
    // float a = 3.141592657;
    // printf("%.6f", a);
    

    


    return 0;
}