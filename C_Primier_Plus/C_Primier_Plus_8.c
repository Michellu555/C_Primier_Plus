#include<stdio.h>
#include<stdlib.h>
//程序清单8.5使用
void display(char cr, int lines, int width);

int main()
{
    //程序清单8.1
    //echo.c -- 重复输入
    // char ch;
    // while ((ch = getchar()) != '#')//getchar()能读出回车和空格，不会跳过
    // {
    //     putchar(ch);
    // }
    

    //程序清单8.2
    //echo.c -- 重复输入，直到文件结尾
    // int ch;
    // while ((ch = getchar()) != EOF)//当读取到文章结尾时，getchar返回的值为EOF的值
    // {
    //     putchar(ch);//输入Ctrl + Z结束输入
    // }


    //程序清单8.3
    //file_eof.c -- 打开一个文件并显示该文件
    // int ch;
    // FILE * fp;
    // char fname[50]; //储存文件名
    // printf("Enter the name of the file: ");
    // scanf("%s", fname);
    // fp = fopen(fname, "r"); //打开待读取文件，fname表示文件名，如果没有写路径，就表示在当前路径，人表示只读模式，如果文件不存在则读取失败
    // if (fp == NULL) //读取失败时返回NULL
    // {
    //     printf("Failed to open file. Bye\n");
    //     exit(1); //引入stdlib.h就是为了使用exit()
    // }
    // //getc(fp)从打开的文件中获取一个字符
    // while ((ch = getc(fp)) != EOF) //获取字符，getc()表示读取字符，逐一读取，读取失败时返回EOF，putc()表示读出字符，逐一读出。
    // {
    //     putchar(ch); //显示出来
    // }
    // fclose(fp); //关闭文件，提高运行效率
    

    //程序清单8.4
    //guess.c -- 一个拖沓且错误的猜数字程序
    // int guess = 1;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", guess);
    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    // }
    // printf("I knew I could do it!\n");


    //程序清单8.4改1
    //去掉换行符造成的二次打印
    // int guess = 1;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", guess);
    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    // }
    // printf("I knew I could do it!\n");

    
    //程序清单8.4改2
    //去掉非n字符造成的打印
    // int guess = 1;
    // char response;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", ++guess);
    // while ((response = getchar()) != 'y')
    // {
    //     if (response == 'n')//改1中非y字符就++guess, 此处仅n字符才++guess
    //     {
    //         printf("Well, then, is it %d?\n", ++guess);
    //     }
    //     else//非n字符就剔除
    //     {
    //         printf("Sorry, I understand only y or n.\n");
    //     }
    //     while (getchar() != '\n')//剔除所有非\n字符，遇到\n字符就结束输出
    //     {
    //         continue;
    //     }
    // }
    // printf("I knew I could do it!\n");


    //程序清单8.5
    //showchar 1.c -- 有较大I/O问题的程序
    int ch;//待打印字符
    int rows, cols;//行数和列数
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another charcter and two integers;\n");
        printf("Enter a new line to quit.\n");
    }
    printf("Bye.\n");
    
    


    return 0;
}


//程序清单8.5使用
void display(char cr, int lines, int width)
{
    int row, col;
    for ( row = 1; row <= lines; row++)
    {
        for ( col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }
}