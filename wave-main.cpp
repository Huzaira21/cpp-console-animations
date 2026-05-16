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
void line(int row,int col,char ch)
{
   for(int i=1;i<=50;i++)
   {
       gotoRowCol(row,col);
       cout<<ch;
       sleep(10);
       col++;
   }
}
void wave1(char ch)
{int r=5;
int x;int y;
    for(int j=270;j>=180;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+20;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave2(char ch)
{int r=5;
int x,y;
    for(int j=180;j>=90;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+20;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave3(char ch)
{int r=5;
int x;int y;
    for(int j=270;j<=360;j++)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+29;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave4(char ch)
{int r=5;
int x;
int y;
    for(int j=0;j<=90;j++)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+29;

         cout<<ch;
         sleep(100);
    }sleep(100);
}






void wave5(char ch)
{int r=5;
int x;int y;
    for(int j=270;j>=180;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+38;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave6(char ch)
{int r=5;
int x,y;
    for(int j=180;j>=90;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+38;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave7(char ch)
{int r=5;
int x;int y;
    for(int j=270;j<=360;j++)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+47;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave8(char ch)
{int r=5;
int x;
int y;
    for(int j=0;j<=90;j++)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+47;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
void wave9(char ch)
{int r=5;
int x;int y;
    for(int j=270;j>=180;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+56;

         cout<<ch;
         sleep(100);
    }sleep(100);
}



void wave10(char ch)
{int r=5;
int x,y;
    for(int j=180;j>=90;j--)
    { gotoRowCol(x,y);
        x=r*(cos(j*(3.14/180)))+13;
         y=r*(sin(j*(3.14/180)))+56;

         cout<<ch;
         sleep(100);
    }sleep(100);
}
int main()
{
    int row,col;
    char ch;
    int a=0;
    line(12,14,'*');
    wave1('*');
    wave2('*');
    wave3('*');
    wave4('*');
    wave5('*');
    wave6('*');
    wave7('*');
    wave8('*');
    wave9('*');
    wave10('*');



    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
}

