#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

//�����ϰ6ʹ��
char get_first(void);
char choice(void);
float get_number(void);

int main()
{
    //��ϰ��
    //2.��������ֱ����ʲô����
    // putchar('H');
    // putchar('\007');
    // putchar('\n');
    // putchar('\b');


    //3.������һ����Ϊcount�Ŀ�ִ�г�������ͳ��������ַ��������һ��ʹ��count����ͳ��essay�ļ����ַ����������У�����ͳ�ƽ��������essayct�ļ��С�
    // count < essay > essayct


    // 4.������ϰ��3�еĳ�����ļ���������һ������Ч�����
    // a.essayct<essay
    // b.count essay
    // c.essay>count
    //������


    // 5.EOF��ʲô��
    //EOF��getchar������scanf()��һ������Ľ����ź�


    // 6.���ڸ����������ch��int���ͣ������ǻ������룩,���������ε�����ֱ���ʲô��
    // a.�������£�
    // If you quit, I will.[enter]
    // ��������£�
    // while ((ch = getchar() != 1)
    // putchar(ch);
    //a�����Ӧ��Ϊ:If you qu

    // b.�������£�
    // Harhar[enter]
    // ��������£�
    // while((ch=getchar())!="\n')
    // {
    //     putchar(ch++);
    //     putchar(++ch);
    // }
    //b�����Ӧ��Ϊ��HJacrthjacrt


    //7.C��δ���ͬ�����ϵͳ�еĲ�ͬ�ļ��ͻ���Լ����
    //C�ı�׼I/O��Ѳ�ͬ���ļ�ӳ��Ϊͳһ������ͳһ����


    //8.��ʹ�û��������ϵͳ�У�����ֵ���ַ�������������ʲôǱ�ڵ����⣿
    // ��ֵ����������ո�ͻ��з��������ַ����벻�ᡣ����������Ĵ��룺
    // int score;
    // char grade;
    // printf("Enter the score.\n");
    // scanf("%s",%score);
    // printf("Enter the letter grade.In");
    // grade=getchar();
    // ����������98,Ȼ����Enter���ѷ������͸�������ʵ��������һ�����з���������з����������������У���Ϊ��һ����ȡ��ֵ(grade)��������ַ�����֮ǰ���������֣���Ӧ���ڴ����ַ�����֮ǰ���ɾ�����з��Ĵ��롣




    //�����ϰ
    // 1.���һ������ͳ���ڶ����ļ���β֮ǰ��ȡ���ַ�����
    // int count;
    // char ch;
    // while ((ch = getchar()) != EOF)
    // {
    //     count++;
    // }
    // printf("%d", count);
    
    // 2.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCHʮ����ֵ��
    // ע�⣬��ASCII�����У��ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��з����Ʊ������ֱ��ӡ\n��\��
    // ����ʹ�ÿ����ַ���ʾ�������磬ASCII��1��Ctrl+A,����ʾΪ^A��ע�⣬A��ASCIIֵ��Ctrl+A��ֵ����64�������Ǵ�ӡ�ַ�Ҳ�����ƵĹ�ϵ��
    // ��ÿ���������з���ӡ�µ�һ��֮�⣬ÿ�д�ӡ10��ֵ����ע�⣺��ͬ�Ĳ���ϵͳ������ַ����ܲ�ͬ����
    // char ch;
    // int count;
    // while ((ch = getchar()) != EOF)
    // {
    //     count++;
    //     if (ch < ' ')//�Ǵ�ӡ�ַ�����
    //     {
    //         if (ch == '\n')
    //         {
    //             printf("\\n");
    //             printf(" %d\t", ch);
    //             printf("\n");
    //             count = 0;
    //         }
    //         else if (ch == '\t')
    //         {
    //             printf("\\t");
    //             printf(" %d\t", ch);
    //         }
    //         else//�����Ǵ�ӡ�ַ�
    //         {
    //             printf("^%c", (int)ch + 64);
    //             printf(" %d\t", ch);
    //         }
    //     }
    //     else//�ɴ�ӡ�ַ�����
    //     {
    //         putchar(ch);
    //         printf(" %d\t", ch);
    //     }
    //     if (count == 10)
    //     {
    //         count = 0;
    //         printf("\n");
    //     }
    // }



    //3.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ����������Сд��ĸ��ֵ�������ġ�����ʹ��ctype.h���к��ʵķ��ຯ�������㡣
    // char ch;
    // int count_lower = 0;
    // int count_upper = 0;
    // while ((ch = getchar()) != EOF)
    // {
    //     if (islower(ch))
    //     {
    //         count_lower++;
    //     }
    //     else if (isupper(ch))
    //     {
    //         count_upper++;
    //     }
    // }
    // printf("The count of lower alpha is %d, and the count of upper alpha is %d.\n", count_lower, count_upper);
    


    //4.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ����ƽ��ÿ�����ʵ���ĸ����
    //��Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ�������Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô�ࣨ�����Ƚ�������㣬����ʹ��ctype.hϵ���е�ispunct()��������
    // char ch;
    // int count_alpha = 0;
    // int count_word = 0;
    // float average;
    // while ((ch = getchar()) != EOF)
    // {
    //     if (ch != '\n' && ispunct(ch) == false && ch != ' ')//�����㻻�з����ո����������
    //     {
    //         count_alpha++;
    //     }
    //      if (ch == ' ' || ch == '\n')
    //     {
    //         count_word++;//���㵥������
    //     }
    // }
    // average = (float)count_alpha / (float)count_word;
    // printf("The average letter for each word is %.2f", average);
    



    //5.�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ�
    //���磬���������50,ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ�β²��ֵӦ��50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β²��ֵӦ��50��75����ֵ���ȵȡ�
    //ʹ�ö��ֲ��ң�binary search)���ԣ�����û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�
    // int guess, num;
    // char respond;
    // int MIN = 1;
    // int MAX = 100;
    // printf("Pich an integer from i to 100. I will try to guess it.\nRespond with a b if my guess is bigger and with an s if it is smaller.\nRespond with a y if my guess is right.\n");
    // printf("Please enter an integer: \n");
    // scanf("%d", &num);//�趨�յ�
    // guess = 50;//��ʼ��Ϊ50
    // while (getchar() != '\n')//���������ַ�
    // {
    //     continue;
    // }
    // printf("Uh...is your numnber %d?\n", guess);
    // while (guess != num)
    // {
    //     while ((respond = getchar()) != 'y')
    //     {
    //         if (respond == 'b')
    //         {
    //             printf("Well, Your guess is bigger than that integer.\nTry it again.\n");
    //             MAX = guess;
    //             guess = (MIN + MAX) / 2;
    //             printf("Uh...is your numnber %d?\n", guess);
    //         }
    //         else if (respond == 's')
    //         {
    //             printf("Well, your guess is smaller than that integer.\nTry it again.\n");
    //             MIN = guess;
    //             guess = (MIN + MAX) / 2;
    //             printf("Uh...is your numnber %d?\n", guess);
    //         }
    //         else
    //         {
    //             printf("Sorry, I only understand b, s or y.\n");
    //         }
    //         while (getchar() != '\n')
    //         {
    //             continue;
    //         }
    //     }
    // }
    // printf("You get it, the number is %d.\n", guess);//�¶��ˣ�����ѭ��
    


    //6.�޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�1���ǿհ��ַ�������һ���򵥵ĳ����в��ԡ�
    // char ch;
    // ch = get_first();
    // putchar(ch);



    //7.�޸ĵ�7�µı����ϰ8,���ַ��������ֱ�ǲ˵���ѡ���q����5��Ϊ��������ı�ǡ�




    //8.��дһ��������ʾһ���ṩ�ӷ����������˷��������Ĳ˵�������û�ѡ���ѡ��󣬳�����ʾ�û������������֣�Ȼ��ִ���û��ղ�ѡ��Ĳ�����
    //�ó���ֻ���ܲ˵��ṩ��ѡ�����ʹ��float���͵ı��������û���������֣�����û�����ʧ�ܣ��������ٴ����롣
    //���г�������ʱ������û�����0��Ϊ��2������������,����Ӧ��ʾ�û���������һ����ֵ���ó����һ������ʾ�����£�
    // char ch;
    // ch = choice();
    // printf("%c", ch);





















    

    return 0;
}


char get_first(void)//ֻ¼������ĸ
{
    char ch;
    ch = getchar();
    while (isspace(ch))
    {
        ch = getchar();
        continue;
    }
    while (getchar() != '\n')
    {
        continue;
    }
    return ch;
}



char choice(void)
{
    char ch;
    printf("Enter the operation of your choice:\n");
    printf("a.add                   s. subtract\n");
    printf("m.multiplly             d.divide\n");
    printf("q.quit\n");
    ch = get_first();
    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        printf("Please respond with a, s, m, d or q.\n");
        ch = get_first();
    }
    return ch;
}


float get_number(void)
{
    float num;
    char ch;
    while ((scanf("%f", &num)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is ont an number.\n");
    }
    return num;
}
    