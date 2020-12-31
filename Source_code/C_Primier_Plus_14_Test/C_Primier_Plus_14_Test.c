#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>



#define MAXTITL 41  //��������� + 1
#define MAXAUTL 31  //������������󳤶� + 1
#define MAXBKS 10  //�鼮���������
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
	int number; //��Ա���
	char fname[20];
	char lname[20];
	int onstage; //�ϳ�����
	int hit; //������
	int basse_on_ball; //������
	int RBI; //���
	float BABIP; //������
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
struct airline gaint[4] = //������Ϣ¼��
{
	{102}, {311}, {444}, {519}
};
typedef void (*menu)(struct aircraft[]); //�Զ����������
menu menu_func[6] = { show_videseat_number, show_videseat_information, show_seat_alphlist, seat_booking, delete_bookingseat, quit };//���庯��ָ������





int main()
{
	//1.���±�д��ϰ��5,���·�����ƴд�����·ݺţ�������ʹ��strcmp())����һ���򵥵ĳ����в��Ըú�����
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


	//2.��дһ����������ʾ�û������ա��º��ꡣ�·ݿ������·ݺš��·������·�����д��Ȼ��ó���Ӧ����һ���е��û�ָ�����ӣ�������һ�죩����������
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


	//3.�޸ĳ����嵥14.2�е�ͼ��Ŀ¼����ʹ�䰴������ͼ���˳�����ͼ�����Ϣ��Ȼ���ձ�����ĸ���������ͼ�����Ϣ������ռ۸���������ͼ�����Ϣ��
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
	//	for (int index = 0; index < count; index++)  //�������
	//	{
	//		printf("Here is the list of your books:\n");
	//		printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
	//	}
	//	printf("Here are the new order of the struct.\n"); //��������������
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
	//	printf("Here are the new order of the struct.\n"); //���۸���������
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


	//4.��дһ�����򣬴���һ����������Ա�Ľṹģ�壺
	//a.��1����Ա����ᱣ�պţ���2����Ա��һ����3����Ա�Ľṹ����1����Ա����������2����Ա�����м�������3����Ա��ʾ�ա�
	//��������ʼ��һ���ں�5�������ͽṹ�����顣�ó���������ĸ�ʽ��ӡ���ݣ�
	//Dribble, Flossie M. - 302039823
	//������м�����ֻ��ӡ���ĵ�1����ĸ�������һ���㣨.);���û���м��������ô�ӡ�㡣��дһ��������д�ӡ���ѽṹ���鴫�ݸ����������
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
	//b.�޸�a���֣����ݽṹ��ֵ�����ǽṹ�ĵ�ַ��
	//for (int i = 0; i < 5; i++)
	//{
	//	showmenu_t(test[i].name.fname, test[i].name.lname, test[i].name.mnamde, test[i].number);
	//}


	//5.��дһ���������������Ҫ��
	//a.�ⲿ����һ����������Ա�Ľṹģ��name:һ���ַ�����������һ���ַ��������ա�
	//b.�ⲿ����һ����3����Ա�Ľṹģ��student : һ��name���͵Ľṹ��һ��grade���鴢��3�������ͷ�����һ����������3������ƽ������
	//c.��main()����������һ���ں�CSIZE(CSIZE = 4)��student���ͽṹ�����飬����ʼ����Щ�ṹ�����ֲ��֡��ú���ִ��e��f��g������������
	//struct student test[CSIZE] =
	//{
	//	{.student_name.fname = "Michel", .student_name.lname = "Lu"},
	//	{.student_name.fname = "Zhang", .student_name.lname = "chouchou"},
	//	{.student_name.fname = "Chou", .student_name.lname = "chou"},
	//	{.student_name.fname = "Zhang", .student_name.lname = "dachou"}
	//};
	//d.�Խ����ķ�ʽ��ȡÿ��ѧ���ĳɼ�����ʾ�û�����ѧ���������ͷ������ѷ������浽grade������Ӧ�Ľṹ�С�������main()������������������ѭ������ɡ�
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
	//e.����ÿ���ṹ��ƽ���֣����Ѽ�����ֵ�������ʵĳ�Ա��
	//get_average(test);
	//f.��ӡÿ���ṹ����Ϣ��
	//printf("The students informations is as below.\n");
	//output_information(test);
	//g.��ӡ�༶��ƽ���֣������нṹ����ֵ��Ա��ƽ��ֵ��
	//printf("The average score for all student all subject is %.2f.\n", total_average(test));


	//6.һ���ı��ļ��б�����һ������ӵ���Ϣ��ÿ�����ݶ����������У�
	//4 Jessie Joybat 5 2 1 1
	//��1������Ա�ţ�Ϊ����������䷶Χ��0~18����2������Ա��������3������Ա���ա������ն���һ�����ʡ���4���ǹٷ�ͳ�Ƶ���Ա�ϳ�������
	//����3��ֱ��ǻ��������������ʹ�㣨RBI)���ļ����ܰ����ೡ���������ݣ�����ͬһλ��Ա�����ж������ݣ�����ͬһλ��Ա�Ķ�������֮�������������Ա�����ݡ�
	//��дһ�����򣬰����ݴ��浽һ���ṹ�����С��ýṹ�еĳ�ԱҪ�ֱ��ʾ��Ա�������ա��ϳ��������������������������Ͱ����ʣ��Ժ���㣩��
	//����ʹ����Ա����Ϊ������������ó���Ҫ�����ļ���β����ͳ��ÿλ��Ա�ĸ����ۼ��ܺ͡�
	//�������ͳ����֮��ء����磬һ�����ݺʹ����е�ʧ�󲻼����ϳ����������ǿ��ܲ���һ��RBI��
	//���Ǹó���Ҫ������������������һ����ȡ�ʹ��������ļ�������������ݵ�ʵ�ʺ��塣
	//Ҫʵ����Щ���ܣ���򵥵ķ����ǰѽṹ�����ݶ���ʼ��Ϊ�㣬���ļ��е����ݶ�����ʱ�����У�Ȼ���������Ӧ�Ľṹ�С�
	//��������ļ���Ӧ����ÿλ��Ա�İ����ʣ����Ѽ��������浽�ṹ����Ӧ��Ա�С����㰲����������Ա���ۼƻ����������ϳ��ۼƴ�����
	//����һ�����������㡣��󣬳�����������ӵ�ͳ�����ݣ�һ����ʾһλ��Ա���ۼ����ݡ�
	//��ʼ���ṹ���鲢ȫ����ֵΪ�� �� ʹ����ʱ�ṹ���������ļ���ȡ�ַ� �� ����ȡ�ַ���ӵ���Ӧ�ṹ������ �� ���㰲���� �� ��ӡ��Ϣ
	//struct ball player[19];
	//struct ball temp;
	//for (int i = 0; i < 19; i++) ////��ʼ���ṹ���鲢ȫ����ֵΪ��
	//{
	//	memset(&player[i], 0, sizeof(player[i]));
	//	player[i].number = i;
	//}
	//FILE* fp;
	//fp = fopen("ball.txt", "r");
	//while (feof(fp) == 0) //ʹ����ʱ�ṹ���������ļ���ȡ�ַ�
	//{
	//	fscanf(fp, "%d", &temp.number);
	//	fscanf(fp, "%s", temp.fname);
	//	fscanf(fp, "%s", temp.lname);
	//	fscanf(fp, "%d", &temp.onstage);
	//	fscanf(fp, "%d", &temp.hit);
	//	fscanf(fp, "%d", &temp.basse_on_ball);
	//	fscanf(fp, "%d", &temp.RBI);
	//	for (int i = 0; i < 19; i++) //����ȡ�ַ���ӵ���Ӧ�ṹ������
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
	//for (int i = 0; i < 19; i++) //���㰲���ʲ���ӡ
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


	//7.�޸ĳ����嵥14.14, ���ļ��ж�ȡÿ����¼����ʾ�����������û�ɾ����¼���޸ļ�¼�����ݡ�
	//���ɾ����¼���ѿճ����Ŀռ�������һ��Ҫ����ļ�¼��Ҫ�޸����е��ļ����ݣ�������"r+b"ģʽ��������"a+b"ģʽ��
	//���ң��������ע�ⶨλ�ļ�ָ�룬��ֹ�¼���ļ�¼�������м�¼����򵥵ķ����ǸĶ��������ڴ��е��������ݣ�Ȼ���ٰ�������Ϣд���ļ���
	//���ٵ�һ����������book�ṹ�����һ����Ա��ʾ�Ƿ���ɾ����
	//a+bģʽ���ļ����ж��Ƿ��ܴ� �� rewind��λ���ļ���ͷ �� whileѭ���жϲ����ļ����� �� ��� �� �ж��ļ�����Ƿ���ȫ
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
	//if (count == MAXBKS) //����ļ��Ѿ������Ͳ���Ҫ������ˣ�ֱ���˳�
	//{
	//	fprintf("The book.dat file is full.\n", stderr);
	//	exit(2);
	//}
	////��ʾ���� �� while+s_gets�ж����� �� �������� �� ����ֵ �� ���������� �� �ж��Ƿ������� �� ��ӡ��� �� д������
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
	//if (count > 0) //��ӡ����
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
	//ɾ����¼
	//puts("Please enter the book title that you want to delete(enter key to quit).");
	//char title_d[MAXAUTL];
	//while (s_gets(title_d, MAXTITL) != NULL && title_d[0] != '\0')
	//{
	//	for (int i = 0; i < count; i++) //���ҵ���Ӧ�ļ�
	//	{
	//		if (strcmp(title_d, library[i].title) == 0)
	//		{
	//			library[i].status = 0;
	//		}
	//	}
	//	puts("Please enter anoher book title that you want to delete(enter key to quit).");
	//}
	//�޸ļ�¼
	//puts("Please enter the book title that you want to modifly(enter key to quit).");
	//char title_m[MAXTITL];
	//while (s_gets(title_m, MAXTITL) != NULL && title_m[0] != '\0')
	//{
	//	for (int i = 0; i < count; i++) //���ҵ���Ӧ�ļ�
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
	//д�뵽�ļ�
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


	//8.���˺��չ�˾�Ļ�Ⱥ��12����λ�ķɻ���ɡ���ÿ�����һ�����ࡣ���������Ҫ�󣬱�дһ����λԤ������
	//a.�ó���ʹ��һ���ں�12���ṹ�����顣ÿ���ṹ�а�����һ����Ա��ʾ��λ��š�һ����Ա��ʾ��λ�Ƿ��ѱ�Ԥ����һ����Ա��ʾԤ���˵�����һ����Ա��ʾԤ���˵��ա�
	//b.�ó�����ʾ����Ĳ˵���
	//To choose a function, enter its letter label :
	//a) Show number of empty seats
	//b) Show list of empty seats
	//c) Show alphabetical list of seats
	//d) Assign a customer to a seat assignment
	//e) Delete a seat assignment
	//f) Quit
	//c.�ó����ܳɹ�ִ����������Ĳ˵���ѡ��d)��e)Ҫ��ʾ�û����ж������룬ÿ��ѡ������û���ֹ���롣
	//d.ִ���ض�����󣬸ó����ٴ���ʾ�˵��������û�ѡ��f��
	//��ʼ���ɻ���λ״̬
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


	//9.���˺��չ�˾�������ϰ8)��Ҫ��һ�ܷɻ���������ͬ��, ÿ���4�ࣨ����102��311��444��519)���ѳ�����չΪ���Դ���4�����ࡣ
	//��һ������˵��ṩ����ѡ����˳���ѡ��һ���ض����࣬�ͻ���ֺͱ����ϰ8���ƵĲ˵������Ǹò˵�Ҫ���һ����ѡ�ȷ����λ���䡣
	//���ң��˵��е��˳��Ƿ��ض���˵���ÿ����ʾ��Ҫָ����ǰ���ڴ���ĺ���š����⣬��λ������ʾҪָ��ȷ��״̬��
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
	

	//10.��дһ������ͨ��һ������ָ������ʵ�ֲ˵������磬ѡ��˵��е�a,�������ɸ������1��Ԫ��ָ��ĺ�����
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


	//11.��дһ����Ϊtransform()�ĺ���������4���������ں�double�������ݵ�Դ���������ں�double�������ݵ�Ŀ����������
	//һ����ʾ����Ԫ�ظ�����int���Ͳ���������������ȼ۵ĺ���ָ�룩��transform()����Ӧ��ָ������
	//Ӧ����Դ�����е�ÿ��Ԫ�أ����ѷ���ֵ������Ŀ�������С����磺transform(source, target, 100, sin);
	//���������target[0]����Ϊsin(source[0]), �ȵȣ�����100��Ԫ�ء���һ�������е���transform()4�Σ��Բ��Ըú�����
	//�ֱ�ʹ��math.h�������е����������Լ��Զ��������������Ϊ������
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
	//showmenu_aircraft(test); //�ھ���ʹ��
	showmenu_airline(test); //��ʮ��ʹ��
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
	//showmenu_aircraft(test); //�ھ���ʹ��
	showmenu_airline(test); //��ʮ��ʹ��
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
	//showmenu_aircraft(test); //�ھ���ʹ��
	showmenu_airline(test); //��ʮ��ʹ��
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
	//showmenu_aircraft(test); //�ھ���ʹ��
	showmenu_airline(test); //��ʮ��ʹ��
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
		if (!count) //�Ҳ�����λ
		{
			puts("Sorry, can't find your seat.");
		}
		puts("Please enter your first name to delete your booking seat (enpty line to quit).");
	}
	//showmenu_aircraft(test); //�ھ���ʹ��
	showmenu_airline(test); //��ʮ��ʹ��
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