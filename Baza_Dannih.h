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

//������������
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
//����� ������ ��������
clrscr();
printf ("���� �������� ��� - � ������� | ����� �������� | ����� 0\n");
printf ("__________________________________________________________________________________________________________\n");
printf ("|�����|    �������    |     ���     |      ��������      |      �����      | ����� �������� |���� ��������|\n");
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
printf ("������� ����� �������� �������� ������ �������:");
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
//���������� ������ ������
printf( "������� ��� �����, � ������� ����� ������������ ����� ����������: " );
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

//������������
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
//����� ������ ��������
clrscr();
printf ("���� �������� ��� - � ������� | ����� �������� | ����� 0\n");
printf ("__________________________________________________________________________________________________________\n");
printf ("|�����|    �������    |     ���     |      ��������      |      �����      | ����� �������� |���� ��������|\n");
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
printf ("��� ����������� ������� ����� �������...\n");
_getch();
}

void search_()
{
//������������
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
printf("������� ������� ��� ����� ��������� ����� �������� �� ������: ");
scanf ("%u", &w);
if(w!=0){
printf ("�������� �� ������ ������ ��� ��� ������:\n1-����� �� �����.\n2-����� �� �������.\n3-����� �� ��������.\n4-����� �� ������.\n5-����� �� ������ ����.\n6-����� �� ������ ��������.\n7-����� �� ��� ��������.\n8-����� �� ������ ��������.\n9-����� �� ���� ��������.\n��� �����: ");
scanf ("%d",&T);
clrscr();
switch (T)
{
case 1:
{
printf ("����� �� �����:\n");
gets(pname);
for (int i=0; i<w; ++i)
{
printf( "������� ��� �������� ��� ������: " );
gets(pname);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.name,pname))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 2:
{
printf ("����� �� �������:\n");
gets(fff);
for (int i=0; i<w; ++i)
{
printf( "������� ������� �������� ��� ������: " );
gets(fff);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.fam,fff))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 3:
{
printf ("����� �� ��������:\n");
gets(ott);
for (int i=0; i<w; ++i)
{
printf( "������� �������� �������� ��� ������: " );
gets(ott);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ot,ott))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 4:
{
printf ("����� �� ������:\n");
gets(add);
for (int i=0; i<w; ++i)
{
printf( "������� ����� �������� ��� ������: " );
gets(add);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ad,add))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 5:
{
printf ("����� �� ������ ����:\n");
gets(add1);
for (int i=0; i<w; ++i)
{
printf( "������� ����� ���� ��� ������: " );
gets(add1);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.ad1,add1))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}
case 6:
{
printf ("����� �� ������ ��������:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "������� ����� �������� ��� ������: " );
gets(nnb);
for (int i=0; i<50; ++i)
{
if (!strcmp (c[i].gr1.nb,nnb))
{
if(!strcmp (c[i].gr1.ad,pustoi)||!strcmp (c[i].gr1.nb,pustoi)||!strcmp (c[i].gr1.ad1,pustoi)||!strcmp (c[i].gr1.name,pustoi)){}
else
{
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
printf ("\n", &i);
}
}
}
}
break;
}

case 7:
{
printf ("����� ��� ��������:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "������� ���� �������� ��� ������: " );
scanf("%d", &ddd);
for (int i=0; i<50; ++i)
{
if (ddd<1||ddd>31)
{
printf("������� ��� �������� �� ����������.\n");break;
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
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
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
printf ("����� ������ ��������:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "������� ����� �������� ��� ������: " );
scanf("%d", &mmm);
for (int i=0; i<50; ++i)
{
if (mmm<1||mmm>12)
{
printf("������� ������ �������� �� ����������.\n");break;
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
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
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
printf ("����� ���� ��������:\n");
gets(nnb);
for (int i=0; i<w; ++i)
{
printf( "������� ��� �������� ��� ������: " );
scanf("%d", &ggg);
for (int i=0; i<50; ++i)
{
if (ggg<1||ggg>2019)
{
printf("������� ���� �������� � ���� ������ �� ����������.\n");break;
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
printf ("���: %s %s %s\n", &c[i].gr1.fam, &c[i].gr1.name, &c[i].gr1.ot);
printf ("�����: %s %s\n", &c[i].gr1.ad, &c[i].gr1.ad1);
printf ("����� ��������: %s\n", &c[i].gr1.nb);
printf ("���� ��������: %i %i %i\n", c[i].gr1.dd, c[i].gr1.mm, c[i].gr1.gg);
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

default :printf ("������ ������ ������ ���.\n");break;
}
}
}
_getch();
}


void dobavlenie()
{

printf("������� ���������� �����, ������� �� ������ ������ � �������� �����, ���� �� ������ ������� 0: ");
scanf ("%u", &n);
if(n>0)
{
printf( "������� ��� �����, � ������� ����� ������������ ����� ����������: " );
scanf( "%s", finame1 );
FILE *f1 = fopen( finame1, "w" );
for (int i=11; i<(11+n); ++i)
{
printf ("_____________________________________________________________________________\n");
printf("������� ��� ��������: ");
scanf ("%s", &c[i].gr1.name);
fprintf(f1, "%s\n", &c[i].gr1.name);
printf("������� ������� ��������: ");
scanf ("%s", &c[i].gr1.fam);
fprintf(f1, "%s\n", &c[i].gr1.fam);
printf("������� �������� ��������: ");
scanf ("%s", &c[i].gr1.ot);
fprintf(f1, "%s\n", &c[i].gr1.ot);
printf("������� ����� ��������: ");
scanf ("%s", &c[i].gr1.ad);
fprintf(f1, "%s\n", &c[i].gr1.ad);
printf("������� ����� ���� ��������: ");
scanf ("%s", &c[i].gr1.ad1);
fprintf(f1, "%s\n", &c[i].gr1.ad1);
printf("������� ����� �������� ���� �� ���� ��������, ���� �������� ��� ������� 0: ");
scanf("%s", &c[i].gr1.nb);
fprintf(f1, "%s\n", &c[i].gr1.nb);
printf("������� ���� �������� ��������: ");
scanf("%i", &c[i].gr1.dd);
fprintf(f1, "%i\n", c[i].gr1.dd);
printf("������� ����� �������� ��������: ");
scanf("%i", &c[i].gr1.mm);
fprintf(f1, "%i\n", c[i].gr1.mm);
printf("������� ��� �������� ��������: ");
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
int key = 0;//��������� ��������� �����
system("cls");
do
{
system("cls");
key = (key + 5) % 5;
XY1(47, 3);
printf("���� ������");

if (key == 0)
{
XY1(46, 9);
printf("=>����������<=");
}

else
{
XY1(48, 9);
printf("����������");
}

if (key == 1)
{
XY1(47, 11);
printf("=>��������<=");
}

else
{
XY1(49, 11);
printf("��������");
}

if (key == 2)
{
XY1(48, 13);
printf("=>�����<=");
}

else
{
XY1(50, 13);
printf("�����");
}

if (key == 3)
{
XY1(48, 15);
printf("=>�����<=");
}

else
{
XY1(50, 15);
printf("�����");
}

if (key == 4)
{
XY1(48, 17);
printf("=>�����<=");
}
else
{
XY1(50, 17);
printf("�����");
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

printf( "������� ��� �����, � �������� ����� ����������� ����������: " );
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
