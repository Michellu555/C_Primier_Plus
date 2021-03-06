#include<stdio.h>
#include<string.h>
#include<ctype.h>




#define MAXLENGTH 81
#define MSG "I’am special"
#define SLEN 40
#define LIM 5
#define STLEN 10
#define DEF "I am a #defined string."
#define SIZE 80
#define BUGSIZE 13
#define ANSWER "Grant"
#define STOP "quit"
#define LISTSIZE 6
#define WORDS "beast"
#define TARGSIZE 7
#define MAX 20
#define HALT ""
#define LIMIT 81





//函数原型
char* s_gets(char*, int);
void put1(const char*); //打印字符串，不添加\n
int put2(const char*); //打印一个字符串，并统计打印字符数
void fit(char*, unsigned int); //缩短字符串的长度
void stsrt(char* strings[], int num); //字符串排序函数
void ToUpper(char *); //把字符串中每个字符转换成大写
int PunctCount(const char*); //统计字符串中标点符号的个数




//int main()
int main(int argc, char *argv[])
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
    //char flower[SIZE];
    //char addon[] = "s smell like old shoes."; //初始化字符串并赋值
    //puts("What is your favorite flower?"); //直接打印字符串
    //if (s_gets(flower, SIZE)) //如果读取正常返回一个字符串
    //{
    //    strcat(flower, addon); //将第二个字符串的副本链接到第一个字符串上
    //    puts(flower);
    //    puts(addon);
    //}
    //else
    //{
    //    puts("End of file encuntered!");
    //    puts("bye");
    //}




    //程序清单11.19
    //join_chk.c -- 拼接两个字符串，检查第一个数组的大小
    //char flower[SIZE];
    //char addon[] = "s smell like old shoes.";
    //char bug[BUGSIZE];
    //int available;
    //puts("What is your favorite flower?");
    ////在flower中输入字符 → 判断剩余空间是否大于addon长度 → 如果大于则可合并
    //s_gets(flower, SIZE); //输入字符
    //if (strlen(flower) + strlen(addon) + 1 <= SIZE) //判断剩余长度能否容纳addon
    //{
    //    strcat(flower, addon); //合并字符
    //    puts(flower);
    //}
    ////将字符合并到bug中 → 输入字符到bug中 → 计算可用字符长度 → 使用strncat连接字符
    //s_gets(bug, BUGSIZE); //输入字符到bug中
    //available = BUGSIZE - strlen(bug) - 1; //计算可用字符长度，必须留一个给空字符
    //strncat(bug, addon, available); //合并available个字符到bug中
    //puts(bug);


    
    //程序清单11.20
    //nogo.c -- 该正序是否能正常运行？
    //char try[SIZE];
    //puts("Who is buried in Grant's tomb?");
    //s_gets(try, SIZE); 
    //while (try != ANSWER) //try和ANSWER都是指针，这两个指针的地址不可能相同
    //{
    //    puts("Wrong, try again.");
    //    s_gets(try, SIZE);
    //}
    //puts("That's right!");


    

    //程序清单11.21
    //compare.c -- 该程序可用正常运行
    //char try[SIZE];
    //puts("Who is buride in Grant's tomb?");
    //s_gets(try, SIZE);
    ////strcmp函数用于比较两个字符串，如果两个字符串一致，就返回0，不一致就返回非零值
    //while (strcmp(try, ANSWER) != 0) 
    //{
    //    puts("Wrong, try again.");
    //    s_gets(try, SIZE);
    //}
    //puts("That's right!");


    
    
    //程序清单11.22
    //compback.c -- strcmp()的返回值
    //printf("strcmp(\"A\", \"A\") is ");  
    //printf("%d\n", strcmp("A", "A")); //返回值是0
    //printf("strcmp(\"A\", \"B\") is ");
    //printf("%d\n", strcmp("A", "B"));
    //printf("strcmp(\"B\", \"A\") is ");
    //printf("%d\n", strcmp("B", "A"));
    //printf("strcmp(\"C\", \"A\") is ");
    //printf("%d\n", strcmp("C", "A"));
    //printf("strcmp(\"Z\", \"a\") is ");
    //printf("%d\n", strcmp("Z", "a"));
    //printf("strcmp(\"apples\", \"apple\") is ");
    //printf("%d\n", strcmp("apples", "apple"));



    //程序清单11.23
    //quit_chk.c -- 某程序的开始部分
    // char input[LIM][SIZE]; //字符串数组
    // int ct = 0;
    // printf("Enter up tp %d lines(type quit to quit):\n", LIM);
    // //使用while判断输入的字符串 → 输入字符串
    // //while判断 → LIM数组数量是否超上限 + s_gets是否正确输入 + 比较字符串是否等于quit
    // while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(STOP, input[ct]) != 0)
    // {
    //     ct++;
    // }
    // printf("%d strings entered.\n", ct);
    //注：检测LIM数组数量是否超上限 + s_gets是否正确输入 + 是否输入空格
    // while (ct < LIM && s_gets(input[ct], SIZE)) != NULL && input[ct][0] != '\0') //因为换行符会被s_gets函数替换成空字符，所以直接检测空字符即可
    
    



    //程序清单11.24
    //strsrch.c -- 使用strncmp()
    //查找字符串数组中的字符串前5个字符是否和指定字符串一致
    //使用strncmp进行判断
    // const char *list[LISTSIZE] = 
    // {
    //     "astronomy", "astounding",
    //     "astrophysics", "ostracize",
    //     "asterism", "astrophobia"
    // };
    // int count = 0;
    // for (int i = 0; i < LISTSIZE; i++)
    // {
    //     if (strncmp(list[i], "astro", 5) == 0) //调出前5个字符与astro一致的字符串
    //     {
    //         printf("Found: %s\n", list[i]); //打印出来
    //         count++; 
    //     }
        
    // }
    // printf("The list contained %d words beginning with astro.\n", count);




    //程序清单11.25
    //copy1.c -- 演示strcpy()
    //strcpy函数用于copy字符串
    //要求循环输入以q开头的字符串 → 判断是否是以q开头的字符串 → 如果是就录入并且计数加一， 如果不是就跳过 → 将录入的字符串循环打印出来
    //可以使用一个字符串数组用来存放字符串，不需要临时存放的数组，当开头不为q的时候就计数不加一，一直读到了q开头的字符才加一
    // char qwords[LIM][SIZE]; //用于存放开头为q的字符
    // char temp[SIZE]; //用于临时存放字符
    // int count = 0;
    // printf("Enter %d words beginning with q:\n", LIM);
    // while (count < LIM && s_gets(temp, SIZE)) //循环录入字符串
    // {
    //     if (temp[0] == 'q') //判断第一个字符是否是q
    //     {
    //         strcpy(qwords[count], temp);
    //         count++;
    //     }
    //     else
    //     {
    //         printf("%s doesn't begin with q!\n", temp);
    //     }
    // }
    // puts("Here are the words accepted:");
    // for (int i = 0; i < LIM; i++)
    // {
    //     puts(qwords[i]);
    // }




    //程序清单11.26
    //copy2.c -- 使用strcpy()
    //在字符串复制到另一字符串的指定位置，并非开头位置
    // const char *orig = WORDS; //初始化字符串并赋值
    // char copy[SIZE] = "be the best that you can be.";
    // char *ps;
    // puts(orig); //复制前的字符串
    // puts(copy);
    // strcpy(copy + 7, orig); //将字符串复制到指定位置
    // puts(orig); //复制后的字符串
    // puts(copy); //orig字符串中的空字符串也是字符，也会被复制过来
    
    

    //程序清单11.27
    //copy3.c -- 使用strncpy()
    // char qwords[LIM][TARGSIZE]; //用于存放开头为q的字符
    // char temp[SIZE]; //用于临时存放字符
    // int count = 0;
    // printf("Enter %d words beginning with q:\n", LIM);
    // while (count < LIM && s_gets(temp, SIZE)) //循环录入字符串
    // {
    //     if (temp[0] == 'q') //判断第一个字符是否是q
    //     {
    //         strncpy(qwords[count], temp, TARGSIZE - 1); //第三个参数为存入目标字符串的最大字符数
    //         qwords[count][TARGSIZE - 1] = '\0'; //将最后一个字符赋值为空字符，这样才能组成字符串
    //         count++;
    //     }
    //     else
    //     {
    //         printf("%s doesn't begin with q!\n", temp);
    //     }
    // }
    // puts("Here are the words accepted:");
    // for (int i = 0; i < LIM; i++)
    // {
    //     puts(qwords[i]);
    // }





    //程序清单11.28
    //format.c -- 格式化字符串
    // char first[MAX];
    // char last[MAX];
    // char formal[2 * MAX + 10];
    // double prize;
    // puts("Enter your first name.");
    // s_gets(first, MAX);
    // puts("Enter your last name:");
    // s_gets(last, MAX);
    // puts("Enter your prize money:");
    // scanf("%lf", &prize);
    // sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize); //%-19s表示左对齐，占19个字符位置
    // puts(formal);

    


    //程序清单11.29
    //sort_str.c -- 读入字符串， 并排序字符串
    //读取字符串 → 排序字符串 → 打印字符串
    //char input[LIM][SIZE]; //存储输入的数组
    //char* ptstr[LIM]; //内含指针变量的数组
    //int ct = 0; //输入计数
    //int k; //输出计数
    //printf("Input up to %d lines, and I will sort them.\n", LIM);
    //printf("To stop, press the Enter key at a line's start.\n");
    ////读取字符串
    //while (ct < LIM && s_gets(input[ct], SIZE) && input[ct][0] != '\0') //换行符会被s_gets替换成零字符，所以要判断是否为零字符
    //{
    //    //将指针数组指向输入的数组
    //    ptstr[ct] = input[ct]; //将input[ct]这个字符串的首地址赋给指针ptstr[ct]
    //    ct++;
    //}
    ////字符串排序
    //stsrt(ptstr, ct);
    //puts("Here's the sorted list:\n");
    ////打印字符串
    //for (k = 0; k < ct; k++)
    //{
    //    puts(ptstr[k]);
    //}





    //程序清单11.30
    //mod_str.c -- 修改字符串
    //输入字符 → 用strchr函数查找换行符并替换成零字符 → 把字符串转换成全大写字母 → 打印字符串 → 打印共有多少个标点
    //char line[LIMIT];
    //char *find;
    //puts("Please enter a line");
    //fgets(line, LIMIT, stdin);
    ////查找换行符并替换成零字符
    //find = strchr(line, '\n');
    //if (find)
    //{
    //    *find = '\0';
    //}
    ////转换成大写字母
    //ToUpper(line);
    ////打印字符串
    //puts(line);
    ////打印共有多少个标点
    //printf("That line has %d punctuation characters.\n", PunctCount(line));

    
    

    //程序清单11.31
    //repeat.c -- 带参数的main（）
    /*
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 0; count < argc; count++)
    {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");
    */

    char * ptr;
    char list1[20] = "Hello";
    char list2[6] = "lol";
    //strcpy(list1 + 4, list2);
    //strncat(list1, list2, 3);
    //puts(list1);
    ptr = strpbrk(list1, list2);
    puts(ptr);


  
    


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






void stsrt(char* strings[], int num) //字符串排序函数
{
    char* temp;
    for (int top = 0; top < num - 1; top++)
    {
        for (int seek = top + 1; seek < num; seek++)
        {
            if (strcmp(strings[top], strings[seek]) > 0) //如果前一个字符串排在后一个之前, 就返回一个负值
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}






void ToUpper(char * test) //把字符串中每个字符转换成大写
{
    while (*test) //判断是否为零字符串
    {
        *test = toupper(*test);
        test++;
    }
}


int PunctCount(const char* test) //统计字符串中标点符号的个数
{
    int count = 0;
    while (*test)
    {
        if (ispunct(*test))
        {
            count++;
        }
        test++;
    }
    return count;
}
