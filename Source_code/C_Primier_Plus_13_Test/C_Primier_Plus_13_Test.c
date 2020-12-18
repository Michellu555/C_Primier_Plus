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
    

    //4.编写一个程序，按顺序在屏幕上显示命令行中列出的所有文件。使用argc控制循环。
    //定义文件流 → for循环控制打开的文件数量，上限数为argc-1 → 打开文件 → fgets获取文件内容 → fputs打印出内容 → 关闭文件，开始下一个文件
    //FILE* fp;
    //char temp[256];
    //for (int i = 0; i < argc - 1; i++) //for循环控制打开的文件数量，上限数为argc-1
    //{
    //    if ((fp = fopen(argv[i + 1], "r")) == NULL) //打开文件
    //    {
    //        fprintf(stderr, "Can't open the %s file.\n", argv[i + 1]);
    //        exit(EXIT_FAILURE);
    //    }
    //    fprintf(stdout, "File %d:\n", i + 1);
    //    while ((fgets(temp, 256, fp)) != NULL) //fgets获取文件内容
    //    {
    //        fputs(temp, stdout); //fputs打印出内容
    //    }
    //    fputc('\n', stdout); 
    //    fclose(fp); //关闭文件，开始下一个文件
    //}
    //printf("Done!");


    //5.修改程序清单13.5中的程序，用命令行界面代替交互式界面。


    //6.使用命令行参数的程序依赖于用户的内存如何正确地使用它们。重写程序清单13.2中的程序，不使用命令行参数，而是提示用户输入所需信息。
    //reducto.c -- 把文件压缩成原来的1/3
    //声明两个文件的指针in和out → 检查命令行参数 → 打开in文件，检查是否正确打开 → 拷贝文件名 → 打开目标文件 → 拷贝数据 → 关闭文件
    //FILE *in, *out; //两个文件指针
    //char file_name_2[40]; //储存文件名
    //char file_name_1[40];
    //char ch;
    //int count = 0;
    //printf("Please enter the name for first file.\n");
    //if ((scanf("%s", file_name_1)) != 1)
    //{
    //    fprintf(stderr, "Usage: %s filename\n", file_name_1);
    //    exit(EXIT_FAILURE);
    //}
    //if ((in = fopen(file_name_1, "r")) == NULL)
    //{
    //    fprintf(stderr, "I couldn't open the file %s.\n", file_name_1);
    //    exit(EXIT_FAILURE);
    //}
    //strncpy(file_name_2, file_name_1, 35);
    //file_name_2[35] = '\0';
    //strcat(file_name_2, ".red");
    //if ((out = fopen(file_name_2, "w")) == NULL)
    //{
    //    fprintf(stderr, "Can't creat that file.\n");
    //    exit(3); 
    //}
    //while ((ch = getc(in)) != EOF)
    //{
    //    //压缩数据
    //    if (count++ % 3 == 0)
    //    {
    //        putc(ch, out);
    //    }
    //}
    //if (fclose(in) != 0 || fclose(out) != 0)
    //{
    //    fprintf(stderr, "Failed to close the file.\n");
    //}


    //7.编写一个程序打开两个文件。可以使用命令行参数或提示用户输入文件名。
    //a.该程序以这样的顺序打印：打印第1个文件的第1行，第2个文件的第1行，
    //第1个文件的第2行，第2个文件的第2行，以此类推，打印到行数较多文件的最后一行。
    //b.修改该程序，把行号相同的行打印成一行。
    //定义两个文件流 → 提示输入文件名，scanf读取两个文件名 → 打开两个文件 → while循环用fgets+||录入数据 → 判断是否为空指针，如果为空就不打印 → 关闭文件
    //FILE* fp1, * fp2;
    //char temp1[SLEN], temp2[SLEN];
    //char file_name_1[NAME_LEN], file_name_2[NAME_LEN];
    //printf("Please enter the two file name that you want to open.\n"); //提示输入文件名，scanf读取两个文件名
    //while (scanf("%s%s", file_name_1, file_name_2) != 2)
    //{
    //    printf("Please enter two correct file name. Try it again.\n");
    //}
    //if ((fp1 = fopen(file_name_1, "r")) == NULL || (fp2 = fopen(file_name_2, "r")) == NULL) //打开两个文件
    //{
    //    fprintf(stderr, "Can't open the file.\n");
    //    exit(EXIT_FAILURE);
    //}
    ////Case a:
    //while (feof(fp1) == 0 || feof(fp2) == 0)
    //{
    //    if (fgets(temp1, SLEN, fp1) != NULL)
    //    {
    //        fputs(temp1, stdout);
    //    }
    //    if (fgets(temp2, SLEN, fp2) != NULL)
    //    {
    //        fputs(temp2, stdout);
    //    }
    //}
    ////Case b:
    //while (feof(fp1) == 0 || feof(fp2) == 0)
    ///*{
    //    if (fgets(temp1, SLEN, fp1) != NULL)
    //    {
    //        temp1[strlen(temp1) - 1] = ' ';
    //        fputs(temp1, stdout);
    //    }
    //    if (fgets(temp2, SLEN, fp2) != NULL)
    //    {
    //        temp2[strlen(temp2) - 1] = ' ';
    //        fputs(temp2, stdout);
    //    }
    //    fputc('\n', stdout);
    //}*/
    //fclose(fp1);
    //fclose(fp2);


    //8.编写一个程序，以一个字符和任意文件名作为命令行参数。如果字符后面没有参数，该程序读取标准输入；
    //否则，程序依次打开每个文件并报告每个文件中该字符出现的次数。文件名和字符本身也要一同报告。
    //程序应包含错误检查，以确定参数数量是否正确和是否能打开文件。如果无法打开文件，程序应报告这一情况，然后继续处理下一个文件。
    //设置文件指针 → 判断argc是否大于2 → 如果不大于2就使用scanf输入 → 如果大于2，就使用命令行输入 →
    //打开文件，打不开就报错 → 查找指定字符是否出现并计数 → fprintf报告文件名，指定字符出现次数
    // FILE *fp;
    // char ch;
    // int count = 0;
    // char file_name[NAME_LEN];
    // if (argc > 2)
    // {
    //     for (int i = 0; i < argc - 2; i++)
    //     {
    //         if ((fp = fopen(argv[i + 2], "r")) == NULL)
    //         {
    //             fprintf(stderr, "Can't open the %s file.\n", argv[i + 2]);
    //             exit(EXIT_FAILURE);
    //         }
    //         while ((ch = fgetc(fp)) != EOF)
    //         {
    //             if (ch == argv[1][0])
    //             {
    //                 count++;
    //             }
    //         }
    //         fprintf(stdout, "The character %c has appeared %d times in %s file.\n", argv[1][0], count, argv[i + 2]);
    //     }
    // }
    // else
    // {
    //     printf("Please enter the file name that you want to open.\n");
    //     scanf("%s", file_name);
    //     if ((fp = fopen(file_name, "r")) == NULL)
    //     {
    //         fprintf(stderr, "Can't open the %s file.\n", file_name);
    //         exit(EXIT_FAILURE);
    //     }
    //     while ((ch = fgetc(fp)) != EOF)
    //     {
    //         if (ch == argv[1][0])
    //         {
    //             count++;
    //         }
    //     }
    //     fprintf(stdout, "The character %c has appeared %d times in %s file.\n", argv[1][0], count, file_name);
    // }
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


    //11.编写一个程序，接受两个命令行参数。第1个参数是一个字符串，第2个参数是一个文件名。
    //然后该程序查找该文件，打印文件中包含该字符串的所有行。因为该任务是面向行而不是面向字符的，所以要使用fgets()而不是getc()。
    //使用标准C库函数strstr()(11.5.7节简要介绍过）在每一行中查找指定字符串。假设文件中的所有行都不超过255个字符。
    //定义文件流 → 打开指定文件 → fgets循环录入每一行 → 判断是否包含目标字符串 → 输出目标字符串所在的行
    //FILE *fp;
    //char temp[SLEN];
    //if ((fp = fopen(argv[2], "r")) == NULL) //打开指定文件
    //{
    //    fprintf(stderr, "Can't open the %s file.\n", argv[2]);
    //    exit(EXIT_FAILURE);
    //}
    //while ((fgets(temp, SLEN, fp)) != NULL) //fgets循环录入每一行
    //{
    //    if ((strstr(temp, argv[1])) != NULL) //判断是否包含目标字符串
    //    {
    //        fputs(temp, stdout); //输出目标字符串所在的行
    //    }
    //}
    //fclose(fp);



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