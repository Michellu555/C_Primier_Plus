#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



#define MAXTITL 41  //书名的最长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1
#define MAXBKS 10  //书籍的最大数量
#define CSIZE 4
#define BOOKINGNAME 20
#define SEAT 5



void showmenu(struct socail_security_number);
void showmenu_t(char*, char*, char*, int);
char* s_gets(char*, int);
void get_average(struct student*);
void output_information(struct student*);
float total_average(struct student*);
void showmenu_aircraft(struct aircraft test[]);
void show_videseat_number(struct aircraft test[]);
void show_videseat_information(struct aircraft test[]);
void show_seat_alphlist(struct aircraft test[]);
void seat_booking(struct aircraft test[]);
void delete_bookingseat(struct aircraft test[]);
void quit(struct aircraft test[]);
void show_airline(struct airline test[]);
void showmenu_airline(struct aircraft test[]);
void transform(double*, double*, int, double(*fun)(double));
double test_1(double);
double test_2(double);





struct socail_name
{
	char fname[20];
	char mnamde[20];
	char lname[20];
};

struct socail_security_number
{
	int number;
	struct socail_name name;
};

struct month
{
	char month_name[10];
	char month_name_abbr[4];
	int month_days;
	int month_number;
};

struct book
{
	int status;
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

struct name
{
	char fname[20];
	char lname[20];
};

struct student
{
	struct name student_name;
	float grade[3];
	float average;
};

struct ball
{
	int number; //球员编号
	char fname[20];
	char lname[20];
	int onstage; //上场次数
	int hit; //击中数
	int basse_on_ball; //走垒数
	int RBI; //打点
	float BABIP; //安打率
};

struct aircraft
{
	char seat_number[SEAT];
	int seat_status;
	char booking_fname[BOOKINGNAME];
	char booking_lname[BOOKINGNAME];
};

struct airline
{
	int airline_number;
	struct aircraft plane[12];
};



struct aircraft plane[12];
struct airline gaint[4] = //航班信息录入
{
	{102}, {311}, {444}, {519}
};
typedef void (*menu)(struct aircraft[]); //自定义变量类型
menu menu_func[6] = { show_videseat_number, show_videseat_information, show_seat_alphlist, seat_booking, delete_bookingseat, quit };//定义函数指针数组





int main()
{
	//1.重新编写复习题5,用月份名的拼写代替月份号（别忘了使用strcmp())。在一个简单的程序中测试该函数。
	//struct month months[12] =
	//{
	//	{"January", "jan", 31, "1"},
	//	{"February", "feb", 28, "2"},
	//	{"March", "mar", 31, "3"},
	//	{"April", "arp", 30, "4"},
	//	{"May","may", 31, "5"},
	//	{"June", "jun", 30, "6"},
	//	{"July", "jul", 31, "7"},
	//	{"August", "aug", 31, "8"},
	//	{"September", "sep", 30, "9"},
	//	{"October", "oct", 31, "10"},
	//	{"November", "nov", 30, "11"},
	//	{"Devember", "dec", 31, "12"}
	//};
	//int sum = 0;
	//char get_month[20];
	//printf("Please enter the month you want.\n");
	//scanf("%s", get_month);
	//for (int i = 0; i < 12; i++)
	//{
	//	if (strcmp(get_month, months[i].month_name) == 0)
	//	{
	//	break;
	//	}
	//sum += months[i].month_days;
	//}
	//printf("The summary of the day incloude the month you choose is %d.\n", sum);


	//2.编写一个函数，提示用户输入日、月和年。月份可以是月份号、月份名或月份名缩写。然后该程序应返回一年中到用户指定日子（包括这一天）的总天数。
	// struct month months[12] =
	// {
	// 	{"January", "jan", 31, "1"},
	// 	{"February", "feb", 28, "2"},
	// 	{"March", "mar", 31, "3"},
	// 	{"April", "arp", 30, "4"},
	// 	{"May","may", 31, "5"},
	// 	{"June", "jun", 30, "6"},
	// 	{"July", "jul", 31, "7"},
	// 	{"August", "aug", 31, "8"},
	// 	{"September", "sep", 30, "9"},
	// 	{"October", "oct", 31, "10"},
	// 	{"November", "nov", 30, "11"},
	// 	{"Devember", "dec", 31, "12"}
	// };
	// printf("Please enter the day, month and year that you want.\n");
	// int year, days;
	// char get_month[10];
	// int sum = 0;
	// scanf("%d%s%d", &days, get_month, &year);
	// for (int i = 0; i < 12; i++)
	// {
	//	 if (strcmp(get_month, months[i].month_name) == NULL || strcmp(get_month, months[i].month_name_abbr) == NULL || strcmp(get_month, months[i].month_number) == NULL)
	//	 {
	//		 break;
	//	 }
	//	 sum += months[i].month_days;
	// }
	// sum += days;
	// printf("%d.%s.%d is the %d days in this year.\n", days, get_month, year, sum);
	//  
	//return 0;


	//3.修改程序清单14.2中的图书目录程序，使其按照输入图书的顺序输出图书的信息，然后按照标题字母的声明输出图书的信息，最后按照价格的升序输出图书的信息。
	//int count = 0;
	//struct book library[MAXBKS];
	//struct book temp;
	//printf("Please enter the book title.\n");
	//printf("Press enter key at the start of a line to stop.\n");
	//while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0]!= '\0')
	//{
	//	printf("Now enter the author.\n");
	//	s_gets(library[count].author, MAXAUTL);
	//	printf("Now enter the value.\n");
	//	scanf("%f", &library[count++].value);
	//	while (getchar() != '\n')
	//	{
	//		continue;
	//	}
	//	if (count < MAXBKS)
	//	{
	//		printf("Enter the next title.\n");
	//	}
	//}
	//if (count > 0)
	//{
	//	for (int index = 0; index < count; index++)  //正常输出
	//	{
	//		printf("Here is the list of your books:\n");
	//		printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
	//	}
	//	printf("Here are the new order of the struct.\n"); //按名称排序后输出
	//	for (int i = 0; i < count - 1; i++)
	//	{
	//		for (int j = 1; j < count; j++)
	//		{
	//			if (strcmp(library[i].title, library[j].title) > 0)
	//			{
	//				temp = library[i];
	//				library[i] = library[j];
	//				library[j] = temp;
	//			}
	//		}
	//	}
	//	for (int index = 0; index < count; index++)
	//	{
	//		printf("Here is the list of your books:\n");
	//		printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
	//	}
	//	printf("Here are the new order of the struct.\n"); //按价格排序后输出
	//	for (int i = 0; i < count - 1; i++)
	//	{
	//		for (int j = 1; j < count; j++)
	//		{
	//			if (library[i].value > library[j].value)
	//			{
	//				temp = library[i];
	//				library[i] = library[j];
	//				library[j] = temp;
	//			}
	//		}
	//	}
	//	for (int index = 0; index < count; index++)
	//	{
	//		printf("Here is the list of your books:\n");
	//		printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
	//	}
	//}
	//else
	//{
	//	printf("No books? Too bad.\n");
	//}


	//4.编写一个程序，创建一个有两个成员的结构模板：
	//a.第1个成员是社会保险号，第2个成员是一个有3个成员的结构，第1个成员代表名，第2个成员代表中间名，第3个成员表示姓。
	//创建并初始化一个内含5个该类型结构的数组。该程序以下面的格式打印数据：
	//Dribble, Flossie M. - 302039823
	//如果有中间名，只打印它的第1个字母，后面加一个点（.);如果没有中间名，则不用打印点。编写一个程序进行打印，把结构数组传递给这个函数。
	//struct socail_security_number test[5] =
	//{
	//	{302039833, "Sfeaf", "Sfafds", "Werqrear"},
	//	{302039843, "Sfeafdsf", "\0", "Werqrear"},
	//	{302039823, "Dribble", "Mind", "Flossie"},
	//	{302039853, "Sfeaf", "\0", "Werqrsfar"},
	//	{302039863, "Sfeaf", "Sfafafs", "Werqrear"}
	//};
	//for (int i = 0; i < 5; i++)
	//{
	//	showmenu(test[i]);
	//}
	//b.修改a部分，传递结构的值而不是结构的地址。
	//for (int i = 0; i < 5; i++)
	//{
	//	showmenu_t(test[i].name.fname, test[i].name.lname, test[i].name.mnamde, test[i].number);
	//}


	//5.编写一个程序满足下面的要求。
	//a.外部定义一个有两个成员的结构模板name:一个字符串储存名，一个字符串储存姓。
	//b.外部定义一个有3个成员的结构模板student : 一个name类型的结构，一个grade数组储存3个浮点型分数，一个变量储存3个分数平均数。
	//c.在main()函数中声明一个内含CSIZE(CSIZE = 4)个student类型结构的数组，并初始化这些结构的名字部分。用函数执行e、f和g中描述的任务。
	//struct student test[CSIZE] =
	//{
	//	{.student_name.fname = "Michel", .student_name.lname = "Lu"},
	//	{.student_name.fname = "Zhang", .student_name.lname = "chouchou"},
	//	{.student_name.fname = "Chou", .student_name.lname = "chou"},
	//	{.student_name.fname = "Zhang", .student_name.lname = "dachou"}
	//};
	//d.以交互的方式获取每个学生的成绩，提示用户输入学生的姓名和分数。把分数储存到grade数组相应的结构中。可以在main()函数或其他函数中用循环来完成。
	//char first_name[20], last_name[20];
	//for (int i = 0; i < CSIZE; i++)
	//{
	//	printf("Please enter the student's first name and last name.\n");
	//	scanf("%s%s", first_name, last_name);
	//	int k;
	//	for (k = 0; k < CSIZE; k++)
	//	{
	//		if (strcmp(first_name, test[k].student_name.fname) == 0 && strcmp(last_name, test[k].student_name.lname) == 0)
	//		{
	//			for (int j = 0; j < 3; j++)
	//			{
	//				printf("Please enter the student's score.\n");
	//				scanf("%f", &test[k].grade[j]);
	//			}
	//			break;
	//		}
	//	}
	//	if (k == 4)
	//	{
	//		printf("Your name is not correct.\n");
	//	}
	//}
	//e.计算每个结构的平均分，并把计算后的值赋给合适的成员。
	//get_average(test);
	//f.打印每个结构的信息。
	//printf("The students informations is as below.\n");
	//output_information(test);
	//g.打印班级的平均分，即所有结构的数值成员的平均值。
	//printf("The average score for all student all subject is %.2f.\n", total_average(test));


	//6.一个文本文件中保存着一个垒球队的信息。每行数据都是这样排列：
	//4 Jessie Joybat 5 2 1 1
	//第1项是球员号，为方便起见，其范围是0~18。第2项是球员的名。第3项是球员的姓。名和姓都是一个单词。第4项是官方统计的球员上场次数。
	//接着3项分别是击中数、走垒数和打点（RBI)。文件可能包含多场比赛的数据，所以同一位球员可能有多行数据，而且同一位球员的多行数据之间可能有其他球员的数据。
	//编写一个程序，把数据储存到一个结构数组中。该结构中的成员要分别表示球员的名、姓、上场次数、击中数、走垒数、打点和安打率（稍后计算）。
	//可以使用球员号作为数组的索引。该程序要读到文件结尾，并统计每位球员的各项累计总和。
	//世界棒球统计与之相关。例如，一次走垒和触垒中的失误不计入上场次数，但是可能产生一个RBI。
	//但是该程序要做的是像下面描述的一样读取和处理数据文件，不会关心数据的实际含义。
	//要实现这些功能，最简单的方法是把结构的内容都初始化为零，把文件中的数据读入临时变量中，然后将其加入相应的结构中。
	//程序读完文件后，应计算每位球员的安打率，并把计算结果储存到结构的相应成员中。计算安打率是用球员的累计击中数除以上场累计次数。
	//这是一个浮点数计算。最后，程序结合整个球队的统计数据，一行显示一位球员的累计数据。
	//初始化结构数组并全部赋值为零 → 使用临时结构接收所有文件读取字符 → 将读取字符添加到对应结构数组中 → 计算安打率 → 打印信息
	//struct ball player[19];
	//struct ball temp;
	//for (int i = 0; i < 19; i++) ////初始化结构数组并全部赋值为零
	//{
	//	memset(&player[i], 0, sizeof(player[i]));
	//	player[i].number = i;
	//}
	//FILE* fp;
	//fp = fopen("ball.txt", "r");
	//while (feof(fp) == 0) //使用临时结构接收所有文件读取字符
	//{
	//	fscanf(fp, "%d", &temp.number);
	//	fscanf(fp, "%s", temp.fname);
	//	fscanf(fp, "%s", temp.lname);
	//	fscanf(fp, "%d", &temp.onstage);
	//	fscanf(fp, "%d", &temp.hit);
	//	fscanf(fp, "%d", &temp.basse_on_ball);
	//	fscanf(fp, "%d", &temp.RBI);
	//	for (int i = 0; i < 19; i++) //将读取字符添加到对应结构数组中
	//	{
	//		if (temp.number == player[i].number)
	//		{
	//			strcpy(player[i].fname, temp.fname);
	//			strcpy(player[i].lname, temp.lname);
	//			player[i].onstage += temp.onstage;
	//			player[i].hit += temp.hit;
	//			player[i].basse_on_ball += temp.basse_on_ball;
	//			player[i].RBI += temp.RBI;
	//		}
	//	}
	//}
	//for (int i = 0; i < 19; i++) //计算安打率并打印
	//{
	//	if (player[i].onstage != 0)
	//	{
	//		player[i].BABIP = (float)player[i].hit / (float)player[i].onstage;
	//		printf("The player %s %s, number %d, has onstage %d times.\n", player[i].fname, player[i].lname, player[i].number, player[i].onstage);
	//		printf("Hit %d times, bass on ball %d time, the RBI is %d times and the BABIP is %.2f.\n", player[i].hit, player[i].basse_on_ball, player[i].RBI, player[i].BABIP);
	//		putchar('\n');
	//	}
	//}
	//fclose(fp);


	//7.修改程序清单14.14, 从文件中读取每条记录并显示出来，允许用户删除记录或修改记录的内容。
	//如果删除记录，把空出来的空间留给下一个要读入的记录。要修改现有的文件内容，必须用"r+b"模式，而不是"a+b"模式。
	//而且，必须更加注意定位文件指针，防止新加入的记录覆盖现有记录。最简单的方法是改动储存在内存中的所有数据，然后再把最后的信息写入文件。
	//跟踪的一个方法是在book结构中添加一个成员表示是否该项被删除。
	//a+b模式打开文件并判断是否能打开 → rewind定位到文件开头 → while循环判断并充文件输入 → 输出 → 判断文件输出是否完全
	//struct book library[MAXBKS];
	//int count = 0;
	//int index, filecount;
	//FILE* pbooks;
	//int size = sizeof(struct book);
	//if ((pbooks = fopen("bool.dat", "r+b")) == NULL)
	//{
	//	fprintf(stdout, "Can't open the file.\n");
	//	exit(1);
	//}
	//rewind(pbooks);
	//while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	//{
	//	if (count == 0)
	//	{
	//		puts("Current contents of book.dat:");
	//	}
	//	printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
	//	count++;
	//}
	//filecount = count;
	//if (count == MAXBKS) //如果文件已经填满就不需要再填充了，直接退出
	//{
	//	fprintf("The book.dat file is full.\n", stderr);
	//	exit(2);
	//}
	////提示输入 → while+s_gets判断输入 → 输入作者 → 输入值 → 清理输入行 → 判断是否输入完 → 打印输出 → 写入数据
	//puts("Please add new book title.");
	//puts("Press [enter] at the start of a line to stop.");
	//while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	//{
	//	printf("Now enter the book status.\n");
	//	scanf("%d", &library[count].status);
	//	while (getchar() != '\n')
	//	{
	//		continue;
	//	}
	//	printf("Now enter the author.\n");
	//	s_gets(library[count].author, MAXAUTL);
	//	puts("Now enter the value.");
	//	scanf("%f", &library[count++].value);
	//	while (getchar() != '\n')
	//	{
	//		continue;
	//	}
	//	if (count < MAXBKS)
	//	{
	//		puts("Enter the next title.");
	//	}
	//}
	//if (count > 0) //打印数据
	//{
	//	puts("Here is the list of your book:\n");
	//	for (int i = 0; i < count; i++)
	//	{
	//		printf("%s by %s:$%.2f.\n", library[i].title, library[i].author, library[i].value);
	//	}
	//	fwrite(&library[filecount], size, count - filecount, pbooks);
	//}
	//else
	//{
	//	puts("No books? Too bad.");
	//}
	//删除记录
	//puts("Please enter the book title that you want to delete(enter key to quit).");
	//char title_d[MAXAUTL];
	//while (s_gets(title_d, MAXTITL) != NULL && title_d[0] != '\0')
	//{
	//	for (int i = 0; i < count; i++) //查找到对应文件
	//	{
	//		if (strcmp(title_d, library[i].title) == 0)
	//		{
	//			library[i].status = 0;
	//		}
	//	}
	//	puts("Please enter anoher book title that you want to delete(enter key to quit).");
	//}
	//修改记录
	//puts("Please enter the book title that you want to modifly(enter key to quit).");
	//char title_m[MAXTITL];
	//while (s_gets(title_m, MAXTITL) != NULL && title_m[0] != '\0')
	//{
	//	for (int i = 0; i < count; i++) //查找到对应文件
	//	{
	//		if (strcmp(title_m, library[i].title) == 0)
	//		{
	//			puts("Please enter the new book title.");
	//			s_gets(library[i].title, MAXTITL);
	//			puts("Please enter the new author.");
	//			s_gets(library[i].author, MAXTITL);
	//			puts("Please enter the new value of the book.");
	//			scanf("%f", &library[i].value);
	//			while (getchar() != '\n')
	//			{
	//				continue;
	//			}
	//		}
	//	}
	//	puts("Please enter the book title that you want to modifly(enter key to quit).");
	//}
	//fclose(pbooks);
	//写入到文件
	//pbooks = fopen("bool.dat", "w+b");
	//rewind(pbooks);
	//for (int i = 0; i < count; i++)
	//{
	//	if (library[i].status == 1)
	//	{
	//		fwrite(&library[i], size, 1, pbooks);
	//	}
	//}
	//fclose(pbooks);


	//8.巨人航空公司的机群由12个座位的飞机组成。它每天飞行一个航班。根据下面的要求，编写一个座位预订程序。
	//a.该程序使用一个内含12个结构的数组。每个结构中包括：一个成员表示座位编号、一个成员表示座位是否已被预订、一个成员表示预订人的名、一个成员表示预订人的姓。
	//b.该程序显示下面的菜单：
	//To choose a function, enter its letter label :
	//a) Show number of empty seats
	//b) Show list of empty seats
	//c) Show alphabetical list of seats
	//d) Assign a customer to a seat assignment
	//e) Delete a seat assignment
	//f) Quit
	//c.该程序能成功执行上面给出的菜单。选择d)和e)要提示用户进行额外输入，每个选项都能让用户中止输入。
	//d.执行特定程序后，该程序再次显示菜单，除非用户选择f。
	//初始化飞机座位状态
	//FILE* fp;
	//fp = fopen("aircraft.txt", "r");
	//rewind(fp);
	//char temp[SEAT];
	//for (int i = 0; i < 12; i++)
	//{
	//	fscanf(fp, "%s", temp);
	//	strcpy(plane[i].seat_number, temp);
	//	plane[i].seat_status = 0;
	//}
	//fclose(fp);
	//showmenu_aircraft(plane);


	//9.巨人航空公司（编程练习8)需要另一架飞机（容量相同）, 每天飞4班（航班102、311、444和519)。把程序扩展为可以处理4个航班。
	//用一个顶层菜单提供航班选择和退出。选择一个特定航班，就会出现和编程练习8类似的菜单。但是该菜单要添加一个新选项：确认座位分配。
	//而且，菜单中的退出是返回顶层菜单。每次显示都要指明当前正在处理的航班号。另外，座位分配显示要指明确认状态。
	//FILE* fp;
	//fp = fopen("aircraft.txt", "r");
	//char temp[SEAT];
	//for (int j = 0; j < 4; j++)
	//{
	//	rewind(fp);
	//	for (int i = 0; i < 12; i++)
	//	{
	//		fscanf(fp, "%s", temp);
	//		strcpy(gaint[j].plane[i].seat_number, temp);
	//		gaint[j].plane[i].seat_status = 0;
	//	}
	//}
	//fclose(fp);
	//show_airline(gaint);
	

	//10.编写一个程序，通过一个函数指针数组实现菜单。例如，选择菜单中的a,将激活由该数组第1个元素指向的函数。
	//FILE* fp;
	//fp = fopen("aircraft.txt", "r");
	//rewind(fp);
	//char temp[SEAT];
	//for (int i = 0; i < 12; i++)
	//{
	//	fscanf(fp, "%s", temp);
	//	strcpy(plane[i].seat_number, temp);
	//	plane[i].seat_status = 0;
	//}
	//fclose(fp);
	//showmenu_airline(plane);


	//11.编写一个名为transform()的函数，接受4个参数：内含double类型数据的源数组名、内含double类型数据的目标数组名、
	//一个表示数组元素个数的int类型参数、函数名（或等价的函数指针）。transform()函数应把指定函数
	//应用于源数组中的每个元素，并把返回值储存在目标数组中。例如：transform(source, target, 100, sin);
	//该声明会把target[0]设置为sin(source[0]), 等等，共有100个元素。在一个程序中调用transform()4次，以测试该函数。
	//分别使用math.h函数库中的两个函数以及自定义的两个函数作为参数。
	//int len = 100;
	//double* source, * target;
	//source = (double*)malloc(sizeof(double) * len);
	//target = (double*)malloc(sizeof(double) * len);
	//srand(time(0));
	//for (int i = 0; i < len; i++)
	//{
	//	source[i] = rand() % 100 + 1;
	//}
	//transform(source, target, len, sin);
	//transform(source, target, len, sqrt);
	//transform(source, target, len, test_1);
	//transform(source, target, len, test_2);


















	return 0;
}

void showmenu(struct socail_security_number test)
{
	printf("%s %s", test.name.fname, test.name.lname);

	if (test.name.mnamde[0] != '\0')
	{
		printf(" %c.", test.name.mnamde[0]);
	}
	printf(" - %d\n", test.number);
}

void showmenu_t(char* a, char* b,  char* c, int d)
{
	printf("%s %s", a, b);

	if (c[0] != '\0')
	{
		printf(" %c.", c[0]);
	}
	printf(" - %d\n", d);
}

char* s_gets(char* st, int n)
{
	char* aim, *find;
	aim = fgets(st, n, stdin);
	if (aim)
	{
		find = strchr(aim, '\n');
		if (find)
		{
			*find = '\0';
		}
		else
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	}
}

void get_average(struct student *str)
{
	for (int i = 0; i < 4; i++)
	{
		str->average = (str->grade[0] + str->grade[1] + str->grade[2]) / 3.0;
		str++;
	}
	
	
}

void output_information(struct student* str)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%s %s's average scores is %.2f.\n", str->student_name.fname, str->student_name.lname, str->average);
		str++;
	}
	
}

