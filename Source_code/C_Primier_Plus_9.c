#include<stdio.h>
#include<string.h>


//�����嵥9.1ʹ��
void starbar(void);
#define NAME "GIGATHINK, INC."
#define ADRESS "101 Megabuck Plaza"
#define PLACE "MEgapolis, CA 94904"
#define WIDTH 40
//�����嵥9.2ʹ��
void show_n_char(char ch, int num);
#define SPACE ' '
//�����嵥9.3ʹ��
int imin(int, int);
//�����嵥9.4ʹ��
int imax();//��ʽ��������
//�����嵥9.5ʹ��
int imaxx(int, int);
//�����嵥9.6ʹ��
void up_and_down(int);
//�����ϰ9.7ʹ��
long fact(int n);
long rfact(int n);
//�����ϰ9.8ʹ��
void to_binary(unsigned long n);
//�����ϰ9.12ʹ��
void mikado(int);
//�����ϰ9.13ʹ��
void interchange(int u, int v);
//�����ϰ9.14ʹ��
void interchangee(int u, int v);
//�����ϰ9.15ʹ��
void interchangeee(int * u, int * v);
//*************************************************************
//��ϰ��4ʹ��
int sum(int, int);
//��ϰ��5ʹ��
double sum_double(double, double);
//��ϰ��6ʹ��
void alter(int *, int *);//����Ϊָ��
//��ϰ��8ʹ��
int max(int, int, int);
//��ϰ��9ʹ��
void menu(void);//��ӡ�˵�
int choice(int, int);
//*************************************************************
//�����ϰ1ʹ��
double min(double, double);
//�����ϰ2ʹ��
void chline(char, int, int);
//�����ϰ4ʹ��
double harmonic_average(double, double);
//�����ϰ5ʹ��
void larger_of(double * , double *);
//�����ϰ6ʹ��
void order(double *, double *, double *);



