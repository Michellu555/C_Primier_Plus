#include<stdio.h>
#include<string.h>
#include<ctype.h>




#define MAXLENGTH 81
#define MSG "I��am special"
#define SLEN 40
#define LIM 5
#define STLEN 10
#define DEF "I am a #defined string."
#define SIZE 80
#define BUGSIZE 13
#define ANSWER "Grant"
#define STOP "quit"
#define LISTSIZE 6
#define WORDS "beast"
#define TARGSIZE 7
#define MAX 20
#define HALT ""
#define LIMIT 81





//����ԭ��
char* s_gets(char*, int);
void put1(const char*); //��ӡ�ַ�����������\n
int put2(const char*); //��ӡһ���ַ�������ͳ�ƴ�ӡ�ַ���
void fit(char*, unsigned int); //�����ַ����ĳ���
void stsrt(char* strings[], int num); //�ַ���������
void ToUpper(char *); //���ַ�����ÿ���ַ�ת���ɴ�д
int PunctCount(const char*); //ͳ���ַ����б����ŵĸ���




//int main()
int main(int argc, char *argv[])
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
    //puts(words); //puts()���ʱ�����ӻ��з�
    //fputs(words, stdout); //fputs()���ʱ�������ӻ��з�
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
    //puts�����ʱ����ĩβ���ӻ��з����������ַ�ʱ��ֹͣ���
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
    //char flower[SIZE];
    //char addon[] = "s smell like old shoes."; //��ʼ���ַ�������ֵ
    //puts("What is your favorite flower?"); //ֱ�Ӵ�ӡ�ַ���
    //if (s_gets(flower, SIZE)) //�����ȡ��������һ���ַ���
    //{
    //    strcat(flower, addon); //���ڶ����ַ����ĸ������ӵ���һ���ַ�����
    //    puts(flower);
    //    puts(addon);
    //}
    //else
    //{
    //    puts("End of file encuntered!");
    //    puts("bye");
    //}




    //�����嵥11.19
    //join_chk.c -- ƴ�������ַ���������һ������Ĵ�С
    //char flower[SIZE];
    //char addon[] = "s smell like old shoes.";
    //char bug[BUGSIZE];
    //int available;
    //puts("What is your favorite flower?");
    ////��flower�������ַ� �� �ж�ʣ��ռ��Ƿ����addon���� �� ���������ɺϲ�
    //s_gets(flower, SIZE); //�����ַ�
    //if (strlen(flower) + strlen(addon) + 1 <= SIZE) //�ж�ʣ�೤���ܷ�����addon
    //{
    //    strcat(flower, addon); //�ϲ��ַ�
    //    puts(flower);
    //}
    ////���ַ��ϲ���bug�� �� �����ַ���bug�� �� ��������ַ����� �� ʹ��strncat�����ַ�
    //s_gets(bug, BUGSIZE); //�����ַ���bug��
    //available = BUGSIZE - strlen(bug) - 1; //��������ַ����ȣ�������һ�������ַ�
    //strncat(bug, addon, available); //�ϲ�available���ַ���bug��
    //puts(bug);


    
    //�����嵥11.20
    //nogo.c -- �������Ƿ����������У�
    //char try[SIZE];
    //puts("Who is buried in Grant's tomb?");
    //s_gets(try, SIZE); 
    //while (try != ANSWER) //try��ANSWER����ָ�룬������ָ��ĵ�ַ��������ͬ
    //{
    //    puts("Wrong, try again.");
    //    s_gets(try, SIZE);
    //}
    //puts("That's right!");


    

    //�����嵥11.21
    //compare.c -- �ó��������������
    //char try[SIZE];
    //puts("Who is buride in Grant's tomb?");
    //s_gets(try, SIZE);
    ////strcmp�������ڱȽ������ַ�������������ַ���һ�£��ͷ���0����һ�¾ͷ��ط���ֵ
    //while (strcmp(try, ANSWER) != 0) 
    //{
    //    puts("Wrong, try again.");
    //    s_gets(try, SIZE);
    //}
    //puts("That's right!");


    
    
    //�����嵥11.22
    //compback.c -- strcmp()�ķ���ֵ
    //printf("strcmp(\"A\", \"A\") is ");  
    //printf("%d\n", strcmp("A", "A")); //����ֵ��0
    //printf("strcmp(\"A\", \"B\") is ");
    //printf("%d\n", strcmp("A", "B"));
    //printf("strcmp(\"B\", \"A\") is ");
    //printf("%d\n", strcmp("B", "A"));
    //printf("strcmp(\"C\", \"A\") is ");
    //printf("%d\n", strcmp("C", "A"));
    //printf("strcmp(\"Z\", \"a\") is ");
    //printf("%d\n", strcmp("Z", "a"));
    //printf("strcmp(\"apples\", \"apple\") is ");
    //printf("%d\n", strcmp("apples", "apple"));



    //�����嵥11.23
    //quit_chk.c -- ĳ����Ŀ�ʼ����
    // char input[LIM][SIZE]; //�ַ�������
    // int ct = 0;
    // printf("Enter up tp %d lines(type quit to quit):\n", LIM);
    // //ʹ��while�ж�������ַ��� �� �����ַ���
    // //while�ж� �� LIM���������Ƿ����� + s_gets�Ƿ���ȷ���� + �Ƚ��ַ����Ƿ����quit
    // while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(STOP, input[ct]) != 0)
    // {
    //     ct++;
    // }
    // printf("%d strings entered.\n", ct);
    //ע�����LIM���������Ƿ����� + s_gets�Ƿ���ȷ���� + �Ƿ�����ո�
    // while (ct < LIM && s_gets(input[ct], SIZE)) != NULL && input[ct][0] != '\0') //��Ϊ���з��ᱻs_gets�����滻�ɿ��ַ�������ֱ�Ӽ����ַ�����
    
    



    //�����嵥11.24
    //strsrch.c -- ʹ��strncmp()
    //�����ַ��������е��ַ���ǰ5���ַ��Ƿ��ָ���ַ���һ��
    //ʹ��strncmp�����ж�
    // const char *list[LISTSIZE] = 
    // {
    //     "astronomy", "astounding",
    //     "astrophysics", "ostracize",
    //     "asterism", "astrophobia"
    // };
    // int count = 0;
    // for (int i = 0; i < LISTSIZE; i++)
    // {
    //     if (strncmp(list[i], "astro", 5) == 0) //����ǰ5���ַ���astroһ�µ��ַ���
    //     {
    //         printf("Found: %s\n", list[i]); //��ӡ����
    //         count++; 
    //     }
        
    // }
    // printf("The list contained %d words beginning with astro.\n", count);




    //�����嵥11.25
    //copy1.c -- ��ʾstrcpy()
    //strcpy��������copy�ַ���
    //Ҫ��ѭ��������q��ͷ���ַ��� �� �ж��Ƿ�����q��ͷ���ַ��� �� ����Ǿ�¼�벢�Ҽ�����һ�� ������Ǿ����� �� ��¼����ַ���ѭ����ӡ����
    //����ʹ��һ���ַ���������������ַ���������Ҫ��ʱ��ŵ����飬����ͷ��Ϊq��ʱ��ͼ�������һ��һֱ������q��ͷ���ַ��ż�һ
    // char qwords[LIM][SIZE]; //���ڴ�ſ�ͷΪq���ַ�
    // char temp[SIZE]; //������ʱ����ַ�
    // int count = 0;
    // printf("Enter %d words beginning with q:\n", LIM);
    // while (count < LIM && s_gets(temp, SIZE)) //ѭ��¼���ַ���
    // {
    //     if (temp[0] == 'q') //�жϵ�һ���ַ��Ƿ���q
    //     {
    //         strcpy(qwords[count], temp);
    //         count++;
    //     }
    //     else
    //     {
    //         printf("%s doesn't begin with q!\n", temp);
    //     }
    // }
    // puts("Here are the words accepted:");
    // for (int i = 0; i < LIM; i++)
    // {
    //     puts(qwords[i]);
    // }




    //�����嵥11.26
    //copy2.c -- ʹ��strcpy()
    //���ַ������Ƶ���һ�ַ�����ָ��λ�ã����ǿ�ͷλ��
    // const char *orig = WORDS; //��ʼ���ַ�������ֵ
    // char copy[SIZE] = "be the best that you can be.";
    // char *ps;
    // puts(orig); //����ǰ���ַ���
    // puts(copy);
    // strcpy(copy + 7, orig); //���ַ������Ƶ�ָ��λ��
    // puts(orig); //���ƺ���ַ���
    // puts(copy); //orig�ַ����еĿ��ַ���Ҳ���ַ���Ҳ�ᱻ���ƹ���
    
    

    //�����嵥11.27
    //copy3.c -- ʹ��strncpy()
    // char qwords[LIM][TARGSIZE]; //���ڴ�ſ�ͷΪq���ַ�
    // char temp[SIZE]; //������ʱ����ַ�
    // int count = 0;
    // printf("Enter %d words beginning with q:\n", LIM);
    // while (count < LIM && s_gets(temp, SIZE)) //ѭ��¼���ַ���
    // {
    //     if (temp[0] == 'q') //�жϵ�һ���ַ��Ƿ���q
    //     {
    //         strncpy(qwords[count], temp, TARGSIZE - 1); //����������Ϊ����Ŀ���ַ���������ַ���
    //         qwords[count][TARGSIZE - 1] = '\0'; //�����һ���ַ���ֵΪ���ַ���������������ַ���
    //         count++;
    //     }
    //     else
    //     {
    //         printf("%s doesn't begin with q!\n", temp);
    //     }
    // }
    // puts("Here are the words accepted:");
    // for (int i = 0; i < LIM; i++)
    // {
    //     puts(qwords[i]);
    // }





    //�����嵥11.28
    //format.c -- ��ʽ���ַ���
    // char first[MAX];
    // char last[MAX];
    // char formal[2 * MAX + 10];
    // double prize;
    // puts("Enter your first name.");
    // s_gets(first, MAX);
    // puts("Enter your last name:");
    // s_gets(last, MAX);
    // puts("Enter your prize money:");
    // scanf("%lf", &prize);
    // sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize); //%-19s��ʾ����룬ռ19���ַ�λ��
    // puts(formal);

    


    //�����嵥11.29
    //sort_str.c -- �����ַ����� �������ַ���
    //��ȡ�ַ��� �� �����ַ��� �� ��ӡ�ַ���
    //char input[LIM][SIZE]; //�洢���������
    //char* ptstr[LIM]; //�ں�ָ�����������
    //int ct = 0; //�������
    //int k; //�������
    //printf("Input up to %d lines, and I will sort them.\n", LIM);
    //printf("To stop, press the Enter key at a line's start.\n");
    ////��ȡ�ַ���
    //while (ct < LIM && s_gets(input[ct], SIZE) && input[ct][0] != '\0') //���з��ᱻs_gets�滻�����ַ�������Ҫ�ж��Ƿ�Ϊ���ַ�
    //{
    //    //��ָ������ָ�����������
    //    ptstr[ct] = input[ct]; //��input[ct]����ַ������׵�ַ����ָ��ptstr[ct]
    //    ct++;
    //}
    ////�ַ�������
    //stsrt(ptstr, ct);
    //puts("Here's the sorted list:\n");
    ////��ӡ�ַ���
    //for (k = 0; k < ct; k++)
    //{
    //    puts(ptstr[k]);
    //}





    //�����嵥11.30
    //mod_str.c -- �޸��ַ���
    //�����ַ� �� ��strchr�������һ��з����滻�����ַ� �� ���ַ���ת����ȫ��д��ĸ �� ��ӡ�ַ��� �� ��ӡ���ж��ٸ����
    //char line[LIMIT];
    //char *find;
    //puts("Please enter a line");
    //fgets(line, LIMIT, stdin);
    ////���һ��з����滻�����ַ�
    //find = strchr(line, '\n');
    //if (find)
    //{
    //    *find = '\0';
    //}
    ////ת���ɴ�д��ĸ
    //ToUpper(line);
    ////��ӡ�ַ���
    //puts(line);
    ////��ӡ���ж��ٸ����
    //printf("That line has %d punctuation characters.\n", PunctCount(line));

    
    

    //�����嵥11.31
    //repeat.c -- ��������main����
    /*
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 0; count < argc; count++)
    {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");
    */

    char * ptr;
    char list1[20] = "Hello";
    char list2[6] = "lol";
    //strcpy(list1 + 4, list2);
    //strncat(list1, list2, 3);
    //puts(list1);
    ptr = strpbrk(list1, list2);
    puts(ptr);


  
    


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



void put1(const char* string) //��ӡ�ַ�����������\n
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






void stsrt(char* strings[], int num) //�ַ���������
{
    char* temp;
    for (int top = 0; top < num - 1; top++)
    {
        for (int seek = top + 1; seek < num; seek++)
        {
            if (strcmp(strings[top], strings[seek]) > 0) //���ǰһ���ַ������ں�һ��֮ǰ, �ͷ���һ����ֵ
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}






void ToUpper(char * test) //���ַ�����ÿ���ַ�ת���ɴ�д
{
    while (*test) //�ж��Ƿ�Ϊ���ַ���
    {
        *test = toupper(*test);
        test++;
    }
}


int PunctCount(const char* test) //ͳ���ַ����б����ŵĸ���
{
    int count = 0;
    while (*test)
    {
        if (ispunct(*test))
        {
            count++;
        }
        test++;
    }
    return count;
}