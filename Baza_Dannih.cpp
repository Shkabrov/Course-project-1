#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
void clrscr()
{
system("CLS");
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

int Baza_Dannih()
{
setlocale(LC_ALL, "RUS");
int j=1;
char pq[ 15 ];
char pname[ 15 ];
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
printf( "������� ��� �����, � �������� ����� ����������� ����������: " );
scanf( "%s", finame );
FILE *f = fopen( finame, "r" );
struct grajdanin z[50];
struct grajdanin1 c[50];
unsigned short g,n,w,e,T,y=1,h,l,vv,rtt=2,ud=0;
int o=1;
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
scanf ("%s", &z[i].gr.name);
fprintf(f1, "%s\n", &z[i].gr.name);
printf("������� ������� ��������: ");
scanf ("%s", &z[i].gr.fam);
fprintf(f1, "%s\n", &z[i].gr.fam);
printf("������� �������� ��������: ");
scanf ("%s", &z[i].gr.ot);
fprintf(f1, "%s\n", &z[i].gr.ot);
printf("������� ����� ��������: ");
scanf ("%s", &z[i].gr.ad);
fprintf(f1, "%s\n", &z[i].gr.ad);
printf("������� ����� ���� ��������: ");
scanf ("%s", &z[i].gr.ad1);
fprintf(f1, "%s\n", &z[i].gr.ad1);
printf("������� ����� �������� ���� �� ���� ��������, ���� �������� ��� ������� 0: ");
scanf("%s", &z[i].gr.nb);
fprintf(f1, "%s\n", &z[i].gr.nb);
printf("������� ���� �������� ��������: ");
scanf("%i", &z[i].gr.dd);
fprintf(f1, "%i\n", z[i].gr.dd);
printf("������� ����� �������� ��������: ");
scanf("%i", &z[i].gr.mm);
fprintf(f1, "%i\n", z[i].gr.mm);
printf("������� ��� �������� ��������: ");
scanf("%i", &z[i].gr.gg);
fprintf(f1, "%i\n", z[i].gr.gg);
printf ("_____________________________________________________________________________\n");
}
fclose(f1);
}


//����� ������ ��������
printf ("���� ������ ������� ��� ���� ������ � ������� ������� ����� ����� ����� 0:");
scanf ("%u", &h);
if(h!=0)
{
clrscr();
printf ("���� �������� ��� - � ������� | ����� �������� | ����� 0\n");
printf ("__________________________________________________________________________________________________________\n");
printf ("|�����|    �������    |     ���     |      ��������      |      �����      | ����� �������� |���� ��������|\n");
for (int i=1; i<40; ++i)
{
if(z[i].gr.dd>31||z[i].gr.dd<1||z[i].gr.mm>12||z[i].gr.mm<1||z[i].gr.gg<1||z[i].gr.gg>2019)break;
else
{
if(!strcmp (z[i].gr.ad,pustoi)||!strcmp (z[i].gr.nb,pustoi)||!strcmp (z[i].gr.ad1,pustoi)||!strcmp (z[i].gr.name,pustoi)){}
else
{
printf ("__________________________________________________________________________________________________________\n");
printf ("| %3i |%15s|%13s|%20s|%13s%4s|%16s| %3i %3i %4i|", i, &z[i].gr.fam, &z[i].gr.name, &z[i].gr.ot, &z[i].gr.ad, &z[i].gr.ad1, &z[i].gr.nb, z[i].gr.dd, z[i].gr.mm, z[i].gr.gg);
printf ("\n", &i);
}
}
}
printf ("��� ����������� ������� ����� �������...\n");
getch();
}


//�������� �� ���� ������
printf ("���� ������ ������� �������� �� ���� ������ ������� ����� ����� ����� 0:");
scanf ("%u", &l);
if(l!=0)
{
ud++;
while(rtt!=0)
{
printf ("������� ����� �������� �������� ������ �������:");
scanf ("%u", &vv);
strcpy(z[vv].gr.name,pustoi);
strcpy(z[vv].gr.fam,pustoi);
strcpy(z[vv].gr.ot,pustoi);
strcpy(z[vv].gr.ad,pustoi);
strcpy(z[vv].gr.ad1,pustoi);
strcpy(z[vv].gr.nb,pustoi);
z[vv].gr.dd=0;
z[vv].gr.mm=0;
z[vv].gr.gg=0;
printf ("���� ������ ��������������� ��� ��� ��������� ������� ����� ����� ����� 0:");
scanf ("%u", &rtt);
if(rtt!=0)ud++;
}
}
clrscr();

//������������
for(int ii=1;ii<32;ii++)
{
for(int i=1;i<40;i++)
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

//����� ������ ��������
printf ("���� �� ������ ������� ��� ���� ������ � ������� ������� ����� ����� ����� 0:");
scanf ("%u", &h);
if(h!=0)
{
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
getch();
}

//���������� ������ ������
printf( "���� ������ ��������� ������� ������ � �����, ������� ����� ����� ����� 0: " );
scanf ("%u", &e);
if(e!=0)
{
printf( "������� ��� �����, � ������� ����� ������������ ����� ����������: " );
scanf( "%s", finame2 );
FILE *f2 = fopen( finame2, "w" );
for (int i=1; i<(11+n-ud); ++i)
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
}}
if(w!=0)
{
printf("���� ������ ��� ��� ������������ ����� ������� ����� ����� ����� 0: ");
scanf ("%u", &y);
if(y!=0){t--;y=0;}
}
}
printf("���������� ���������...\n������� ����� �������...");
getch();
}
