#include<stdio.h>
#include<math.h>
#include"names_st.h"


#define TWO 2
#define OW "Consistency is the last refuge of the nuimagina\
tive.-Oscar Wilde"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x);
#define FMT "X is %d.\n"
#define SQUARE(X) X*X
#define PR(X) printf("The reault is %d.\n",X)
#define PSQR(X) printf("The square of X is %d.\n", ((X) * (X)))
#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n "= %d\n", x##n) //##�ѼǺ����һ���µı�ʶ��
#define PR(X, ...) printf("Message" #X ":"__VA_ARGS__) //"Message ��#X ":"��ӦX
#define JUST_CHECKING
#define LIMIT 4


int main()
{
	//�����嵥16.1
	//preproc.c -- �򵥵�Ԥ����ʾ��
	//int x = TWO;
	//PX;
	//x = FOUR;
	//printf(FMT, x);
	//printf("%s\n", OW);
	//printf("TWO:OW\n");


	//�����嵥16.2
	//mac_arg.c -- �������ĺ�
	//int x = 5;
	//int z;
	//printf("x = %d\n", x);
	//z = SQUARE(x); //z = x * x
	//printf("Evaluation SQUARE(x):");
	//PR(z);
	//z = SQUARE(2); // z = 2 * 2
	//printf("Evaluation SQUARE(2):");
	//PR(z);
	//printf("Evaluation SQUARE(x+2):");
	//PR(SQUARE(x + 2)); //(x + 2)* (x + 2) �� ��5 + 2�� * ��5 + 2��
	//printf("Evaluation 100/SQUARE(2):");
	//PR(100 / SQUARE(2));
	//printf("x is %d.\n", x);
	//printf("Evaluation SUQARE(++x):");
	//PR(SQUARE(++x));
	//printf("After incrementiong, x is %x.\n", x);


	//�����嵥16.3
	//int y = 5;
	//PSQR(y);
	//PSQR(2 + 4);


	//�����嵥16.4
	//glue.c -- ʹ��##�����
	//int XNAME(1) = 14; //int x1 = 14;
	//int XNAME(2) = 20; //int x2 = 20;
	//int x3 = 30;
	//PRINT_XN(1);
	//PRINT_XN(2);
	//PRINT_XN(3);


	//�����嵥16.5
	//variadic.c -- ��κ�
	//double x = 48;
	//double y;
	//y = sqrt(x);
	//PR(1, "x = %g\n", x);
	//PR(2, "x = %.2f, y = %.4f\n", x, y);


	//�����嵥16.8
	//useheader.c -- ʹ��names_st�ṹ
	//names candidate;
	//get_names(&candidate);
	//printf("Let's welcome ");
	//show_names(&candidate);
	//puts(" to this program!");


	//�����嵥16.9
	//ifdef.c -- ʹ����������
//	int total = 0;
//	for (int i = 1; i <= LIMIT; i++)
//	{
//		total += 2 * i * i + 1;
//#ifdef JUST_CHECKING
//		printf("i = %d, running total = %d\n", i, total);
//#endif // JUST_CHECKING
//	}
//	printf("Grand total = %d\n", total);




























	return 0;
}