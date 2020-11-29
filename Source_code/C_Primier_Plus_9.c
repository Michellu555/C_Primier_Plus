#include<stdio.h>
#include<string.h>


//程序清单9.1使用
void starbar(void);
#define NAME "GIGATHINK, INC."
#define ADRESS "101 Megabuck Plaza"
#define PLACE "MEgapolis, CA 94904"
#define WIDTH 40
//程序清单9.2使用
void show_n_char(char ch, int num);
#define SPACE ' '
//程序清单9.3使用
int imin(int, int);
//程序清单9.4使用
int imax();//旧式函数声明
//程序清单9.5使用
int imaxx(int, int);
//程序清单9.6使用
void up_and_down(int);
//编程练习9.7使用
long fact(int n);
long rfact(int n);
//编程练习9.8使用
void to_binary(unsigned long n);
//编程练习9.12使用
void mikado(int);
//编程练习9.13使用
void interchange(int u, int v);
//编程练习9.14使用
void interchangee(int u, int v);
//编程练习9.15使用
void interchangeee(int * u, int * v);
//*************************************************************
//练习题4使用
int sum(int, int);
//练习题5使用
double sum_double(double, double);
//练习题6使用
void alter(int *, int *);//参数为指针
//练习题8使用
int max(int, int, int);
//练习题9使用
void menu(void);//打印菜单
int choice(int, int);
//*************************************************************
//编程练习1使用
double min(double, double);
//编程练习2使用
void chline(char, int, int);
//编程练习4使用
double harmonic_average(double, double);
//编程练习5使用
void larger_of(double * , double *);
//编程练习6使用
void order(double *, double *, double *);



