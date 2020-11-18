#include<stdio.h>
#include<stdio.h>


#define MONTHS 12
#define SIZE 5
#define YEARS 5
#define ROWS 3
#define COLS 4


//函数原型
int sum(int *, int);
int sump(int * start, int * end);
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
void sum_rows(int ar[][COLS], int rows);//第一个形参指向为含4个int的字符的数组的指针
void sum_cols(int ar[][COLS], int);//第一个形参指向为含4个int的字符的数组的指针
int sum2d(int(*ar)[COLS], int rows);//第一个形参指向为含4个int的字符的数组的指针
int sum2dd(int rows, int cols, int ar[rows][cols]);//变长数组
int sum2dc(const int ar[][COLS], int rows);
int sumc(const int ar[], int n);
void copy_arr(double ar1[], double ar2[], int n);
void print_ar(double ar[], int n);
void copy_ptr(double * ar1, double * ar2, int n);
void copy_ptrs(double ar1[], double ar2[], double * ptr);
int max_int_ar(int ar[], int n);
int getindex_double_ar(double ar[], int n);
double getdif_double_ar(double ar[], int n);
void inver_double_ar(double ar1[], double ar2[], int n);//将序列反序
void copy_ptr_2D(double (* ar1)[3], double (* ar2)[3], int n);//copy指定二维数组
void copy_ptr_2D_NM(int n, int m, double ar1[n][m], double ar2[n][m]);//copy任意二维数组
void print_ptr_2D_NM(int n, int m, double ar[n][m]);//打印任意二维数组
void getsum_ar(int ar1[], int ar2[], int ar3[], int n);//两个数组对应位置元素相加后赋给第三个数组对应位置的元素
void print_ar_2D(int (* ar)[5], int n);//打印二维数组
void dou_ar_2D(int (* ar)[5], int n);//二维数组的各值翻倍
double sumrain_year_ar(const double (* ar)[12], int n);//按年计算降水量
void sumrain_month_ar(const double(* ar)[12], int n);//按月计算降水量
void input_ar(double (* ar)[5], int n);// a.把用户输入的数据储存在3×5的数组中
double average_row(double ar[], int n);// b.计算每组（5个）数据的平均值
double average_total(double (* ar)[5], int n);// c.计算所有数据的平均值
double max_total(double ( * ar)[5], int n);// d.找出这15个数据中的最大值
void inputvla_ar(int rows, int cols, double ar[rows][cols]);// a.用边长数组把用户输入的数据储存在3×5的数组中
double averagevla_row(int rows, double ar[rows]);// b.计算每组（5个）数据的平均值
double averagevla_total(int rows, int cols, double ar[rows][cols]);// c.计算所有数据的平均值
double maxvla_total(int rows, int cols, double ar[rows][cols]);// d.找出这15个数据中的最大值








