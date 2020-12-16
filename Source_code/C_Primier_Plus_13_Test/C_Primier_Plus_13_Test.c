#include<stdio.h>
#include<stdlib.h>



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
    























	return 0;
}