#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>




#define LEN 4096
#define MAX 20




int main()
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
    // FILE* fp;
    // char file_name[256];
    // char temp[LEN];
    // int count = 0;
    // char ch;
    // printf("Please enter the file name which you want to open: ");
    // scanf("%s", file_name);
    // if ((fp = fopen(file_name, "r")) == NULL)
    // {
    //     fprintf(stderr, "Can't open the %s file.", file_name);
    //     exit(EXIT_FAILURE);
    // }
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     if (ch >= 97 && ch <= 122)
    //     {
    //         ch = toupper(ch);
    //     }
    //     temp[count] = ch;
    //     count++;
    // }
    // temp[count] = '\0';
    // fclose(fp);
    // if ((fp = fopen(file_name, "w")) == NULL)
    // {
    //     fprintf(stderr, "Can't open the %s file.", file_name);
    //     exit(EXIT_FAILURE);
    // }
    // fputs(temp, fp);
    // fclose(fp);
    

    // 9.修改程序清单13.3中的程序，从1开始，根据加入列表的顺序为每个单词编号。当程序下次运行时，确保新的单词编号接着上次的编号开始。
    //声明文件流 → 以r模式打开文件流 → 以fgets读单词并计数，读到EOF结束 → 关闭文件 → 以a+模式打开文件 → 以fscanf写入新单词，依照count计数 → 打印所有单词 → 关闭文件
    // FILE *fp; 
    // char words[MAX];
    // int count = 0;
    // if ((fp = fopen("e.txt", "r")) == NULL) //以读模式打开文件流
    // {
    //     fprintf(stderr, "Can't open the %s file.\n", "e.txt");
    //     exit(EXIT_FAILURE);
    // }
    // while ((fgets(words, 256,  fp)) != NULL) //以fgets读单词并计数，读到EOF结束 
    // {
    //     count++;
    // }
    // if (fclose(fp) != 0) //关闭文件
    // {
    //     fprintf(stderr, "Failed to close the file.\n");
    // }
    // if ((fp = fopen("e.txt", "a+")) == NULL) //以附加模式打开文件
    // {
    //     fprintf(stderr, "Can't open the %s file.\n", "e.txt");
    //     exit(EXIT_FAILURE);
    // }
    // puts("Enter words to add the file;\npress the # key at the beginning of a line to terminate."); //以fscanf写入新单词，依照count计数
    // while ((fscanf(stdin, "%s", words) == 1) && (words[0] != '#'))
    // {
    //     count++;
    //     fprintf(fp, "%d %s\n", count, words); 
    // }
    // puts("File contents:"); //打印所有单词
    // // rewind(fp); 
    // fseek(fp, 0, SEEK_SET);
    // while ((fgets(words, 256, fp)) != NULL)
    // {
    //     fputs(words, stdout);
    // }
    // puts("Done!");
    // if (fclose(fp) != 0) //关闭文件
    // {
    //     fprintf(stderr, "Failed to close the file.\n");
    // }


    // 10.编写一个程序打开一个文本文件，通过交互方式获得文件名。通过一个循环，提示用户输入一个文件位置。然后该程序打印从该位置开始到下一个换行符之前的内容。用户输入负数或非数值字符可以结束输入循环。
    //定义文件流，定义字符串 → scanf获取文件名 → 以r模式打开目标文件 → while循环录入用户输入的文件位置 → fgets获取需要内容 → fputs打印出该内容 →关闭文件
    // FILE *fp;
    // char temp[256];
    // char file_name[20];
    // int location = 0;
    // printf("Please enter the file name that you want to open.\n");
    // scanf("%s", file_name); //canf获取文件名
    // if ((fp = fopen(file_name, "r")) == NULL) //以r模式打开目标文件
    // {
    //     fprintf(stderr, "Can't open the %s file.\n", file_name);
    //     exit(EXIT_FAILURE);
    // }
    // fprintf(stdout, "Please enter the position that you want to jump(q to quit).\n");
    // while (fscanf(stdin, "%d", &location) && location > 0) //while循环录入用户输入的文件位置
    // {
    //     fseek(fp, location, SEEK_SET);
    //     if (fgets(temp, 256, fp) != NULL) //fgets获取需要内容
    //     {
    //         fputs(temp, stdout); //fputs打印出该内容
    //     }
    //     else
    //     {
    //         fprintf(stderr, "File ending, fail to print any world.\n");
    //         exit(EXIT_FAILURE);
    //     }
    //     fprintf(stdout, "Please enter another position that you want ot jump(q to quit).\n");
    // }
    // printf("Done!\n");
    // fclose(fp);


    // 12.创建一个文本文件，内含20行，每行30个整数。这些整数都在0~9之间，用空格分开。
    // 该文件是用数字表示一张图片，0~9表示逐渐增加的灰度。编写一个程序，把文件中的内容读入一个20×30的int数组中。
    // 一种把这些数字转换为图片的粗略方法是：该程序使用数组中的值初始化一个20×31的字符数组，用值0对应空格字符，1对应点字符，以此类推。
    // 数字越大表示字符所占的空间越大。例如，用#表示9。每行的最后一个字符（第31个）是空字符，这样该数组包含了20个字符串。
    // 最后，程序显示最终的图片(即，打印所有的字符串）,并将结果储存在文本文件中。
    //声明文件流和20*31的二维数组 → r模式打开文件 → for循环fgetc将文件中的信息读取并转化后录入到数组中 → fputc将数组文件输出到屏幕并存储在文件中
    FILE *fp;
    char temp[20][31];
    if ((fp = fopen("g.txt", "r")) == NULL) //r模式打开文件
    {
        fprintf(stderr, "Can't open the %s file.\n", "g.txt");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            temp[i][j] = fgetc(fp);
            switch (temp[i][j])
            {
            case 0:
                temp[i][j] = ' ';
                break;
            case 1:
                temp[i][j] = '.';
                break;
            default:
            case 2:
                temp[i][j] = '\'';
                break;
            case 3:
                temp[i][j] = ':';
                break;
            case 4:
                temp[i][j] = '^';
                break;
            case 5:
                temp[i][j] = '*';
                break; 
            case 6:
                temp[i][j] = '=';
                break;
            case 8:
                temp[i][j] = '%';
                break;
            case 9:
                temp[i][j] = '#';
                break;  
            }
            fputc(temp[i][j], stdout);
        }

    }
    fclose(fp);
    
    













	return 0;
}