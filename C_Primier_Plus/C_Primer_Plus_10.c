#include<stdio.h>
#include<stdio.h>


#define MONTHS 12
#define SIZE 5
#define YEARS 5
#define ROWS 3
#define COLS 4


//����ԭ��
int sum(int *, int);
int sump(int * start, int * end);
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
void sum_rows(int ar[][COLS], int rows);//��һ���β�ָ��Ϊ��4��int���ַ��������ָ��
void sum_cols(int ar[][COLS], int);//��һ���β�ָ��Ϊ��4��int���ַ��������ָ��
int sum2d(int(*ar)[COLS], int rows);//��һ���β�ָ��Ϊ��4��int���ַ��������ָ��
int sum2dd(int rows, int cols, int ar[rows][cols]);//�䳤����
int sum2dc(const int ar[][COLS], int rows);
int sumc(const int ar[], int n);
void copy_arr(double ar1[], double ar2[], int n);
void print_ar(double ar[], int n);
void copy_ptr(double * ar1, double * ar2, int n);
void copy_ptrs(double ar1[], double ar2[], double * ptr);
int max_int_ar(int ar[], int n);
int getindex_double_ar(double ar[], int n);
double getdif_double_ar(double ar[], int n);
void inver_double_ar(double ar1[], double ar2[], int n);//�����з���
void copy_ptr_2D(double (* ar1)[3], double (* ar2)[3], int n);//copyָ����ά����
void copy_ptr_2D_NM(int n, int m, double ar1[n][m], double ar2[n][m]);//copy�����ά����
void print_ptr_2D_NM(int n, int m, double ar[n][m]);//��ӡ�����ά����
void getsum_ar(int ar1[], int ar2[], int ar3[], int n);//���������Ӧλ��Ԫ����Ӻ󸳸������������Ӧλ�õ�Ԫ��
void print_ar_2D(int (* ar)[5], int n);//��ӡ��ά����
void dou_ar_2D(int (* ar)[5], int n);//��ά����ĸ�ֵ����
double sumrain_year_ar(const double (* ar)[12], int n);//������㽵ˮ��
void sumrain_month_ar(const double(* ar)[12], int n);//���¼��㽵ˮ��
void input_ar(double (* ar)[5], int n);// a.���û���������ݴ�����3��5��������
double average_row(double ar[], int n);// b.����ÿ�飨5�������ݵ�ƽ��ֵ
double average_total(double (* ar)[5], int n);// c.�����������ݵ�ƽ��ֵ
double max_total(double ( * ar)[5], int n);// d.�ҳ���15�������е����ֵ
void inputvla_ar(int rows, int cols, double ar[rows][cols]);// a.�ñ߳�������û���������ݴ�����3��5��������
double averagevla_row(int rows, double ar[rows]);// b.����ÿ�飨5�������ݵ�ƽ��ֵ
double averagevla_total(int rows, int cols, double ar[rows][cols]);// c.�����������ݵ�ƽ��ֵ
double maxvla_total(int rows, int cols, double ar[rows][cols]);// d.�ҳ���15�������е����ֵ