float total_average(struct student* str)
{
	float sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += str->grade[j];
		}
		str++;
	}
	return sum / 12.0;
}

void showmenu_aircraft(struct aircraft test[])
{
	char choice;
	puts("*********************************************************");
	puts("To choose a function, enter its letter label :" );
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
	puts("*********************************************************");
	puts("Please choose the function that you want to use.");
	while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (strchr("abcdef", choice) != NULL)
		{
			switch (choice)
			{
			case 'a': show_videseat_number(test);
				break;
			case 'b': show_videseat_information(test);
				break;
			case 'c': show_seat_alphlist(test);
				break;
			case 'd': seat_booking(test);
				break;
			case 'e': delete_bookingseat(test);
				break;
			case 'f': quit(test);
				break;
			}
		}
		else
		{
			puts("Please choose function with correct letter label.");
		}
	}
}

void show_videseat_number(struct aircraft test[])
{
	system("cls");
	int count = 0;
	for (int i = 0; i < 12; i++)
	{
		if (test[i].seat_status == 0)
		{
			count++;
		}
	}
	printf("There are %d seat left in this aircraft.\n", count);
	//showmenu_aircraft(test); //第九题使用
	showmenu_airline(test); //第十题使用
}

void show_videseat_information(struct aircraft test[])
{
	system("cls");
	for (int i = 0; i < 12; i++)
	{
		if (test[i].seat_status == 0)
		{
			printf("%s\t", test[i].seat_number);
		}
		else
		{
			printf("**\t");
		}
		if ((i + 1) % 3 == 0)
		{
			putchar('\n');
		}
	}
	//showmenu_aircraft(test); //第九题使用
	showmenu_airline(test); //第十题使用
}

