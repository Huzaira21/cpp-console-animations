#include<iostream>
#include<windows.h>
using namespace std;
#include<conio.h>
#include<math.h>

void gotoRowCol(int rpos, int cpos)
{
	int xpos=cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}
void sleep(int m)
{
        for(int j=0;j<m*21000;j++)
        {

        }
}


void emoji(int x,int y)
{    int r=15;
    for (int i=0;i<=360;i++)
    {
        x=r*(cos(i*(3.14/180)))+50;
        y=r*(sin(i*(3.14/180)))+70;
        gotoRowCol(x,y);
        cout<<"*";
        sleep(100);

    }
    sleep(100);
}
void eye (int x,int y,char ch)
{    int r=3;
    for (int i=0;i<=360;i++)
    {
        x=r*(cos(i*(3.14/180)))+43;
        y=r*(sin(i*(3.14/180)))+64;
        gotoRowCol(x,y);
        cout<<  ch;
        sleep(10);

    }
    sleep(10);
}
void eye2 (int x,int y,char ch)
{    int r=3;
    for (int i=0;i<=360;i++)
    {
        x=r*(cos(i*(3.14/180)))+43;
        y=r*(sin(i*(3.14/180)))+75;
        gotoRowCol(x,y);
        cout<<ch;
        sleep(10);

    }
    sleep(10);
}
void spot(int x,int y)
    {   int r=2;
    for (int i=0;i<=360;i++)
    {

        gotoRowCol(x,y);
        x=r*(cos(i*(3.14/180)))+50;
        y=r*(sin(i*(3.14/180)))+70;
        gotoRowCol(x,y);
        cout<<".";
        sleep(10);
    }
    sleep(10);


    }
    void spot2(int x,int y)

    {   int r=1;int i;
        x=r*(cos(i*(3.14/180)))+43;
        y=r*(sin(i*(3.14/180)))+63;
        gotoRowCol(x,y);
        cout<<"$";
        sleep(100);
    }

    void spot3(int x,int y)

    {   int r=1;int i;
        x=r*(cos(i*(3.14/180)))+43;
        y=r*(sin(i*(3.14/180)))+75;
        gotoRowCol(x,y);
        cout<<"$";
        sleep(10);
    }


    void simile (int x,int y)
{    int r=5;
    for (int i=1;i<=10;i++)
    {

        gotoRowCol(x,y);
        cout<<"*";
        y++;
        sleep(100);


    }
    sleep(10);
}
void text(int x,int y)
{
    gotoRowCol(x,y);
    cout<<"After becoming coder money would come like rain $$";
}



int main()
{
    int x;int y;int a;
    emoji(x,y);

    eye(x,y,'.');
     eye2(x,y,'.');

    spot2(x,y);
    spot3(x,y);
    spot(x,y);
    simile(55,65);
     eye(x,y,' ');
      eye2(x,y,' ');

      eye(x,y,'.');
      eye2(x,y,'.');

text (50,3);

cout<<"\n\n\n\n";









}














