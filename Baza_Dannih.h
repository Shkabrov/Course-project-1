#ifndef BAZA_DANNIH_H_INCLUDED
#define BAZA_DANNIH_H_INCLUDED

#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

using namespace std;



void XY1(int x, int y)
{
COORD a = { x, y };
HANDLE form = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(form, a);
}
void Color1(int text, int background)
{
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

struct grajdanin
{
struct
{
char name [15];
char fam [15];
char ot [15];
char ad [15];
char ad1 [15];
unsigned int dd,mm,gg;
char nb [15];
} gr;
} ;
struct grajdanin1
{
struct
{
char name [15];
char fam [15];
char ot [15];
char ad [15];
char ad1 [15];
char nb [15];
unsigned int dd,mm,gg;
} gr1;
} ;


char pq[ 15 ];
char pname[ 15 ];
char pustoi1[ 15 ]={'\0'};
char pustoi[ 15 ]={' '};
char null[ 15 ]={'0'};
char fff[ 15 ];
char ott[ 15 ];
char add[ 15 ];
char add1[ 15 ];
char nnb[ 15 ];
int ddd,mmm,ggg;
char finame[ 15 ];
char finame1[ 15 ];
char finame2[ 15 ];
struct grajdanin z[50];
struct grajdanin1 c[50];

unsigned short g,n,w,e,T,y=1,h,l,vv,rtt=2,ud=0;
int o=1;

void clrscr()
{
system("CLS");
}

void delete_()
{

//ПОРЯДОЧНОСТЬ
for(int ii=1;ii<31;ii++)
{
for(int i=1;i<31;i++)
{
if(z[i].gr.dd==ii)
{
c[o].gr1.dd=z[i].gr.dd;
c[o].gr1.gg=z[i].gr.gg;
c[o].gr1.mm=z[i].gr.mm;
strcpy(c[o].gr1.name,z[i].gr.name);
strcpy(c[o].gr1.ad,z[i].gr.ad);
strcpy(c[o].gr1.ad1,z[i].gr.ad1);
strcpy(c[o].gr1.nb,z[i].gr.nb);
strcpy(c[o].gr1.ot,z[i].gr.ot);
strcpy(c[o].gr1.fam,z[i].gr.fam);
o++;
}
}
}
o=1;
//Вывод полный таблицей
clrscr();
printf ("Если телефона нет - в столбце | Номер телефона | будет 0\n");
printf ("__________________________________________________________________________________________________________\n");
printf ("|Номер|    Фамилия    |     Имя     |      Отчество      |      Адрес      | Номер телефона |Дата рождения|\n");
for (int i=1; i<40; ++i)
{
if(c[i].gr1.dd>31||c[i].gr1.dd<1||c[i].gr1.mm>12||c[i].gr1.mm<1||c[i].gr1.gg<1||c[i].gr1.gg>2019)break;
else
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("__________________________________________________________________________________________________________\n");
printf ("| %3i |%15s|%13s|%20s|%13s%4s|%16s| %3i %3i %4i|", i, &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot, &c[i].gr1.ad, &c[i].gr1.ad1, &c[i].gr1.nb, c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
printf ("Введите номер человека которого хотите удалить:");
scanf ("%u", &vv);
strcpy(c[vv].gr1.name,pustoi);
strcpy(c[vv].gr1.fam,pustoi);
strcpy(c[vv].gr1.ot,pustoi);
strcpy(c[vv].gr1.ad,pustoi);
strcpy(c[vv].gr1.ad1,pustoi);
strcpy(c[vv].gr1.nb,pustoi);
c[vv].gr1.dd=0;
c[vv].gr1.mm=0;
c[vv].gr1.gg=0;
clrscr();
}

void save()
{
//Сохранение нового списка
printf( "Введите имя файла, в который будет записываться новая информация: " );
scanf( "%s", finame2 );
FILE *f2 = fopen( finame2, "w" );
for (int i=1; i<15; ++i)
{
fprintf(f2, "%s\n", &c[i].gr1.name);
fprintf(f2, "%s\n", &c[i].gr1.fam);
fprintf(f2, "%s\n", &c[i].gr1.ot);
fprintf(f2, "%s\n", &c[i].gr1.ad);
fprintf(f2, "%s\n", &c[i].gr1.ad1);
fprintf(f2, "%s\n", &c[i].gr1.nb);
fprintf(f2, "%i\n", c[i].gr1.dd);
fprintf(f2, "%i\n", c[i].gr1.mm);
fprintf(f2, "%i\n", c[i].gr1.gg);
}
fclose(f2);
}

void print_()
{

//ПОРЯДОЧНОСТЬ
for(int ii=1;ii<31;ii++)
{
for(int i=1;i<31;i++)
{
if(z[i].gr.dd==ii)
{
c[o].gr1.dd=z[i].gr.dd;
c[o].gr1.gg=z[i].gr.gg;
c[o].gr1.mm=z[i].gr.mm;
strcpy(c[o].gr1.name,z[i].gr.name);
strcpy(c[o].gr1.ad,z[i].gr.ad);
strcpy(c[o].gr1.ad1,z[i].gr.ad1);
strcpy(c[o].gr1.nb,z[i].gr.nb);
strcpy(c[o].gr1.ot,z[i].gr.ot);
strcpy(c[o].gr1.fam,z[i].gr.fam);
o++;
}
}
}
o=1;
//Вывод полный таблицей
clrscr();
printf ("Если телефона нет - в столбце | Номер телефона | будет 0\n");
printf ("__________________________________________________________________________________________________________\n");
printf ("|Номер|    Фамилия    |     Имя     |      Отчество      |      Адрес      | Номер телефона |Дата рождения|\n");
for (int i=1; i<40; ++i)
{
if(c[i].gr1.dd>31||c[i].gr1.dd<1||c[i].gr1.mm>12||c[i].gr1.mm<1||c[i].gr1.gg<1||c[i].gr1.gg>2019)break;
else
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("__________________________________________________________________________________________________________\n");
printf ("| %3i |%15s|%13s|%20s|%13s%4s|%16s| %3i %3i %4i|", i, &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot, &c[i].gr1.ad, &c[i].gr1.ad1, &c[i].gr1.nb, c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
printf ("Для продолжения нажмите любую клавишу...\n");
_getch();
}

void search_()
{
//ПОРЯДОЧНОСТЬ
for(int ii=1;ii<31;ii++)
{
for(int i=1;i<31;i++)
{
if(z[i].gr.dd==ii)
{
c[o].gr1.dd=z[i].gr.dd;
c[o].gr1.gg=z[i].gr.gg;
c[o].gr1.mm=z[i].gr.mm;
strcpy(c[o].gr1.name,z[i].gr.name);
strcpy(c[o].gr1.ad,z[i].gr.ad);
strcpy(c[o].gr1.ad1,z[i].gr.ad1);
strcpy(c[o].gr1.nb,z[i].gr.nb);
strcpy(c[o].gr1.ot,z[i].gr.ot);
strcpy(c[o].gr1.fam,z[i].gr.fam);
o++;
}
}
}
o=1;
for(int t=0; t<1; t++)
{
clrscr();
printf("Введите сколько раз будет проходить поиск человека по списку: ");
scanf ("%u", &w);
if(w!=0){
printf ("Выберите из списка нужный вам вид поиска:\n1-Поиск по имени.\n2-Поиск по фамилии.\n3-Поиск по отчеству.\n4-Поиск по адресу.\n5-Поиск по номеру дома.\n6-Поиск по номеру телефона.\n7-Поиск по дню рождения.\n8-Поиск по месяцу рождения.\n9-Поиск по году рождения.\nВаш выбор: ");
scanf ("%d",&T);
clrscr();
switch (T)
{
case 1:
{
printf ("Поиск по имени:\n");
gets(pname);
for (int i=0; i<w; ++i)
{
printf( "Введите имя человека для поиска: " );
gets(pname);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.name,pname))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 2:
{
printf ("Поиск по фамилии:\n");
gets(fff);
for (int i=0; i<w; ++i)
{
printf( "Введите фамилию человека для поиска: " );
gets(fff);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.fam,fff))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 3:
{
printf ("Поиск по отчеству:\n");
gets(ott);
for (int i=0; i<w; ++i)
{
printf( "Введите отчество человека для поиска: " );
gets(ott);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ot,ott))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 4:
{
printf ("Поиск по адресу:\n");
gets(add);
for (int i=0; i<w; ++i)
{
printf( "Введите адрес человека для поиска: " );
gets(add);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ad,add))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 5:
{
printf ("Поиск по номеру дома:\n");
gets(add1);
for (int i=0; i<w; ++i)
{
printf( "Введите номер дома для поиска: " );
gets(add1);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ad1,add1))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 6:
{
printf ("Поиск по номеру телефона:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "Введите номер телефона для поиска: " );
gets(nnb);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.nb,nnb))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}

case 7:
{
printf ("Поиск дню рождения:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "Введите день рождения для поиска: " );
scanf("%d", &ddd);
for (int i=0; i<50; ++i)
{
if (ddd<1||ddd>31)
{
printf("Данного дня рождения не существует.\n");break;
}
else
{
if (c[i].gr1.dd==ddd)
{
if (ddd==c[i].gr1.dd){if(c[i].gr1.mm>12||c[i].gr1.mm<1||c[i].gr1.gg<1||c[i].gr1.gg>2019)break;
else
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
}
}
}
break;
}

case 8:
{
printf ("Поиск месяцу рождения:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "Введите месяц рождения для поиска: " );
scanf("%d", &mmm);
for (int i=0; i<50; ++i)
{
if (mmm<1||mmm>12)
{
printf("Данного месяца рождения не существует.\n");break;
}
else
{
if (c[i].gr1.mm==mmm)
{
if (mmm==c[i].gr1.mm){if(c[i].gr1.dd>31||c[i].gr1.dd<1||c[i].gr1.gg<1||c[i].gr1.gg>2019)break;
else
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
}
}
}
break;
}

case 9:
{
printf ("Поиск году рождения:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "Введите год рождения для поиска: " );
scanf("%d", &ggg);
for (int i=0; i<50; ++i)
{
if (ggg<1||ggg>2019)
{
printf("Данного года рождения в базе данных не существует.\n");break;
}
else
{
if (c[i].gr1.gg==ggg)
{
if (ggg==c[i].gr1.gg){if(c[i].gr1.dd>31||c[i].gr1.dd<1||c[i].gr1.mm>12||c[i].gr1.mm<1)break;
else
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("ФИО: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("Адрес: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("Номер телефона: %s\n", &c[i].gr1.nb);
printf ("Дата рождения: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
}
}
}
break;
}

default :printf ("Такого номера списка нет.\n");break;
}
}
}
_getch();
}


void dobavlenie()
{

printf("Введите количество людей, которых вы хотите внести в записную книгу, если не хотите введите 0: ");
scanf ("%u", &n);
if(n>0)
{
printf( "Введите имя файла, в который будет записываться новая информация: " );
scanf( "%s", finame1 );
FILE *f1 = fopen( finame1, "w" );
for (int i=11; i<(11+n); ++i)
{
printf ("_____________________________________________________________________________\n");
printf("Введите имя человека: ");
scanf ("%s", &c[i].gr1.name);
fprintf(f1, "%s\n", &c[i].gr1.name);
printf("Введите фамилию человека: ");
scanf ("%s", &c[i].gr1.fam);
fprintf(f1, "%s\n", &c[i].gr1.fam);
printf("Введите отчество человека: ");
scanf ("%s", &c[i].gr1.ot);
fprintf(f1, "%s\n", &c[i].gr1.ot);
printf("Введите улицу человека: ");
scanf ("%s", &c[i].gr1.ad);
fprintf(f1, "%s\n", &c[i].gr1.ad);
printf("Введите номер дома человека: ");
scanf ("%s", &c[i].gr1.ad1);
fprintf(f1, "%s\n", &c[i].gr1.ad1);
printf("Введите номер телефона если он есть человека, если телефона нет введите 0: ");
scanf("%s", &c[i].gr1.nb);
fprintf(f1, "%s\n", &c[i].gr1.nb);
printf("Введите день рождения человека: ");
scanf("%i", &c[i].gr1.dd);
fprintf(f1, "%i\n", c[i].gr1.dd);
printf("Введите месяц рождения человека: ");
scanf("%i", &c[i].gr1.mm);
fprintf(f1, "%i\n", c[i].gr1.mm);
printf("Введите год рождения человека: ");
scanf("%i", &c[i].gr1.gg);
fprintf(f1, "%i\n", c[i].gr1.gg);
printf ("_____________________________________________________________________________\n");
}
fclose(f1);


}
}


void menu1()
{
int n;
int key = 0;//начальное положение ключа
system("cls");
do
{
system("cls");
key = (key + 5) % 5;
XY1(47, 3);
printf("БАЗА ДАННЫХ");

if (key == 0)
{
XY1(46, 9);
printf("=>Добавление<=");
}

else
{
XY1(48, 9);
printf("Добавление");
}

if (key == 1)
{
XY1(47, 11);
printf("=>Удаление<=");
}

else
{
XY1(49, 11);
printf("Удаление");
}

if (key == 2)
{
XY1(48, 13);
printf("=>Вывод<=");
}

else
{
XY1(50, 13);
printf("Вывод");
}

if (key == 3)
{
XY1(48, 15);
printf("=>Поиск<=");
}

else
{
XY1(50, 15);
printf("Поиск");
}

if (key == 4)
{
XY1(48, 17);
printf("=>Назад<=");
}
else
{
XY1(50, 17);
printf("Назад");
}
{
n = _getch();
if (n == 80) key++;
if (n == 72) key--;
}
}
while (n != 13);
switch (key)
{
case 0:
{
system("cls");
dobavlenie();
_getch();
menu1();
break;
}
case 1:
{
system("cls");
delete_();
menu1();
break;
}
case 2:
{
system("cls");
print_();
menu1();
break;
}
case 3:
{
system("cls");
search_();
_getch();
menu1();
break;
}
{
}
case 4:
{
system("cls");
return;
menu1();
break;
}
}
key = 0;
}


int Baza_Dannih()
{
setlocale(LC_ALL, "RUS");
int j=1;

printf( "Введите имя файла, с которого будет считываться информация: " );
scanf( "%s", finame );
FILE *f = fopen( finame, "r" );
for (int i=1; i<11; ++i)
{
fscanf(f, "%s", &z[i].gr.name);
fscanf(f, "%s", &z[i].gr.fam);
fscanf(f, "%s", &z[i].gr.ot);
fscanf(f, "%s", &z[i].gr.ad);
fscanf(f, "%s", &z[i].gr.ad1);
fscanf(f, "%s", &z[i].gr.nb);
fscanf(f, "%i", &z[i].gr.dd);
fscanf(f, "%i", &z[i].gr.mm);
fscanf(f, "%i", &z[i].gr.gg);
}
fclose(f);

for(int i=1;i<31;i++)
{
c[o].gr1.dd=z[i].gr.dd;
c[o].gr1.gg=z[i].gr.gg;
c[o].gr1.mm=z[i].gr.mm;
strcpy(c[o].gr1.name,z[i].gr.name);
strcpy(c[o].gr1.ad,z[i].gr.ad);
strcpy(c[o].gr1.ad1,z[i].gr.ad1);
strcpy(c[o].gr1.nb,z[i].gr.nb);
strcpy(c[o].gr1.ot,z[i].gr.ot);
strcpy(c[o].gr1.fam,z[i].gr.fam);
o++;
}
o=1;
menu1();
save();
return 0;
}

#endif // BAZA_DANNIH_H_INCLUDED