int main()
{ 
    //�����嵥9.1
    // starbar();
    // printf("%s\n", NAME);
    // printf("%s\n", ADRESS);
    // printf("%s\n", PLACE);
    // starbar();


    //�����嵥9.2
    // show_n_char('*', WIDTH);
    // putchar('\n');
    // show_n_char(SPACE, (WIDTH - strlen(NAME)) / 2);//��ӡ�ո�
    // printf("%s\n", NAME);
    // show_n_char(SPACE, (WIDTH - strlen(ADRESS)) / 2);//��ӡ�ո�
    // printf("%s\n", ADRESS);
    // show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);//��ӡ�ո�
    // printf("%s\n", PLACE);
    // show_n_char('*', WIDTH);


    //�����嵥9.3
    //lesser.c -- �ҳ����������н�С��һ��
    // int evil1, evil2;
    // printf("Enter a pair of integers(q to quit):\n");
    // while (scanf("%d %d", &evil1, &evil2) == 2)
    // {
    //     printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
    //     printf("Enter a pair of integers(q to quit):\n");
    // }
    // printf("Bye.\n");

    //�����嵥9.4
    //misuse.c -- �����ʹ�ú���
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));


    //�����嵥9.5
    //proto.c -- ʹ�ú���ԭ��
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imaxx(3));//ȱ��һ������
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imaxx(3.0, 5.0));


    //�����嵥9.6
    //�ݹ���ʾ
    // up_and_down(1);


    //�����嵥9.7
    //factor.c -- ʹ��ѭ���͵ݹ����׳�
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



    //�����嵥9.8
    //binary.c -- �Զ�������ʽ��ӡ����
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



    //�����嵥9.12
    //loccheck.c -- �鿴�����������ںδ�
    // int pooh = 2;
    // int bah = 5;
    // printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    // printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    // mikado(pooh);



    //�����嵥9.13
    //swap1.c --��һ���汾�Ľ�������
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchange(x, y);
    // printf("Now x = %d and y = %d.\n", x, y);

    

    //�����嵥9.14
    //swap2.c -- ����swap1.c������
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchangee(x, y);
    // printf("Now x = %d and y = %d.\n", x, y);
    


    //�����嵥9.15
    //swap3.c -- ʹ��ָ������������������
    // int x = 5, y = 10;
    // printf("Originally x = %d and y = %d.\n", x, y);
    // interchangeee(&x, &y);//��x��y�ĵ�ַ���͸�����
    // printf("Now x = %d and y = %d\n", x, y);



    //**********************************************************************************************
    //��ϰ��


    //2.����������������������ֱ��д���ǵ�ANSIC����ͷ��ע�⣬ֻ��д������ͷ������д�����塣
    // a.donut(����һ��int���͵Ĳ�������ӡ���ɣ�����ָ����Ŀ����0
    // void donut(int);//��ӡ�������Ƿ���
    // b.gear()��������int���͵Ĳ���������int���͵�ֵ
    // int gear(int, int);
    // c.guess()�����ܲ���������һ��int���͵�ֵ
    // int guess(void);
    // d.stuff_it(����һ��double���͵�ֵ��double���ͱ����ĵ�ַ���ѵ�1��ֵ������ָ��λ��
    // void stuff_it(double, double *);//��δҪ�󷵻��κ���ֵ


    // 3.����������������������ֱ��д���ǵ�ANSIC����ͷ��ע�⣬ֻ��д������ͷ������д�����塣
    // a.n_to_char(����һ��int���͵Ĳ���������һ��char���͵�ֵ
    // char n_to_char(int);
    // b.digit(����һ��double���͵Ĳ�����һ��int���͵Ĳ���������һ��int���͵�ֵ
    // int digit(double, int);
    // c.which()���������ɴ���double���ͱ����ĵ�ַ������һ��double���͵ĵ�ַ
    // double * which(double *, double *);
    // d.random()�����ܲ���������һ��int���͵�ֵ
    // int random(void);


    //4.���һ������������������֮�͡�
    // int m, n, a;
    // printf("Please enter two integer and the function will calculate the sum of these two integer:\n");
    // scanf("%d %d", &m, &n);
    // a = sum(m, n);
    // printf("The sum of thest two integers is %d.\n", a);


    //5.����Ѹ�ϰ��4�ĳɷ�������double���͵�ֵ֮�ͣ�Ӧ����޸ĺ�����
    // double m, n, a;
    // printf("Please enter two double number and the function will calculate the sum of these two number:\n");
    // scanf("%lf %lf", &m, &n);
    // a = sum_double(m, n);
    // printf("The sum of thest two double number is %.2lf.\n", a);


    //6.���һ����Ϊalter()�ĺ�������������int���͵ı���x��y,�����ǵ�ֵ�ֱ�ĳ���������֮���Լ�������֮�
    // int x, y;
    // printf("Please enter two integer and the function will calculate the sum and difference of these two integer:\n");
    // scanf("%d %d", &x, &y);
    // alter(&x, &y);//����Ϊx��y�ĵ�ַ
    // printf("The sum and difference of thest two integers is %d and %d.\n", x, y);


    //7.����ĺ��������Ƿ���ȷ��
    // void salami(num)
    // {
    // int num, count;
    // for(count=1;count<=num;num+)
    // printf("O salami mio!\n");
    // }
    //num���岻��ȷ��Ӧ���ں���ԭ���ж����


    //8.��дһ������������3�����������е����ֵ��
    // int x, y, z, a;
    // printf("Please enter three integers and the function will calculate the maximum of these three integers:\n");
    // scanf("%d %d %d", &x, &y, &z);
    // a = max(x, y, z);
    // printf("The maximum of these three integers is %d.\n", a);


    //9.��������������
    // Please choose one of the following:
    // 1) copy files       2) move files
    // 3)remove files      4)quit
    // Enter the number of your choice:
    // a.��дһ����������ʾһ����4��ѡ��Ĳ˵�����ʾ�û�����ѡ�����������ʾ����
    // b.��дһ����������������int���͵Ĳ����ֱ��ʾ���޺����ޡ��ú������û��������ж�ȡ������
    //   ������������涨�����ޣ������ٴδ�ӡ�˵�(ʹ��a���ֵĺ�������ʾ�û����룬Ȼ���ȡһ����ֵ��
    //   ����û�����������ڹ涨��Χ�ڣ��ú�����Ѹ�����������������������û�����һ���������ַ����ú���Ӧ����4��
    //c.ʹ�ñ���a��b���ֵĺ�����дһ����С�͵ĳ�����С�͵���˼�ǣ��ó�����Ҫʵ�ֲ˵��и�ѡ��Ĺ��ܣ�ֻ����ʾ��Щѡ���ȡ��Ч����Ӧ���ɡ�
    // menu();
    // choice(1, 4);



    //*****************************************************************************************
    //�����ϰ
    //1.���һ������min(x,y),��������double����ֵ�Ľ�Сֵ����һ���򵥵����������в��Ըú�����
    // double a;
    // a = min(3.5, 4.4);
    // printf("%f", a);
   
   
    //2.���һ������chline(ch,i,j),��ӡָ�����ַ�j��i�С���һ���򵥵����������в��Ըú�����
    // chline('A', 3, 5);


    //3.��дһ������������3��������һ���ַ��������������ַ������Ǵ���ӡ���ַ�����1������ָ��һ���д�ӡ�ַ��Ĵ�������2������ָ����ӡָ���ַ�����������дһ�����øú����ĳ���
    //��ͬ�ڶ���


    //4.�����ĵ���ƽ�����������㣺�ȵõ������ĵ�����Ȼ���������������ƽ��ֵ�����ȡ�������ĵ�������дһ����������������double���͵Ĳ��������������������ĵ���ƽ������
    // double average;
    // average = harmonic_average(2.0, 3.0);
    // printf("%f", average);


    //5.��д������һ������larger_of(),�ú���������double���ͱ�����ֵ�滻Ϊ�ϴ��ֵ�����磬larger_of(x,y)���x��y�нϴ��ֵ���¸�������������
    // double m, n;
    // m = 3.5, n = 4.5;
    // larger_of(&m, &n);
    // printf("%f %f", m, n);


    //6.��д������һ���������ú�����3��double�����ĵ�ַ��Ϊ����������Сֵ�����1���������м�ֵ�����2�����������ֵ�����3��������
    // double x, y, z;
    // x = 5.0, y = 4.0, z = 3.0;
    // order(&x, &y , &z);
    // printf("%f %f %f\n", x, y, z);






















    return 0;
}



