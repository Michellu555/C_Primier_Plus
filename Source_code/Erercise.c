#include<stdio.h>
#include<stdbool.h>

//��ϰ26ʹ��
int recursion(int n);

int main()
{   
    //C��ϰʾ��4
    //����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
    // int year, month, day, days;
    // int list[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    // printf("Please enter the year, month and day: \n");
    // scanf("%d%d%d", &year, &month, &day);
    // for (int i = 1; i <= month; i++)
    // {
    //     days += list[i - 1];
    // }
    // days += day;
    // if (month > 2)//�·ݴ�Լ2��
    // {
    //     if (year % 100 == 0 && year % 400 == 0)//������Ҫ����400
    //     {
    //         days++;
    //     }
    //     else if (year % 100 != 0 && year & 4 == 0)//��ͨ�����4
    //     {
    //         days++;
    //     }
    // }
    // printf("The  %d/%d/%d is the %d days in %d year.\n", year, month, day, days, year);
    

    //C��ϰʵ��8
    //���9*9�ھ�
    // for (int i = 1; i <= 9; i++)//��������
    // {
    //     for (int j = 1; j <= i; j++)//����ÿһ���������Ŀ
    //     {
    //         printf("%d x %d = %-5d", i, j, i * j);
    //     }
    //     printf("\n");
    // }
    
    
    //C��ϰʵ��12
    //�ж�101��200֮�������
    // int num, div;
    // bool isPrime;
    // for (num = 101; num <=200; num++)
    // {
    //     for (div = 2, isPrime = true; div * div <= num; div++)
    //     {
    //         if (num % div == 0)//���������������Ϊ������ֱ������
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



    //C��ϰʵ��13
    //��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ����������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
    // int j, k, m;
    // for (int i = 100; i <= 999; i++)
    // {
    //     j = i / 100;//��λ��
    //     k = (i - j * 100) / 10;//ʮλ��
    //     m = i - j * 100 - k * 10;//��λ��
    //     j = j * j * j;
    //     k = k * k * k;
    //     m = m * m * m;
    //     if (i == j + k + m)
    //     {
    //         printf("%d is narcissistic number.\n", i);
    //     }
    // }


    //C��ϰʵ��14
    //��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
    //�������Ƚ�2ȫ���ֽ������Ȼ���ٷֽ�3������������
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
    

    //19.һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������
    // int num;
    // for (int i = 2; i < 1000; i++)//1��1000֮��
    // {
    //     int sum = 0;
    //     num = i;
    //     for (int j = 2; j < num; j++)//��2��ʼ��Լ��, 
    //     {
    //         if (num % j == 0)//����㣺����������ʽ�ֽ⣬��Ϊ���ҳ����е�����
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
    
    
    //20.һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
    //���ʮ�η����߶�
    // int time;//�˶�����
    // float heigh = 100.0f;//��ǰ�߶�
    // float sum = 100.0f;//���г�
    // printf("Please enter the time you want: \n");
    // scanf("%d", &time);
    // for (int i = 2; i <= time; i++)
    // {
    //     if (i % 2 == 0)//ż����Ϊ��������
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
    
    
    //21.���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��, �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
    //�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
    // int sum = 1;
    // for (int i = 1; i < 10; i++)//����㣺ʵ���ϳ����ӵ�����ֻ��9�죬��ʮ��û�г�����
    // {
    //     sum += 1;
    //     sum *= 2;
    // }
    // printf("%d", sum);


    //23.��ӡ������ͼ�������Σ���
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)//��ӡ�ո�
    //     {
    //         printf(" ");
    //     }
    //     for (int m = 1; m <= 2 * i - 1; m++)//��ӡ*
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
    

    //24.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
    //ǰһ��ķ��ӵ��ں�һ��ķ�ĸ
    //ǰһ��ķ��Ӽӷ�ĸ���ں�һ��ķ���
    // int m = 2;//mΪ����
    // int n = 1;//nΪ��ĸ
    // int temp;
    // float sum = 0;//���
    // for (int i = 1; i <= 20; i++)
    // {
    //     sum += m / n;
    //     temp = n;//�ݴ�
    //     n = m;
    //     m = m + temp;
    //     // printf("%d/%d  ", m, n);
    // }
    // printf("%f", sum);


    //25.��1+2!+3!+...+20!�ĺ͡�
    //2!��ʾ2�Ľ׳ˣ�2�� = 2 X 1;
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
    

    //26.���õݹ鷽����5!
    // int num, sum;
    // printf("Please enter a integer:\n");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = recursion(i);
    //     printf("%d\n", sum);
    // }
    


    //29.��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
    
    

    
   
    


    return 0;
}

//26�⺯��ԭ��
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