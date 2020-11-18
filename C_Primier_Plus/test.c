#include <stdio.h>
#include<string.h>
#include<float.h>
#include<stdbool.h>
#include<stdlib.h>

#define SEC_PER_MIN 60
// #define MAX 10
#define SPACE ' '

//函数原型
double power(double n, int p);
void display(char cr, int lines, int width);
//程序清单8.7使用
long get_long(void);//输入验证是否为整数
bool bad_limits(long begin, long end, long low, long high);//验证上下值
double sum_squares(long a, long b);//计算平方和
//程序清单8.8使用
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);


int main()
{
    //程序清单3.4
    // unsigned int un = 3000000000;//无符号int型
    // short end = 200;//short ing型
    // long big = 65537;//long int型
    // long long verybig = 12345678908642;//long long int型
    // printf("un = %u and not %d\n", un, un);
    // printf("end = %hd and %d\n", end, end);
    // printf("big = %ld and not %hd\n", big, big);
    // printf("verybig = %lld and not %ld\n", verybig, verybig);


    //程序清单3.5
    //显示字符的代码编号
    // char ch;
    // printf("Please enter a charcter.\n");
    // scanf("%c", &ch);//提示用户输入字符
    // printf("The code for %c is %d.\n", ch, ch);//以两种方式打印字符


    //6.输入夸脱数，然后打印水分子的数量
    // int quart;
    // double molecule;
    // printf("Please enter the quart you want : ");
    // scanf("%d", &quart);
    // molecule = quart * 950 / 3.0E-23;
    // printf("The quantity of molecule is %E", molecule);


    //5.输入下载速度和文件大小，计算下载时间后打印出来
    // float vitess, file_size, time;
    // printf("Please enter the download vitess in Mb\\s and the file size in MB:\n");
    // scanf("%f%f", &vitess, &file_size);
    // time = file_size * 8 / vitess;
    // printf("At %.2f megatits per second, a file of %.2f megabytes\ndownload in %.2f seconds.\n", vitess, file_size, time);


    //6.输入姓和名，然后按要求打印
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


    //7.编写一个程序，将一个double类型的变量设置为1.0/3.0,一个float类型的变量设置为1.0/3.0。
    //分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；
    //一次显示小数点后面16位数字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。
    //1.0/3.0的值与这些值一致吗？
    // double number_1 = 1.0 / 3.0;
    // float number_2 = 1.0 / 3.0;
    // printf("double: %.6f\t%.12f\t%.16f\n", number_1, number_1, number_1);
    // printf("flaot: %.6f\t%.12f\t%.16f\n", number_2, number_2, number_2);
    // printf("%d %d", FLT_DIG, DBL_DIG);


    //8.编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，
    //显示小数点后面一位数字。接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑
    //的值转换为升/100公里（欧洲通用的燃料消耗表示法）,并显示结果，显示小数点后面1位数字。使用#define
    //创建符号常量或使用const限定符创建变量来表示两个转换系数。
    // float mile, gaz;
    // const float transformation_1 = 3.785;
    // const float transformation_2 = 1.609;
    // printf("Please enter the mile and the gaz in galon you used in your voyage:\n");
    // scanf("%f%f", &mile, &gaz);
    // printf("You have travail %.1f mail with 1 galon gaz.\n", gaz / mile);
    // printf("Another word, you used %.2f lettre gaz in every 100km.\n", (gaz * transformation_1 * 100) / (mile * transformation_2));


    //程序清单5.7
    //优先级测试
    // int top, score;
    // top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    // printf("top = %d, score = %d\n", top, score);

    //程序清单5.8
    //使用sizeof运算符
    // int n = 0;
    // size_t intsize;//
    // intsize = sizeof(int);
    // printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);


    //程序清单5.9
    //把秒数转换成分和秒
    // int sec, min, left;
    // printf("Convert seconds to minutes and seconds!\n");
    // printf("Enter the number of minutes and seconds!\n");
    // scanf("%d", &sec);
    // while (sec > 0)
    // {
    //     min = sec / SEC_PER_MIN;//截断为分钟
    //     left = sec % SEC_PER_MIN;//剩下的秒数
    //     printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
    //     scanf("%d", &sec);
    // }
    // printf("Done!\n");


    //程序清单5.10
    //递增，前缀和后缀
    // int ultra = 0, super = 0;
    // while (super < 5)
    // {
    //     super++;
    //     ++ultra;
    //     printf("super = %d, ultra = %d\n", super, ultra);
    // }
    


    //程序清单5.11
    //前缀和后缀
    // int a = 1, b = 1;
    // int a_post, pre_b;
    // a_post = a++;
    // pre_b = ++b;
    // printf("a   a_post  b    pre_b\n");
    // printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);


    //程序清单5.12
    // int count = MAX + 1;
    // while (--count > 0)
    // {
    //     printf("%d bottles of spring water on the wall,""%d bottles of spring water!\n", count, count);
    //     printf("Take one down and pass it around,\n");
    //     printf("%d bottles of spring water water!\n\n", count - 1);
    // }
    
    
    //编程练习1
    //编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
    //使用#define或const创建一个表示60的符号常量或const变量。
    //通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
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


    //编程练习2
    //编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数
    //（例如，用户输入5,则打印5~15的所有整数，包括5和15)。要求打印的各值之间用一个空格、制表符或换行符分开。
    // int count = 1;
    // int i;
    // printf("Please enter a integer:\n");
    // scanf("%d", &i);
    // while (count++ <= 11)
    // {
    //     printf("%d\t", i++);
    // }


    //编程练习3
    //编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
    //例如，用户输入18,则转换成2周4天。以下面的格式显示结果：18 days are 2 weeks , 4 days .
    //通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20),循环结束。
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


    //编程练习4
    //写一个程序，提示用户输入一个身高（单位：厘米）,并分别以厘米和英寸为单位显示该值，允许有小数部分。
    //程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
    // const float INCHE_SPEC_CENTI = 2.54;//厘米转英寸
    // const float FEET_SPEC_INCHE = 12;//英寸转英尺
    // float inche, centi;
    // int feet;
    // printf("Please enter a height in centimeters: ");
    // scanf("%f", &centi);
    // while (centi > 0)
    // {
    //     inche = centi / INCHE_SPEC_CENTI;//求英尺
    //     feet = inche / FEET_SPEC_INCHE;//求英寸
    //     inche = inche - feet * FEET_SPEC_INCHE;//求剩余英寸
    //     printf("%.1f cm = %d feet, %.1f inche\n", centi, feet, inche);
    //     printf("Please enter a height in centimeters:(<= 0 to quit) ");
    //     scanf("%f", &centi);
    // }
    // printf("bye");


    //编程练习5
    //修改程序addemup.c(程序清单5.13),你可以认addemup.c是计算20天里赚多少钱的程序
    //（假设第1天赚$1、第2天赚$2、第3天赚$3,以此类推）。修改程序，使其可以与用户交互，
    // 根据用户输入的数进行计算（即，用读入的一个变量来代替20)。
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
    

    //编程练习6
    //修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚$1、第2天赚$4、第3天赚$9,以此类推，这看起来很不错）。
    // C没有平方函数，但是可以用n*n来表示n的平方。
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

    //嵌套循环
    // for (int row = 0; row < 6; row++)
    // {
    //     for (char ch = 'A' + row; ch < 'A' + 6; ch++)
    //     {
    //         printf("%c", ch);
    //     }
    //     printf("\n");
    // }


    //使用数组进行循环
    // int score[5];
    // int sum;
    // float average;
    // for (int index = 0; index < 5; index++)//录入信息到数组
    // {
    //     printf("Please enter a integer int the arry.\n");
    //     scanf("%d", &score[index]);
    //     sum += score[index];
    // }
    // printf("All the integer have been ented in the arry.\n");//打印信息
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", score[i]);
    // }
    // printf("\n");
    // average = (float)sum / 5;//求平均值
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
    

    //练习题6
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         printf("$");
    //     }
    //     printf("\n");
    // }

    
    //练习题7
    // int i = 0;
    // while (++i < 4)
    // {
    //     printf("Hi! ");
    // }
    // do
    // {
    //     printf("Bye! ");
    // } while (i++ < 8);
    
    
    //5.编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母
    // char letter, ch;
    // int line;
    // printf("Please enter a letter: ");
    // scanf("%c", &letter);
    // line = letter - 'A' + 1;
    // // printf("%d", line);
    // for (int i = 1; i <= line; i++)//外层控制行数
    // {
    //     //左侧空白
    //     for (int j = 1; j <= line - i; j++)
    //     {
    //         printf("%c", '|');
    //     }
    //     //左侧字符
    //     for (int m = 0, ch = 'A'; m <= i - 1; m++, ch++)
    //     {
    //         printf("%c", ch);
    //     }
    //     //右侧字符
    //     for (int n = 0, ch = 'A' + i - 2; n < i - 1; n++, ch--)
    //     {
    //         printf("%c", ch);
    //     }
    //     //右侧空白
    //     for (int j = 1; j <= line - i; j++)
    //     {
    //         printf("%c", '|');
    //     }
    //     printf("\n");
    // }
    
    
    //6.编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限。使用一个for循环。
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
    // putchar(ch);//当gerchar读取到'\n'符号时，就结束while循环，但此时，ch的值已经为'\n'，此时再使用putchar（ch)，就是打印出刚读入的换行符。
    
    
    // unsigned long num, div;
    // bool isPrime;
    // printf("Please enter an integer:\n");
    // while (scanf("%lu", &num))
    // {
    //     for (int div = 2, isPrime = true; (div * div) <= num; div++)
    //     {
    //         if (num % div == 0)//能整除
    //         {
    //             if (num / div != div)//非完全平方数
    //             {
    //                 printf("%lu is divsible by %ld and %ld.\n", num, num / div, div);
    //             }
    //             else//完全平方数
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



    //1.编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
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
    
    //2.编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。一行打印8个字符。
    //建议：使用字符计数和求模运算符（%)在每8个循环周期时打印一个换行符。
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


    //3.编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0)个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
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


    //4.使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
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


    //5.使用switch重写练习4。
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
     

    //6.编写程序读取输入，读到#停止，报告ei出现的次数。
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
    



    //9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
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
    // fp = fopen(fname, "r");//打开待读取文件
    // if (fp == NULL)
    // {
    //     printf("Failed to open file. Bye\n");
    //     exit(1);
    // }
    // while ((ch = getc(fp)) != EOF)//getc(fp)打开待读取文件
    // {
    //     putchar(ch);
    //     fclose(fp);
    // }
    
    //guess.c -- 猜数字程序
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
    // while ((ch = getchar()) != '\n')//读取字符
    // {
    //     if (scanf("%d%d", &rows, &cols) != 2)//读取整数
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
    // while (scanf("%ld", &input) != 1)//是否读取整数
    // {
    //     while ((ch = getchar()) != '\n')
    //     {
    //         putchar(ch);
    //         printf(" is not an integer. Please enter an integer value, such as 25, -178, or 3: \n");
    //     }
    // }
   
    //程序清单8.7
    //checking.c -- 验证输入
    // const long MIN = -10000000L;//范围是下限
    // const long MAX = +10000000L;//范围的上限
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



    //程序清单8.8
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


//构造函数
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

int get_int(void)//只录入整数
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

char get_first(void)//只录入首字母
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