int main()
{
  //****************************************************************************************************
  //�����嵥

  //�����嵥10.1
  //day_monl.c -- ��ӡÿ���µ�����
  // int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // int index;
  // for (index = 0; index < MONTHS; index++)
  // {
  //     printf("Month %2d has %2d days.\n", index + 1, days[index]);
  // }


  //�����嵥10.2
  //no_data.c -- δ��ʼ������
  // int no_date[SIZE];//δ��ʼ������
  // int i;
  // printf("%2s%14s\n", "i", "no_data[i]");
  // for (i = 0; i < SIZE; i++)
  // {
  //     printf("%2d%14d\n", i, no_date[i]);
  // }
    
    
  //�����嵥10.3
  //some_data.c -- ���ֳ�ʼ������
  // int some_data[SIZE] = {1492, 1066};//��ʼ��һ��������֮�������Ļ�ȫ��ĬȻΪ0
  // printf("%2s%14s\n", "i", "some_data[i]");
  // for (int i = 0; i < SIZE; i++)
  // {
  //     printf("%2d%14d\n", i, some_data[i]);
  // }


  //�����嵥10.4
  //day_mon2.c -- �ñ༭������Ԫ�ظ���
  // const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};//ʡ�Է������е����֣�����������ݳ�ʼ���б��е�������ȷ������Ĵ�С
  // int index;
  // for (index = 0; index < sizeof days / sizeof days[0]; index++)
  // {
  //     printf("Month %2d has %d days.\n", index + 1, days[index]);
  // }
    

  //�����嵥10.5
  //designate.c -- ʹ��ָ����ʼ����
  // int days[MONTHS] = {31, 28, [4] = 31, 30, 3, [1] = 29};
  // int i;
  // for (i = 0; i < MONTHS; i++)
  // {
  //     printf("%2d %d\n", i + 1, days[i]);
  // }


  //�����嵥10.6
  //bounds.c -- �����±�Խ��
  // int value1 = 44;
  // int arr[SIZE];
  // int value2 = 88;
  // int i;
  // printf("value1 = %d, value2 = %d\n", value1, value2);
  // for (i = -1; i <= SIZE; i++)//�±�-1���±�4��Խ��
  // {
  //     arr[i] = 2 * i + 1;
  // }
  // for (i = -1; i < 7; i++)//�±�-1���±�4��5��6ȫ��Խ��
  // {
  //     printf("%2d %d\n", i, arr[i]);
  // }
  // printf("value1 = %d, value2 = %d\n", value1, value2);
  // printf("adress of arr[-1]: %p\n", &arr[-1]);
  // printf("adress of arr[4]: %p\n", &arr[4]);
  // printf("adress of value1: %p\n", &value1);
  // printf("adress of value2: %p\n", &value2);


  //�����嵥10.7
  //rain.c -- ����ÿ����ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ����ˮ��
  //��2010 ~ 2014��Ľ�ˮ�����ݳ�ʼ������
  // const float rain[YEARS][MONTHS] = 
  // {
  //     {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
  //     {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
  //     {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
  //     {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
  //     {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
  // };
  // int year, month;
  // float subtot, total;
  // printf(" YEAT RAINFALL (inches)\n");
  // for (year = 0, total = 0; year < YEARS; year++)
  // {
  //     //����ÿһ�꣬���µĽ�ˮ���ܺ�
  //     for (month = 0, subtot = 0; month < MONTHS; month++)
  //     {
  //         subtot += rain[year][month];
  //     }
  //     printf("%5d %15.1f\n", 2010 + year, subtot);//ÿ���ӡһ�ν�ˮ��
  //     total += subtot;//���㽵ˮ����
  // }
  // printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);//��ӡ��ƽ����ˮ��
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // for (month = 0; month < MONTHS; month++)
  // {
  //     //ÿ���£�5���ƽ����ˮ��
  //     for (year = 0, subtot = 0; year < YEARS; year++)
  //     {
  //         subtot += rain[year][month];
  //     }
  //     printf("%4.1f ", subtot / YEARS); 
  // }
  // printf("\n");


  //�����嵥10.8
  //pnt_add.c -- ָ���ַ
  // short dates[SIZE];
  // short * pti;//��ʼ��ָ��
  // short index;
  // double bills[SIZE];
  // double * ptf;
  // pti = dates;//�������ַ����ָ��
  // ptf = bills;
  // printf("%23s %15s\n", "short", "double");
  // for ( index = 0; index < SIZE; index++)
  // {
  //   printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);
  // }


  //�����嵥10.9
  //day_mon3.c -- uses pointer notation
  // int days[MONTHS] = {31, 28, 31, 39, 31, 30, 31, 31, 30, 31, 30, 31};
  // int index;
  // for (index = 0; index < MONTHS; index++)
  // {
  //   printf("Month %2d has %d days.\n", index + 1, *(days + index));//days + index����days�����indexλԪ��
  // }
  

  //�����嵥10.10
  //sum_arr1.c -- ����Ԫ��֮��
  // int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  // long answer;
  // answer = sum(marbles, SIZE);
  // printf("The total number of marbles is %ld.\n", answer);
  // printf("The size of marbles is %zd bytes.\n", sizeof marbles);


  //�����嵥10.11
  //sum_arr2.c -- ����Ԫ��֮��
  // int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  // long answer;
  // answer = sump(marbles, marbles + SIZE);
  // printf("The total number of marbles is %ld.\n", answer);


  //�����嵥10.12
  //order.c -- ָ�������е����ȼ�
  // int data[2] = {100, 200};
  // int moredata[2] = {300, 400};
  // int * p1, * p2, * p3;
  // p1 = p2 = data;
  // p3 = moredata;
  // printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
  // printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
  // //*p1++��ʾ�����p1ָ��ָ���ֵ��Ȼ��ָ��������ƶ�һ����λ����δ�ı�ԭ�����е�ֵ
  // //*++p2��ʾ�Ƚ�p2ָ������ƶ�һ����λ��Ȼ��������ƶ����ָ��ָ���ֵ����δ�ı�ԭ�����е�ֵ
  // //��*p3��++��ʾ�����p3ָ��ָ���ֵ��Ȼ�󽫸�ֵ+1֮���ٸ��������Ѹı�ԭ�����е�ֵ
  // printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
  

  //�����嵥10.13
  //ptr_ops.c -- ָ�����
  // int urn[5] = {100, 200, 300, 400, 500};
  // int * ptr1, * ptr2, * ptr3;
  // ptr1 = urn;//������������ptr1
  // ptr2 = &urn[2];
  // //������ָ�룬�Լ����ָ��ĵ�ַ
  // printf("pointer value, dereferenced pointer, pointer adress:\n");
  // printf("ptr1 = %p, *prt1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//�ֱ��ʾָ��ptr1��ֵ����ptr1ָ��ĵ�ַ��ptr1ָ��ĵ�ַ��ֵ��ptr1�Լ��ĵ�ַ
  // //ָ��ӷ�
  // ptr3 = ptr1 + 4;//ptr1�Ⱥ��ƶ�4����λ
  // printf("\nadding an int to a pointer:\n");
  // printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));//*(ptr1 + 4)��ʾptr1����ƶ�4����λ֮��ָ���ֵ
  // //����ָ��
  // ptr1++;//ָ��ptr1����ƶ�һ����λ
  // printf("\nvalues after ptr1++:\n");
  // printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//ptr1ָ���λ�÷����˱仯�����Ǳ���ĵ�ַ��û�б仯
  // //�ݼ�ָ��
  // ptr2--;//ָ��ptr2��ǰ�ƶ���һ����λ
  // printf("\nvalues after --ptr2:\n");
  // printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
  // //�ָ�Ϊ��ʼֵ
  // --ptr1;
  // ++ptr2;
  // printf("\nPointers reset to original values:\n");
  // printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
  // //һ��ָ���ȥ��һ��ָ��
  // printf("\nsubraction one pointer from another:\n");
  // printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
  // //һ��ָ���ȥһ������
  // printf("\nsuracting an int from a pointer:\n");
  // printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);


  //�����嵥10.14
  //arf.c -- ��������ĺ���
  // double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
  // printf("The original dip array:\n");
  // show_array(dip, SIZE);
  // mult_array(dip, SIZE, 2.5);
  // printf("The dip array after calling mult_array():\n");
  // show_array(dip, SIZE);


  //�����嵥10.15
  //zippol.c -- zippo�������Ϣ
  // int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
  // printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);//zippo�ĵ�һ��Ԫ�صĵ�ַ�͵ڶ���Ԫ�صĵ�ַ, ��λΪ����int, 8���ֽ�.
  // printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);//zippo��һ��Ԫ��Ϊ����, zippo[0]Ϊ������ĵ�һ��Ԫ��, zippo[0] + 1Ϊ������ĵڶ���Ԫ��,��λΪ1��int, 4���ֽ�.
  // printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);//������ָ��zippoΪzipoo[0]��ֵ,��zipoo[0][0]�ĵ�ַ, *zipoo + 1��ʾzipoo[0][0]��һ����λ�ĵ�ַ
  // printf("zippo[0][0] =  %d\n", zippo[0][0]);//��ʾzipoo[0][0]��ֵ, ��2.
  // printf("*zippo[0] = %d\n", *zippo[0]);//��ʾzippo[0]�����һ��Ԫ�ص�ֵ, ��zippo[0][0]��ֵ, ��2.
  // printf("**zippo = %d\n", **zippo);//*zippo��ʾzippo�����Ԫ����ĵ�һ��Ԫ�ص�ֵ, ��zippo[0]����ĵ�ַ, *zippo[0]�Ľ��ͬ��, ��2.
  // printf("zippo[2][1] = %d\n", zippo[2][1]);//��ʾzippo�����Ԫ������3��Ԫ���е�1��Ԫ�ص�ֵ, ��6.
  // printf("*(*zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
  // //zippo + 2��ʾzippo��Ԫ�����е�����Ԫ��, *(zippo + 2)��ʾ�������ĵ�ַ, ��zippo[2]�ĵ�ַ, *(zippo + 2) + 1��ʾzippo[2][1]�ĵ�ַ, *(*(zippo + 2) + 1)��ʾ��zippo[2][1]��ֵ, ��3


  //�����嵥10.16
  //zippo2.c -- ͨ��ָ���ȡzippo����Ϣ
  // int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
  // int (*pz)[2];//����һ��ָ���������int�������ָ��
  // pz = zippo;//��ʼ��, ָ��zippo
  // printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);//pz��ʾzippo[0]�ĵ�ַ,��zippo[0][0]�ĵ�ַ, pz + 1��ʾzippo[1][0]�ĵ�ַ
  // printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);//pz[0]��ֵΪzippo[0][0]�ĵ�ַ, pz[0] + 1��ʾzippo[0][1]�ĵ�ַ
  // printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);//*pz��ʾzippo��ֵ, ��zippo[0]��ֵ, ��zippo[0][0]�ĵ�ַ, *pz + 1��ʾzippo[0][1]�ĵ�ַ
  // printf("pz[0][0] = %d\n", pz[0][0]);//��zippo[0][0]��ֵ, ��2
  // printf("*pz[0] = %d\n", *pz[0]);//��zippo[0][0]��ֵ, ��2
  // printf("**pz = %d\n", **pz);//��zippo[0][0]��ֵ, ��2
  // printf("pz[2][1] = %d\n", pz[2][1]);//ֵΪ3
  // printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));//��pz[2][1]��ֵ, ��zippo[2][1], ֵΪ3


  //�����嵥10.17
  //array2d.c -- �����ά����ĺ���
  // int junk[ROWS][COLS] = 
  // {
  //   {2, 4, 6, 8},
  //   {3, 5, 7, 9},
  //   {12, 10, 8, 6}
  // };
  // sum_rows(junk, ROWS);//�������
  // sum_cols(junk, ROWS);//�������
  // printf("Sum of all elements = %d\n", sum2d(junk, ROWS));


  //�����嵥10.18
  //vararr2d.c -- ʹ�ñ䳤����ĺ���
  // int i, j, rs = 3, cs = 10;
  // int junk[ROWS][COLS] =
  // {
  //   {2, 4, 6, 8},
  //   {3, 5, 7, 9},
  //   {12, 10, 8, 6}
  // };
  // int morejunk[ROWS - 1][COLS + 2] =
  // {
  //   {20, 30, 40, 50, 60, 70},
  //   {5, 6, 7, 8, 9, 10}
  // };
  // int varr[rs][cs];//�䳤����
  // for (i = 0; i < rs; i++)//��varr����¼��ֵ
  // {
  //   for (j = 0; j < cs; j++)
  //   {
  //     varr[i][j] = i * j + j;
  //   }
  // }
  // printf("3X5 arry\n");
  // printf("Sum of all elements = %d\n", sum2dd(ROWS, COLS, junk));//��junk�����Ԫ�صĺ�
  // printf("2X6 arry\n");
  // printf("Sunm of all elements = %d\n", sum2dd(ROWS - 1, COLS + 2, morejunk));//��morejunk�����Ԫ�صĺ�
  // printf("3X10 VAL\n");
  // printf("Sum of all elements = %d\n", sum2dd(rs, cs, varr));//��varr�����Ԫ�صĺ�

  //�����嵥10.19
  //flc.c -- ��Ȥ�ĳ���
  // int total1, total2, total3;
  // int *pl1;
  // int (*pl2)[COLS];//��ʼ����һ��ָ��4��int�������ָ��
  // pl1 = (int[2]){10, 20};//��ʼ����һ��������int�������ĸ����������������ҽ�pl1ָ�����������
  // pl2 = (int[2][COLS]){{1, 2, 3, -9}, {4, 5, 6, -8}};//��ʼ����һ��������������ĸ�����������ÿ�����麬��4������������pl2ָ�����������
  // total1 = sumc(pl1, 2);
  // total2 = sum2dc(pl2, 2);
  // total3 = sumc((int[]){4, 4, 4, 5, 5, 5}, 6);
  // printf("total 1 = %d\n", total1);
  // printf("total2 = %d\n", total2); 
  // printf("total3 = %d\n", total3);


  //**********************************************************************************************************************************************************
  // ��ϰ��
  // 1.����ĳ��򽫴�ӡʲô���ݣ�
  // int ref[] = {8, 4, 0 ,2};
  // int * ptr;
  // int index;
  // for ( index = 0, ptr = ref; index < 4; index++)
  // {
  //   printf("%d %d\n", ref[index], *ptr);
  // }


  // 2.�ڸ�ϰ��1�У�ref�ж��ٸ�Ԫ�أ�
  // ��ref��4��Ԫ��


  // 3.�ڸ�ϰ��1�У�ref�ĵ�ַ��ʲô��ref+1��ʲô��˼��++refָ��ʲô��
  // ��ref�ĵ�ַ��ref[0]�ĵ�ַ��ref+1��ָref[1]�� ++ref������Ϊref�Ǹ���ֵ


  // 4.������Ĵ����У�*ptr��*(ptr+2)��ֵ�ֱ���ʲô��
  // a.
  // int * ptr;
  // int torf[2][2] = {12, 14, 16};
  // ptr = torf[0];
  // printf("%d %d %d\n", *ptr, *(ptr + 2), *(ptr + 3));//*ptr��ֵΪ12�� *(ptr + 2)��ֵΪ16, *(ptr + 3)��ֵӦ��Ϊ0

  // b.
  // int * ptr;
  // int fort[2][2] = {{12}, {14, 16}};
  // ptr = fort[0];
  // printf("%d %d %d\n", *ptr, *(ptr + 2), *(ptr + 1));//*ptr��ֵΪ12�� *(ptr + 2)��ֵΪ14, *(ptr + 1)��ֵӦ��Ϊ0


  // 5.������Ĵ����У�**ptr��**(ptr+1)��ֵ�ֱ���ʲô��
  // a.
  // int (*ptr)[2];
  // int torf[2][2] = {12, 14, 16};
  // ptr = torf;
  // printf("%d %d\n", **ptr, **(ptr + 1));//**ptr��ֵΪ12�� **(ptr + 1)��ֵΪ16

  // b.
  // int (*ptr)[2];
  // int fort[2][2] = {{12}, {14, 16}};
  // ptr = fort;
  // printf("%d %d %d\n", **ptr, **(ptr + 1), *(*ptr + 1));//**ptr��ֵΪ12�� **(ptr + 1)��ֵΪ14, *(*ptr + 1)��ֵӦ��Ϊ0
  

  // 6.�����������������
  // int grid[30][100];
  // a.��1��д����ʾgrid[22][56]
  // grid[22][56]
  // b.��2��д����ʾgrid[22][0]
  // grid[22][0];
  // *grid[22]
  // c.��3��д����ʾgrid[0][0]
  // grid[0][0];
  // *grid[0];
  // **grid;


  // 7.��ȷ�������¸�������
  // a.digits��һ���ں�10��int����ֵ������
  // int digits[10];
  // b.rates��һ���ں�6��float����ֵ������
  // float rates[6];
  // c.mat��һ���ں�3��Ԫ�ص����飬ÿ��Ԫ�ض����ں�5������������
  // int mat[3][5];
  // d.psa��һ���ں�20��Ԫ�ص����飬ÿ��Ԫ�ض���ָ��int��ָ��
  // int * pas[20];
  // e.pstr��һ��ָ�������ָ�룬�������ں�20��char���͵�ֵ
  // char (* pstr)[20];


  // 8.
  // a.����һ���ں�6��int����ֵ�����飬����ʼ����Ԫ��Ϊ1��2��4��8��16��32
  // int ar[6] = {1, 2, 4, 8, 16, 32};
  // b.�������ʾ����ʾa����������ĵ�3��Ԫ�أ���ֵΪ4)
  // int a[2] = {4};
  // c.���������֧��C99/C11��׼������һ���ں�100��int��ֵ�����飬����ʼ�����һ��Ԫ��Ϊ-1,����Ԫ�ز�����
  // int ar[100] = {[99] = -1};
  // d.���������֧��C99/C11��׼������һ���ں�100��int����ֵ�����飬����ʼ���±�Ϊ5��10��11��12��13��Ԫ��Ϊ101,����Ԫ�ز�����
  // int ar[100] = {[5] = 101, [10] = 101, 101, 101, 101};


  // 9.�ں�10��Ԫ�ص������±귶Χ��ʲô��
  // ���ں�10��Ԫ�ص������±귶Χ��0-9


  // 10.�����������������
  // float rootbeer[10], things[10][5], *pf, value = 2.2;
  // int i = 3;
  // �ж����¸����Ƿ���Ч��
  // a.rootbeer[2]=value;//��Ч
  // b.scanf("%f", &rootbeer);//��Ч
  // c.rootbeer=value;//��Ч
  // d.printf("%f", rootbeer);//��Ч
  // e.things[4][4]=rootbeer[3];//��Ч
  // f.things[5]=rootbeer;//��Ч
  // g.pf=value;//��Ч�� value���ǵ�ַ
  // h.pf=rootbeer;//��Ч


  // 11.����һ��800��600��int�������顣
  // int ar[800][600];


  // 12.����������3�����飺
  // double trots[20];
  // short clops[10][30];
  // long shots[5][10][15];
  // a.�ֱ��Դ�ͳ��ʽ���Ա䳤����Ϊ�����ķ�ʽ��д����trots�����void����ԭ�ͺͺ�������
  //��ͳ��ʽ
  // void process(double ar[], int n);
  // process(trots, 20);
  //�䳤����
  // void processvla(int n, double ar[n]);
  // processvla(20, trots);
  // b.�ֱ��Դ�ͳ��ʽ���Ա䳤����Ϊ�����ķ�ʽ��д����clops�����void����ԭ�ͺͺ�������
  //��ͳ��ʽ
  // void process(short ar[][30], int n);
  // process(clops, 10);
  //�䳤����
  // void processvla(int n, int m, short ar[n][m]);
  // processvla(10, 30, clops);
  // c.�ֱ��Դ�ͳ��ʽ���Ա䳤����Ϊ�����ķ�ʽ��д����shots�����void����ԭ�ͺͺ�������
  //��ͳ��ʽ
  // void process(long ar[][10][15], int n);
  // process(shots, 5);
  //�䳤����
  // void processvla(int n, int m, int p, long ar[n][m][p]);
  // processvla(5, 10, 15, shots);


  // 13.��������������ԭ�ͣ�
  // void show(const double ar[], int n);//n������Ԫ�صĸ���
  // void show2(const double ar2[][3],int n);//n�Ƕ�ά���������
  // a.��дһ���������ã���һ���ں�8��3��9��2�ĸ������������ݸ�show()������
  // show((double[]){8, 3, 9, 3}, 4);
  // b.��дһ���������ã���һ��2��3�еĸ�����������8��3��9��Ϊ��1�У�5��4��1��Ϊ��2�У����ݸ�show2()������
  // show2((double[][3]){{8, 3, 9}, {5, 4, 1}}, 2)
    

  //**********************************************************************************************************************************************************
  // �����ϰ
  // 1.�޸ĳ����嵥10.7��rain.c������ָ����м��㣨��ȻҪ��������ʼ�����飩��
  // rain.c -- ����ÿ����ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ����ˮ��
  // ��2010 ~ 2014��Ľ�ˮ�����ݳ�ʼ������
  // const float rain[YEARS][MONTHS] = 
  // {
  //   {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
  //   {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
  //   {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
  //   {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
  //   {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
  // };
  // int year, month;
  // float subtot, total;
  // printf(" YEAT RAINFALL (inches)\n");
  // for (year = 0, total = 0; year < YEARS; year++)
  // {
  //   //����ÿһ�꣬���µĽ�ˮ���ܺ�
  //   for (month = 0, subtot = 0; month < MONTHS; month++)
  //   {
  //     // subtot += rain[year][month];
  //     subtot += *(*(rain + year) + month);
  //   }
  //   printf("%5d %15.1f\n", 2010 + year, subtot);//ÿ���ӡһ�ν�ˮ��
  //   total += subtot;//���㽵ˮ����
  // }
  // printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);//��ӡ��ƽ����ˮ��
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // for (month = 0; month < MONTHS; month++)
  // {
  //   //ÿ���£�5���ƽ����ˮ��
  //   for (year = 0, subtot = 0; year < YEARS; year++)
  //   {
  //     // subtot += rain[year][month];
  //     subtot += *(*(rain + year) + month);
  //   }
  //   printf("%4.1f ", subtot / YEARS); 
  // }
  // printf("\n");


  // 2.��дһ�����򣬳�ʼ��һ��double���͵����飬Ȼ��Ѹ���������ݿ�����3�����������У���main0��������4�����飩��
  // ʹ�ô������ʾ���ĺ������е�1�ݿ�����ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�������Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�����
  // ��3��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ�롣
  // Ҳ����˵������������������������������ʾ��
  // double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  // double target1[5];
  // double target2[5];
  // double target3[5];
  // ����1
  // copy_arr(target1, source, 5);
  // print_ar(target1, 5);
  // ����2
  // copy_ptr(target2, source, 5);
  // print_ar(target2, 5);
  // ����3
  // copy_ptrs(target3, source, source + 5);
  // print_ar(target3, 5);


  // 3.��дһ�����������ش�����int���������е����ֵ������һ���򵥵ĳ����в��Ըú�����
  // int max;
  // int ar[3] = {5, 1, 2};
  // max = max_int_ar(ar, 3);
  // printf("%d\n", max);


  // 4.��дһ�����������ش�����double�������������ֵ���±꣬����һ���򵥵ĳ����в��Ըú�����
  // int index;
  // double ar[5] = {9.1, 4.3, 12.6, 8.7, 5.5};
  // index = getindex_double_ar(ar, 5);
  // printf("The index of the maximum is %d.\n", index);


  // 5.��дһ�����������ش�����double�������������ֵ����Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в��Ըú�����
  // double dif;  
  // double ar[5] = {9.2, 4.3, 2.0, 8.7, 5.5};
  // dif = getdif_double_ar(ar, 5);
  // printf("The difference enter the maximum and minimum is %.1f\n", dif);


  // 6.��дһ����������double���������е����ݵ������У�����һ���򵥵ĳ����в��Ըú�����
  // double inver_ar[5];
  // double ar[5] = {9.2, 4.3, 2.0, 8.7, 5.5};
  // inver_double_ar(inver_ar, ar, 5);


  // 7.��дһ�����򣬳�ʼ��һ��double���͵Ķ�ά���飬ʹ�ñ����ϰ2�е�һ�����������Ѹ������е����ݿ�������һ����ά�����У���Ϊ��ά��������������飬���Կ���ʹ�ô���һά����Ŀ������������������е�ÿ�������飩��
  // double ar1[2][3];
  // double ar2[2][3] = {{1.1, 2.2, 3.3}, {2.2, 6.6, 8.8}};
  // copy_ptr_2D(ar1, ar2, 2);
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%.1f ", ar1[i][j]);
  //   }
  // }
  

  // 8.ʹ�ñ����ϰ2�еĿ�����������һ���ں�7��Ԫ�ص������е�3~��5��Ԫ�ؿ������ں�3��Ԫ�ص������С��ú���������Ҫ�޸ģ�ֻ��Ҫѡ����ʵ�ʵ�ʲ�����ʵ�ʲ�������Ҫ���������������С��ֻ��Ҫ������Ԫ�صĵ�ַ�ʹ�����Ԫ�صĸ�������
  // double ar1[3];
  // double ar2[7] = {1.1, 2.2, 3.3, 2.2, 6.6, 8.8, 9.9};
  // copy_ptr(ar1, &ar2[2], 3);//ʹ�ô����ƺ����ĵ�����Ԫ�صĵ�ַ��Ϊʵ�ʲ���
  // print_ar(ar1, 3);


  // 9.��дһ�����򣬳�ʼ��һ��double���͵�3��5��ά���飬ʹ��һ������䳤����ĺ������俽������һ����ά�����С���Ҫ��дһ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�
  // ����������Ӧ���ܴ�������NXM����(�����������֧�ֱ䳤���飬��ʹ�ô�ͳC��������N��5�����飩��
  // double ar1[3][5];
  // double ar2[3][5] = 
  // {
  //   {1.1, 2.2, 3.3, 4.4, 5.5},
  //   {2.2, 3.3, 4.4, 5.5, 6.6},
  //   {3.3, 4.4, 5.5, 6.6, 7.7}
  // };
  // copy_ptr_2D_NM(3, 5, ar1, ar2);
  // print_ptr_2D_NM(3, 5, ar1);


  // 10.��дһ�����������������������Ӧ��Ԫ����ӣ�Ȼ��ѽ�����浽��3�������С�
  // Ҳ����˵���������1�а�����ֵ��2��4��5��8,����2�а�����ֵ��1��0��4��6,��ô�ú�����3��4��9��14������3�����顣��������3����������һ�������С����һ���򵥵ĳ����в��Ըú�����
  // int ar1[4];
  // int ar2[4] = {2, 4, 5, 8};
  // int ar3[4] = {1, 0, 4, 6};
  // getsum_ar(ar1, ar2, ar3, 4);
  // for (int i = 0; i < 4; i++)
  // {
  //   printf("%d\n", ar1[i]);
  // }
  

  // 11.��дһ����������һ��int���͵�3��5��ά���飬���ú��ʵ�ֵ��ʼ�������ó����ӡ�����е�ֵ��Ȼ���ֵ����������ԭֵ��2����,����ʾ����Ԫ�ص���ֵ��
  // ��дһ��������ʾ��������ݣ��ٱ�дһ�������Ѹ�Ԫ�ص�ֵ�������������������Ժ�������������Ϊ������
  // int ar1[3][5] = 
  // {
  //   {1, 2, 3, 4, 5},
  //   {2, 3, 4, 5, 6},
  //   {3, 4, 5, 6, 7}
  // };
  // print_ar_2D(ar1, 3);
  // dou_ar_2D(ar1, 3);
  // print_ar_2D(ar1, 3);


  // 12.��д�����嵥10.7��rain.c���򣬰�main()�е���Ҫ���񶼸ĳ��ú�������ɡ�
  // const double rain[YEARS][MONTHS] = 
  // {
  //   {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
  //   {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
  //   {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
  //   {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
  //   {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
  // }; 
  // double subtot, total;
  // printf(" YEAR RAINFALL (inches)\n");
  // total = sumrain_year_ar(rain, 5);
  // printf("\nThe yearly average is %.1f inches.\n\n", total / 5);//��ӡ��ƽ����ˮ��
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // sumrain_month_ar(rain, 5);
  // printf("\n");


  // 13.��дһ��������ʾ�û�����3������ÿ��������5��double���͵���(�����û�����ȷ����Ӧ�������������ֵ���ݣ����ó���Ӧ�����������
  // a.���û���������ݴ�����3��5��������
  // b.����ÿ�飨5�������ݵ�ƽ��ֵ
  // c.�����������ݵ�ƽ��ֵ
  // d.�ҳ���15�������е����ֵ
  // e.��ӡ���
  // ÿ������Ҫ�õ����ĺ�������ɣ�ʹ�ô�ͳC��������ķ�ʽ�����������b,Ҫ��дһ�����㲢����һά����ƽ��ֵ�ĺ���������ѭ�����øú���3�Ρ����ڴ�����������ĺ�����Ӧ�ð�����������Ϊ�������������c��d�ĺ���Ӧ�ѽ����������������
  // double ar[3][5];
  // // a.���û���������ݴ�����3��5��������
  // input_ar(ar, 3);
  // // b.����ÿ�飨5�������ݵ�ƽ��ֵ
  // int i;
  // for (i = 0; i < 3; i++)
  // {
  //   double aver;
  //   aver = average_row(ar[i], 5);//ar[i]����һ��һά����
  //   printf("The average of the row %d is %.1f.\n", i + 1, aver);
  // }
  // // c.�����������ݵ�ƽ��ֵ
  // double aver_total;
  // aver_total = average_total(ar, 3);
  // printf("The average of total value in this arry is %.1f.\n", aver_total);
  // // d.�ҳ���15�������е����ֵ
  // double max;
  // max = max_total(ar, 3);
  // printf("The maximum of total value in this arry is %.1f.\n", max);


  // 14.�Ա䳤������Ϊ�����βΣ���ɱ����ϰ13��
  // double ar[3][5];
  // // a.���û���������ݴ�����3��5��������
  // inputvla_ar(3, 5, ar);
  // // b.����ÿ�飨5�������ݵ�ƽ��ֵ
  // int i;
  // for (i = 0; i < 3; i++)
  // {
  //   double aver;
  //   aver = averagevla_row(5, ar[i]);//ar[i]����һ��һά����
  //   printf("The average of the row %d is %.1f.\n", i + 1, aver);
  // }
  // // c.�����������ݵ�ƽ��ֵ
  // double aver_total;
  // aver_total = averagevla_total(3, 5, ar);
  // printf("The average of total value in this arry is %.1f.\n", aver_total);
  // // d.�ҳ���15�������е����ֵ
  // double max;
  // max = maxvla_total(3, 5, ar);
  // printf("The maximum of total value in this arry is %.1f.\n", max);



  return 0;
}



