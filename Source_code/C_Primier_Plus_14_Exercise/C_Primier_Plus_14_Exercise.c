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
	//��ϰ��
	//1.����Ľṹģ����ʲô���⣺
	//struct test
	//{
	//	char itable;
	//	int num[20];
	//	char* togs;
	//};


	//2.�����ǳ����һ���֣��������ʲô����
	//struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
	//struct house* sign;
	//sign = &fruzt;
	//printf("%d %d\n", fruzt.rooms, sign->stories); //6��1
	//printf("%s\n", fruzt.address); // 22 Spiffo Road
	//printf("%c %c\n", sign->address[3], fruzt.address[4]); //S p


	//3.���һ���ṹģ�崢��һ���·��������·�����3����ĸ��д�����µ��������·ݺ�
	// struct month
	// {
	// 	char month_name[10];
	// 	char month_name_abbr[4];
	// 	int month_days;
	// 	int month_number;
	// };
	

	//4.����һ�����飬�ں�12���ṹ����3��Ľṹ���ͣ�����ʼ��Ϊһ����ݣ������꣩��
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

	//5.��дһ���������û��ṩ�·ݺţ��ú����ͷ���һ���е�����Ϊֹ���������£��������������������к������ⲿ�����˵�3��Ľṹģ���һ�������ͽṹ�����顣
	//¼���û�������·� �� forѭ����ӡ�·�
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
	

	// 6.a.�����������typedef,����һ���ں�10��ָ���ṹ�����顣Ȼ�󣬵�������Ա��ֵ����ȼ��ַ�����,ʹ��3��Ԫ�ر�ʾһ�����೤����500mm,�׾�Ϊf/2.0��Remarkata��ͷ��
	// typedef struct lens
	// {
	// 	float foclen; //����mm
	// 	float fstop; //�׾�
	// 	char brand[30];
	// }LENS;

	// LENS len[10];
	// len[2].foclen = 500.0;
	// len[2].fstop = 2.0;
	// strcpy(len[2].brand, "Remarkata");

	// b.��дa,��������ʹ��һ����ָ����ʼ�����ĳ�ʼ���б������Ƕ�ÿ����Ա������ֵ��
	// LENS len[10] = {[2] = {500.0, 2.0, "Remarkata"}};


	//7.��������ĳ���Ƭ��
	// struct bem* pb;
	// struct bem deb = 
	// {
	// 	6,
	// 	{"Berbnazel", "Gwolkapwolk"},
	// 	"Arcturan"
	// };
	// pb = &deb;

	//a.��������ֱ��ӡʲô��
	// printf("%d\n", deb.limbs); //6
	// printf("%s\n", pb->type); //Arcturan
	// printf("%s\n", pb->type+2); //cturan

	//b.����ýṹ��ʾ�������ַ�������ʾ��Gwolkapwolk����
	// printf("%s\n", deb.title.last);
	// printf("%s\n", pb->title.last);

	//c.��дһ����������bem�ṹ�ĵ�ַ��Ϊ�����������������ʽ����ṹ�����ݣ��ٶ��ṹģ����һ����Ϊstarfolk.h��ͷ�ļ��У���
	//Berbnazel Gwolkapwolk is a 6-limbed Arcturan.
	// func_bem(pb);


	// 8. ���������������
	// struct bard willie;
	// struct bard *pt = &willie;

	//a.��willie��ʶ����ʶwillie�ṹ��born��Ա
	// willie.born;

	//b.��pt��ʶ����ʶwille�ṹ��born��Ա
	// pt->born;

	//c.����scanf()����һ����willie��ʶ����ʶ��born��Ա��ֵ
	// scanf("%d", willie.born);

	//d.����scanf()����һ����pt��ʶ����ʶ��born��Ա��ֵ
	// scanf("%d", pt->born);

	//e.����scanf()����һ����willie��ʶ����ʶ��name��Ա��lname��Ա��ֵ
	// scanf("%s", willie.name.lname);

	//f.����scanf()����һ����pt��ʶ����ʶ��name��Ա��lname��Ա��ֵ
	// scanf("%s", pt->name.lname);

	//g.����һ�����ʽ����ʾwillie�ṹ��������ʾ�����������ĵ�������ĸ��Ӣ�ĵ�����ǰ��
	// willie.name.lname[2];

	//h.����һ�����ʽ����ʾwillie�ṹ��������ʾ������������ĸ����
	// strlen(willie.name.fname) + strlen(willie.name.lname);


	// 9.����һ���ṹģ���Դ�����Щ���������������EPA(���������֣����н�ͨMPG(ÿ����ȼ����ʻ��Ӣ���������������ͳ�����ݡ�ʹ��car��Ϊ��ģ��ı�ǡ�
	// struct car
	// {
	// 	char name[20];
	// 	float hp;
	// 	float epampg;
	// 	float wbase;
	// 	int year;
	// };


	//10.���������½ṹ��
	
	//a.���һ������������struct gas���͵Ĳ��������贫��Ľṹ����distance��gals��Ϣ���ú���Ϊmpg��Ա������ȷ��ֵ������ֵֻ���ظýṹ��
	// struct gas test;
	// calc_cons(test);

	//b.���һ������������struct gas���͵Ĳ��������贫��Ľṹ�뺨distance��gals��Ϣ���ú���Ϊmpg��Ա������ȷ��ֵ�����Ѹ�ֵ�������ʵĳ�Ա��
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