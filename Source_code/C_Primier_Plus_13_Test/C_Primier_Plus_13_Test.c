#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>




#define LEN 4096




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