//��������
int sum(int * ar, int n)
{
  int i, total = 0;
  for ( i = 0; i < n; i++)
  {
    total += ar[i];
  }
  printf("The size of ar is %zd bytes.\n", sizeof ar);//ar��һ��ָ��������Ԫ�ص�ָ��
  return total;
}

int sump(int * start, int * end)
{
  int total = 0;
  while (start < end)
  {
    total += *start;//��Ӧ��Ԫ�صĵ�ַ
    start++;
  }
  return total;
}

void show_array(const double ar[], int n)//��ʾ���������
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%8.3f ", ar[i]);
  }
  putchar('\n');
  
}

void mult_array(double ar[], int n, double mult)//�������ÿ��Ԫ�ض�������ͬ��ֵ
{
  int i;
  for ( i = 0; i < n; i++)
  {
    ar[i] *= mult;
  }
}

void sum_rows(int ar[][COLS], int rows)//�������
{
  int i, j, tot;
  for (i = 0; i < rows; i++)
  {
    for (j = 0, tot = 0; j < COLS; j++)
    {
      tot += ar[i][j];
    }
    printf("row %d: sum = %d\n", i, tot);
  }
}

void sum_cols(int ar[][COLS], int rows)//�������
{
  int i, j, tot;
  for (i = 0; i < COLS; i++)
  {
    for ( j = 0, tot = 0; j < rows; j++)
    {
      tot += ar[j][i];
    }
    printf("col %d: sum = %d\n", i, tot);
  }
}

