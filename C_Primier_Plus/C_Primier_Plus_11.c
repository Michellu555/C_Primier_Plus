#include<stdio.h>
#include<string.h>




#define MAXLENGTH 81
#define MSG "I’am special"
#define SLEN 40
#define LIM 5
#define STLEN 10
#define DEF "I am a #defined string."
#define SIZE 80



//函数原型
char* s_gets(char*, int);
void put1(const char*); //打印字符串，不添加\n
int put2(const char*); //打印一个字符串，并统计打印字符数
void fit(char*, unsigned int); //缩短字符串的长度




int main()
{
    // ********************************************************************************************************************************************
    // 程序清单11.1
    // strings1.c
    // char words[MAXLENGTH] = "I am a strings in an array.";
    // const char * pt1 = "Something is pointing at me.";//用指针声明字符串
    // puts("Here are some strings:");
    // puts(MSG);
    // puts(words);
    // puts(pt1);
    // words[8] = 'p';
    // puts(words);


    // 程序清单11.2
    // strptr.c -- 把字符串看作指针
    // printf("%s, %p, %c\n", "We", "are", *"space farers");//"are"字符串的地址为该字符串首元素的地址，*"space farers"表示获取该指针指向的地址上首字母的值


    // 程序清单11.3
    // addresses.c -- 字符串的地址
    //char ar[] = MSG; //用数组形式创建字符串
    //const char * pt = MSG; //用指针形式创建字符串
    //printf("address of \"I'm special\": %p \n", "I'm special"); //I'm special的地址
    //printf(" address ar: %p\n", ar); //字符串ar的地址，数组将MSG的字符串字面量复制过来了，地址已经与原地址不一样了。
    //printf(" address pt: %p\n", pt); //%p代的是字符串pt的值，即MSG的地址。
    //printf(" address of MSG: %p\n", MSG); //字符串MSG的地址
    //printf("address of \"I'm special\": %p \n", "I'm special"); //I'm special的地址
 


    // 程序清单11.4
    // arrchar.c -- 指针数组，字符串数组
    //const char* mytalents[LIM] =
    //{
    //    "Adding numbers swiftly",
    //    "Multiplying accurately" , "Stashing data",
    //    "Following instruction to the letter",
    //    "Understanding the C language"
    //};
    ////用指针定义字符串数组, 即指针的数组。

    //char yourtalents[LIM][SLEN] =
    //{
    //    "Walking in a straight line",
    //    "Sleeping", "Watching television",
    //    "Mailing leters", "Reading email"
    //};
    ////用数组定义字符串数组，即数组的数组。

    //int i;
    //puts("Let's compare talents."); //直接输出字符串
    //printf("%-36s %-25s\n", "My Talents", "Your Talents"); //打印字符串
    //for (i = 0; i < LIM; i++)
    //{
    //    printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    //}
    //printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));



    //程序清单11.5
    //指针和字符串
    // const char* mesg = "Don't be a fool!";
    // const char* copy;
    // copy = mesg;
    // printf("%s\n", copy);
    // printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg); //指针mesg与指针copy的地址不同，但是他们都指向同一个字符串，所以他们指向的地址相同，即他们的
    // printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    


    //程序清单11.6
    //使用gets()和puts()
    //char words[STLEN]; //定义了一个空字符串
    //puts("Enter a string, please.");
    //gets(words); //输入到字符串worlds中
    //printf("Your string twice:\n");
    //printf("%s\n", words); //用printf输出字符
    //puts(words); //用puts再次输出字符
    //puts("Done."); //输出指定字符

  

    //程序清单11.7
    //char words[STLEN]; //初始化一个空字符串
    //puts("Enter a string, please."); //输出指定字符串
    //fgets(words, STLEN, stdin); //读入字符
    ////第一个参数是读入字符的位置
    ////第二个参数是读入的最大字符数量
    ////第三个参数是指明读入的文件，stdin表示从键盘读入
    //printf("Your string twice (puts(), then fputs()):\n");
    //puts(words); //puts()输出时会添加换行符
    //fputs(words, stdout); //fputs()输出时不会添加换行符
    ////第一个参数是输出的字符
    ////第二个参数是指明要输出的文件，stdout表示标准显示到显示器上
    //puts("Enter another string, please."); //输出指定字符
    //fgets(words, STLEN, stdin); //读入字符
    //printf("Your string twice(puts(), then fputs()):\n");
    //puts(words); //输出字符
    //fputs(words, stdout);
    //puts("Done.");



    //程序清单11.8
    // char words[STLEN];
    // puts("Enter strings (empty line to quit):");
    // //fgets（）读到文章结束时会返回空指针
    // while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    // {
    //     fputs(words, stdout);
    // }
    // puts("Done.");



    //程序清单11.9
    // int i;
    // char words[STLEN];
    // puts("Enter strings (enpty line to quit):");
    // while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') //读取输入
    // {
    //     //验证输入
    //     i = 0;
    //     while (words[i] != '\n' && words[i] != '\0') //跳过非空字符和非换行符
    //     {
    //         i++;
    //     }
    //     //删除换行符
    //     if (words[i] == '\n')
    //     {
    //         words[i] = '\0';
    //     }
    //     else
    //     {
    //         while (getchar() != '\n') //剔除所有非换行符内容
    //         {
    //             continue;
    //         }
    //     }
    //     puts(words);
    // }
    // puts("Done");
    
    


    //程序清单11.11
    //char name1[11], name2[11];
    //int count;
    //printf("Please enter 2 names.\n");
    //count = scanf("%5s %10s", name1, name2); 
    ////scanf返回读取的项数或者EOF
    ////%5s表示只读5个字符或者读到空白为止，当name1超过5个字符，剩下的被存在缓存区，等到%10s的时候读取
    //printf("I read the %d names %s and %s.\n", count, name1, name2);



    //程序清单11.12
    //puts在输出时会在末尾添加换行符，遇到空字符时就停止输出
    //char str1[80] = "An array was initialized to me.";
    //const char* str2 = "A pointer was initialized to me."; //用指针定义了一个字符串
    //puts("I'm an argument to puts()."); //直接打印字符
    //puts(DEF); //打印提前定义好的字符
    //puts(str1); //通过字符串名打印字符
    //puts(str2); //通过指针名打印字符
    //puts(&str1[5]); //从第6个字符处开始打印字符串
    //puts(str2 + 4); //从字符串开始处往后移动4个单位处开始打印字符串

    

    //程序清单11.13
    //char side_a[] = "Side A";
    //char dont[] = { 'W', 'O', 'W', '!' };
    //char side_b[] = "Side B";
    //puts(dont); //dong不是字符串，因为缺少空字符


    
    //程序清单11.16
    //put_put.c -- 用户自定义输出函数
    //put1("If I'd as much money");
    //put1(" as I could spend,\n");
    ////put2的返回值作为printf中的参数，先打印put2中的字符串
    //printf("I count %d characters.\n", put2("I never would cry old chairs to mend.")); 

    

    //程序清单11.17
    //test_fit.c -- 使用缩短字符串长度的函数
    //char mesg[] = "Things should be as simple as possible,"  "but not simpler";
    //puts(mesg); //打印字符
    //fit(mesg, 38); //隔断mesg字符串
    //puts(mesg); //隔断后再打印一次
    //puts("Let's look at some more of the string.");
    //puts(mesg + 39); //mesg往后移动39个字符串后再打印




    //程序清单11.18
    //str_cat.c -- 拼接两个字符串
    char flower[SIZE];
    char addon[] = "s smell like old shoes."; //初始化字符串并赋值
    puts("What is your favorite flower?"); //直接打印字符串
    if (s_gets(flower, SIZE)) //如果正常返回一个字符串
    {
        strcat(flower, addon); //将第二个字符串的副本链接到第一个字符串上
        puts(flower);
        puts(addon);
    }
    else
    {
        puts("End of file encuntered!");
        puts("bye");
    }






















    

    


    return 0;
}





//函数声明
char* s_gets(char* st, int n) //读入的数组位置和最大字符数量
{
    char* ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);  //读取正常时，fgets返回的指针与st一致，这里把fgets的指针赋给了ret_val
    if (ret_val) //即ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0') //不断读取st[i]， 直到读取到空字符和零字符
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}



void put1(const char* string) //打印字符串，不添加\n
{
    while (*string != '\0') //等价与string[0] != '\0', 每个字符串都会以空字符结尾
    {
        putchar(*string++); 
    }
}



int put2(const char* string) //打印一个字符串，并统计打印的字符数
{
    int count;
    count = 0;
    while(*string) //*string表示不是空字符是为真，是空字符时为假
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); //换行符不计数
    return count;
}



void fit(char* string, unsigned int size) //缩短字符串的长度
{
    if (strlen(string) > size) //当字符串string的长度大于size时，将string隔断，但是string[size]后的字符仍然存在，未丢弃。
    {
        string[size] = '\0';
    }
}