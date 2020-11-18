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
    // char ar[] = MSG;
    // const char *pt = MSG;
    // printf("adress of \"I'am special\": %p \n", "I'm special");//I'm special的地址
    // printf("adress ar: %p\n", ar);//数组ar的地址, 数组ar把MSG的字符串字面量复制了过来，所以地址不一样
    // printf("adress pt: %p\n", pt);//指针pt的地址， pt将指针指向MSG，并未复制，所以地址一样
    // printf("adress of MSG: %p\n", MSG);//MSG的地址
    // printf("adress of \"I am special\": %p \n", "I'm special");//I'm special的地址

    // 程序清单11.4
    // arrchar.c -- 指针数组，字符串数组
    // const char * mytalents[LIM] = 
    // {
    //     "Adding numbers swiftly",
    //     "Multiplying accurately", "Stashing data", 
    //     "Following instruction to the letter", 
    //     "Understanding the C language"
    // };
    // char yourtalents[LIM][SLEN] = 
    // {
    //     "Walking in a straight line", 
    //     "Sleeping", "Watching television",
    //     "Mailing letters", "Reading email"
    // };
    // puts("Let's compare talents.");
    // printf("%-36s %-25s\n", "My Talents", "Your Talents");
    // for (int i = 0; i < LIM; i++)
    // {
    //     printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    // }
    // printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));
    
  




    


    return 0;
}