int main()
{
  //****************************************************************************************************
  //程序清单

  //程序清单10.1
  //day_monl.c -- 打印每个月的天数
  // int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // int index;
  // for (index = 0; index < MONTHS; index++)
  // {
  //     printf("Month %2d has %2d days.\n", index + 1, days[index]);
  // }


  //程序清单10.2
  //no_data.c -- 未初始化数组
  // int no_date[SIZE];//未初始化数组
  // int i;
  // printf("%2s%14s\n", "i", "no_data[i]");
  // for (i = 0; i < SIZE; i++)
  // {
  //     printf("%2d%14d\n", i, no_date[i]);
  // }
    
    
  //程序清单10.3
  //some_data.c -- 部分初始化数组
  // int some_data[SIZE] = {1492, 1066};//初始化一部分数组之后，其他的会全部默然为0
  // printf("%2s%14s\n", "i", "some_data[i]");
  // for (int i = 0; i < SIZE; i++)
  // {
  //     printf("%2d%14d\n", i, some_data[i]);
  // }


  //程序清单10.4
  //day_mon2.c -- 让编辑器计算元素个数
  // const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};//省略方括号中的数字，编译器会根据初始化列表中的项数来确定数组的大小
  // int index;
  // for (index = 0; index < sizeof days / sizeof days[0]; index++)
  // {
  //     printf("Month %2d has %d days.\n", index + 1, days[index]);
  // }
    

  //程序清单10.5
  //designate.c -- 使用指定初始化器
  // int days[MONTHS] = {31, 28, [4] = 31, 30, 3, [1] = 29};
  // int i;
  // for (i = 0; i < MONTHS; i++)
  // {
  //     printf("%2d %d\n", i + 1, days[i]);
  // }


  //程序清单10.6
  //bounds.c -- 数组下标越界
  // int value1 = 44;
  // int arr[SIZE];
  // int value2 = 88;
  // int i;
  // printf("value1 = %d, value2 = %d\n", value1, value2);
  // for (i = -1; i <= SIZE; i++)//下标-1和下标4都越界
  // {
  //     arr[i] = 2 * i + 1;
  // }
  // for (i = -1; i < 7; i++)//下标-1和下标4，5，6全都越界
  // {
  //     printf("%2d %d\n", i, arr[i]);
  // }
  // printf("value1 = %d, value2 = %d\n", value1, value2);
  // printf("adress of arr[-1]: %p\n", &arr[-1]);
  // printf("adress of arr[4]: %p\n", &arr[4]);
  // printf("adress of value1: %p\n", &value1);
  // printf("adress of value2: %p\n", &value2);


  //程序清单10.7
  //rain.c -- 计算每年的总降水量，年平均降水量和5年中每月的平均降水量
  //用2010 ~ 2014年的降水量数据初始化数组
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
  //     //计算每一年，各月的降水量总和
  //     for (month = 0, subtot = 0; month < MONTHS; month++)
  //     {
  //         subtot += rain[year][month];
  //     }
  //     printf("%5d %15.1f\n", 2010 + year, subtot);//每年打印一次降水量
  //     total += subtot;//计算降水总量
  // }
  // printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);//打印年平均降水量
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // for (month = 0; month < MONTHS; month++)
  // {
  //     //每个月，5年的平均降水量
  //     for (year = 0, subtot = 0; year < YEARS; year++)
  //     {
  //         subtot += rain[year][month];
  //     }
  //     printf("%4.1f ", subtot / YEARS); 
  // }
  // printf("\n");


  //程序清单10.8
  //pnt_add.c -- 指针地址
  // short dates[SIZE];
  // short * pti;//初始化指针
  // short index;
  // double bills[SIZE];
  // double * ptf;
  // pti = dates;//把数组地址赋给指针
  // ptf = bills;
  // printf("%23s %15s\n", "short", "double");
  // for ( index = 0; index < SIZE; index++)
  // {
  //   printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);
  // }


  //程序清单10.9
  //day_mon3.c -- uses pointer notation
  // int days[MONTHS] = {31, 28, 31, 39, 31, 30, 31, 31, 30, 31, 30, 31};
  // int index;
  // for (index = 0; index < MONTHS; index++)
  // {
  //   printf("Month %2d has %d days.\n", index + 1, *(days + index));//days + index代表days数组第index位元素
  // }
  

  //程序清单10.10
  //sum_arr1.c -- 数组元素之和
  // int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  // long answer;
  // answer = sum(marbles, SIZE);
  // printf("The total number of marbles is %ld.\n", answer);
  // printf("The size of marbles is %zd bytes.\n", sizeof marbles);


  //程序清单10.11
  //sum_arr2.c -- 数组元素之和
  // int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
  // long answer;
  // answer = sump(marbles, marbles + SIZE);
  // printf("The total number of marbles is %ld.\n", answer);


  //程序清单10.12
  //order.c -- 指针运算中的优先级
  // int data[2] = {100, 200};
  // int moredata[2] = {300, 400};
  // int * p1, * p2, * p3;
  // p1 = p2 = data;
  // p3 = moredata;
  // printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
  // printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
  // //*p1++表示先输出p1指针指向的值，然后指针再向后移动一个单位，并未改变原数组中的值
  // //*++p2表示先将p2指针向后移动一个单位，然后再输出移动后的指针指向的值，并未改变原数组中的值
  // //（*p3）++表示先输出p3指针指向的值，然后将该值+1之后再赋给它，已改变原数组中的值
  // printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
  

  //程序清单10.13
  //ptr_ops.c -- 指针操作
  // int urn[5] = {100, 200, 300, 400, 500};
  // int * ptr1, * ptr2, * ptr3;
  // ptr1 = urn;//将数组名赋给ptr1
  // ptr2 = &urn[2];
  // //解引用指针，以及获得指针的地址
  // printf("pointer value, dereferenced pointer, pointer adress:\n");
  // printf("ptr1 = %p, *prt1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//分别表示指针ptr1的值，即ptr1指向的地址；ptr1指向的地址的值；ptr1自己的地址
  // //指针加法
  // ptr3 = ptr1 + 4;//ptr1先后移动4个单位
  // printf("\nadding an int to a pointer:\n");
  // printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));//*(ptr1 + 4)表示ptr1向后移动4个单位之后指向的值
  // //递增指针
  // ptr1++;//指针ptr1向后移动一个单位
  // printf("\nvalues after ptr1++:\n");
  // printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//ptr1指向的位置发生了变化，但是本身的地址并没有变化
  // //递减指针
  // ptr2--;//指针ptr2向前移动了一个单位
  // printf("\nvalues after --ptr2:\n");
  // printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
  // //恢复为初始值
  // --ptr1;
  // ++ptr2;
  // printf("\nPointers reset to original values:\n");
  // printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
  // //一个指针减去另一个指针
  // printf("\nsubraction one pointer from another:\n");
  // printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
  // //一个指针减去一个整数
  // printf("\nsuracting an int from a pointer:\n");
  // printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);


  //程序清单10.14
  //arf.c -- 处理数组的函数
  // double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
  // printf("The original dip array:\n");
  // show_array(dip, SIZE);
  // mult_array(dip, SIZE, 2.5);
  // printf("The dip array after calling mult_array():\n");
  // show_array(dip, SIZE);


  //程序清单10.15
  //zippol.c -- zippo的相关信息
  // int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
  // printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);//zippo的第一个元素的地址和第二个元素的地址, 单位为两个int, 8个字节.
  // printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);//zippo的一个元素为数组, zippo[0]为该数组的第一个元素, zippo[0] + 1为该数组的第二个元素,单位为1个int, 4个字节.
  // printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);//解引用指针zippo为zipoo[0]的值,即zipoo[0][0]的地址, *zipoo + 1表示zipoo[0][0]后一个单位的地址
  // printf("zippo[0][0] =  %d\n", zippo[0][0]);//表示zipoo[0][0]的值, 即2.
  // printf("*zippo[0] = %d\n", *zippo[0]);//表示zippo[0]数组第一个元素的值, 即zippo[0][0]的值, 即2.
  // printf("**zippo = %d\n", **zippo);//*zippo表示zippo这个二元数组的第一个元素的值, 即zippo[0]数组的地址, *zippo[0]的结果同上, 即2.
  // printf("zippo[2][1] = %d\n", zippo[2][1]);//表示zippo这个二元数组中3个元素中第1个元素的值, 即6.
  // printf("*(*zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
  // //zippo + 2表示zippo二元数组中第三个元素, *(zippo + 2)表示这个数组的地址, 即zippo[2]的地址, *(zippo + 2) + 1表示zippo[2][1]的地址, *(*(zippo + 2) + 1)表示对zippo[2][1]求值, 即3


  //程序清单10.16
  //zippo2.c -- 通过指针获取zippo的信息
  // int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
  // int (*pz)[2];//声明一个指向包含两个int的数组的指针
  // pz = zippo;//初始化, 指向zippo
  // printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);//pz表示zippo[0]的地址,即zippo[0][0]的地址, pz + 1表示zippo[1][0]的地址
  // printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);//pz[0]的值为zippo[0][0]的地址, pz[0] + 1表示zippo[0][1]的地址
  // printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);//*pz表示zippo的值, 即zippo[0]的值, 即zippo[0][0]的地址, *pz + 1表示zippo[0][1]的地址
  // printf("pz[0][0] = %d\n", pz[0][0]);//即zippo[0][0]的值, 即2
  // printf("*pz[0] = %d\n", *pz[0]);//即zippo[0][0]的值, 即2
  // printf("**pz = %d\n", **pz);//即zippo[0][0]的值, 即2
  // printf("pz[2][1] = %d\n", pz[2][1]);//值为3
  // printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));//即pz[2][1]的值, 即zippo[2][1], 值为3


  //程序清单10.17
  //array2d.c -- 处理二维数组的函数
  // int junk[ROWS][COLS] = 
  // {
  //   {2, 4, 6, 8},
  //   {3, 5, 7, 9},
  //   {12, 10, 8, 6}
  // };
  // sum_rows(junk, ROWS);//按行求和
  // sum_cols(junk, ROWS);//按列求和
  // printf("Sum of all elements = %d\n", sum2d(junk, ROWS));


  //程序清单10.18
  //vararr2d.c -- 使用变长数组的函数
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
  // int varr[rs][cs];//变长数组
  // for (i = 0; i < rs; i++)//给varr数组录入值
  // {
  //   for (j = 0; j < cs; j++)
  //   {
  //     varr[i][j] = i * j + j;
  //   }
  // }
  // printf("3X5 arry\n");
  // printf("Sum of all elements = %d\n", sum2dd(ROWS, COLS, junk));//求junk数组各元素的和
  // printf("2X6 arry\n");
  // printf("Sunm of all elements = %d\n", sum2dd(ROWS - 1, COLS + 2, morejunk));//求morejunk数组各元素的和
  // printf("3X10 VAL\n");
  // printf("Sum of all elements = %d\n", sum2dd(rs, cs, varr));//求varr数组各元素的和

  //程序清单10.19
  //flc.c -- 有趣的常量
  // int total1, total2, total3;
  // int *pl1;
  // int (*pl2)[COLS];//初始化了一个指向4个int的数组的指针
  // pl1 = (int[2]){10, 20};//初始化了一个含两个int型整数的复合型字面量，并且将pl1指向这个字面量
  // pl2 = (int[2][COLS]){{1, 2, 3, -9}, {4, 5, 6, -8}};//初始化了一个含有两个数组的复合字面量，每个数组含有4个整数，并将pl2指向这个字面量
  // total1 = sumc(pl1, 2);
  // total2 = sum2dc(pl2, 2);
  // total3 = sumc((int[]){4, 4, 4, 5, 5, 5}, 6);
  // printf("total 1 = %d\n", total1);
  // printf("total2 = %d\n", total2); 
  // printf("total3 = %d\n", total3);


  //**********************************************************************************************************************************************************
  // 复习题
  // 1.下面的程序将打印什么内容？
  // int ref[] = {8, 4, 0 ,2};
  // int * ptr;
  // int index;
  // for ( index = 0, ptr = ref; index < 4; index++)
  // {
  //   printf("%d %d\n", ref[index], *ptr);
  // }


  // 2.在复习题1中，ref有多少个元素？
  // 答：ref有4个元素


  // 3.在复习题1中，ref的地址是什么？ref+1是什么意思？++ref指向什么？
  // 答：ref的地址是ref[0]的地址，ref+1是指ref[1]， ++ref错误，因为ref是个定值


  // 4.在下面的代码中，*ptr和*(ptr+2)的值分别是什么？
  // a.
  // int * ptr;
  // int torf[2][2] = {12, 14, 16};
  // ptr = torf[0];
  // printf("%d %d %d\n", *ptr, *(ptr + 2), *(ptr + 3));//*ptr的值为12， *(ptr + 2)的值为16, *(ptr + 3)的值应该为0

  // b.
  // int * ptr;
  // int fort[2][2] = {{12}, {14, 16}};
  // ptr = fort[0];
  // printf("%d %d %d\n", *ptr, *(ptr + 2), *(ptr + 1));//*ptr的值为12， *(ptr + 2)的值为14, *(ptr + 1)的值应该为0


  // 5.在下面的代码中，**ptr和**(ptr+1)的值分别是什么？
  // a.
  // int (*ptr)[2];
  // int torf[2][2] = {12, 14, 16};
  // ptr = torf;
  // printf("%d %d\n", **ptr, **(ptr + 1));//**ptr的值为12， **(ptr + 1)的值为16

  // b.
  // int (*ptr)[2];
  // int fort[2][2] = {{12}, {14, 16}};
  // ptr = fort;
  // printf("%d %d %d\n", **ptr, **(ptr + 1), *(*ptr + 1));//**ptr的值为12， **(ptr + 1)的值为14, *(*ptr + 1)的值应该为0
  

  // 6.假设有下面的声明：
  // int grid[30][100];
  // a.用1种写法表示grid[22][56]
  // grid[22][56]
  // b.用2种写法表示grid[22][0]
  // grid[22][0];
  // *grid[22]
  // c.用3种写法表示grid[0][0]
  // grid[0][0];
  // *grid[0];
  // **grid;


  // 7.正确声明以下各变量：
  // a.digits是一个内含10个int类型值的数组
  // int digits[10];
  // b.rates是一个内含6个float类型值的数组
  // float rates[6];
  // c.mat是一个内含3个元素的数组，每个元素都是内含5个整数的数组
  // int mat[3][5];
  // d.psa是一个内含20个元素的数组，每个元素都是指向int的指针
  // int * pas[20];
  // e.pstr是一个指向数组的指针，该数组内含20个char类型的值
  // char (* pstr)[20];


  // 8.
  // a.声明一个内含6个int类型值的数组，并初始化各元素为1、2、4、8、16、32
  // int ar[6] = {1, 2, 4, 8, 16, 32};
  // b.用数组表示法表示a声明的数组的第3个元素（其值为4)
  // int a[2] = {4};
  // c.假设编译器支持C99/C11标准，声明一个内含100个int型值的数组，并初始化最后一个元素为-1,其他元素不考虑
  // int ar[100] = {[99] = -1};
  // d.假设编译器支持C99/C11标准，声明一个内含100个int类型值的数组，并初始化下标为5、10、11、12、13的元素为101,其他元素不考虑
  // int ar[100] = {[5] = 101, [10] = 101, 101, 101, 101};


  // 9.内含10个元素的数组下标范围是什么？
  // 答：内含10个元素的数组下标范围是0-9


  // 10.假设有下面的声明：
  // float rootbeer[10], things[10][5], *pf, value = 2.2;
  // int i = 3;
  // 判断以下各项是否有效：
  // a.rootbeer[2]=value;//有效
  // b.scanf("%f", &rootbeer);//无效
  // c.rootbeer=value;//无效
  // d.printf("%f", rootbeer);//无效
  // e.things[4][4]=rootbeer[3];//有效
  // f.things[5]=rootbeer;//无效
  // g.pf=value;//无效， value不是地址
  // h.pf=rootbeer;//有效


  // 11.声明一个800×600的int类型数组。
  // int ar[800][600];


  // 12.下面声明了3个数组：
  // double trots[20];
  // short clops[10][30];
  // long shots[5][10][15];
  // a.分别以传统方式和以变长数组为参数的方式编写处理trots数组的void函数原型和函数调用
  //传统方式
  // void process(double ar[], int n);
  // process(trots, 20);
  //变长数组
  // void processvla(int n, double ar[n]);
  // processvla(20, trots);
  // b.分别以传统方式和以变长数组为参数的方式编写处理clops数组的void函数原型和函数调用
  //传统方式
  // void process(short ar[][30], int n);
  // process(clops, 10);
  //变长数组
  // void processvla(int n, int m, short ar[n][m]);
  // processvla(10, 30, clops);
  // c.分别以传统方式和以变长数组为参数的方式编写处理shots数组的void函数原型和函数调用
  //传统方式
  // void process(long ar[][10][15], int n);
  // process(shots, 5);
  //变长数组
  // void processvla(int n, int m, int p, long ar[n][m][p]);
  // processvla(5, 10, 15, shots);


  // 13.下面有两个函数原型：
  // void show(const double ar[], int n);//n是数组元素的个数
  // void show2(const double ar2[][3],int n);//n是二维数组的行数
  // a.编写一个函数调用，把一个内含8、3、9和2的复合字面量传递给show()函数。
  // show((double[]){8, 3, 9, 3}, 4);
  // b.编写一个函数调用，把一个2行3列的复合字面量（8、3、9作为第1行，5、4、1作为第2行）传递给show2()函数。
  // show2((double[][3]){{8, 3, 9}, {5, 4, 1}}, 2)
    

  //**********************************************************************************************************************************************************
  // 编程练习
  // 1.修改程序清单10.7的rain.c程序，用指针进行计算（仍然要声明并初始化数组）。
  // rain.c -- 计算每年的总降水量，年平均降水量和5年中每月的平均降水量
  // 用2010 ~ 2014年的降水量数据初始化数组
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
  //   //计算每一年，各月的降水量总和
  //   for (month = 0, subtot = 0; month < MONTHS; month++)
  //   {
  //     // subtot += rain[year][month];
  //     subtot += *(*(rain + year) + month);
  //   }
  //   printf("%5d %15.1f\n", 2010 + year, subtot);//每年打印一次降水量
  //   total += subtot;//计算降水总量
  // }
  // printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);//打印年平均降水量
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // for (month = 0; month < MONTHS; month++)
  // {
  //   //每个月，5年的平均降水量
  //   for (year = 0, subtot = 0; year < YEARS; year++)
  //   {
  //     // subtot += rain[year][month];
  //     subtot += *(*(rain + year) + month);
  //   }
  //   printf("%4.1f ", subtot / YEARS); 
  // }
  // printf("\n");


  // 2.编写一个程序，初始化一个double类型的数组，然后把该数组的内容拷贝至3个其他数组中（在main0中声明这4个数组）。
  // 使用带数组表示法的函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。
  // 第3个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指针。
  // 也就是说，给定以下声明，则函数调用如下所示：
  // double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  // double target1[5];
  // double target2[5];
  // double target3[5];
  // 拷贝1
  // copy_arr(target1, source, 5);
  // print_ar(target1, 5);
  // 拷贝2
  // copy_ptr(target2, source, 5);
  // print_ar(target2, 5);
  // 拷贝3
  // copy_ptrs(target3, source, source + 5);
  // print_ar(target3, 5);


  // 3.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数。
  // int max;
  // int ar[3] = {5, 1, 2};
  // max = max_int_ar(ar, 3);
  // printf("%d\n", max);


  // 4.编写一个函数，返回储存在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。
  // int index;
  // double ar[5] = {9.1, 4.3, 12.6, 8.7, 5.5};
  // index = getindex_double_ar(ar, 5);
  // printf("The index of the maximum is %d.\n", index);


  // 5.编写一个函数，返回储存在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
  // double dif;  
  // double ar[5] = {9.2, 4.3, 2.0, 8.7, 5.5};
  // dif = getdif_double_ar(ar, 5);
  // printf("The difference enter the maximum and minimum is %.1f\n", dif);


  // 6.编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。
  // double inver_ar[5];
  // double ar[5] = {9.2, 4.3, 2.0, 8.7, 5.5};
  // inver_double_ar(inver_ar, ar, 5);


  // 7.编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
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
  

  // 8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3~第5个元素拷贝至内含3个元素的数组中。该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
  // double ar1[3];
  // double ar2[7] = {1.1, 2.2, 3.3, 2.2, 6.6, 8.8, 9.9};
  // copy_ptr(ar1, &ar2[2], 3);//使用待复制函数的第三个元素的地址作为实际参数
  // print_ar(ar1, 3);


  // 9.编写一个程序，初始化一个double类型的3×5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中。还要编写一个以变长数组为形参的函数以显示两个数组的内容。
  // 这两个函数应该能处理任意NXM数组(如果编译器不支持变长数组，就使用传统C函数处理N×5的数组）。
  // double ar1[3][5];
  // double ar2[3][5] = 
  // {
  //   {1.1, 2.2, 3.3, 4.4, 5.5},
  //   {2.2, 3.3, 4.4, 5.5, 6.6},
  //   {3.3, 4.4, 5.5, 6.6, 7.7}
  // };
  // copy_ptr_2D_NM(3, 5, ar1, ar2);
  // print_ptr_2D_NM(3, 5, ar1);


  // 10.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第3个数组中。
  // 也就是说，如果数组1中包含的值是2、4、5、8,数组2中包含的值是1、0、4、6,那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数。
  // int ar1[4];
  // int ar2[4] = {2, 4, 5, 8};
  // int ar3[4] = {1, 0, 4, 6};
  // getsum_ar(ar1, ar2, ar3, 4);
  // for (int i = 0; i < 4; i++)
  // {
  //   printf("%d\n", ar1[i]);
  // }
  

  // 11.编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。该程序打印数组中的值，然后各值翻倍（即是原值的2倍）,并显示出各元素的新值。
  // 编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以函数名和行数作为参数。
  // int ar1[3][5] = 
  // {
  //   {1, 2, 3, 4, 5},
  //   {2, 3, 4, 5, 6},
  //   {3, 4, 5, 6, 7}
  // };
  // print_ar_2D(ar1, 3);
  // dou_ar_2D(ar1, 3);
  // print_ar_2D(ar1, 3);


  // 12.重写程序清单10.7的rain.c程序，把main()中的主要任务都改成用函数来完成。
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
  // printf("\nThe yearly average is %.1f inches.\n\n", total / 5);//打印年平均降水量
  // printf("MONTHLY AVERAGS:\n\n");
  // printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
  // sumrain_month_ar(rain, 5);
  // printf("\n");


  // 13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数(假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
  // a.把用户输入的数据储存在3×5的数组中
  // b.计算每组（5个）数据的平均值
  // c.计算所有数据的平均值
  // d.找出这15个数据中的最大值
  // e.打印结果
  // 每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b,要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
  // double ar[3][5];
  // // a.把用户输入的数据储存在3×5的数组中
  // input_ar(ar, 3);
  // // b.计算每组（5个）数据的平均值
  // int i;
  // for (i = 0; i < 3; i++)
  // {
  //   double aver;
  //   aver = average_row(ar[i], 5);//ar[i]才是一个一维数组
  //   printf("The average of the row %d is %.1f.\n", i + 1, aver);
  // }
  // // c.计算所有数据的平均值
  // double aver_total;
  // aver_total = average_total(ar, 3);
  // printf("The average of total value in this arry is %.1f.\n", aver_total);
  // // d.找出这15个数据中的最大值
  // double max;
  // max = max_total(ar, 3);
  // printf("The maximum of total value in this arry is %.1f.\n", max);


  // 14.以变长数组作为函数形参，完成编程练习13。
  // double ar[3][5];
  // // a.把用户输入的数据储存在3×5的数组中
  // inputvla_ar(3, 5, ar);
  // // b.计算每组（5个）数据的平均值
  // int i;
  // for (i = 0; i < 3; i++)
  // {
  //   double aver;
  //   aver = averagevla_row(5, ar[i]);//ar[i]才是一个一维数组
  //   printf("The average of the row %d is %.1f.\n", i + 1, aver);
  // }
  // // c.计算所有数据的平均值
  // double aver_total;
  // aver_total = averagevla_total(3, 5, ar);
  // printf("The average of total value in this arry is %.1f.\n", aver_total);
  // // d.找出这15个数据中的最大值
  // double max;
  // max = maxvla_total(3, 5, ar);
  // printf("The maximum of total value in this arry is %.1f.\n", max);



  return 0;
}



