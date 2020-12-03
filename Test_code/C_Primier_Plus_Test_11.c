#include<stdio.h>
#include<ctype.h>


#define LEN 10



void get_input(char*, int); //获取前n个字符并返回
void get_inputs(char*, int); //获取前n个字符并返回
char* get_word(char*); //获取第一个单词

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
    char input[40];
    char *output;
    printf("Please enter a sentense, the program will print the first word.\n");
    puts(get_word(input));

   









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