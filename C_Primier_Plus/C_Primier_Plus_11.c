#include<stdio.h>
#include<string.h>




#define MAXLENGTH 81
#define MSG "I��am special"
#define SLEN 40
#define LIM 5



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
    
  




    


    return 0;
}