int sum2d(int(*ar)[COLS], int rows)//�����еĺ�
{
  int i, j, tot, sum = 0;
  for (i = 0; i < rows; i++)
  {
    for (j = 0, tot = 0; j < COLS; j++)
    {
      tot += ar[i][j];
    }
    sum += tot;
  }
  return sum;
}

int sum2dd(int rows, int cols, int ar[rows][cols])
{
  int sum = 0;
  int i, j;  
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      sum += ar[i][j];
    }
  }
  return sum;
}

int sumc(const int ar[], int n)
{
  int tot = 0;
  for (int i = 0; i < n; i++)
  {
    tot += ar[i];
  }
  return tot;
}

int sum2dc(const int ar[][COLS], int rows)
{
  int tot = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      tot += ar[i][j];
    }
  }
  return tot;
}

void print_ar(double ar[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%5.1f", ar[i]);
  }
}

void copy_arr(double ar1[], double ar2[], int n)//ʹ����������������
{
  for (int i = 0; i < n; i++)
  {
    ar1[i] = ar2[i];
  }
}

void copy_ptr(double * ar1, double * ar2, int n)//ʹ��ָ�븴������
{
  for (int i = 0; i < n; i++)
  {
    *(ar1 + i) = *(ar2 + i);
  }
}

void copy_ptrs(double ar1[], double ar2[], double * ptr)
{
  while (ar1 < ptr)
  {
    *(ar1++) = *(ar2++);
  } 
}

