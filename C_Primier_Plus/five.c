#include<graphics.h>
#include<stdio.h>
#include<bios.h>
#include<conio.h>
#include<stdlib.h>

/*定义按键码*/
#define UP 0x4800
#define DOWN 0X5000
#define LEFT 0x4b00
#define RIGHT 0x4d00
#define ENTER 0x1c0d
#define ESC 0x011b
/*设置偏移量*/
#define OFFSET 20
#define OFFSET_x 100
#define OFFSET_y 60
#define N 19
/*保存状态*/
int status[N][N];
int step_x,step_y;
int flag;
int flag00;
int key;	
void welcome();
void help();
void drawChessboard();
void playChess();
int resultCheck(int x,int y);
void chooseChessPieces(int x,int y);
int main()
{
	int gdriver;
	int gmode;
	int errorcode;
	clrscr();
	welcome();
	gdriver=DETECT;
	gmode=0;
	initgraph(&gdriver,&gmode,"");
	printf("Gobang game");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Error:%s\n",grapherrormsg(errorcode));
		printf("Press any key to quit!");
		getch();
		exit(1);
	}
	flag00=0;
	flag=1;
	help();
	drawChessboard();
	do{
		step_x=0;
		step_y=0;
		chooseChessPieces(step_x-1,step_y-1);
		do{
			while(bioskey(1)==0);
			key=bioskey(0);
			playChess();
		}while(key!=ENTER&&key!=ESC);
	}while(key!=ESC);
	closegraph();
	system("pause");
	

	return 0;
}



void welcome()
{
	char ch;
	int i=6;
	gotoxy(12,4);
	printf("Welcome to Gobang game!");
	gotoxy(12,6);
	printf("Do you want to continue?(y/n)");
	fflush(stdin);
	while(1)
	{
		ch=getchar();
		fflush(stdin);
		if(ch=='n'||ch=='N')
			exit(0);
		else
			if(ch=='y'||ch=='Y')
			{

				break;
			}
			else
			{
				i+=2;
				gotoxy(12,i);
				printf("Please enter again:(y/n)");
			}
	}
	printf("welcome");
	delay(1000);
}
void help()
{
	setcolor(4);
	settextstyle(0,0,2);
	outtextxy(280,50,"HELP");
	outtextxy(50,80,"1.INTRODUCTION");
	outtextxy(50,100,"Gobang is played between two ");
	outtextxy(50,120,"opponents on a board by making ");
	outtextxy(50,140,"moves with red and white chesses.");
	outtextxy(50,200,"2.WIN OF A GAME");
	outtextxy(50,220,"The winner of the game is the ");
	outtextxy(50,240,"player who will be first to attain ");
	outtextxy(50,260,"five in a row.");
	outtextxy(50,320,"3.QUIT THE GAME");
	outtextxy(50,340,"When you want to quit the game, ");
	outtextxy(50,360,"press Esc.");
	while(bioskey(1)==0);
	bioskey(0);
}

void drawChessboard()
{
	int x1,x2;
	int y1,y2;
	int i;
	clearviewport();
	setbkcolor(6);
	setcolor(8);
	setlinestyle(SOLID_LINE,1,3);
	for(i=0;i<19;i++)
	{
		moveto(OFFSET_x+OFFSET*i,OFFSET_y);
		linerel(0,360);
		moveto(OFFSET_x,OFFSET_y+OFFSET*i);
		linerel(360,0);
	}
	setcolor(1);
	settextstyle(3,0,8);
	outtextxy(50,60,"play");
	outtextxy(480,60,"key");
	settextstyle(3,0,8);
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+4*OFFSET,"UP-up");
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+6*OFFSET,"DOWN-down");
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+8*OFFSET,"LEFT-left");
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+10*OFFSET,"RIGHT-right");
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+12*OFFSET,"ENTER-enter");
	setcolor(14);
	settextstyle(1,0,1);
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+14*OFFSET,"Exit:");
	setcolor(9);
	settextstyle(3,0,1);
	outtextxy(OFFSET_x+19*OFFSET,OFFSET_y+16*OFFSET,"ESC");
}


/*功能控制模块*/
void drawChessPieces(int x,int y,int color)
{
	setcolor(color);
	setfillstyle(1,color);
	x=OFFSET_x+x*OFFSET;
	y=OFFSET_y+y*OFFSET;
	circle(x,y,6);
	floodfill(x,y,color);
}

/*交换行棋方*/
void exchange()
{
	if(flag==1)
		flag=2;
	else
		flag=1;
}

/*画棋子*/
void chooseChessPieces(int x,int y)
{
	if(flag==1)
		drawChessPieces(x,y,15);
	if(flag==2)
		drawChessPieces(x,y,4);
}

