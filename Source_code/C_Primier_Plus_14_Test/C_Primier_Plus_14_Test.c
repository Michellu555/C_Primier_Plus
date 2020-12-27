#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>



#define MAXTITL 41  //��������� + 1
#define MAXAUTL 31  //������������󳤶� + 1
#define MAXBKS 10  //�鼮���������
#define CSIZE 4



void showmenu(struct socail_security_number);
void showmenu_t(char*, char*, char*, int);
char* s_gets(char*, int);
void get_average(struct student*);
void output_information(struct student*);
float total_average(struct student*);





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
	//��ʼ���ṹ���鲢ȫ����ֵΪ�� �� ʹ����ʱ�ṹ���������ļ���ȡ�ַ� �� ����ȡ�ַ����ӵ���Ӧ�ṹ������ �� ���㰲���� �� ��ӡ��Ϣ
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
	//	for (int i = 0; i < 19; i++) //����ȡ�ַ����ӵ���Ӧ�ṹ������
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
	//���ٵ�һ����������book�ṹ������һ����Ա��ʾ�Ƿ���ɾ����
	//a+bģʽ���ļ����ж��Ƿ��ܴ� �� rewind��λ���ļ���ͷ �� whileѭ���жϲ����ļ����� �� ��� �� �ж��ļ�����Ƿ���ȫ
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);
	if ((pbooks = fopen("bool.dat", "w+b")) == NULL)
	{
		fprintf(stdout, "Can't open the file.\n");
		exit(1);
	}
	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
		{
			puts("Current contents of book.dat:");
		}
		printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	//ɾ����¼
	//puts("Please enter the book title that you want to delete.");
	//char title[MAXAUTL];
	//s_gets(title, MAXAUTL);
	//int i;
	//for (i = 0; i < count; i++) //���ҵ���Ӧ�ļ�
	//{
	//	if (strcmp(title, library[i].title) == 0)
	//	{
	//		int j;
	//		for (j = i + 1; j <= count; j++, i++)
	//		{
	//			library[i] = library[j];
	//		}
	//		break;
	//	}
	//}
	////д���ļ�
	//rewind(pbooks);
	//fwrite(&library[0], size, count, pbooks);

	filecount = count;
	if (count == MAXBKS) //����ļ��Ѿ������Ͳ���Ҫ������ˣ�ֱ���˳�
	{
		fprintf("The book.dat file is full.\n", stderr);
		exit(2);
	}
	//��ʾ���� �� while+s_gets�ж����� �� �������� �� ����ֵ �� ���������� �� �ж��Ƿ������� �� ��ӡ��� �� д������
	puts("Please add new book title.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
		{
			continue;
		}
		if (count < MAXBKS)
		{
			puts("Enter the next title.");
		}
	}
	if (count > 0) //��ӡ����
	{
		puts("Here is the list of your book:\n");
		for (int i = 0; i < count; i++)
		{
			printf("%s by %s:$%.2f.\n", library[i].title, library[i].author, library[i].value);
		}
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
	{
		puts("No books? Too bad.");
		puts("Bye!");
	}
	fclose(pbooks);













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