#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"func_13.h"


#define LEN 40
#define MAX 41
#define CNTL_Z '\032'
#define SLEN 81
#define BUFSIZE 4096
#define ARSIZE 1000



int main()
{
    //程序清单13.1
    //count.c -- 使用标准I/O
    /*int ch;
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    putchar('\n');
    fclose(fp);
    printf("File %s has %lu characters.\n", argv[1], count);*/


    //程序清单13.2
    //reducto.c -- 把文件压缩成原来的1/3
    //声明两个文件的指针in和out → 检查命令行参数 → 打开in文件，检查是否正确打开 → 拷贝文件名 → 打开目标文件 → 拷贝数据 → 关闭文件
    //FILE *in, *out; //两个文件指针
    //char name[LEN]; //储存文件名
    //char ch;
    //int count = 0;
    //if (argc < 2)
    //{
    //    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    //    exit(EXIT_FAILURE);
    //}
    //if ((in = fopen(argv[1], "r")) == NULL)
    //{
    //    fprintf(stderr, "I couldn't open the file %s.\n", argv[1]);
    //    exit(EXIT_FAILURE);
    //}
    //strncpy(name, argv[1], LEN - 5);
    //name[LEN - 5] = '\0';
    //strcat(name, ".red");
    //if ((out = fopen(name, "w")) == NULL)
    //{
    //    fprintf(stderr, "Can't creat that file.\n");
    //    exit(3); //???
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



    //程序清单13.3
    //addword.c -- 使用fprintf(), fscanf()和rewind()
    //定义文件指针与字符串 → 打开文件并判断是否成功 → 从键盘输入并 → 输入信息输入到文件中 → 从定位到文件开头并再次输入 → 输出到屏幕上验证 → 关闭文件
    /*FILE *fp;
    char words[MAX];
    if ((fp = fopen("wordy", "w+")) == NULL)
    {
        fprintf(stderr, "Can't open the \"word\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add the file;\npress the # key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%s\n", words);
    }
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s", words) == 1)
    {
        puts(words);
    }
    puts("Done!");
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Failed to close the file.\n");
    }*/

    //程序清单13.4
    //reverse.c -- 倒序显示文件的内容
    /*char file[SLEN];
    char ch;
    FILE* fp;
    long count, last;
    puts("Enter the name of the file to be processed: ");
    scanf("%80s", file);
    if ((fp = fopen(file, "rb")) == NULL)
    {
        printf("reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if (ch != CNTL_Z && ch != 'r')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    fclose(fp);*/


    //程序清单附1
    //使用setvbuf和fflush
    //char buff[1024];
    //memset(buff, '\0', 1024);
    //setvbuf(stdout, buff, _IOFBF, 1024); //针对于指定文件流，在指定的空间，以指定的模式，设置指定大小的缓存空间
    //fprintf(stdout, "Hello, world!");
    //fflush(stdout); //强制刷新，将缓存数据推送到指定文件流
    //fprintf(stdout, "I'm Michel.Lu");
    //fflush(stdout);
    
    
    //程序清单附2
    //使用fwrite和fread
    /*char a[10] = "Hello";
    char b[10];
    memset(b, '\0', 10);
    int num;
    FILE *fp;
    fp = fopen("Saisai.txt", "wb+");
    fwrite(a, sizeof(char), 3, fp);
    rewind(fp);
    num = fread(b, sizeof(char), 3, fp);
    printf("%s", b);
    fclose(fp);*/


    //程序清单13.5
    //append.c -- 把文件附到另一个文件的末尾
    //FILE* fs;
    //FILE* fa; //fa指向目标文件，fs指向源文件
    //int files = 0; //附加的文件数量
    //char file_app[SLEN]; //目标文件名
    //char file_src[SLEN]; //源文件名
    //char ch;
    //puts("Enter name of destination file:");
    //s_gets(file_app, SLEN);
    //if ((fa = fopen(file_app, "a+")) == NULL) //打开目标文件
    //{
    //    fprintf(stderr, "Can't to open the %s file", file_app); //???
    //    exit(EXIT_FAILURE);
    //}
    //if ((setvbuf(fa, NULL, _IOFBF, BUFSIZE)) != 0) //创建缓冲区
    //{
    //    fputs("Can't creat output buffer.", stderr);
    //    exit(EXIT_FAILURE);
    //}
    //puts("Enter name of first source file(empty line to quit):");
    //while (s_gets(file_src, SLEN) && file_src[0] != '\0')
    //{
    //    if (strcmp(file_src, file_app) == 0)
    //    {
    //        fprintf(stderr, "Can't append the file to itself.\n");
    //    }
    //    else
    //    {
    //        if ((fs = fopen(file_src, "r")) == NULL)
    //        {
    //            fputs("Can't opne the % file.", file_src, stderr);
    //        }
    //        else
    //        {
    //            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
    //            {
    //                fputs("Can't creat the input buffer.", stderr);
    //                continue;
    //            }
    //            append(fs, fa);
    //            if (ferror(fs) != 0)
    //            {
    //                fprintf(stderr, "Error in reading %s file.\n", file_src);
    //            }
    //            if (ferror(fa) != 0)
    //            {
    //                fprintf(stderr, "Error in wrinting %s file.\n", file_app);
    //            }
    //            fclose(fs);
    //            files++;
    //            printf("File %s has been appended.\n", file_src);
    //            puts("Next file(empty line to quit):");
    //        }
    //    }     
    //}
    //printf("Done appending. %d files appended.\n", files);
    //rewind(fa);
    //printf("%s contents:\n", file_app);
    //while ((ch = getc(fa)) != EOF)
    //{
    //    putchar(ch);
    //}
    //puts("Done displaying.");
    //fclose(fa);


    //程序清单13.6
    //用二进制I/O进行随机访问
    double numbers[ARSIZE];
    double value;
    const char* file = "numbers.dat";
    int i;
    long pos;
    FILE* fp;
    //填充数组
    for ( i = 0; i < ARSIZE; i++)
    {
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    }
    //打开文件，写入数组
    if ((fp = fopen(file, "wb")) == NULL)
    {
        fputs(stderr, "Can't open the %s file.", file);
        exit(EXIT_FAILURE);
    }
    fwrite(numbers, sizeof(double), ARSIZE, fp);
    fclose(fp);
    //读取数据
    if ((fp = fopen(file, "rb")) == NULL)
    {
        fputs(stderr, "Can't open the %s file.", file);
        exit(EXIT_FAILURE);
    }
    //查找指定位置的值
    printf("Enter an index in the range 0 - %d.\n", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i > 0 && i < ARSIZE)
    {
        pos = (long)(i * sizeof(double));
        fseek(fp, pos, SEEK_SET);
        fread(&value, sizeof(double), pos, fp);
        printf("The value there is %f.\n", value);
        printf("Next index(out of range to quit):\n");
    }
    fclose(fp);
    puts("Bye!");


    
    
    
    















    return 0;
}