int max_int_ar(int ar[], int n)//��ȡint�����е����ֵ
{
  int max = 0;
  for (int i = 0; i < n - 2; i++)
  {
    if (ar[i] < ar[i + 1])
    {
      max = ar[i + 1];
    }
    else
    {
      max = ar[i];
    }
  }
  return max;
}

int getindex_double_ar(double ar[], int n)//��ȡdouble���������ֵ���±�
{
  int index = 0;
  for (int i = 1; i < n - 1; i++)
  {
    if (ar[index] < ar[i])
    {
      index = i;
    }
  }
  return index;
}

double getdif_double_ar(double ar[], int n)//��ȡ������������Сֵ�Ĳ�ֵ
{
  double dif;
  double max = ar[0], min = ar[0];
  for (int i = 1; i < n - 1; i++)
  {
    if (max < ar[i])//�����ֵ
    {
      max = ar[i];
    }
    if (min > ar[i])//����Сֵ
    {
      min = ar[i];
    }
  }
  dif = max - min;
  return dif;
}

void inver_double_ar(double ar1[], double ar2[], int n)//�����鷴��
{
  for (int i = 0; i < n; i++)
  {
    ar1[i] = ar2[n - i - 1];
  }
  printf("The inverted order of arry is ar[5] = {");
  for (int j = 0; j < n - 1; j++)
  {
    printf("%.1f, ", ar1[j]);
  }
  printf("%.1f}\n", ar1[n - 1]);
}

