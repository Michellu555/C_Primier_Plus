#include<stdio.h>
#include<ctype.h>


#define LEN 30



void get_input(char*, int); //获取前n个字符并返回
void get_inputs(char*, int); //获取前n个字符并返回
char* get_word(char*); //获取第一个单词
char* get_char(char*, char); //在字符串中查找指定字符
int is_within(char*, char); //在字符串中查找是否存在指定字符
void mystrncpy(char*, char*, int); //将后一个字符串中指定字符复制到前一个字符串中
char* string_in(char*, char*); //查找前一个字符串中是否包含后一个字符串
void inverte(char*); //将字符串反序
void delet_space(char*); //删除字符串中的空格符
void get_choice(char*[], char); //获取选择并执行
int count_firstword(char*); //获取第一个单词的长度

int main()
{
    // 1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表符、换行符）,把结果储存在一个数组里，它的地址被传递作为一个参数。
    // 声明字符串 → 用函数录入字符 → 判断是否到了结尾 → 将最后一个字符设置为空字符 → 输出字符
    // char input[LEN];
    // printf("请输入%d个字符， 遇到换行符停止。\n", LEN - 1);
    // get_input(input, LEN - 1);
    // puts(input);


    // 2.修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()。
    // char input[LEN];
    // printf("请输入%d个字符， 遇到换行符停止。\n", LEN - 1);
    // get_input(input, LEN - 1);
    // puts(input);

    // 3.设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
    //声明字符串 → 用函数录入字符 → 用isspace判断是否到了单词开头 → 用isspace判断是否到了单词结尾 → 丢弃后续字符 → 输出字符串
    //char input[40];
    //char *output;
    //printf("Please enter a sentense, the program will print the first word.\n");
    //puts(get_word(input));



    // 5.设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形参指定的字符首次出现的位置。
    // 如果成功，该函数返指向该字符的指针，如果在字符串中未找到指定字符，则返回空指针（该函数的功能与strchr()函数相同）。
    // 在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    // char input[LEN];
    // char* output;
    // char ch;
    // printf("Please enter the string(^Z to quit):");
    // while (fgets(input, LEN, stdin) && input[0] != '\0') //录入字符串
    // {
    //     puts("What character are you looking for?");
    //     ch = getchar();  //录入指定支付
    //     while (getchar() != '\n') //清除掉留在缓冲区的\n
    //     {
    //         continue;
    //     }
    //     output = get_char(input, ch); //查找字符
    //     if (output != NULL) //输出结果
    //     {
    //         puts("the character and its address:");
    //         putchar(*output);
    //         printf("\t%p\n", output);
    //     }
    //     else
    //     {
    //         puts("this character doesn't exist in the string!");
    //     }
    //     puts("Please enter the next string:");
    // }



    // 6.编写一个名为is_within()的函数，接受一个字符和一个指向字符串的指针作为两个函数形参。如果指定字符在字符串中，该函数返回一个非零值(即为真）。
    // 否则，返回0(即为假）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    // char input[LEN];
    // int output;
    // char ch;
    // printf("Please enter the string(^z to quit): ");
    // while (fgets(input, LEN, stdin) && input[0] != '\n')
    // {
    //     puts("What characeter are you looking for? ");
    //     ch = getchar();
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    //     output = is_within(input, ch);
    //     if (output == 1)
    //     {
    //         puts("This character is whitin the string.");
    //     }
    //     else
    //     {
    //         puts("This character doesn't exist in the string.");
    //     }
    //     puts("Please enter the next string: ");
    // }



    // 7.strncpy(s1,s2,n)函数把s2中的n个字符拷贝至s1中，截断s2,或者有必要的话在末尾添加空字符。如果s2的长度是n或多于n,目标字符串不能以空字符结尾。
    // 该函数返回s1。自己编写一个这样的函数，名为mystrncpy()。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    // char string1[LEN];
    // char string2[LEN];
    // int length;
    // printf("Please enter a string to copy: ");
    // while (fgets(string2, LEN, stdin) && string2[0] != '\0')
    // {
    //     puts("Please enter the length that you want to copy: ");
    //     scanf("%d", &length);
    //     getchar();
    //     mystrncpy(string1, string2, length);
    //     fputs(string2, stdout);
    //     puts("Please enter the next string(^z to quit): ");
    // }


    // 8.编写一个名为string_in()的函数，接受两个指向字符串的指针作为参数。如果第2个字符串中包含第1个字符串，该函数将返回第1个字符串开始的地址。
    // 例如，string_in("hats","at")将返回hats中a的地址。否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    /*
    char st1[LEN];
    char st2[LEN];
    char* output;
    puts("Please enter the first string: ");
    while (fgets(st1, LEN, stdin) && st1[0] != '\0')
    {
        puts("Please enter the seconde string: ");
        while (fgets(st2, LEN, stdin) && st2[0] != '\0')
        {
            output = string_in(st1, st2);
            if (output != NULL)
            {
                printf("The second string is inclouding in the first string.\n");
                printf("The adress for the first character in the strings is %p.\n", output);
            }
            break;
        }
        puts("Please enter the first string.");
    }
    */


    //9.编写一个函数，把字符串中的内容用其反序字符串代替。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    /*
    char input[LEN];
    puts("Please enter a string and the program will inverte this string.");
    while (fgets(input, LEN, stdin) && input[0] != '\0')
    {
        inverte(input);
        printf("The inverted string is \n%s", input);
        puts("Please enter another string: ");
    }
    */



    //10.编写一个函数接受一个字符串作为参数，并删除字符串中的空格。
    //在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
    //该程序应该应用该函数至每个输入的字符串，并显示处理后的字符串。
    /*
    char input[LEN];
    puts("Please enter a string, the program will delet the space.");
    while (fgets(input, LEN, stdin) && input[0] != ' ')
    {
        delet_space(input);
        printf("The string after delet the space is \n%s", input);
        puts("Please enter another string.");
    }
    */
   
    

    //11.编写一个函数，读入10个字符串或者读到EOF时停止。该程序为用户提供一个有5个选项的菜单：
    //打印源字符串列表、以ASCII中的顺序打印字符串、按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符串、退出。
    //菜单可以循环显示，除非用户选择退出选项。当然，该程序要能真正完成菜单中各选项的功能。
    //char st[10][LEN];
    //char* ptr[10];
    //char ch;
    //puts("Please enter ten strings: ");
    //for (int i = 0; i < 10; i++) //读入字符串
    //{
    //    fgets(st[i], LEN, stdin);
    //    ptr[i] = st[i]; //把指针指向该字符串
    //}
    //puts("The menu is as below :");
    //puts("a: to output the strings.");
    //puts("b: to output the string with the order of ASCII.");
    //puts("c: to output the string whit the order of the string length.");
    //puts("d: to output the string with the order of the first word length.");
    //puts("q: to quit the program.");
    //puts("Please enter your choice: ");
    //while ((ch = getchar()) != 'q') 
    //{
    //    printf("You have choose %c\n", ch);
    //    get_choice(ptr, ch);
    //    while (getchar() != '\n')
    //    {
    //        continue;
    //    }
    //    //输出字符串
    //    puts("Please enter your choice: ");
    //}
    //puts("Bye!");


    //12.编写一个程序，读取输入，直至读到EOF, 报告读入的单词数、大写字母数、小写字母数、标点符号数和数字字符数。使用ctype.h头文件中的函数。
    //char st[LEN];
    //puts("Please enter a string: ");
    //fgets(st, LEN, stdin);
    //int count = strlen(st);
    //int count_words = 0;
    //int count_big_alp = 0;
    //int count_small_alp = 0;
    //int count_punct = 0;
    //int count_dig = 0;
    //for (int i = 0; i < count - 1; i++)
    //{
    //    if (st[i] == ' ') //判断单词数目
    //    {
    //        count_words++;
    //    }
    //    if (isupper(st[i])) //大写字母计数
    //    {
    //        count_big_alp++;
    //    }
    //    if (islower(st[i])) //小写字母计数
    //    {
    //        count_small_alp++;
    //    }
    //    if (ispunct(st[i])) //标点计数
    //    {
    //        count_punct++;
    //    }
    //    if (isdigit(st[i])) //数字计数
    //    {
    //        count_dig++;
    //    }
    //}
    //printf("There are %d words, %d upper alphas, %d small alphas, %d punchs and %d digits.",
    //    count_words + 1, count_big_alp, count_small_alp, count_punct, count_dig);


    
  

    

   









    return 0;
}


