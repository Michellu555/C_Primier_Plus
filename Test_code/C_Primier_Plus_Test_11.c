#include<stdio.h>
#include<ctype.h>


#define LEN 10



void get_input(char*, int); //��ȡǰn���ַ�������
void get_inputs(char*, int); //��ȡǰn���ַ�������
char* get_word(char*); //��ȡ��һ������

int main()
{
    // 1.��Ʋ�����һ���������������л�ȡ��n���ַ��������հס��Ʊ�������з���,�ѽ��������һ����������ĵ�ַ��������Ϊһ��������
    // �����ַ��� �� �ú���¼���ַ� �� �ж��Ƿ��˽�β �� �����һ���ַ�����Ϊ���ַ� �� ����ַ�
    // char input[LEN];
    // printf("������%d���ַ��� �������з�ֹͣ��\n", LEN - 1);
    // get_input(input, LEN - 1);
    // puts(input);


    // 2.�޸Ĳ������ϰ1�ĺ�������n���ַ���ֹͣ�����ڶ�����1���հס��Ʊ�����з�ʱֹͣ���ĸ��������ĸ�ֹͣ������ֻʹ��scanf()��
    // char input[LEN];
    // printf("������%d���ַ��� �������з�ֹͣ��\n", LEN - 1);
    // get_input(input, LEN - 1);
    // puts(input);

    // 3.��Ʋ�����һ����������һ�������а�һ�����ʶ���һ�������У��������������е������ַ����ú���Ӧ��������1���ǿհ��ַ�ǰ������пհס���һ�����ʶ���Ϊû�пհס��Ʊ�����з����ַ����С�
    //�����ַ��� �� �ú���¼���ַ� �� ��isspace�ж��Ƿ��˵��ʿ�ͷ �� ��isspace�ж��Ƿ��˵��ʽ�β �� ���������ַ� �� ����ַ���
    char input[40];
    char *output;
    printf("Please enter a sentense, the program will print the first word.\n");
    puts(get_word(input));

   









    return 0;
}


void get_input(char* st, int n) //��ȡǰn���ַ��ղ�����
{
    int i = 0;
    do
    {
        st[i] = getchar();
    } while (st[i] != '\n' && ++i < n);
    st[i] = '\0';
}


void get_inputs(char* st, int n) //��ȡǰn���ַ��ղ�����
{
    int i = 0;
    do
    {
        st[i] = getchar();
    } while (st[i] != '\n' && st[i] != ' ' && st[i] != 't' && ++i < n);
    st[i] = '\0';
}


char* get_word(char* st) //��ȡ��һ������
{
    char* str;
    fgets(st, 40, stdin);
    while (isspace(*st)) //�ж����Ƿ��˵��ʿ�ͷ
    {
        st++;
    }
    str = st;


   while (isalpha(*st)) //�ж��Ƿ��˵��ʽ�β
   {
       st++;
   }
   *st = '\0';
   
  
   while (*st != '\n')
   {
       *st = '\0';
       st++;
   }
  
    return str;
}