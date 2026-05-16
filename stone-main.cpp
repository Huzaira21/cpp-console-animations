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
void line1(int row,int col,char ch )
{
    for(col;col<=50;col++)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep(100);
    }sleep(100);

}
void t2b(int row,int col,char ch)
{
    for(row;row<=25;row++)
         { gotoRowCol(row,col);
        cout<<ch;
        sleep(100);
    }
     sleep(100);

    }
    void line2(int row,int col,char ch)
    {
         for(col;col<=100;col++)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep(100);
    }sleep(100);
    }
    void cartoon(int row,int col,char ch)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep(100);
    }
    void stone(int row,int col,char ch)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep(1000);
         }


int main()
{
    int row,col;
    char ch;

line1(7,35,'*');
t2b(7,50,'*');
line2(20,50,'*');
cartoon(4,48,'0');
cartoon(5,48,'|');
cartoon(5,47,'-');
cartoon(5,49,'-');
cartoon(6,48,'x');
stone(4,50,'o');
stone(4,50,' ');
stone(7,52,'o');
stone(7,52,' ');
stone(10,54,'o');
stone(10,54,' ');
stone(13,56,'o');
stone(13,56,' ');
stone(16,58,'o');
stone(16,58,' ');
stone(19,60,'o');
stone(6,52,'o');
stone(6,52,' ');
stone(7,54,'o');
stone(7,54,' ');
stone(8,56,'o');
stone(8,56,' ');
stone(9,58,'o');
stone(9,58,' ');
stone(10,60,'o');
stone(10,60,' ');
stone(11,62,'o');
stone(11,62,' ');
stone(12,64,'o');
stone(12,64,' ');
stone(13,66,'o');
stone(13,66,' ');
stone(14,68,'o');
stone(14,68,' ');
stone(15,70,'o');
stone(15,70,' ');
stone(16,72,'o');
stone(16,72,' ');
stone(17,74,'o');
stone(17,74,' ');
stone(18,76,'o');
stone(18,76,' ');
stone(19,78,'o');
stone(8,64,'o');
stone(8,64,' ');
stone(9,66,'o');
stone(9,66,' ');
stone(10,68,'o');
stone(10,68,' ');
stone(11,70,'o');
stone(11,70,' ');
stone(12,72,'o');
stone(12,72,' ');
stone(13,74,'o');
stone(13,74,' ');
stone(14,76,'o');
stone(14,76,' ');
stone(15,78,'o');
stone(15,78,' ');
stone(16,80,'o');
stone(16,80,' ');
stone(17,82,'o');
stone(17,82,' ');
stone(18,84,'o');
stone(18,84,' ');
stone(19,86,'o');
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

}











