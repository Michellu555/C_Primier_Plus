#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

//编程练习6使用
char get_first(void);
char choice(void);
float get_number(void);

int main()
{
    //复习题
    //2.下面的语句分别完成什么任务？
    // putchar('H');
    // putchar('\007');
    // putchar('\n');
    // putchar('\b');


    //3.假设有一个名为count的可执行程序，用于统计输入的字符数。设计一个使用count程序统计essay文件中字符数的命令行，并把统计结果保存在essayct文件中。
    // count < essay > essayct


    // 4.给定复习题3中的程序和文件，下面哪一条是有效的命令？
    // a.essayct<essay
    // b.count essay
    // c.essay>count
    //都不是


    // 5.EOF是什么？
    //EOF是getchar（）和scanf()的一个特殊的结束信号


    // 6.对于给定的输出（ch是int类型，而且是缓冲输入）,下面各程序段的输出分别是什么？
    // a.输入如下：
    // If you quit, I will.[enter]
    // 程序段如下：
    // while ((ch = getchar() != 1)
    // putchar(ch);
    //a的输出应该为:If you qu

    // b.输入如下：
    // Harhar[enter]
    // 程序段如下：
    // while((ch=getchar())!="\n')
    // {
    //     putchar(ch++);
    //     putchar(++ch);
    // }
    //b的输出应该为：HJacrthjacrt


    //7.C如何处理不同计算机系统中的不同文件和换行约定？
    //C的标准I/O库把不同的文件映射为统一的流来统一处理。


    //8.在使用缓冲输入的系统中，把数值和字符混合输入会遇到什么潜在的问题？
    // 数值输入会跳过空格和换行符，但是字符输入不会。假设有下面的代码：
    // int score;
    // char grade;
    // printf("Enter the score.\n");
    // scanf("%s",%score);
    // printf("Enter the letter grade.In");
    // grade=getchar();
    // 如果输入分数98,然后按下Enter键把分数发送给程序，其实还发送了一个换行符。这个换行符会留在输入序列中，成为下一个读取的值(grade)。如果在字符输入之前输入了数字，就应该在处理字符输入之前添加删除换行符的代码。




    //编程练习
    // 1.设计一个程序，统计在读到文件结尾之前读取的字符数。
    // int count;
    // char ch;
    // while ((ch = getchar()) != EOF)
    // {
    //     count++;
    // }
    // printf("%d", count);
    
    // 2.编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其相应的ASCH十进制值。
    // 注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或制表符，则分别打印\n或\。
    // 否则，使用控制字符表示法。例如，ASCII的1是Ctrl+A,可显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。其他非打印字符也有类似的关系。
    // 除每次遇到换行符打印新的一行之外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同。）
    // char ch;
    // int count;
    // while ((ch = getchar()) != EOF)
    // {
    //     count++;
    //     if (ch < ' ')//非打印字符部分
    //     {
    //         if (ch == '\n')
    //         {
    //             printf("\\n");
    //             printf(" %d\t", ch);
    //             printf("\n");
    //             count = 0;
    //         }
    //         else if (ch == '\t')
    //         {
    //             printf("\\t");
    //             printf(" %d\t", ch);
    //         }
    //         else//其他非打印字符
    //         {
    //             printf("^%c", (int)ch + 64);
    //             printf(" %d\t", ch);
    //         }
    //     }
    //     else//可打印字符部分
    //     {
    //         putchar(ch);
    //         printf(" %d\t", ch);
    //     }
    //     if (count == 10)
    //     {
    //         count = 0;
    //         printf("\n");
    //     }
    // }



    //3.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。
    // char ch;
    // int count_lower = 0;
    // int count_upper = 0;
    // while ((ch = getchar()) != EOF)
    // {
    //     if (islower(ch))
    //     {
    //         count_lower++;
    //     }
    //     else if (isupper(ch))
    //     {
    //         count_upper++;
    //     }
    // }
    // printf("The count of lower alpha is %d, and the count of upper alpha is %d.\n", count_lower, count_upper);
    


    //4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。
    //不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。
    // char ch;
    // int count_alpha = 0;
    // int count_word = 0;
    // float average;
    // while ((ch = getchar()) != EOF)
    // {
    //     if (ch != '\n' && ispunct(ch) == false && ch != ' ')//不计算换行符，空格和其他符号
    //     {
    //         count_alpha++;
    //     }
    //      if (ch == ' ' || ch == '\n')
    //     {
    //         count_word++;//计算单词数量
    //     }
    // }
    // average = (float)count_alpha / (float)count_word;
    // printf("The average letter for each word is %.2f", average);
    



    //5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。
    //例如，程序最初猜50,询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。
    //使用二分查找（binary search)策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
    // int guess, num;
    // char respond;
    // int MIN = 1;
    // int MAX = 100;
    // printf("Pich an integer from i to 100. I will try to guess it.\nRespond with a b if my guess is bigger and with an s if it is smaller.\nRespond with a y if my guess is right.\n");
    // printf("Please enter an integer: \n");
    // scanf("%d", &num);//设定谜底
    // guess = 50;//初始化为50
    // while (getchar() != '\n')//消除后续字符
    // {
    //     continue;
    // }
    // printf("Uh...is your numnber %d?\n", guess);
    // while (guess != num)
    // {
    //     while ((respond = getchar()) != 'y')
    //     {
    //         if (respond == 'b')
    //         {
    //             printf("Well, Your guess is bigger than that integer.\nTry it again.\n");
    //             MAX = guess;
    //             guess = (MIN + MAX) / 2;
    //             printf("Uh...is your numnber %d?\n", guess);
    //         }
    //         else if (respond == 's')
    //         {
    //             printf("Well, your guess is smaller than that integer.\nTry it again.\n");
    //             MIN = guess;
    //             guess = (MIN + MAX) / 2;
    //             printf("Uh...is your numnber %d?\n", guess);
    //         }
    //         else
    //         {
    //             printf("Sorry, I only understand b, s or y.\n");
    //         }
    //         while (getchar() != '\n')
    //         {
    //             continue;
    //         }
    //     }
    // }
    // printf("You get it, the number is %d.\n", guess);//猜对了，结束循环
    


    //6.修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。
    // char ch;
    // ch = get_first();
    // putchar(ch);



    //7.修改第7章的编程练习8,用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记。




    //8.编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。
    //该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。
    //进行除法运算时，如果用户输入0作为第2个数（除数）,程序应提示用户重新输入一个新值。该程序的一个运行示例如下：
    // char ch;
    // ch = choice();
    // printf("%c", ch);





















    

    return 0;
}


char get_first(void)//只录入首字母
{
    char ch;
    ch = getchar();
    while (isspace(ch))
    {
        ch = getchar();
        continue;
    }
    while (getchar() != '\n')
    {
        continue;
    }
    return ch;
}



char choice(void)
{
    char ch;
    printf("Enter the operation of your choice:\n");
    printf("a.add                   s. subtract\n");
    printf("m.multiplly             d.divide\n");
    printf("q.quit\n");
    ch = get_first();
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        printf("Please respond with a, s, m, d or q.\n");
        ch = get_first();
    }
    return ch;
}


float get_number(void)
{
    float num;
    char ch;
    while ((scanf("%f", &num)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is ont an number.\n");
    }
    return num;
}
    