void copy_ptr_2D(double (* ar1)[3], double (* ar2)[3], int n)//copy��ά����
{
  for (int j = 0; j < n; j++)
  {
    copy_ptr(ar1[j], ar2[j], 3);//ar1[j]Ϊ��������ҲΪ��������Ԫ�ص�ָ�룬Ȼ�����copy_ptr����
  }
}

void copy_ptr_2D_NM(int n, int m, double ar1[n][m], double ar2[n][m])//copy�����ά����
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      ar1[i][j] = ar2[i][j];
    }
  }
}

void print_ptr_2D_NM(int n, int m, double ar[n][m])//��ӡ�����ά����
{
  printf("ar1[%d][%d] = \n{\n", n, m);
  for (int i = 0; i < n - 1; i++)//��ӡǰm-1��Ԫ��
  {
    printf("  {");
    for (int j = 0; j < m - 1; j++)//��ӡǰm-1��Ԫ��
    {
      printf("%.1f, ", ar[i][j]);
    }
    printf("%.1f},\n", ar[i][m - 1]);//��ӡ��m��Ԫ��
  }
  printf("  {");//��ӡ���һ��Ԫ��
  for (int j = 0; j < m - 1; j++)//��ӡǰm-1��Ԫ��
  {
    printf("%.1f, ", ar[n][j]);
  }
  printf("%.1f}\n", ar[n][m - 1]);//��ӡ��m��Ԫ��
  printf("};\n");
}