//函数声明
int sum(int * ar, int n)
{
  int i, total = 0;
  for ( i = 0; i < n; i++)
  {
    total += ar[i];
  }
  printf("The size of ar is %zd bytes.\n", sizeof ar);//ar是一个指向数组首元素的指针
  return total;
}

int sump(int * start, int * end)
{
  int total = 0;
  while (start < end)
  {
    total += *start;//对应首元素的地址
    start++;
  }
  return total;
}

void show_array(const double ar[], int n)//显示数组的内容
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%8.3f ", ar[i]);
  }
  putchar('\n');
  
}

void mult_array(double ar[], int n, double mult)//把数组的每个元素都乘以相同的值
{
  int i;
  for ( i = 0; i < n; i++)
  {
    ar[i] *= mult;
  }
}

void sum_rows(int ar[][COLS], int rows)//按行求和
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

void sum_cols(int ar[][COLS], int rows)//按列求和
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

int sum2d(int(*ar)[COLS], int rows)//求所有的和
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

void copy_arr(double ar1[], double ar2[], int n)//使用数组名复制数组
{
  for (int i = 0; i < n; i++)
  {
    ar1[i] = ar2[i];
  }
}

void copy_ptr(double * ar1, double * ar2, int n)//使用指针复制数组
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

int max_int_ar(int ar[], int n)//获取int数组中的最大值
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

