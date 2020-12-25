#include<stdio.h>



struct house
{
	float sqft;
	int rooms;
	int stories;
	char address[40];
};

struct name
{
	char first[20];
	char last[20];
};

struct bem
{
	int limbs;
	struct name title;
	char type[30];
};

struct fullname
{
	char fname[20];
	char lname[20];
};

struct bard
{
	struct fullname name;
	int born;
	int died;
};

struct gas
{
	float distance;
	float gals;
	float mpg;
};







void func_bem(struct bem *);
float calc_cons(struct gas);
void calc_conts_t(struct gas *);




int main()
{
	//复习题
	//1.下面的结构模板有什么问题：
	//struct test
	//{
	//	char itable;
	//	int num[20];
	//	char* togs;
	//};


	//2.下面是程序的一部分，输出的是什么？？
	//struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
	//struct house* sign;
	//sign = &fruzt;
	//printf("%d %d\n", fruzt.rooms, sign->stories); //6，1
	//printf("%s\n", fruzt.address); // 22 Spiffo Road
	//printf("%c %c\n", sign->address[3], fruzt.address[4]); //S p


	//3.设计一个结构模板储存一个月份名，该月份名的3个字母缩写，该月的天数即月份号
	// struct month
	// {
	// 	char month_name[10];
	// 	char month_name_abbr[4];
	// 	int month_days;
	// 	int month_number;
	// };
	

	//4.定义一个数组，内含12个结构（第3题的结构类型）并初始化为一个年份（非闰年）。
	// struct month months[12] =
	// {
	// 	{"January", "jan", 31, 1},
	// 	{"February", "feb", 28, 2},
	// 	{"March", "mar", 31, 3},
	// 	{"April", "arp", 30, 4},
	// 	{"May","may", 31, 5},
	// 	{"June", "jun", 30, 6},
	// 	{"July", "jul", 31, 7},
	// 	{"August", "aug", 31, 8},
	// 	{"September", "sep", 30, 9},
	// 	{"October", "oct", 31, 10},
	// 	{"November", "nov", 30, 11},
	// 	{"Devember", "dec", 31, 12}
	// };

	//5.编写一个函数，用户提供月份号，该函数就返回一年中到该月为止（包括该月）的总天数。假设在所有函数的外部声明了第3题的结构模板和一个该类型结构的数组。
	//录入用户输入的月份 → for循环打印月份
	// int get_month, sum;
	// printf("Please enter the month you want.\n");
	// scanf("%d", &get_month);
	// for (int i = 0; i < 12; i++)
	// {
	// 	if (get_month >= months[i].month_number)
	// 	{
	// 		sum += months[i].month_days;
	// 	}
	// }
	// printf("The summary of the day incloude the month you choose is %d.\n", sum);
	

	// 6.a.假设有下面的typedef,声明一个内含10个指定结构的数组。然后，单独给成员赋值（或等价字符串）,使第3个元素表示一个焦距长度有500mm,孔径为f/2.0的Remarkata镜头。
	// typedef struct lens
	// {
	// 	float foclen; //焦距mm
	// 	float fstop; //孔径
	// 	char brand[30];
	// }LENS;

	// LENS len[10];
	// len[2].foclen = 500.0;
	// len[2].fstop = 2.0;
	// strcpy(len[2].brand, "Remarkata");

	// b.重写a,在声明中使用一个待指定初始化器的初始化列表，而不是对每个成员单独赋值。
	// LENS len[10] = {[2] = {500.0, 2.0, "Remarkata"}};


	//7.考虑下面的程序片段
	// struct bem* pb;
	// struct bem deb = 
	// {
	// 	6,
	// 	{"Berbnazel", "Gwolkapwolk"},
	// 	"Arcturan"
	// };
	// pb = &deb;

	//a.下面的语句分别打印什么？
	// printf("%d\n", deb.limbs); //6
	// printf("%s\n", pb->type); //Arcturan
	// printf("%s\n", pb->type+2); //cturan

	//b.如何用结构表示法（两种方法）表示“Gwolkapwolk”？
	// printf("%s\n", deb.title.last);
	// printf("%s\n", pb->title.last);

	//c.编写一个函数，以bem结构的地址作为参数，并以下面的形式输出结构的内容（假定结构模板在一个名为starfolk.h的头文件中）：
	//Berbnazel Gwolkapwolk is a 6-limbed Arcturan.
	// func_bem(pb);


	// 8. 考虑下面的声明：
	// struct bard willie;
	// struct bard *pt = &willie;

	//a.用willie标识符标识willie结构的born成员
	// willie.born;

	//b.用pt标识符标识wille结构的born成员
	// pt->born;

	//c.调用scanf()读入一个用willie标识符标识的born成员的值
	// scanf("%d", willie.born);

	//d.调用scanf()读入一个用pt标识符标识的born成员的值
	// scanf("%d", pt->born);

	//e.调用scanf()读入一个用willie标识符标识的name成员中lname成员的值
	// scanf("%s", willie.name.lname);

	//f.调用scanf()读入一个用pt标识符标识的name成员中lname成员的值
	// scanf("%s", pt->name.lname);

	//g.构造一个表达式，表示willie结构变量所表示的姓名中名的第三个字母（英文的名在前）
	// willie.name.lname[2];

	//h.构造一个表达式，表示willie结构变量所表示的名和姓中字母总数
	// strlen(willie.name.fname) + strlen(willie.name.lname);


	// 9.定义一个结构模板以储存这些项：汽车名、马力、EPA(美国环保局）城市交通MPG(每加仑燃料行驶的英里数）评级、轴距和出厂年份。使用car作为该模版的标记。
	// struct car
	// {
	// 	char name[20];
	// 	float hp;
	// 	float epampg;
	// 	float wbase;
	// 	int year;
	// };


	//10.假设有如下结构：
	
	//a.设计一个函数，接受struct gas类型的参数。假设传入的结构包含distance和gals信息。该函数为mpg成员计算正确的值，并把只值返回该结构。
	// struct gas test;
	// calc_cons(test);

	//b.设计一个函数，接受struct gas类型的参数。假设传入的结构半酣distance和gals信息。该函数为mpg成员计算正确的值，并把该值赋给合适的成员。
	// calc_conts_t(&test);






	
	




























	return 0;
}


void func_bem(struct bem *str)
{
	printf("%s %s is a %d-limited %s.\n", str->title.first, str->title.last, str->limbs, str->type);
}

float calc_cons(struct gas str)
{
	printf("Please enter the distance and gals.\n");
	scanf("%f%f", &str.distance, &str.gals);

	return str.distance / str.gals;
}

void calc_conts_t(struct gas * sp)
{
	printf("Please enter the distance and gals.\n");
	scanf("%f%f", sp->distance, sp->gals);
	sp->mpg = sp->distance / sp->gals;
}