void get_input(char* st, int n) //获取前n个字符闭并返回
{
    int i = 0;
    do
    {
        st[i] = getchar();
    } while (st[i] != '\n' && ++i < n);
    st[i] = '\0';
}


void get_inputs(char* st, int n) //获取前n个字符闭并返回
{
    int i = 0;
    do
    {
        st[i] = getchar();
    } while (st[i] != '\n' && st[i] != ' ' && st[i] != 't' && ++i < n);
    st[i] = '\0';
}


char* get_word(char* st) //获取第一个单词
{
    char* str;
    fgets(st, 40, stdin);
    while (isspace(*st)) //判断是是否到了单词开头
    {
        st++;
    }
    str = st;
   while (isalpha(*st)) //判断是否到了单词结尾
   {
       st++;
   }
   *st = '\0';
   while (*st != '\n')
   {
       *st = '\0';
       st++;
   }
    return str;
}


char* get_char(char* st, char ch) //在字符串中查找指定字符
{
    while (*st) //判断是否读完了字符串
    {
        if (*st == ch) //判断是否读到了指定字符
        {
            return st; //返回指针
        }
        st++;
    }
    return NULL; //返回空指针
}


int is_within(char* st, char ch) //在字符串中查找是否存在指定字符
{
    while (*st)
    {
        if (*st == ch)
        {
            return 1;
        }
        st++;
    }
    return 0;
}


