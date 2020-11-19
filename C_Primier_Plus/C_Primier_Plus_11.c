#include<stdio.h>
#include<string.h>




#define MAXLENGTH 81
#define MSG "I’am special"
#define SLEN 40
#define LIM 5



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
    
  




    


    return 0;
}

