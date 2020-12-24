


char* s_gets(char* st, int n);
//void getinfo(struct namect*);
//void makeinfo(struct namect*);
//void showinfo(const struct namect*);
struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
void getinfoo(struct namectt* pst);
void makeinfoo(struct namectt* pst);
void showinfoo(struct namectt* pst);
void cleanup(struct namectt* pst);
void showFlex(const struct flex* p);
double sum(const struct funds money[], int n);
int squre(int);
int add(int, int);
int sub(int, int);
int calc(int (*fp)(int, int), int, int);
char showmenu(void);
void eatline(void); //读取至行末尾
void show(void(*fp)(char*), char* str);
void ToUpper(char*);
void ToLower(char*);
void Transpose(char*); //大小写转置
void Dummy(char*); //不更改字符串