void show_seat_alphlist(struct aircraft test[])
{
	system("cls");
	struct aircraft temp;
	for (int i = 0; i < 11; i++)
	{
		for (int j = i + 1; j < 12; j++)
		{
			if (strcmp(test[i].seat_number, test[j].seat_number) > 0)
			{
				temp = test[i];
				test[i] = test[j];
				test[j] = temp;
			}
		}
	}
	for (int m = 0; m < 12; m++)
	{
		printf("%s\t", test[m].seat_number);
		if ((m + 1) % 3 == 0)
		{
			putchar('\n');
		}
	}
	//showmenu_aircraft(test); //第九题使用
	showmenu_airline(test); //第十题使用
}

void seat_booking(struct aircraft test[])
{
	system("cls");
	puts("The vide seat list is as below:");
	for (int i = 0; i < 12; i++)
	{
		if (test[i].seat_status == 0)
		{
			printf("%s\t", test[i].seat_number);
		}
		else
		{
			printf("**\t");
		}
		if ((i + 1) % 3 == 0)
		{
			putchar('\n');
		}
	}
	puts("Please enter the seat number that you want(empty line to quit):");
	char seat[SEAT];
	int choice = 0;
	char fname[BOOKINGNAME], lname[BOOKINGNAME];
	int count = 0;
	while (s_gets(seat, SEAT) != NULL && seat[0] != '\0')
	{
		for (int i = 0; i < 12; i++)
		{
			if (strcmp(seat, test[i].seat_number) == 0 && test[i].seat_status != 1)
			{
				count++;
				printf("The seat %s is locked, please enter your first name(empty line to quit).\n", test[i].seat_number);
				while (s_gets(fname, BOOKINGNAME) != NULL && fname[0] != '\0' )
				{
					strcpy(test[i].booking_fname, fname);
					puts("please enter your last name(enpty line to quit).");
					while (s_gets(lname, BOOKINGNAME) != NULL && lname[0] != '\0')
					{
						strcpy(test[i].booking_lname, lname);
						puts("Are you sure to book this seat?\nEnter 1 for Yes, 0 for No");
						scanf("%d", &choice);
						while (getchar() != '\n')
						{
							continue;
						}
						if (choice)
						{
							printf("OK, fine. The seat %s is booking by %s %s.\n", test[i].seat_number, test[i].booking_fname, test[i].booking_lname);
							test[i].seat_status = 1;
						}
						break;
					}
					break;
				}
			}
		}
		if (!count)
		{
			puts("Sorry, can't find this seat or the seat has been booked.\n");
		}
		puts("Please enter the seat number that you want(empty line to quit):");
	}
	//showmenu_aircraft(test); //第九题使用
	showmenu_airline(test); //第十题使用
}

