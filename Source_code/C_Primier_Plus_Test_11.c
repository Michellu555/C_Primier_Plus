#include<stdio.h>
#include<ctype.h>


#define LEN 30



void get_input(char*, int); //��ȡǰn���ַ�������
void get_inputs(char*, int); //��ȡǰn���ַ�������
char* get_word(char*); //��ȡ��һ������
char* get_char(char*, char); //���ַ����в���ָ���ַ�
int is_within(char*, char); //���ַ����в����Ƿ����ָ���ַ�
void mystrncpy(char*, char*, int); //����һ���ַ�����ָ���ַ����Ƶ�ǰһ���ַ�����
char* string_in(char*, char*); //����ǰһ���ַ������Ƿ������һ���ַ���
void inverte(char*); //���ַ�������
void delet_space(char*); //ɾ���ַ����еĿո��
void get_choice(char*[], char); //��ȡѡ��ִ��
int count_firstword(char*); //��ȡ��һ�����ʵĳ���

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
    //char input[40];
    //char *output;
    //printf("Please enter a sentense, the program will print the first word.\n");
    //puts(get_word(input));



    // 5.��Ʋ�����һ��������������1�������β�ָ�����ַ����������в��ҵ�2�������β�ָ�����ַ��״γ��ֵ�λ�á�
    // ����ɹ����ú�����ָ����ַ���ָ�룬������ַ�����δ�ҵ�ָ���ַ����򷵻ؿ�ָ�루�ú����Ĺ�����strchr()������ͬ����
    // ��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
    // char input[LEN];
    // char* output;
    // char ch;
    // printf("Please enter the string(^Z to quit):");
    // while (fgets(input, LEN, stdin) && input[0] != '\0') //¼���ַ���
    // {
    //     puts("What character are you looking for?");
    //     ch = getchar();  //¼��ָ��֧��
    //     while (getchar() != '\n') //��������ڻ�������\n
    //     {
    //         continue;
    //     }
    //     output = get_char(input, ch); //�����ַ�
    //     if (output != NULL) //������
    //     {
    //         puts("the character and its address:");
    //         putchar(*output);
    //         printf("\t%p\n", output);
    //     }
    //     else
    //     {
    //         puts("this character doesn't exist in the string!");
    //     }
    //     puts("Please enter the next string:");
    // }



    // 6.��дһ����Ϊis_within()�ĺ���������һ���ַ���һ��ָ���ַ�����ָ����Ϊ���������βΡ����ָ���ַ����ַ����У��ú�������һ������ֵ(��Ϊ�棩��
    // ���򣬷���0(��Ϊ�٣�����һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
    // char input[LEN];
    // int output;
    // char ch;
    // printf("Please enter the string(^z to quit): ");
    // while (fgets(input, LEN, stdin) && input[0] != '\n')
    // {
    //     puts("What characeter are you looking for? ");
    //     ch = getchar();
    //     while (getchar() != '\n')
    //     {
    //         continue;
    //     }
    //     output = is_within(input, ch);
    //     if (output == 1)
    //     {
    //         puts("This character is whitin the string.");
    //     }
    //     else
    //     {
    //         puts("This character doesn't exist in the string.");
    //     }
    //     puts("Please enter the next string: ");
    // }



    // 7.strncpy(s1,s2,n)������s2�е�n���ַ�������s1�У��ض�s2,�����б�Ҫ�Ļ���ĩβ��ӿ��ַ������s2�ĳ�����n�����n,Ŀ���ַ��������Կ��ַ���β��
    // �ú�������s1���Լ���дһ�������ĺ�������Ϊmystrncpy()����һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
    // char string1[LEN];
    // char string2[LEN];
    // int length;
    // printf("Please enter a string to copy: ");
    // while (fgets(string2, LEN, stdin) && string2[0] != '\0')
    // {
    //     puts("Please enter the length that you want to copy: ");
    //     scanf("%d", &length);
    //     getchar();
    //     mystrncpy(string1, string2, length);
    //     fputs(string2, stdout);
    //     puts("Please enter the next string(^z to quit): ");
    // }


    // 8.��дһ����Ϊstring_in()�ĺ�������������ָ���ַ�����ָ����Ϊ�����������2���ַ����а�����1���ַ������ú��������ص�1���ַ�����ʼ�ĵ�ַ��
    // ���磬string_in("hats","at")������hats��a�ĵ�ַ�����򣬸ú������ؿ�ָ�롣��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
    /*
    char st1[LEN];
    char st2[LEN];
    char* output;
    puts("Please enter the first string: ");
    while (fgets(st1, LEN, stdin) && st1[0] != '\0')
    {
        puts("Please enter the seconde string: ");
        while (fgets(st2, LEN, stdin) && st2[0] != '\0')
        {
            output = string_in(st1, st2);
            if (output != NULL)
            {
                printf("The second string is inclouding in the first string.\n");
                printf("The adress for the first character in the strings is %p.\n", output);
            }
            break;
        }
        puts("Please enter the first string.");
    }
    */


    //9.��дһ�����������ַ����е��������䷴���ַ������档��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
    /*
    char input[LEN];
    puts("Please enter a string and the program will inverte this string.");
    while (fgets(input, LEN, stdin) && input[0] != '\0')
    {
        inverte(input);
        printf("The inverted string is \n%s", input);
        puts("Please enter another string: ");
    }
    */



    //10.��дһ����������һ���ַ�����Ϊ��������ɾ���ַ����еĿո�
    //��һ�������в��Ըú�����ʹ��ѭ����ȡ�����У�ֱ���û�����һ�п��С�
    //�ó���Ӧ��Ӧ�øú�����ÿ��������ַ���������ʾ�������ַ�����
    /*
    char input[LEN];
    puts("Please enter a string, the program will delet the space.");
    while (fgets(input, LEN, stdin) && input[0] != ' ')
    {
        delet_space(input);
        printf("The string after delet the space is \n%s", input);
        puts("Please enter another string.");
    }
    */
   
    

    //11.��дһ������������10���ַ������߶���EOFʱֹͣ���ó���Ϊ�û��ṩһ����5��ѡ��Ĳ˵���
    //��ӡԴ�ַ����б���ASCII�е�˳���ӡ�ַ����������ȵ���˳���ӡ�ַ��������ַ����е�1�����ʵĳ��ȴ�ӡ�ַ������˳���
    //�˵�����ѭ����ʾ�������û�ѡ���˳�ѡ���Ȼ���ó���Ҫ��������ɲ˵��и�ѡ��Ĺ��ܡ�
    //char st[10][LEN];
    //char* ptr[10];
    //char ch;
    //puts("Please enter ten strings: ");
    //for (int i = 0; i < 10; i++) //�����ַ���
    //{
    //    fgets(st[i], LEN, stdin);
    //    ptr[i] = st[i]; //��ָ��ָ����ַ���
    //}
    //puts("The menu is as below :");
    //puts("a: to output the strings.");
    //puts("b: to output the string with the order of ASCII.");
    //puts("c: to output the string whit the order of the string length.");
    //puts("d: to output the string with the order of the first word length.");
    //puts("q: to quit the program.");
    //puts("Please enter your choice: ");
    //while ((ch = getchar()) != 'q') 
    //{
    //    printf("You have choose %c\n", ch);
    //    get_choice(ptr, ch);
    //    while (getchar() != '\n')
    //    {
    //        continue;
    //    }
    //    //����ַ���
    //    puts("Please enter your choice: ");
    //}
    //puts("Bye!");


    //12.��дһ�����򣬶�ȡ���룬ֱ������EOF, �������ĵ���������д��ĸ����Сд��ĸ�������������������ַ�����ʹ��ctype.hͷ�ļ��еĺ�����
    //char st[LEN];
    //puts("Please enter a string: ");
    //fgets(st, LEN, stdin);
    //int count = strlen(st);
    //int count_words = 0;
    //int count_big_alp = 0;
    //int count_small_alp = 0;
    //int count_punct = 0;
    //int count_dig = 0;
    //for (int i = 0; i < count - 1; i++)
    //{
    //    if (st[i] == ' ') //�жϵ�����Ŀ
    //    {
    //        count_words++;
    //    }
    //    if (isupper(st[i])) //��д��ĸ����
    //    {
    //        count_big_alp++;
    //    }
    //    if (islower(st[i])) //Сд��ĸ����
    //    {
    //        count_small_alp++;
    //    }
    //    if (ispunct(st[i])) //������
    //    {
    //        count_punct++;
    //    }
    //    if (isdigit(st[i])) //���ּ���
    //    {
    //        count_dig++;
    //    }
    //}
    //printf("There are %d words, %d upper alphas, %d small alphas, %d punchs and %d digits.",
    //    count_words + 1, count_big_alp, count_small_alp, count_punct, count_dig);


    
  

    

   









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


