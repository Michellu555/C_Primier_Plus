#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define LEN 40
#define MAX 41
#define CNTL_Z '\032'
#define SLEN 81


void tem(char[], int);

int main()
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



    //�����嵥13.3
    //addword.c -- ʹ��fprintf(), fscanf()��rewind()
    //�����ļ�ָ�����ַ��� �� ���ļ����ж��Ƿ�ɹ� �� �Ӽ������벢 �� ������Ϣ���뵽�ļ��� �� �Ӷ�λ���ļ���ͷ���ٴ����� �� �������Ļ����֤ �� �ر��ļ�
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

    //�����嵥13.4
    //reverse.c -- ������ʾ�ļ�������
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


    //�����嵥��1
    //ʹ��setvbuf��fflush
    //char buff[1024];
    //memset(buff, '\0', 1024);
    //setvbuf(stdout, buff, _IOFBF, 1024); //�����ָ���ļ�������ָ���Ŀռ䣬��ָ����ģʽ������ָ����С�Ļ���ռ�
    //fprintf(stdout, "Hello, world!");
    //fflush(stdout); //ǿ��ˢ�£��������������͵�ָ���ļ���
    //fprintf(stdout, "I'm Michel.Lu");
    //fflush(stdout);
    
    
    //�����嵥��2
    //ʹ��fwrite��fread
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


    //�����嵥13.5
    //append.c -- ���ļ�������һ���ļ���ĩβ
    


 
    
















    return 0;
}
