#include<stdio.h>
#include<stdlib.h>
//�����嵥8.5ʹ��
void display(char cr, int lines, int width);

int main()
{
    //�����嵥8.1
    //echo.c -- �ظ�����
    // char ch;
    // while ((ch = getchar()) != '#')//getchar()�ܶ����س��Ϳո񣬲�������
    // {
    //     putchar(ch);
    // }
    

    //�����嵥8.2
    //echo.c -- �ظ����룬ֱ���ļ���β
    // int ch;
    // while ((ch = getchar()) != EOF)//����ȡ�����½�βʱ��getchar���ص�ֵΪEOF��ֵ
    // {
    //     putchar(ch);//����Ctrl + Z��������
    // }


    //�����嵥8.3
    //file_eof.c -- ��һ���ļ�����ʾ���ļ�
    // int ch;
    // FILE * fp;
    // char fname[50]; //�����ļ���
    // printf("Enter the name of the file: ");
    // scanf("%s", fname);
    // fp = fopen(fname, "r"); //�򿪴���ȡ�ļ���fname��ʾ�ļ��������û��д·�����ͱ�ʾ�ڵ�ǰ·�����˱�ʾֻ��ģʽ������ļ����������ȡʧ��
    // if (fp == NULL) //��ȡʧ��ʱ����NULL
    // {
    //     printf("Failed to open file. Bye\n");
    //     exit(1); //����stdlib.h����Ϊ��ʹ��exit()
    // }
    // //getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
    // while ((ch = getc(fp)) != EOF) //��ȡ�ַ���getc()��ʾ��ȡ�ַ�����һ��ȡ����ȡʧ��ʱ����EOF��putc()��ʾ�����ַ�����һ������
    // {
    //     putchar(ch); //��ʾ����
    // }
    // fclose(fp); //�ر��ļ����������Ч��
    

    //�����嵥8.4
    //guess.c -- һ������Ҵ���Ĳ����ֳ���
    // int guess = 1;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", guess);
    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    // }
    // printf("I knew I could do it!\n");


    //�����嵥8.4��1
    //ȥ�����з���ɵĶ��δ�ӡ
    // int guess = 1;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", guess);
    // while (getchar() != 'y')
    // {
    //     printf("Well, then, is it %d?\n", ++guess);
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    // }
    // printf("I knew I could do it!\n");

    
    //�����嵥8.4��2
    //ȥ����n�ַ���ɵĴ�ӡ
    // int guess = 1;
    // char response;
    // printf("Pick an integer from 1 to 100. I will try to guess ");
    // printf("it.\nRespond with a y if my guess is right and with");
    // printf("\nan n if it is wrong\n");
    // printf("Uh...is your number %d?\n", ++guess);
    // while ((response = getchar()) != 'y')
    // {
    //     if (response == 'n')//��1�з�y�ַ���++guess, �˴���n�ַ���++guess
    //     {
    //         printf("Well, then, is it %d?\n", ++guess);
    //     }
    //     else//��n�ַ����޳�
    //     {
    //         printf("Sorry, I understand only y or n.\n");
    //     }
    //     while (getchar() != '\n')//�޳����з�\n�ַ�������\n�ַ��ͽ������
    //     {
    //         continue;
    //     }
    // }
    // printf("I knew I could do it!\n");


    //�����嵥8.5
    //showchar 1.c -- �нϴ�I/O����ĳ���
    int ch;//����ӡ�ַ�
    int rows, cols;//����������
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another charcter and two integers;\n");
        printf("Enter a new line to quit.\n");
    }
    printf("Bye.\n");
    
    


    return 0;
}


//�����嵥8.5ʹ��
void display(char cr, int lines, int width)
{
    int row, col;
    for ( row = 1; row <= lines; row++)
    {
        for ( col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        putchar('\n');
    }
}