int main()
{ 
    //程序清单9.1
    // starbar();
    // printf("%s\n", NAME);
    // printf("%s\n", ADRESS);
    // printf("%s\n", PLACE);
    // starbar();


    //程序清单9.2
    // show_n_char('*', WIDTH);
    // putchar('\n');
    // show_n_char(SPACE, (WIDTH - strlen(NAME)) / 2);//打印空格
    // printf("%s\n", NAME);
    // show_n_char(SPACE, (WIDTH - strlen(ADRESS)) / 2);//打印空格
    // printf("%s\n", ADRESS);
    // show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);//打印空格
    // printf("%s\n", PLACE);
    // show_n_char('*', WIDTH);


    //程序清单9.3
    //lesser.c -- 找出两个整数中较小的一个
    // int evil1, evil2;
    // printf("Enter a pair of integers(q to quit):\n");
    // while (scanf("%d %d", &evil1, &evil2) == 2)
    // {
    //     printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
    //     printf("Enter a pair of integers(q to quit):\n");
    // }
    // printf("Bye.\n");

    //程序清单9.4
    //misuse.c -- 错误的使用函数
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));


    //程序清单9.5
    //proto.c -- 使用函数原型
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imaxx(3));//缺少一个参数
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imaxx(3.0, 5.0));


    //程序清单9.6
    //递归演示
    // up_and_down(1);


    //程序清单9.7
    //factor.c -- 使用循环和递归计算阶乘
    // int num;
    // printf("This program calculates factorials.\n");
    // printf("Enter a value in the range 1 -12 (q to quit):\n");
    // while (scanf("%d", &num) == 1)
    // {
    //     if (num < 0)
    //     {
    //         printf("No negative numbers, please.\n");
    //     }
    //     else if (num > 12)
    //     {
    //         printf("Keep input under 12.\n");
    //     }
    //     else
    //     {
    //         printf("loop: %d factorial = %ld\n", num, fact(num));
    //         printf("recursion %d factorial = %ld\n", num, rfact(num));
    //     }
    //     printf("Enter a value in the range 0 - 12(q to quit):\n");  
    // }
    // printf("Bye.\n");



    //程序清单9.8
    //binary.c -- 以二进制形式打印整数
    // unsigned long number;
    // printf("Enter an integer (q to quit):\n");
    // while (scanf("%lu", &number) == 1)
    // {
    //     printf("Binary equivalent: ");
    //     to_binary(number);
    //     putchar('\n');
    //     printf("Enter an integer (q to quit):\n");
    // }
    // printf("Done.\n");



    //程序清单9.12
    //loccheck.c -- 查看变量被储存在何处
    // int pooh = 2;
    // int bah = 5;
    // printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    // printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    // mikado(pooh);



    //程序清单9.13
    //swap1.c --第一个版本的交换函数
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchange(x, y);
    // printf("Now x = %d and y = %d.\n", x, y);

    

    //程序清单9.14
    //swap2.c -- 查找swap1.c的问题
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchangee(x, y);
    // printf("Now x = %d and y = %d.\n", x, y);
    


    //程序清单9.15
    //swap3.c -- 使用指针解决交换函数的问题
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchangeee(&x, &y);//把x和y的地址发送给函数
    // printf("Now x = %d and y = %d\n", x, y);



    //**********************************************************************************************
    //复习题


    //2.根据下面各函数的描述，分别编写它们的ANSIC函数头。注意，只需写出函数头，不用写函数体。
    // a.donut(接受一个int类型的参数，打印若干（参数指定数目）个0
    // void donut(int);//打印，并不是返回
    // b.gear()接受两个int类型的参数，返回int类型的值
    // int gear(int, int);
    // c.guess()不接受参数，返回一个int类型的值
    // int guess(void);
    // d.stuff_it(接受一个double类型的值和double类型变量的地址，把第1个值储存在指定位置
    // void stuff_it(double, double *);//并未要求返回任何数值


    // 3.根据下面各函数的描述，分别编写它们的ANSIC函数头。注意，只需写出函数头，不用写函数体。
    // a.n_to_char(接受一个int类型的参数，返回一个char类型的值
    // char n_to_char(int);
    // b.digit(接受一个double类型的参数和一个int类型的参数，返回一个int类型的值
    // int digit(double, int);
    // c.which()接受两个可储存double类型变量的地址，返回一个double类型的地址
    // double * which(double *, double *);
    // d.random()不接受参数，返回一个int类型的值
    // int random(void);


    //4.设计一个函数，返回两整数之和。
    // int m, n, a;
    // printf("Please enter two integer and the function will calculate the sum of these two integer:\n");
    // scanf("%d %d", &m, &n);
    // a = sum(m, n);
    // printf("The sum of thest two integers is %d.\n", a);


    //5.如果把复习题4改成返回两个double类型的值之和，应如何修改函数？
    // double m, n, a;
    // printf("Please enter two double number and the function will calculate the sum of these two number:\n");
    // scanf("%lf %lf", &m, &n);
    // a = sum_double(m, n);
    // printf("The sum of thest two double number is %.2lf.\n", a);


    //6.设计一个名为alter()的函数，接受两个int类型的变量x和y,把它们的值分别改成两个变量之和以及两变量之差。
    // int x, y;
    // printf("Please enter two integer and the function will calculate the sum and difference of these two integer:\n");
    // scanf("%d %d", &x, &y);
    // alter(&x, &y);//参数为x和y的地址
    // printf("The sum and difference of thest two integers is %d and %d.\n", x, y);


    //7.下面的函数定义是否正确？
    // void salami(num)
    // {
    // int num, count;
    // for(count=1;count<=num;num+)
    // printf("O salami mio!\n");
    // }
    //num定义不正确，应该在函数原型中定义好


    //8.编写一个函数，返回3个整数参数中的最大值。
    // int x, y, z, a;
    // printf("Please enter three integers and the function will calculate the maximum of these three integers:\n");
    // scanf("%d %d %d", &x, &y, &z);
    // a = max(x, y, z);
    // printf("The maximum of these three integers is %d.\n", a);


    //9.给定下面的输出：
    // Please choose one of the following:
    // 1) copy files       2) move files
    // 3)remove files      4)quit
    // Enter the number of your choice:
    // a.编写一个函数，显示一份有4个选项的菜单，提示用户进行选择（输出如上所示）。
    // b.编写一个函数，接受两个int类型的参数分别表示上限和下限。该函数从用户的输入中读取整数。
    //   如果整数超出规定上下限，函数再次打印菜单(使用a部分的函数）提示用户输入，然后获取一个新值。
    //   如果用户输入的整数在规定范围内，该函数则把该整数返回主调函数。如果用户输入一个非整数字符，该函数应返回4。
    //c.使用本题a和b部分的函数编写一个最小型的程序。最小型的意思是，该程序不需要实现菜单中各选项的功能，只需显示这些选项并获取有效的响应即可。
    // menu();
    // choice(1, 4);



    //*****************************************************************************************
    //编程练习
    //1.设计一个函数min(x,y),返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。
    // double a;
    // a = min(3.5, 4.4);
    // printf("%f", a);
   
   
    //2.设计一个函数chline(ch,i,j),打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。
    // chline('A', 3, 5);


    //3.编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，第2个整数指定打印指定字符的行数。编写一个调用该函数的程序。
    //答案同第二题


    //4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
    // double average;
    // average = harmonic_average(2.0, 3.0);
    // printf("%f", average);


    //5.编写并测试一个函数larger_of(),该函数把两个double类型变量的值替换为较大的值。例如，larger_of(x,y)会把x和y中较大的值重新赋给两个变量。
    // double m, n;
    // m = 3.5, n = 4.5;
    // larger_of(&m, &n);
    // printf("%f %f", m, n);


    //6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。
    // double x, y, z;
    // x = 5.0, y = 4.0, z = 3.0;
    // order(&x, &y , &z);
    // printf("%f %f %f\n", x, y, z);






















    return 0;
}