void getsum_ar(int ar1[], int ar2[], int ar3[], int n)//���������Ӧλ��Ԫ����Ӻ󸳸������������Ӧλ�õ�Ԫ��
{
  for (int  i = 0; i < n; i++)
  {
    ar1[i] = ar2[i] + ar3[i];
  }
}

void print_ar_2D(int (* ar)[5], int n)
{
  printf("ar[%d][5] = {");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d, ", ar[i][j]);
    }
  }
  printf("};\n");
}

void dou_ar_2D(int(* ar)[5], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      *(*(ar + i) + j) *= 2;
    }
  }
}

double sumrain_year_ar(const double(* ar)[12], int n)//������㽵ˮ��
{
  double subtot, total;
  for (int i = 0; i < n; i++)
  {
    int j;
    for (j = 0, subtot = 0; j < 12; j++)
    {
      subtot += ar[i][j];
    }
    printf("%5d %15.1f\n", 2010 + i, subtot);
    total += subtot;
  }
  return total;
}

void sumrain_month_ar(const double(* ar)[12], int n)//���¼��㽵ˮ��
{
  double subtot;
  for (int i = 0; i < 12; i++)
  {
    int j;
    for (j = 0, subtot = 0; j < n; j++)
    {
      subtot += ar[j][i];
    }
    printf("%4.1f ", subtot / 5);
  }
}

