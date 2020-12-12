#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>


#define LEN 40


int main(int argc, char** argv)
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




    
  
    
   

    
    
    
    

    return 0;
}