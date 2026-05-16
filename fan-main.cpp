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
void l2r(int row,int col,char ch,int nc,int nr)

{

    for(col=20;col<=nc;col++)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep (10);
         }sleep(10);
}

void diognal1(int row,int col,char ch,int nc,int nr)

{ row=5;
    for(col=35;col>=row;col--)
{ gotoRowCol(row,col);
    cout<<ch;
    row++;

    sleep(10);
}sleep(10);


}
void diognal2(int row,int col,char ch,int nc,int nr)

{ row=20;
    for(col=35;col>=nc;col--)
{ gotoRowCol(row,col);
    cout<<ch;
    row--;

    sleep(10);
}sleep(10);
}
void t2b(int row,int col,char ch,int nr,int nc)
{
    for(row=9;row<=nr;row++)
    {
        gotoRowCol(row,col);
        cout<<ch;
        sleep(10);
    }
    sleep(10);
}
void dig1(int row,int col,char ch,int nc,int nr)
{
    for(col;col<=nc;col+=4)
    {
        gotoRowCol(row,col);
        cout<<ch;
        row++;
        sleep(10);
    }
    sleep(10);
}
void dig2(int row,int col,char ch,int nc,int nr)
{
    for(col;col<=nc;col+=5)
    {
        gotoRowCol(row,col);
        cout<<ch;
        row--;
        sleep(10);
    }
    sleep(10);
}


int main()
{
    int row,col,nc,nr;
    char ch;
    int a;
while(a>0)
{
    l2r(5,20,'*',35,30);
    diognal1(5,35,'*',35,30);
    l2r(20,20,'*',35,30);
    diognal2(20,35,'*',20,30);
    l2r(5,20,' ',35,30);
    diognal1(5,35,' ',35,30);
    l2r(20,20,' ',35,30);
    diognal2(20,35,' ',20,30);

      t2b(12,12,'*',16,35);
    dig1(8,12,'*',50,30);
    dig2(16,12,'*',50,30);
    t2b(23,48,'*',17,45);

    t2b(12,12,' ',16,35);
    dig1(8,12,' ',50,30);
    dig2(16,12,' ',50,30);
    t2b(23,48,' ',17,45);



    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


    }
    return 0;




}