void delete_bookingseat(struct aircraft test[])
{
	system("cls");
	char fname[BOOKINGNAME], lname[BOOKINGNAME];
	int choice;
	int count = 0;
	puts("So sorry for that you want to delete your booking seat.");
	puts("Please enter your first name to delete your booking seat (enpty line to quit).");
	while (s_gets(fname, BOOKINGNAME) != NULL && fname[0] != '\0')
	{
		puts("Please enter your last name.");
		s_gets(lname, BOOKINGNAME);
		for (int i = 0; i < 12; i++)
		{
			if (strcmp(fname, test[i].booking_fname) == 0 && strcmp(lname, test[i].booking_lname) == 0)
			{
				count++;
				printf("Your seat is %s.\nAre you sure to delete your seat, enter 1 for Yes, 0 for No.\n", test[i].seat_number);
				scanf("%d", &choice);
				while (getchar() != '\n')
				{
					continue;
				}
				if (choice)
				{
					test[i].seat_status = 0;
					printf("Your seat %s has beed deleted.\n", test[i].seat_number);
				}
			}
		}
		if (!count) //找不到座位
		{
			puts("Sorry, can't find your seat.");
		}
		puts("Please enter your first name to delete your booking seat (enpty line to quit).");
	}
	//showmenu_aircraft(test); //第九题使用
	showmenu_airline(test); //第十题使用
}

