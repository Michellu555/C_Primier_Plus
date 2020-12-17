#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>




#define LEN 4096




int main(int argc, char** argv)
{
	//1.修改程序清单13.1中的程序，要求提示用户输入文件名，并读取用户输入的信息，不使用命令行参数。
    //int ch;
    //FILE *fp;
    //unsigned long count = 0;
    //printf("Please enter the file name: ");
    //char file_name[20];
    //if (!scanf("%s", file_name)) //注意scanf拼写和返回值逻辑
    //{
    //    printf("Usage: %s filename\n", file_name);
    //    exit(EXIT_FAILURE);
    //}
    //if ((fp = fopen(file_name, "r")) == NULL)
    //{
    //    printf("Can't open %s file.\n", file_name);
    //    exit(EXIT_FAILURE);
    //}
    //while ((ch = getc(fp)) != EOF)
    //{
    //    putc(ch, stdout);
    //    count++;
    //}
    //putchar('\n');
    //fclose(fp);
    //printf("File %s has %lu characters.\n", file_name, count);


    //2.编写一个文件拷贝程序，该程序通过命令行获取原始文件名和拷贝文件名。尽量使用标准I/O和二进制模式。
    //定义字符串与输入输出文件流 → 打开输入输出文件 → fread读取输出文件内容 → fwrite写入输入文件内容
    /*char temp[LEN];
    FILE *input, *output;
    size_t num;
    if ((input = fopen(argv[1], "wb")) == NULL || (output = fopen(argv[2], "rb")) == NULL)
    {
        fputs("Failed to open the file %s or file %s.", argv[1], argv[2], stderr);
        exit(EXIT_FAILURE);
    }
    num = fread(temp, sizeof(char), LEN, output);
    fwrite(temp, sizeof(char), num, input);
    fclose(output);
    fclose(input);*/
    

    //3.编写一个文件拷贝程序，提示用户输入文本文件名，并以该文件名作为原始文件名和输出文件名。
    //该程序要使用ctype.h中的toupper()函数，在写入到输出文件时把所有文本转换成大写。使用标准I/O和文本模式。
    //定义一个文件流与一个字符串接收文件名和一个字符 → 提示用户输入文件名 → 输入文件名 → 只读模式打开文件
    //fgetc读取字符 → if判断是否为小写字母，小写转大写，写入临时字符串 → 关闭文件 → 只写模式打开文件 → 写入文件 → 关闭文件
    FILE* fp;
    char file_name[256];
    char temp[LEN];
    char ch;
    printf("Please enter the file name which you want to open: ");
    scanf("%s", file_name);
    if ((fp = fopen(file_name, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the %s file.", file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 97 && ch <= 122)
        {
            ch = toupper(ch);
        }

    }

    




















	return 0;
}