void mystrncpy(char* st1, char* st2, int n) //将后一个字符串中指定字符复制到前一个字符串中
{
    if ((strlen(st2)) < n)
    {
        st1 = st2; //如果st2的字符长度小于n，就在直接将将s2复制给s1
    }
    else
    {
        st2[n] = '\n'; //如果st2的字符大度等于n，就把st2[n]设置成空字符，然后再返回给st1
        st2[n + 1] = '\0';
        st1 = st2;
    }
}


char* string_in(char* st1, char* st2) //查找前一个字符串中是否包含后一个字符串
{
    int len_st1, len_st2;
    len_st1 = strlen(st1);
    len_st2 = strlen(st2);
    for (int i = 0; i < len_st1 - len_st2; i++) ////匹配st2首字母，如果前len_st1 - len_st2 + 1个字符无匹配则直接返回空字符
    {
        while (st1[i] == st2[0]) //已经匹配上了首字母
        {
            int m = i + 1;
            int n = 1;
            while (st1[m] == st2[n] && n < len_st2 - 1) //判断剩下的字符是否匹配
            {
                m++;
                n++;
            }
            if (n = len_st2 - 1) //判断是否全匹配
            {
                return &st1[i]; //如果匹配，则返回首字符的地址
            }
            break;
        }
    }
    return NULL; //如果不匹配，则返回空指针
}


void inverte(char* st) //将字符串反序
{
    int len = strlen(st);
    int max_ch;
    char temp;
    if (st[len - 1] == '\n') //判断需要反序的字符有多少项
    {
        max_ch = len - 1; //带换行符的字符串排除掉换行符
    }
    else
    {
        max_ch = len;
    }
    for (int i = 0; i < max_ch / 2; i++) //字符反向
    {
        temp = *(st + i);
        *(st + i) = *(st + max_ch - i - 1);
        *(st + max_ch - i - 1) = temp;
    }
}


void delet_space(char* st) //删除字符串中的空格符
{
    char* temp;
    int i = 0;
    int len = strlen(st) - 1;
    while (i < len)
    {
        if (*(st + i) != ' ') //判断是否读到了空格符
        {
            i++;
        }
        else
        {
            *(st + i) = '\0'; //将字符串st截断
            temp = st + i + 1; //将新指针指向原空格后一个字符位置
            strcat(st, temp); //将截断后的st与temp拼接起来
            len = strlen(st) - 1; //去掉了空格符，将len长度减1
        }
    }
}



void get_choice(char* st[], char ch) //获取选择并执行
{
    char* temp;
    int count_st1, count_st2;
    switch (ch)
    {
    case 'a': //打印源字符串
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'b': //以ASCII顺序打印字符串
        for (int j = 0; j < 9; j++)
        {
            for (int m = j + 1; m < 10; m++)
            {
                if (strcmp(st[j], st[m]) > 0) //从小到大排列
                {
                    temp = st[m]; //换位置
                    st[m] = st[j];
                    st[j] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'c': //按长度递增顺序打印字符串
        for (int m = 0; m < 9; m++)
        {
            for (int n = m + 1; n < 10; n++)
            {
                if (strlen(st[m]) > strlen(st[n])) //从短到长排
                {
                    temp = st[n];
                    st[n] = st[m];
                    st[m] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'd': //按字符串中第1个单词的长度打印字符串
        for (int m = 0; m < 9; m++)
        {
            for (int n = m + 1; n < 10; n++)
            {
                count_st1 = count_firstword(st[m]); //获取第一个单词的长度
                count_st2 = count_firstword(st[n]);
                if (count_st1 > count_st2) //从短到长排
                {
                    temp = st[m];
                    st[m] = st[n];
                    st[n] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    default:
        puts("Illegal input, please enter 'a', 'b', 'c', 'd' or 'q'");
        break;
    }
}


int count_firstword(char* st) //获取第一个单词的长度
{
    int count = 0;
    while (isalpha(*st++)) //判断是否到了单词结尾
    {
        count++;
    }
    return count;
}