void quit(struct aircraft test[])
{
	puts("Thanks for taking our flight.");
	exit(0);
}

void show_airline(struct airline test[]) 
{
	int choice;
	puts("Welcome to our flight, we have 4 ariline as below.");
	for (int i = 0; i < 4; i++)
	{
		printf("Airline %d\n", test[i].airline_number);
	}
	puts("Please choose the airline you want(enter q to quit).");
	puts("Enter 1 for airline 102, 2 for airline 311, 3 for airline 444 and 4 for airline 519.");
	while (scanf("%d", &choice))
	{
		while (getchar() != '\n')
		{
			continue;
		}
		switch (choice)
		{
		case 1: 
			puts("You have choose airline 102.");
			showmenu_airline(test[0].plane);
			break;
		case 2:
			puts("You have choose airline 311.");
			showmenu_airline(test[1].plane);
			break;
		case 3:
			puts("You have choose airline 444.");
			showmenu_airline(test[2].plane);
			break;
		case 4:
			puts("You have choose airline 102.");
			showmenu_airline(test[3].plane);
			break;
		default:
			puts("Please enter the correct label.");
			break;
		}
		puts("Please choose the airline you want(empty line to quit).");
		puts("Enter 1 for airline 102, 2 for airline 311, 3 for airline 444 and 4 for airline 519.");
	}
	puts("Thanks for taking our flight.");
	exit(0);

}

void showmenu_airline(struct aircraft test[])
{
	char choice;
	puts("*********************************************************");
	puts("To choose a function, enter its letter label :");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
	puts("*********************************************************");
	puts("Please choose the function that you want to use.");
	while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if (strchr("abcdef", choice) != NULL)
		{
			switch (choice)
			{
			case 'a': menu_func[0](plane);
				break;
			case 'b': menu_func[1](plane);
				break;
			case 'c': menu_func[2](plane);
				break;
			case 'd': menu_func[3](plane);
				break;
			case 'e': menu_func[4](plane);
				break;
			case 'f': menu_func[5](plane);
				break;
			}
		}
		else
		{
			puts("Please choose function with correct letter label.");
		}
	}
}

void transform(double* a, double* b, int c, double(*d)(double))
{
	for (int i = 0; i < c; i++)
	{
		b[i] = d(a[i]);
		printf("%.2lf\t", b[i]);
		if ((i + 1) % 10 == 0)
		{
			putchar('\n');
		}
	}
}

double test_1(double a)
{
	return a * a;
}

double test_2(double b)
{
	return b / 2;
}