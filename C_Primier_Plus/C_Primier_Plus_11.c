#include<stdio.h>
#include<string.h>




#define MAXLENGTH 81
#define MSG "I��am special"
#define SLEN 40
#define LIM 5
#define STLEN 10
#define DEF "I am a #defined string."
#define SIZE 80



//����ԭ��
char* s_gets(char*, int);
void put1(const char*); //��ӡ�ַ����������\n
int put2(const char*); //��ӡһ���ַ�������ͳ�ƴ�ӡ�ַ���
void fit(char*, unsigned int); //�����ַ����ĳ���




int main()
{
    // ********************************************************************************************************************************************
    // �����嵥11.1
    // strings1.c
    // char words[MAXLENGTH] = "I am a strings in an array.";
    // const char * pt1 = "Something is pointing at me.";//��ָ�������ַ���
    // puts("Here are some strings:");
    // puts(MSG);
    // puts(words);
    // puts(pt1);
    // words[8] = 'p';
    // puts(words);


    // �����嵥11.2
    // strptr.c -- ���ַ�������ָ��
    // printf("%s, %p, %c\n", "We", "are", *"space farers");//"are"�ַ����ĵ�ַΪ���ַ�����Ԫ�صĵ�ַ��*"space farers"��ʾ��ȡ��ָ��ָ��ĵ�ַ������ĸ��ֵ


    // �����嵥11.3
    // addresses.c -- �ַ����ĵ�ַ
    //char ar[] = MSG; //��������ʽ�����ַ���
    //const char * pt = MSG; //��ָ����ʽ�����ַ���
    //printf("address of \"I'm special\": %p \n", "I'm special"); //I'm special�ĵ�ַ
    //printf(" address ar: %p\n", ar); //�ַ���ar�ĵ�ַ�����齫MSG���ַ������������ƹ����ˣ���ַ�Ѿ���ԭ��ַ��һ���ˡ�
    //printf(" address pt: %p\n", pt); //%p�������ַ���pt��ֵ����MSG�ĵ�ַ��
    //printf(" address of MSG: %p\n", MSG); //�ַ���MSG�ĵ�ַ
    //printf("address of \"I'm special\": %p \n", "I'm special"); //I'm special�ĵ�ַ
 


    // �����嵥11.4
    // arrchar.c -- ָ�����飬�ַ�������
    //const char* mytalents[LIM] =
    //{
    //    "Adding numbers swiftly",
    //    "Multiplying accurately" , "Stashing data",
    //    "Following instruction to the letter",
    //    "Understanding the C language"
    //};
    ////��ָ�붨���ַ�������, ��ָ������顣

    //char yourtalents[LIM][SLEN] =
    //{
    //    "Walking in a straight line",
    //    "Sleeping", "Watching television",
    //    "Mailing leters", "Reading email"
    //};
    ////�����鶨���ַ������飬����������顣

    //int i;
    //puts("Let's compare talents."); //ֱ������ַ���
    //printf("%-36s %-25s\n", "My Talents", "Your Talents"); //��ӡ�ַ���
    //for (i = 0; i < LIM; i++)
    //{
    //    printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    //}
    //printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));



    //�����嵥11.5
    //ָ����ַ���
    // const char* mesg = "Don't be a fool!";
    // const char* copy;
    // copy = mesg;
    // printf("%s\n", copy);
    // printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg); //ָ��mesg��ָ��copy�ĵ�ַ��ͬ���������Ƕ�ָ��ͬһ���ַ�������������ָ��ĵ�ַ��ͬ�������ǵ�
    // printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    


    //�����嵥11.6
    //ʹ��gets()��puts()
    //char words[STLEN]; //������һ�����ַ���
    //puts("Enter a string, please.");
    //gets(words); //���뵽�ַ���worlds��
    //printf("Your string twice:\n");
    //printf("%s\n", words); //��printf����ַ�
    //puts(words); //��puts�ٴ�����ַ�
    //puts("Done."); //���ָ���ַ�

  

    //�����嵥11.7
    //char words[STLEN]; //��ʼ��һ�����ַ���
    //puts("Enter a string, please."); //���ָ���ַ���
    //fgets(words, STLEN, stdin); //�����ַ�
    ////��һ�������Ƕ����ַ���λ��
    ////�ڶ��������Ƕ��������ַ�����
    ////������������ָ��������ļ���stdin��ʾ�Ӽ��̶���
    //printf("Your string twice (puts(), then fputs()):\n");
    //puts(words); //puts()���ʱ����ӻ��з�
    //fputs(words, stdout); //fputs()���ʱ������ӻ��з�
    ////��һ��������������ַ�
    ////�ڶ���������ָ��Ҫ������ļ���stdout��ʾ��׼��ʾ����ʾ����
    //puts("Enter another string, please."); //���ָ���ַ�
    //fgets(words, STLEN, stdin); //�����ַ�
    //printf("Your string twice(puts(), then fputs()):\n");
    //puts(words); //����ַ�
    //fputs(words, stdout);
    //puts("Done.");



    //�����嵥11.8
    // char words[STLEN];
    // puts("Enter strings (empty line to quit):");
    // //fgets�����������½���ʱ�᷵�ؿ�ָ��
    // while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    // {
    //     fputs(words, stdout);
    // }
    // puts("Done.");



    //�����嵥11.9
    // int i;
    // char words[STLEN];
    // puts("Enter strings (enpty line to quit):");
    // while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') //��ȡ����
    // {
    //     //��֤����
    //     i = 0;
    //     while (words[i] != '\n' && words[i] != '\0') //�����ǿ��ַ��ͷǻ��з�
    //     {
    //         i++;
    //     }
    //     //ɾ�����з�
    //     if (words[i] == '\n')
    //     {
    //         words[i] = '\0';
    //     }
    //     else
    //     {
    //         while (getchar() != '\n') //�޳����зǻ��з�����
    //         {
    //             continue;
    //         }
    //     }
    //     puts(words);
    // }
    // puts("Done");
    
    


    //�����嵥11.11
    //char name1[11], name2[11];
    //int count;
    //printf("Please enter 2 names.\n");
    //count = scanf("%5s %10s", name1, name2); 
    ////scanf���ض�ȡ����������EOF
    ////%5s��ʾֻ��5���ַ����߶����հ�Ϊֹ����name1����5���ַ���ʣ�µı����ڻ��������ȵ�%10s��ʱ���ȡ
    //printf("I read the %d names %s and %s.\n", count, name1, name2);



    //�����嵥11.12
    //puts�����ʱ����ĩβ��ӻ��з����������ַ�ʱ��ֹͣ���
    //char str1[80] = "An array was initialized to me.";
    //const char* str2 = "A pointer was initialized to me."; //��ָ�붨����һ���ַ���
    //puts("I'm an argument to puts()."); //ֱ�Ӵ�ӡ�ַ�
    //puts(DEF); //��ӡ��ǰ����õ��ַ�
    //puts(str1); //ͨ���ַ�������ӡ�ַ�
    //puts(str2); //ͨ��ָ������ӡ�ַ�
    //puts(&str1[5]); //�ӵ�6���ַ�����ʼ��ӡ�ַ���
    //puts(str2 + 4); //���ַ�����ʼ�������ƶ�4����λ����ʼ��ӡ�ַ���

    

    //�����嵥11.13
    //char side_a[] = "Side A";
    //char dont[] = { 'W', 'O', 'W', '!' };
    //char side_b[] = "Side B";
    //puts(dont); //dong�����ַ�������Ϊȱ�ٿ��ַ�


    
    //�����嵥11.16
    //put_put.c -- �û��Զ����������
    //put1("If I'd as much money");
    //put1(" as I could spend,\n");
    ////put2�ķ���ֵ��Ϊprintf�еĲ������ȴ�ӡput2�е��ַ���
    //printf("I count %d characters.\n", put2("I never would cry old chairs to mend.")); 

    

    //�����嵥11.17
    //test_fit.c -- ʹ�������ַ������ȵĺ���
    //char mesg[] = "Things should be as simple as possible,"  "but not simpler";
    //puts(mesg); //��ӡ�ַ�
    //fit(mesg, 38); //����mesg�ַ���
    //puts(mesg); //���Ϻ��ٴ�ӡһ��
    //puts("Let's look at some more of the string.");
    //puts(mesg + 39); //mesg�����ƶ�39���ַ������ٴ�ӡ




    //�����嵥11.18
    //str_cat.c -- ƴ�������ַ���
    char flower[SIZE];
    char addon[] = "s smell like old shoes."; //��ʼ���ַ�������ֵ
    puts("What is your favorite flower?"); //ֱ�Ӵ�ӡ�ַ���
    if (s_gets(flower, SIZE)) //�����������һ���ַ���
    {
        strcat(flower, addon); //���ڶ����ַ����ĸ������ӵ���һ���ַ�����
        puts(flower);
        puts(addon);
    }
    else
    {
        puts("End of file encuntered!");
        puts("bye");
    }






















    

    


    return 0;
}





//��������
char* s_gets(char* st, int n) //���������λ�ú�����ַ�����
{
    char* ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);  //��ȡ����ʱ��fgets���ص�ָ����stһ�£������fgets��ָ�븳����ret_val
    if (ret_val) //��ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0') //���϶�ȡst[i]�� ֱ����ȡ�����ַ������ַ�
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}



void put1(const char* string) //��ӡ�ַ����������\n
{
    while (*string != '\0') //�ȼ���string[0] != '\0', ÿ���ַ��������Կ��ַ���β
    {
        putchar(*string++); 
    }
}



int put2(const char* string) //��ӡһ���ַ�������ͳ�ƴ�ӡ���ַ���
{
    int count;
    count = 0;
    while(*string) //*string��ʾ���ǿ��ַ���Ϊ�棬�ǿ��ַ�ʱΪ��
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); //���з�������
    return count;
}



void fit(char* string, unsigned int size) //�����ַ����ĳ���
{
    if (strlen(string) > size) //���ַ���string�ĳ��ȴ���sizeʱ����string���ϣ�����string[size]����ַ���Ȼ���ڣ�δ������
    {
        string[size] = '\0';
    }
}