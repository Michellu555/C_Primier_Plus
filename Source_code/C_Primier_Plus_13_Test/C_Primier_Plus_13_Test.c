#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>




#define LEN 4096
#define SLEN 256
#define NAME_LEN 40





int main(int argc, char** argv)
{
    //1.�޸ĳ����嵥13.1�еĳ���Ҫ����ʾ�û������ļ���������ȡ�û��������Ϣ����ʹ�������в�����
    //int ch;
    //FILE *fp;
    //unsigned long count = 0;
    //printf("Please enter the file name: ");
    //char file_name[20];
    //if (!scanf("%s", file_name)) //ע��scanfƴд�ͷ���ֵ�߼�
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


    //2.��дһ���ļ��������򣬸ó���ͨ�������л�ȡԭʼ�ļ����Ϳ����ļ���������ʹ�ñ�׼I/O�Ͷ�����ģʽ��
    //�����ַ�������������ļ��� �� ����������ļ� �� fread��ȡ����ļ����� �� fwriteд�������ļ�����
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


    //3.��дһ���ļ�����������ʾ�û������ı��ļ��������Ը��ļ�����Ϊԭʼ�ļ���������ļ�����
    //�ó���Ҫʹ��ctype.h�е�toupper()��������д�뵽����ļ�ʱ�������ı�ת���ɴ�д��ʹ�ñ�׼I/O���ı�ģʽ��
    //����һ���ļ�����һ���ַ��������ļ�����һ���ַ� �� ��ʾ�û������ļ��� �� �����ļ��� �� ֻ��ģʽ���ļ�
    //fgetc��ȡ�ַ� �� if�ж��Ƿ�ΪСд��ĸ��Сдת��д��д����ʱ�ַ��� �� �ر��ļ� �� ֻдģʽ���ļ� �� д���ļ� �� �ر��ļ�
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


    //4.��дһ�����򣬰�˳������Ļ����ʾ���������г��������ļ���ʹ��argc����ѭ����
    //�����ļ��� �� forѭ�����ƴ򿪵��ļ�������������Ϊargc-1 �� ���ļ� �� fgets��ȡ�ļ����� �� fputs��ӡ������ �� �ر��ļ�����ʼ��һ���ļ�
    //FILE* fp;
    //char temp[256];
    //for (int i = 0; i < argc - 1; i++) //forѭ�����ƴ򿪵��ļ�������������Ϊargc-1
    //{
    //    if ((fp = fopen(argv[i + 1], "r")) == NULL) //���ļ�
    //    {
    //        fprintf(stderr, "Can't open the %s file.\n", argv[i + 1]);
    //        exit(EXIT_FAILURE);
    //    }
    //    fprintf(stdout, "File %d:\n", i + 1);
    //    while ((fgets(temp, 256, fp)) != NULL) //fgets��ȡ�ļ�����
    //    {
    //        fputs(temp, stdout); //fputs��ӡ������
    //    }
    //    fputc('\n', stdout); 
    //    fclose(fp); //�ر��ļ�����ʼ��һ���ļ�
    //}
    //printf("Done!");


    //5.�޸ĳ����嵥13.5�еĳ����������н�����潻��ʽ���档


    //6.ʹ�������в����ĳ����������û����ڴ������ȷ��ʹ�����ǡ���д�����嵥13.2�еĳ��򣬲�ʹ�������в�����������ʾ�û�����������Ϣ��
    //reducto.c -- ���ļ�ѹ����ԭ����1/3
    //���������ļ���ָ��in��out �� ��������в��� �� ��in�ļ�������Ƿ���ȷ�� �� �����ļ��� �� ��Ŀ���ļ� �� �������� �� �ر��ļ�
    //FILE *in, *out; //�����ļ�ָ��
    //char file_name_2[40]; //�����ļ���
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


    //7.��дһ������������ļ�������ʹ�������в�������ʾ�û������ļ�����
    //a.�ó�����������˳���ӡ����ӡ��1���ļ��ĵ�1�У���2���ļ��ĵ�1�У�
    //��1���ļ��ĵ�2�У���2���ļ��ĵ�2�У��Դ����ƣ���ӡ�������϶��ļ������һ�С�
    //b.�޸ĸó��򣬰��к���ͬ���д�ӡ��һ�С�
    //���������ļ��� �� ��ʾ�����ļ�����scanf��ȡ�����ļ��� �� �������ļ� �� whileѭ����fgets+||¼������ �� �ж��Ƿ�Ϊ��ָ�룬���Ϊ�վͲ���ӡ �� �ر��ļ�
    //FILE* fp1, * fp2;
    //char temp1[SLEN], temp2[SLEN];
    //char file_name_1[NAME_LEN], file_name_2[NAME_LEN];
    //printf("Please enter the two file name that you want to open.\n"); //��ʾ�����ļ�����scanf��ȡ�����ļ���
    //while (scanf("%s%s", file_name_1, file_name_2) != 2)
    //{
    //    printf("Please enter two correct file name. Try it again.\n");
    //}
    //if ((fp1 = fopen(file_name_1, "r")) == NULL || (fp2 = fopen(file_name_2, "r")) == NULL) //�������ļ�
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


    //8.��дһ��������һ���ַ��������ļ�����Ϊ�����в���������ַ�����û�в������ó����ȡ��׼���룻
    //���򣬳������δ�ÿ���ļ�������ÿ���ļ��и��ַ����ֵĴ������ļ������ַ�����ҲҪһͬ���档
    //����Ӧ���������飬��ȷ�����������Ƿ���ȷ���Ƿ��ܴ��ļ�������޷����ļ�������Ӧ������һ�����Ȼ�����������һ���ļ���
    //�����ļ�ָ�� �� �ж�argc�Ƿ����2 �� ���������2��ʹ��scanf���� �� �������2����ʹ������������ ��
    //���ļ����򲻿��ͱ��� �� ����ָ���ַ��Ƿ���ֲ����� �� fprintf�����ļ�����ָ���ַ����ִ���
    /*
    FILE *fp;
    char ch;
    int count = 0;
    char file_name[NAME_LEN];
    if (argc > 2)
    {
        for (int i = 0; i < argc - 2; i++)
        {
            if ((fp = fopen(argv[i + 2], "r")) == NULL)
            {
                fprintf(stderr, "Can't open the %s file.\n", argv[i + 2]);
                exit(EXIT_FAILURE);
            }
            while ((ch = fgetc(fp)) != EOF)
            {
                if (ch == argv[1][0])
                {
                    count++;
                }
            }
            fprintf(stdout, "The character %c has appeared %d times in %s file.\n", argv[1][0], count, argv[i + 2]);
        }
    }
    else
    {
        printf("Please enter the file name that you want to open.\n");
        scanf("%s", file_name);
        if ((fp = fopen(file_name, "r")) == NULL)
        {
            fprintf(stderr, "Can't open the %s file.\n", file_name);
            exit(EXIT_FAILURE);
        }
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == argv[1][0])
            {
                count++;
            }
        }
        fprintf(stdout, "The character %c has appeared %d times in %s file.\n", argv[1][0], count, file_name);
    }
    fclose(fp);
    */


    //11.��дһ�����򣬽������������в�������1��������һ���ַ�������2��������һ���ļ�����
    //Ȼ��ó�����Ҹ��ļ�����ӡ�ļ��а������ַ����������С���Ϊ�������������ж����������ַ��ģ�����Ҫʹ��fgets()������getc()��
    //ʹ�ñ�׼C�⺯��strstr()(11.5.7�ڼ�Ҫ���ܹ�����ÿһ���в���ָ���ַ����������ļ��е������ж�������255���ַ���
    //�����ļ��� �� ��ָ���ļ� �� fgetsѭ��¼��ÿһ�� �� �ж��Ƿ����Ŀ���ַ��� �� ���Ŀ���ַ������ڵ���
    //FILE *fp;
    //char temp[SLEN];
    //if ((fp = fopen(argv[2], "r")) == NULL) //��ָ���ļ�
    //{
    //    fprintf(stderr, "Can't open the %s file.\n", argv[2]);
    //    exit(EXIT_FAILURE);
    //}
    //while ((fgets(temp, SLEN, fp)) != NULL) //fgetsѭ��¼��ÿһ��
    //{
    //    if ((strstr(temp, argv[1])) != NULL) //�ж��Ƿ����Ŀ���ַ���
    //    {
    //        fputs(temp, stdout); //���Ŀ���ַ������ڵ���
    //    }
    //}
    //fclose(fp);














	return 0;
}