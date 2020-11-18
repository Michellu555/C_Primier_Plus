#include<stdio.h>

int main()
{
    //程序清单8.2
    // echo.c -- 重复输入，直到文件结尾
    int ch;
    while ((ch = getchar()) != EOF)//当读取到文章结尾时，getchar返回的值为EOF的值
    {
        putchar(ch);//输入Ctrl + Z结束输入
    }


    return 0;
}