//程序清单9.1使用
void starbar(void)
{
    for (int count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
}


//程序清单9.2使用
void show_n_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
    {
        putchar(ch);
    }
    // putchar("\n");
}


//程序清单9.3使用
int imin(int a, int b)
{
    int num;
    if (a > b)
    {
        num = b;
    }
    else if (a < b)
    {
        num = a;
    }
    else
    {
        printf("Evil1 is tha same as evil2.\n");
    }
    
    return num; 
}


//程序清单9.4使用
int imax(n, m)
int n, m;
{
    return(n > m ? n : m);
}


//程序清单9.5使用
int imaxx(int n, int m)
{
    return(n > m ? n : m);
}


//程序清单9.6使用
void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("Level %d: n location %p\n", n, &n);
}


//编程练习9.7使用
long fact(int n)//使用循环计算阶乘
{
    long ans;
    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }
    return ans;
}

long rfact(int n)//使用迭代计算阶乘
{
    long ans;
    if (n > 0)
    {
        ans = n * rfact(n -1);
    }
    else
    {
        ans = 1;
    }
    return ans;
}


//编程练习9.8使用
void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}


//编程练习9.12使用
void mikado(int bah)
{
    int pooh = 10;
    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}


//编程练习9.13使用
void interchange(int u, int v)
{
    int temp;
    temp = u;
    u = v;
    v = temp;
}


//编程练习9.14使用
void interchangee(int u, int v)
{
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v= temp;
    printf("Now u = %d and v = %d.\n", u, v);
}


//编程练习9.15使用
void interchangeee(int * u, int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}


//*****************************************************************************************
//练习题4使用
int sum(int m, int n)
{
    int sum;
    sum = m + n;
    return sum;
}


//练习题5使用
double sum_double(double m, double n)
{
    double sum;
    sum = m + n;
    return sum;
}


//练习题6使用
void alter(int * m, int * n)
{
    int temp_1, temp_2;
    temp_1 = *m + *n;
    temp_2 = *m - *n;
    *m = temp_1;
    *n = temp_2;
}


//练习题8使用
int max(int m, int n, int j)
{
    int max;
    if (m >= n && m >= j)
    {
        max = m;
    }
    else if (n >= m && n >= j)
    {
        max = n;
    }
    else
    {
        max = j;
    }
    return max;
}


//练习题9使用
void menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1)copy file            2)move files\n");
    printf("3)remove files         4)quit\n");
    printf("Enter the number of your choice:\n");
}


int choice(int min, int max)
{
    int choice, good;
    char ch;
    good = scanf("%d", &choice);
    while ((good == 1) && (choice > max || choice < min))
    {
        menu();
        good = scanf("%d", &choice);
        while ((ch = getchar()) != '\n')//去掉换行符
        {
            continue;
        }
    }
    if (good != 1)
    {
        choice = 4;
    }
    return choice; 
}


//******************************************************************
//编程练习1使用
double min(double x, double y)
{
    double min;
    if (x > y)
    {
        min = y;
    }
    else
    {
        min = x;
    }
    return min;
}

//编程练习2使用
void chline(char ch, int i, int j)
{
    for (int m = 1; m <= i; m++)
    {
        for (int n = 0; n < j; n++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

//编程练习4使用
double harmonic_average(double m, double n)
{
    double average;
    m = 1 / m;
    n = 1 / n;
    average = (m + n) / 2;
    average = 1 / average;
    return average;
}

//编程练习5使用
void larger_of(double * x, double * y)
{
    double larger;
    larger = (*x > *y)? *x : *y;
    *x = larger;
    *y = larger;
}

//编程练习6使用
void order(double * a, double * b, double * c)
{
    double temp;
    while (*b > *c)//b和c中小的放前面
    {
        temp = *b;
        *b = *c;
        *c = temp;
        while (*a > *b)//a和b中小的放前面
        {
            temp = *a;
            *a = *b;
            *b = temp;
        }
    }
}