int getindex_double_ar(double ar[], int n)//获取double数组中最大值的下标
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

double getdif_double_ar(double ar[], int n)//获取数组中最大和最小值的差值
{
  double dif;
  double max = ar[0], min = ar[0];
  for (int i = 1; i < n - 1; i++)
  {
    if (max < ar[i])//找最大值
    {
      max = ar[i];
    }
    if (min > ar[i])//找最小值
    {
      min = ar[i];
    }
  }
  dif = max - min;
  return dif;
}

void inver_double_ar(double ar1[], double ar2[], int n)//将数组反序
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

void copy_ptr_2D(double (* ar1)[3], double (* ar2)[3], int n)//copy二维数组
{
  for (int j = 0; j < n; j++)
  {
    copy_ptr(ar1[j], ar2[j], 3);//ar1[j]为数组名，也为该数组首元素的指针，然后调用copy_ptr函数
  }
}

void copy_ptr_2D_NM(int n, int m, double ar1[n][m], double ar2[n][m])//copy任意二维数组
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      ar1[i][j] = ar2[i][j];
    }
  }
}

void print_ptr_2D_NM(int n, int m, double ar[n][m])//打印任意二维数组
{
  printf("ar1[%d][%d] = \n{\n", n, m);
  for (int i = 0; i < n - 1; i++)//打印前m-1行元素
  {
    printf("  {");
    for (int j = 0; j < m - 1; j++)//打印前m-1个元素
    {
      printf("%.1f, ", ar[i][j]);
    }
    printf("%.1f},\n", ar[i][m - 1]);//打印第m号元素
  }
  printf("  {");//打印最后一行元素
  for (int j = 0; j < m - 1; j++)//打印前m-1个元素
  {
    printf("%.1f, ", ar[n][j]);
  }
  printf("%.1f}\n", ar[n][m - 1]);//打印第m号元素
  printf("};\n");
}

void getsum_ar(int ar1[], int ar2[], int ar3[], int n)//两个数组对应位置元素相加后赋给第三个数组对应位置的元素
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

double sumrain_year_ar(const double(* ar)[12], int n)//按年计算降水量
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

void sumrain_month_ar(const double(* ar)[12], int n)//按月计算降水量
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

void input_ar(double (* ar)[5], int n)//把用户输入的数据储存在3×5的数组中
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

double average_row(double ar[], int n)//计算每组（5个）数据的平均值
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

double average_total(double (* ar)[5], int n)// c.计算所有数据的平均值
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

double max_total(double ( * ar)[5], int n)// d.找出这15个数据中的最大值
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

double averagevla_row(int rows, double ar[rows])// b.计算每组（5个）数据的平均值
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

double averagevla_total(int rows, int cols, double ar[rows][cols])// c.计算所有数据的平均值
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

double maxvla_total(int rows, int cols, double ar[rows][cols])// d.找出这15个数据中的最大值
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