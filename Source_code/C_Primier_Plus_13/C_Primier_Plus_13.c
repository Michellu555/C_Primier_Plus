#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>


#define LEN 40


int main(int argc, char** argv)
{
    //�����嵥13.1
    //count.c -- ʹ�ñ�׼I/O
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


    //�����嵥13.2
    //reducto.c -- ���ļ�ѹ����ԭ����1/3
    //���������ļ���ָ��in��out �� ��������в��� �� ��in�ļ�������Ƿ���ȷ�� �� �����ļ��� �� ��Ŀ���ļ� �� �������� �� �ر��ļ�
    //FILE *in, *out; //�����ļ�ָ��
    //char name[LEN]; //�����ļ���
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
    //    //ѹ������
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