//�����嵥9.1ʹ��
void starbar(void)
{
    for (int count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
}


//�����嵥9.2ʹ��
void show_n_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
    {
        putchar(ch);
    }
    // putchar("\n");
}


//�����嵥9.3ʹ��
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


//�����嵥9.4ʹ��
int imax(n, m)
int n, m;
{
    return(n > m ? n : m);
}


//�����嵥9.5ʹ��
int imaxx(int n, int m)
{
    return(n > m ? n : m);
}


//�����嵥9.6ʹ��
void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("Level %d: n location %p\n", n, &n);
}


//�����ϰ9.7ʹ��
long fact(int n)//ʹ��ѭ������׳�
{
    long ans;
    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }
    return ans;
}

long rfact(int n)//ʹ�õ�������׳�
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


//�����ϰ9.8ʹ��
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


//�����ϰ9.12ʹ��
void mikado(int bah)
{
    int pooh = 10;
    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}


//�����ϰ9.13ʹ��
void interchange(int u, int v)
{
    int temp;
    temp = u;
    u = v;
    v = temp;
}


//�����ϰ9.14ʹ��
void interchangee(int u, int v)
{
    int temp;
    printf("Originally u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v= temp;
    printf("Now u = %d and v = %d.\n", u, v);
}


//�����ϰ9.15ʹ��
void interchangeee(int * u, int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}


//*****************************************************************************************
//��ϰ��4ʹ��
int sum(int m, int n)
{
    int sum;
    sum = m + n;
    return sum;
}


//��ϰ��5ʹ��
double sum_double(double m, double n)
{
    double sum;
    sum = m + n;
    return sum;
}


//��ϰ��6ʹ��
void alter(int * m, int * n)
{
    int temp_1, temp_2;
    temp_1 = *m + *n;
    temp_2 = *m - *n;
    *m = temp_1;
    *n = temp_2;
}


//��ϰ��8ʹ��
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


//��ϰ��9ʹ��
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
        while ((ch = getchar()) != '\n')//ȥ�����з�
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
//�����ϰ1ʹ��
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

//�����ϰ2ʹ��
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

//�����ϰ4ʹ��
double harmonic_average(double m, double n)
{
    double average;
    m = 1 / m;
    n = 1 / n;
    average = (m + n) / 2;
    average = 1 / average;
    return average;
}

//�����ϰ5ʹ��
void larger_of(double * x, double * y)
{
    double larger;
    larger = (*x > *y)? *x : *y;
    *x = larger;
    *y = larger;
}

//�����ϰ6ʹ��
void order(double * a, double * b, double * c)
{
    double temp;
    while (*b > *c)//b��c��С�ķ�ǰ��
    {
        temp = *b;
        *b = *c;
        *c = temp;
        while (*a > *b)//a��b��С�ķ�ǰ��
        {
            temp = *a;
            *a = *b;
            *b = temp;
        }
    }
}