int check(int x,int y)
{
	/*检查行*/
	int count=1;								/*count置初值*/
	int i=x,j=y;
	j++;
	/*向右数*/
	while(j<N&&count<5)
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
			count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		j++;
	}
	/*向左数*/
	j=y-1;
	while(j>=0&&count<5)						/*退出上一个while循环时count小于5*/
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		j--;
	}
	if(count==5)								/*形成五子连成一线的状态*/
	{
	return status[x][y];						/*返回status[x][y]中的值*/
	}
	/*检查列*/
	i=x;
	j=y;
	count=1;
	/*往下数*/
	i=i+1;
	while(i<N&&count<5)
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		i++;
	}
	/*往上数*/
	i=x-1;
	while(i>=0&&count<5)						/*退出上一个while循环时count小于5*/
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}	
		i--;
	}
	if(count==5)								/*形成五子连成一线的状态*/
	{
	return status[x][y];						/*返回status[x][y]中的值*/
	}
	/*左斜行*/
	i=x;
	j=y;
	count=1;
	/*左斜往上*/
	i=i-1;
	j=j-1;
	while(i>=0&&j>=0&&count<5)
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		i--;
		j--;
	}
	/*左斜往下*/
	i=x+1;
	j=y+1;
	while(i<N&&j<N&&count<5)					/*退出上一个while循环时count小于5*/
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		i++;
		j++;
	}
	if(count==5)								/*形成五子连成一线的状态*/
	{
	return status[x][y];						/*返回status[x][y]中的值*/
	}
	/*右斜行*/
	i=x;
	j=y;
	count=1;
	/*右斜方向上*/
	i=i-1;
	j=j+1;
	while(i>=0&&j<N&&count<5) 					/*判断是否有落子以及是否为同一玩家*/
	{
		if(status[i][j]==status[x][y])
		{
	count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		i--;
		j++;
	}
	/*右斜方向下*/
	i=x+1;
	j=y-1;
	while(i>=0&&j<N&&count<5)					/*退出上一个while循环时count小于5*/
	{
		if(status[i][j]==status[x][y])			/*判断是否有落子以及是否为同一玩家*/
		{
		count++;
		}else									/*无落子或不是同一玩家*/
		{
			break;								/*退出循环*/
		}
		i++;
		j--;
	}
	if(count==5)								/*形成五子连成一线的状态*/
	{
	return status[x][y];						/*返回status[x][y]中的值*/
	}
	return 0;									/*未形成五子连成一线的状态，返回0*/
}

/*下棋*/
void playChess()
{
	int i;
	int j;
	switch(key)
	{
	case LEFT:
		if((step_x-1)<0)
			break;
		else
		{
			for(i=step_x-1,j=step_y;i>=0;i--)
				if(status[i][j]==0)
				{
					drawChessPieces(step_x,step_y,2);
					break;
				}
			if(i<0) 
				break;
			step_x=i;
			chooseChessPieces(step_x,step_y);
			break;
		}
	case RIGHT:
		if((step_x+1)>18)
			break;
		else
		{

			for(i=step_x+1,j=step_y;i<=18;i++)
				{
					if(status[i][j]==0)
					if(step_x==0&step_y==0&flag00==1)
						break;
					else
					{
						drawChessPieces(step_x,step_y,2);
						break;
					}
				}
			if(i>18)
				break;
			step_x=i;
			chooseChessPieces(step_x,step_y);
			break;
		}
	case DOWN:
		if((step_y+1)>18)
			break;
		else
		{
			for(i=step_x,j=step_y+1;j<=18;j++)
				if(status[i][j]==0)
				{
					if(step_x==0&step_y==0&flag00==1)
						;
					else
						drawChessPieces(step_x,step_y,2);
					break;
				}
			if(j>18)
				break;
			step_y=j;
			chooseChessPieces(step_x,step_y);
			break;
		}
	case UP:
		if(step_y-1<0)
			break;
		else
		{
			for(i=step_x,j=step_y-1;j>=0;j--)
				if(status[i][j]==0)
				{
					drawChessPieces(step_x,step_y,2);
					break;
				}
			if(j<0)
				break;
			step_y=j;
			chooseChessPieces(step_x,step_y);
			break;
		}
	case ESC:
		break;
	case ENTER:
		if(step_x>=0&&step_x<=18&&step_y>=0&&step_y<=18)
		{
			if(status[step_x][step_y]==0)
			{
				status[step_x][step_y]=flag;
				if(status[0][0]!=0)
					flag00=1;
				if(check(step_x,step_y)!=0)
				{

					gotoxy(30,4);
					setbkcolor(BLUE);
					cleardevice();
					setviewport(100,100,540,380,1);
					setfillstyle(1,6); 
					setcolor(YELLOW);
					rectangle(0,0,430,280);
					floodfill(50,50,14);
					setcolor(12);
					settextstyle(1,0,5);
					outtextxy(20,20,"Congratulation!");
					setcolor(15);
					settextstyle(3,0,4);
					if(flag==1)
					{
						outtextxy(20,120,"Player1 win the game!");
						settextstyle(0,0,2);
						outtextxy(280,440,"Press any key to begin");
					}
					if(flag==2)
						outtextxy(20,120,"Player2 win the game!");
					setcolor(14);
					settextstyle(2,0,8);
					getch();
					exit(0);
				}
				exchange();
				break;
			}
		}
		else
			break;
	}
}