void input_ar(double (* ar)[5], int n)//���û���������ݴ�����3��5��������
{
  double num;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Please enter a value: \n");
      scanf("%lf", &num);
      ar[i][j] = num;
    }
  }
}

double average_row(double ar[], int n)//����ÿ�飨5�������ݵ�ƽ��ֵ
{
  double average;
  double sum = 0;
  int i;
  for (i = 0; i < n; i++)
  {
    sum += ar[i];
  }
  average = sum / n;
  return average;
}

double average_total(double (* ar)[5], int n)// c.�����������ݵ�ƽ��ֵ
{
  double sum, average;
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < 5; j++)
    {
      sum += ar[i][j];
    }
  }
  average = sum / (n * 5);
  return average;
}

double max_total(double ( * ar)[5], int n)// d.�ҳ���15�������е����ֵ
{
  double max = ar[0][0];
  for (int i = 0; i < n; i++)
  {
    for (int  j = 0; j < 5; j++)
    {
      if (max < ar[i][j])
      {
        max = ar[i][j];
      }
    }
  }
  return max;
}

void inputvla_ar(int rows, int cols, double ar[rows][cols])
{
  double num;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("Please enter a value: \n");
      scanf("%lf", &num);
      ar[i][j] = num;
    }
  }
}

double averagevla_row(int rows, double ar[rows])// b.����ÿ�飨5�������ݵ�ƽ��ֵ
{
  double average;
  double sum = 0;
  for (int i = 0; i < rows; i++)
  {
    sum += ar[i];
  }
  average = sum / rows;
  return average;
}

double averagevla_total(int rows, int cols, double ar[rows][cols])// c.�����������ݵ�ƽ��ֵ
{
  double sum, average;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum += ar[i][j];
    }
  }
  average = sum / (rows * cols);
  return average;
}

double maxvla_total(int rows, int cols, double ar[rows][cols])// d.�ҳ���15�������е����ֵ
{
  double max = ar[0][0];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (max < ar[i][j])
      {
        max = ar[i][j];
      }
    }
  }
  return max;
}