#include <stdio.h>
#include<string.h>
#include<float.h>
#include<stdbool.h>
#include<stdlib.h>

#define SEC_PER_MIN 60
// #define MAX 10
#define SPACE ' '

//����ԭ��
double power(double n, int p);
void display(char cr, int lines, int width);
//�����嵥8.7ʹ��
long get_long(void);//������֤�Ƿ�Ϊ����
bool bad_limits(long begin, long end, long low, long high);//��֤����ֵ
double sum_squares(long a, long b);//����ƽ����
//�����嵥8.8ʹ��
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);


int main()
{
    //�����嵥3.4
    // unsigned int un = 3000000000;//�޷���int��
    // short end = 200;//short ing��
    // long big = 65537;//long int��
    // long long verybig = 12345678908642;//long long int��
    // printf("un = %u and not %d\n", un, un);
    // printf("end = %hd and %d\n", end, end);
    // printf("big = %ld and not %hd\n", big, big);
    // printf("verybig = %lld and not %ld\n", verybig, verybig);


    //�����嵥3.5
    //��ʾ�ַ��Ĵ�����
    // char ch;
    // printf("Please enter a charcter.\n");
    // scanf("%c", &ch);//��ʾ�û������ַ�
    // printf("The code for %c is %d.\n", ch, ch);//�����ַ�ʽ��ӡ�ַ�


    //6.�����������Ȼ���ӡˮ���ӵ�����
    // int quart;
    // double molecule;
    // printf("Please enter the quart you want : ");
    // scanf("%d", &quart);
    // molecule = quart * 950 / 3.0E-23;
    // printf("The quantity of molecule is %E", molecule);


    //5.���������ٶȺ��ļ���С����������ʱ����ӡ����
    // float vitess, file_size, time;
    // printf("Please enter the download vitess in Mb\\s and the file size in MB:\n");
    // scanf("%f%f", &vitess, &file_size);
    // time = file_size * 8 / vitess;
    // printf("At %.2f megatits per second, a file of %.2f megabytes\ndownload in %.2f seconds.\n", vitess, file_size, time);


    //6.�����պ�����Ȼ��Ҫ���ӡ
    // char first_name[20], last_name[20];
    // unsigned width_first_name, width_last_name;
    // printf("Please enter your first name:\n");
    // scanf("%s", first_name);
    // printf("Please enter your last name:\n");
    // scanf("%s", last_name);
    // width_first_name = strlen(first_name);
    // width_last_name = strlen(last_name);
    // printf("%s %s\n", first_name, last_name);
    // printf("%*d %*d\n", width_first_name, width_first_name, width_last_name, width_last_name);
    // printf("%s %s\n", first_name, last_name);
    // printf("%-*d %-*d\n", width_first_name, width_first_name, width_last_name, width_last_name);


    //7.��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0,һ��float���͵ı�������Ϊ1.0/3.0��
    //�ֱ���ʾ���μ���Ľ����3�Σ�һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�
    //һ����ʾС�������16λ���֡�������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��
    //1.0/3.0��ֵ����Щֵһ����
    // double number_1 = 1.0 / 3.0;
    // float number_2 = 1.0 / 3.0;
    // printf("double: %.6f\t%.12f\t%.16f\n", number_1, number_1, number_1);
    // printf("flaot: %.6f\t%.12f\t%.16f\n", number_2, number_2, number_2);
    // printf("%d %d", FLT_DIG, DBL_DIG);


    //8.��дһ��������ʾ�û��������е���̺����ĵ���������Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ������
    //��ʾС�������һλ���֡���������ʹ��1���ش�Լ3.785����1Ӣ���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/����
    //��ֵת��Ϊ��/100���ŷ��ͨ�õ�ȼ�����ı�ʾ����,����ʾ�������ʾС�������1λ���֡�ʹ��#define
    //�������ų�����ʹ��const�޶���������������ʾ����ת��ϵ����
    // float mile, gaz;
    // const float transformation_1 = 3.785;
    // const float transformation_2 = 1.609;
    // printf("Please enter the mile and the gaz in galon you used in your voyage:\n");
    // scanf("%f%f", &mile, &gaz);
    // printf("You have travail %.1f mail with 1 galon gaz.\n", gaz / mile);
    // printf("Another word, you used %.2f lettre gaz in every 100km.\n", (gaz * transformation_1 * 100) / (mile * transformation_2));


    //�����嵥5.7
    //���ȼ�����
    // int top, score;
    // top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    // printf("top = %d, score = %d\n", top, score);

    //�����嵥5.8
    //ʹ��sizeof�����
    // int n = 0;
    // size_t intsize;//
    // intsize = sizeof(int);
    // printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);


    //�����嵥5.9
    //������ת���ɷֺ���
    // int sec, min, left;
    // printf("Convert seconds to minutes and seconds!\n");
    // printf("Enter the number of minutes and seconds!\n");
    // scanf("%d", &sec);
    // while (sec > 0)
    // {
    //     min = sec / SEC_PER_MIN;//�ض�Ϊ����
    //     left = sec % SEC_PER_MIN;//ʣ�µ�����
    //     printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
    //     scanf("%d", &sec);
    // }
    // printf("Done!\n");


    //�����嵥5.10
    //������ǰ׺�ͺ�׺
    // int ultra = 0, super = 0;
    // while (super < 5)
    // {
    //     super++;
    //     ++ultra;
    //     printf("super = %d, ultra = %d\n", super, ultra);
    // }
    


    //�����嵥5.11
    //ǰ׺�ͺ�׺
    // int a = 1, b = 1;
    // int a_post, pre_b;
    // a_post = a++;
    // pre_b = ++b;
    // printf("a   a_post  b    pre_b\n");
    // printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);


    //�����嵥5.12
    // int count = MAX + 1;
    // while (--count > 0)
    // {
    //     printf("%d bottles of spring water on the wall,""%d bottles of spring water!\n", count, count);
    //     printf("Take one down and pass it around,\n");
    //     printf("%d bottles of spring water water!\n\n", count - 1);
    // }
    
    
    //�����ϰ1
    //��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
    //ʹ��#define��const����һ����ʾ60�ķ��ų�����const������
    //ͨ��whileѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
    // int hour, minute, time;
    // const int Hour_SPEC_MIN = 60;
    // printf("Please enter the time in minutes:\n");
    // scanf("%d", &time);
    // while (time > 0)
    // {
    //     hour = time / Hour_SPEC_MIN;
    //     minute = time % Hour_SPEC_MIN;
    //     printf("%d minutes is in %d hours and %d minutes\n", time, hour, minute);
    //     scanf("%d", &time);
    // }
    // printf("Done!");


    //�����ϰ2
    //��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10����������
    //�����磬�û�����5,���ӡ5~15����������������5��15)��Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
    // int count = 1;
    // int i;
    // printf("Please enter a integer:\n");
    // scanf("%d", &i);
    // while (count++ <= 11)
    // {
    //     printf("%d\t", i++);
    // }


    //�����ϰ3
    //��дһ��������ʾ�û�����������Ȼ����ת����������������
    //���磬�û�����18,��ת����2��4�졣������ĸ�ʽ��ʾ�����18 days are 2 weeks , 4 days .
    //ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0��-20),ѭ��������
    // int day, week, jour;
    // const int DAY_SPEC_WEEK = 7;
    // printf("Please enter the jour in days:\n");
    // scanf("%d", &jour);
    // while (jour > 0)
    // {
    //     week = jour / DAY_SPEC_WEEK;
    //     day = jour / DAY_SPEC_WEEK;
    //     printf("%d days are %d weeks, %d days.\n", jour, week, day);
    //     scanf("%d", &jour);
    // }
    // printf("Done!\n");


    //�����ϰ4
    //дһ��������ʾ�û�����һ����ߣ���λ�����ף�,���ֱ������׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�
    //����Ӧ�������û��ظ�������ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
    // const float INCHE_SPEC_CENTI = 2.54;//����תӢ��
    // const float FEET_SPEC_INCHE = 12;//Ӣ��תӢ��
    // float inche, centi;
    // int feet;
    // printf("Please enter a height in centimeters: ");
    // scanf("%f", &centi);
    // while (centi > 0)
    // {
    //     inche = centi / INCHE_SPEC_CENTI;//��Ӣ��
    //     feet = inche / FEET_SPEC_INCHE;//��Ӣ��
    //     inche = inche - feet * FEET_SPEC_INCHE;//��ʣ��Ӣ��
    //     printf("%.1f cm = %d feet, %.1f inche\n", centi, feet, inche);
    //     printf("Please enter a height in centimeters:(<= 0 to quit) ");
    //     scanf("%f", &centi);
    // }
    // printf("bye");


    //�����ϰ5
    //�޸ĳ���addemup.c(�����嵥5.13),�������addemup.c�Ǽ���20����׬����Ǯ�ĳ���
    //�������1��׬$1����2��׬$2����3��׬$3,�Դ����ƣ����޸ĳ���ʹ��������û�������
    // �����û�����������м��㣨�����ö����һ������������20)��
    // int count, sum, object;
    // count = 0;
    // sum = 0;
    // printf("Please enter the object you want: ");
    // scanf("%d", &object);
    // while (count++ < object)
    // {
    //     sum = sum + count;
    // }
    // printf("sum = $%d\n", sum);
    

    //�����ϰ6
    //�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬$1����2��׬$4����3��׬$9,�Դ����ƣ��⿴�����ܲ�����
    // Cû��ƽ�����������ǿ�����n*n����ʾn��ƽ����
    // int count, sum, object;
    // count = 0;
    // sum = 0;
    // printf("Please enter the object you want: ");
    // scanf("%d", &object);
    // while (count++ < object)
    // {
    //     sum = sum + count * count;
    // }
    // printf("sum = $%d\n", sum);

    //Ƕ��ѭ��
    // for (int row = 0; row < 6; row++)
    // {
    //     for (char ch = 'A' + row; ch < 'A' + 6; ch++)
    //     {
    //         printf("%c", ch);
    //     }
    //     printf("\n");
    // }


    //ʹ���������ѭ��
    // int score[5];
    // int sum;
    // float average;
    // for (int index = 0; index < 5; index++)//¼����Ϣ������
    // {
    //     printf("Please enter a integer int the arry.\n");
    //     scanf("%d", &score[index]);
    //     sum += score[index];
    // }
    // printf("All the integer have been ented in the arry.\n");//��ӡ��Ϣ
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", score[i]);
    // }
    // printf("\n");
    // average = (float)sum / 5;//��ƽ��ֵ
    // printf("The average for this arry is %.2f", average);


    // double a = power(23.1, 5);
    // printf("%.2f", a);

    // int list[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     list[i] = 2 * i + 3;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d\t", list[j]);
    //     }
    //     printf("\n");
    // }
    

    //��ϰ��6
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         printf("$");
    //     }
    //     printf("\n");
    // }

    
    //��ϰ��7
    // int i = 0;
    // while (++i < 4)
    // {
    //     printf("Hi! ");
    // }
    // do
    // {
    //     printf("Bye! ");
    // } while (i++ < 8);
    
    
    //5.��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ
    // char letter, ch;
    // int line;
    // printf("Please enter a letter: ");
    // scanf("%c", &letter);
    // line = letter - 'A' + 1;
    // // printf("%d", line);
    // for (int i = 1; i <= line; i++)//����������
    // {
    //     //���հ�
    //     for (int j = 1; j <= line - i; j++)
    //     {
    //         printf("%c", '|');
    //     }
    //     //����ַ�
    //     for (int m = 0, ch = 'A'; m <= i - 1; m++, ch++)
    //     {
    //         printf("%c", ch);
    //     }
    //     //�Ҳ��ַ�
    //     for (int n = 0, ch = 'A' + i - 2; n < i - 1; n++, ch--)
    //     {
    //         printf("%c", ch);
    //     }
    //     //�Ҳ�հ�
    //     for (int j = 1; j <= line - i; j++)
    //     {
    //         printf("%c", '|');
    //     }
    //     printf("\n");
    // }
    
    
    //6.��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û�������������ޡ�ʹ��һ��forѭ����
    // int upper_limit, lower_limit;
    // long square, cube;
    // printf("Please enter the upper and lower limits: \n");
    // scanf("%d%d", &upper_limit, &lower_limit);
    // printf("Integer   Square    Cube\n");
    // for (int i = lower_limit; i <= upper_limit; i++)
    // {
    //     square = i * i;
    //     cube = i * i * i;
    //     printf("%5d%5ld%5ld", i, square, cube);
    //     printf("\n");
    // }
    

    // char ch;
    // while ((ch = getchar()) != '\n')
    // {
    //     if (ch == SPACE)
    //     {
    //         putchar(ch);
    //     }
    //     else
    //     {
    //         putchar(ch + 1);
    //     }
    // }
    // putchar(ch);//��gerchar��ȡ��'\n'����ʱ���ͽ���whileѭ��������ʱ��ch��ֵ�Ѿ�Ϊ'\n'����ʱ��ʹ��putchar��ch)�����Ǵ�ӡ���ն���Ļ��з���
    
    
    // unsigned long num, div;
    // bool isPrime;
    // printf("Please enter an integer:\n");
    // while (scanf("%lu", &num))
    // {
    //     for (int div = 2, isPrime = true; (div * div) <= num; div++)
    //     {
    //         if (num % div == 0)//������
    //         {
    //             if (num / div != div)//����ȫƽ����
    //             {
    //                 printf("%lu is divsible by %ld and %ld.\n", num, num / div, div);
    //             }
    //             else//��ȫƽ����
    //             {
    //                 printf("%lu is divisble by %ld.\n", num, div);
    //             }
    //             isPrime = false; 
    //         }
    //     }
    //     if (isPrime)
    //     {
    //         printf("%lu is prime.\n", num);
    //     }
    //     printf("Please enter another integer for analysis;\n");
    // }
    // printf("Bye!\n");
    
    // int num;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <=4; j++)
    //     {
    //         for (int m = 1; m <= 4; m++)
    //         {
    //             num = i * 100 + j * 10 + m;
    //             printf("%d\n", num);
    //         } 
    //     }
    // }



    //1.��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ���������
    // char ch;
    // int space = 0;
    // int new_line = 0;
    // int other = 0;
    // printf("Pleas enter a sentens:\n");
    // while ((ch = getchar()) != '#')
    // {
    //     if (ch == ' ')
    //     {
    //         space++;
    //     }
    //     else if (ch == '\n')
    //     {
    //         new_line++;
    //     }
    //     else
    //     {
    //         other++;
    //     } 
    // }
    // printf("This sentense has %d space, %d new line and %d other symbol.\n", space, new_line, other);
    
    //2.��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII�루ʮ���ƣ���һ�д�ӡ8���ַ���
    //���飺ʹ���ַ���������ģ�������%)��ÿ8��ѭ������ʱ��ӡһ�����з���
    // char ch;
    // int count = 0;
    // printf("Pleas enter a sentens:\n");
    // while ((ch = getchar()) != '#')
    // {
    //     printf("%c %d\t", ch, ch);
    //     count += 2;
    //     if (count % 8 == 0)
    //     {
    //         printf("\n");
    //     }  
    // }


    //3.��дһ�����򣬶�ȡ����ֱ���û�����0����������󣬳���Ӧ�����û������ż����������0)��������Щż����ƽ��ֵ�������������������������ƽ��ֵ��
    // int num;
    // int count_odd = 0;
    // int count_even = 0;
    // int sum_odd = 0;
    // int sum_even = 0;
    // printf("Please enter a integer(0 to quit):\n");
    // while (scanf("%d", &num))
    // {
    //     if (num == 0)
    //     {
    //         break;
    //     }
    //     if (num % 2 != 0)
    //     {
    //         count_odd++;
    //         sum_odd += num;
    //     }
    //     else
    //     {
    //         count_even++;
    //         sum_even += num;
    //     }
    // }
    // printf("You have entred %d odd number, and the average for these odd number is %.2f\n", count_odd, (float)(sum_odd / count_odd));
    // printf("You have entred %d even number, and the average for these even number is %.2f\n", count_even, (float)(sum_even / count_even));


    //4.ʹ��if else����дһ�������ȡ���룬����#ֹͣ���ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶��ٴ��滻��
    // char ch;
    // int count = 0;
    // printf("Please enter a sentense(# to quit):\n");
    // while ((ch = getchar()) != '#')
    // {
    //     if (ch == '.')
    //     {
    //         putchar('!');
    //         count++;
    //     }
    //     else if (ch == '!')
    //     {
    //         putchar('!');
    //         putchar('!');
    //         count++;
    //     }
    //     else
    //     {
    //         putchar(ch);
    //     }
    // }
    // printf("\nWe have change %d times.\n", count);


    //5.ʹ��switch��д��ϰ4��
    // char ch;
    // int count = 0;
    // printf("Please enter a sentense(# to quit):\n");
    // while ((ch = getchar()) != '#')
    // {
    //     switch (ch)
    //     {
    //     case '.':
    //         putchar('!');
    //         count++;
    //         break;
    //     case '!':
    //         putchar('!');
    //         putchar('!');
    //         count++;
    //         break;
    //     default:
    //         putchar(ch);
    //         break;
    //     }
    // }
    // printf("\nWe have change %d times.\n", count);
     

    //6.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
    // char ch;
    // int count = 0;
    // bool is_e;
    // printf("Please enter a sentense(# to quit):\n");
    // while ((ch = getchar()) != '#')
    // {
    //     if (ch == 'e')
    //     {
    //         is_e = true;
    //     }
    //     else if (ch == 'i' && is_e == true)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         is_e = false;
    //     }
    // }
    // printf("This sentens has %d \"ei\".\n", count);
    



    //9.��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ�����������
    // int num, div, count;
    // printf("Please enter an integer:\n");
    // scanf("%d", &num);
    // for (int i = 2; i <= num; i++)
    // {
    //     count = 0;
    //     for (div = 2; div <= i; div++)
    //     {
    //         if (i % div == 0)
    //         {
    //             count++;
    //             continue;
    //         }
    //     }
    //     if (count <= 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    

    // char ch;
    // while ((ch = getchar()) != EOF)
    // {
    //     putchar(ch);
    // }



    //file_eof.c
    // int ch;
    // FILE * fp;
    // char fname[50];
    // printf("Enter the name of the file: ");
    // scanf("%s", fname);
    // fp = fopen(fname, "r");//�򿪴���ȡ�ļ�
    // if (fp == NULL)
    // {
    //     printf("Failed to open file. Bye\n");
    //     exit(1);
    // }
    // while ((ch = getc(fp)) != EOF)//getc(fp)�򿪴���ȡ�ļ�
    // {
    //     putchar(ch);
    //     fclose(fp);
    // }
    
    //guess.c -- �����ֳ���
    // int guess = 1;
    // printf("Pich an integer from i to 100. I will try to guess it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
    // printf("Uh...is your numnber %d?\n", guess);
    // while (getchar() != 'y')
    // {
    //     printf("Well, then is it %d?\n", ++guess);   
    // }
    // printf("I knew I could do it!\n");
    

    
    // int guess = 1;
    // char respond;
    // printf("Pich an integer from i to 100. I will try to guess it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
    // printf("Uh...is your numnber %d?\n", guess);
    // while ((respond = getchar()) != 'y')
    // {
    //     if (respond == 'n')
    //     {
    //         printf("Well, then is it %d?\n", ++guess);  
    //     }
    //     else
    //     {
    //         printf("Sorry, I only understand y or n.\n");
    //     }
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    // }
    // printf("I knew I could do it!\n");
    
    // int ch;
    // int rows, cols;
    // printf("Please enter two integer and one alphabet.\n");
    // while ((ch = getchar()) != '\n')//��ȡ�ַ�
    // {
    //     if (scanf("%d%d", &rows, &cols) != 2)//��ȡ����
    //     {
    //         break;
    //     }
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    //     display((char)ch, rows, cols);
    //     printf("Enter another charcter and two integers;\n");
    //     printf("Enter a newline to quit.\n");
    // }
    // printf("Bye!.\n");
    
    // long input;
    // char ch;
    // while (scanf("%ld", &input) != 1)//�Ƿ��ȡ����
    // {
    //     while ((ch = getchar()) != '\n')
    //     {
    //         putchar(ch);
    //         printf(" is not an integer. Please enter an integer value, such as 25, -178, or 3: \n");
    //     }
    // }
   
    //�����嵥8.7
    //checking.c -- ��֤����
    // const long MIN = -10000000L;//��Χ������
    // const long MAX = +10000000L;//��Χ������
    // long start, stop;
    // double answer;
    // printf("This program computes the sum of the squares of integers in a range.\nThe lowe bound should not be less than -10000000 and \nthe upper bound should not be more than +10000000.\n");
    // printf("Enter the limits(enter o for both limits to quit):\n");
    // printf("lower limit: ");
    // start = get_long();
    // printf("upper limit: ");
    // stop = get_long();
    // while (start != 0 || stop != 0)
    // {
    //     if (bad_limits(start, stop, MIN, MAX))
    //     {
    //         printf("Please try again.\n");
    //     }
    //     else
    //     {
    //         answer = sum_squares(start, stop);
    //         printf("The sum of the squres of the integers from %ld to %ld is %g\n", start, stop, answer);
    //     }
    //     printf("Enter the limits(enter o for both limits to quit):\n");
    //     printf("lower limit: ");
    //     start = get_long();
    //     printf("upper limit: ");
    //     stop = get_long();
    // }
    // printf("Done!\n");



    //�����嵥8.8
    int choice;
    void count(void);
    while ((choice = get_choice()) != 'q')
    {
        switch ((choice))
        {
        case 'a':
            printf("Buy low, sell high.\n");
            break;
        case 'b':
            putchar('\a');
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }
    printf("Bye.\n");
    
    
    








}


//���캯��
double power(double n, int p)
{   
    double sum = 1;
    for (int i = 1; i <= p; i++)
    {
        sum *= n;
    }
    return sum;
}

void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }
}

long get_long()
{
    long input;
    char ch;
    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
            printf(" is not an integer. Please enter an integer value, such as 25, -178, or 3: \n");
        }
    }
    return input;
}


bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;
    if (begin > end)
    {
        printf("%ld isn't samller than %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("Value must be %ld or less.\n", high);
        not_good = true;
    }
    return not_good;
}


double sum_squares(long a, long b)
{
    long i,sum;
    for (i= a; i <= b; i++)
    {
        sum += i * i;
    }
    return sum;
}

int get_int(void)//ֻ¼������
{
    int num;
    char ch;
    while ((scanf("%d", &num)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is not an integer.\nPlease enter an integer value, such as 25, -178, or 3: ");
    }
    return num;
}

char get_first(void)//ֻ¼������ĸ
{
    char ch;
    ch = getchar();
    while (getchar() != '\n')
    {
        continue;
    }
    return ch;
}

char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice           b.bell\n");
    printf("c.count             q.quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }
    return ch;
}

void count(void)
{
    int n, i;
    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    while (getchar() != '\n')
    {
        continue;
    }
}