char* get_char(char* st, char ch) //���ַ����в���ָ���ַ�
{
    while (*st) //�ж��Ƿ�������ַ���
    {
        if (*st == ch) //�ж��Ƿ������ָ���ַ�
        {
            return st; //����ָ��
        }
        st++;
    }
    return NULL; //���ؿ�ָ��
}


int is_within(char* st, char ch) //���ַ����в����Ƿ����ָ���ַ�
{
    while (*st)
    {
        if (*st == ch)
        {
            return 1;
        }
        st++;
    }
    return 0;
}


void mystrncpy(char* st1, char* st2, int n) //����һ���ַ�����ָ���ַ����Ƶ�ǰһ���ַ�����
{
    if ((strlen(st2)) < n)
    {
        st1 = st2; //���st2���ַ�����С��n������ֱ�ӽ���s2���Ƹ�s1
    }
    else
    {
        st2[n] = '\n'; //���st2���ַ���ȵ���n���Ͱ�st2[n]���óɿ��ַ���Ȼ���ٷ��ظ�st1
        st2[n + 1] = '\0';
        st1 = st2;
    }
}


char* string_in(char* st1, char* st2) //����ǰһ���ַ������Ƿ������һ���ַ���
{
    int len_st1, len_st2;
    len_st1 = strlen(st1);
    len_st2 = strlen(st2);
    for (int i = 0; i < len_st1 - len_st2; i++) ////ƥ��st2����ĸ�����ǰlen_st1 - len_st2 + 1���ַ���ƥ����ֱ�ӷ��ؿ��ַ�
    {
        while (st1[i] == st2[0]) //�Ѿ�ƥ����������ĸ
        {
            int m = i + 1;
            int n = 1;
            while (st1[m] == st2[n] && n < len_st2 - 1) //�ж�ʣ�µ��ַ��Ƿ�ƥ��
            {
                m++;
                n++;
            }
            if (n = len_st2 - 1) //�ж��Ƿ�ȫƥ��
            {
                return &st1[i]; //���ƥ�䣬�򷵻����ַ��ĵ�ַ
            }
            break;
        }
    }
    return NULL; //�����ƥ�䣬�򷵻ؿ�ָ��
}


