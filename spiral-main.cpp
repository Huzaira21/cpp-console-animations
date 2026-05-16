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
void circle(int x,int y)
{

    for(int r=10;r>=2;r--)
    {
        for(int i=360;i>180;i--)
        {
            x=r*(cos(i * (3.14/180)))+50;
            y=r*(sin(i* (3.14/180)))+70;
            gotoRowCol(x,y);
            cout<<".";
            sleep(100);

        }

        r--;
        for(int i=180;i>=0;i--)
        {
            x=r*(cos(i * (3.14/180)))+50;
            y=r*(sin(i* (3.14/180)))+70;
            gotoRowCol(x,y);
            cout<<".";
            sleep(100);

        }


    }
} int main()
{
    int x,y;

    circle(x,y);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