void inverte(char* st) //���ַ�������
{
    int len = strlen(st);
    int max_ch;
    char temp;
    if (st[len - 1] == '\n') //�ж���Ҫ������ַ��ж�����
    {
        max_ch = len - 1; //�����з����ַ����ų������з�
    }
    else
    {
        max_ch = len;
    }
    for (int i = 0; i < max_ch / 2; i++) //�ַ�����
    {
        temp = *(st + i);
        *(st + i) = *(st + max_ch - i - 1);
        *(st + max_ch - i - 1) = temp;
    }
}


void delet_space(char* st) //ɾ���ַ����еĿո��
{
    char* temp;
    int i = 0;
    int len = strlen(st) - 1;
    while (i < len)
    {
        if (*(st + i) != ' ') //�ж��Ƿ�����˿ո��
        {
            i++;
        }
        else
        {
            *(st + i) = '\0'; //���ַ���st�ض�
            temp = st + i + 1; //����ָ��ָ��ԭ�ո��һ���ַ�λ��
            strcat(st, temp); //���ضϺ��st��tempƴ������
            len = strlen(st) - 1; //ȥ���˿ո������len���ȼ�1
        }
    }
}



void get_choice(char* st[], char ch) //��ȡѡ��ִ��
{
    char* temp;
    int count_st1, count_st2;
    switch (ch)
    {
    case 'a': //��ӡԴ�ַ���
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'b': //��ASCII˳���ӡ�ַ���
        for (int j = 0; j < 9; j++)
        {
            for (int m = j + 1; m < 10; m++)
            {
                if (strcmp(st[j], st[m]) > 0) //��С��������
                {
                    temp = st[m]; //��λ��
                    st[m] = st[j];
                    st[j] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'c': //�����ȵ���˳���ӡ�ַ���
        for (int m = 0; m < 9; m++)
        {
            for (int n = m + 1; n < 10; n++)
            {
                if (strlen(st[m]) > strlen(st[n])) //�Ӷ̵�����
                {
                    temp = st[n];
                    st[n] = st[m];
                    st[m] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    case 'd': //���ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���
        for (int m = 0; m < 9; m++)
        {
            for (int n = m + 1; n < 10; n++)
            {
                count_st1 = count_firstword(st[m]); //��ȡ��һ�����ʵĳ���
                count_st2 = count_firstword(st[n]);
                if (count_st1 > count_st2) //�Ӷ̵�����
                {
                    temp = st[m];
                    st[m] = st[n];
                    st[n] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            fputs(st[i], stdout);
        }
        break;
    default:
        puts("Illegal input, please enter 'a', 'b', 'c', 'd' or 'q'");
        break;
    }
}


int count_firstword(char* st) //��ȡ��һ�����ʵĳ���
{
    int count = 0;
    while (isalpha(*st++)) //�ж��Ƿ��˵��ʽ�β
    {
        count++;
    }
    return count;
}
