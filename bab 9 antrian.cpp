#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

char pil;
int jml;
void delay();

struct node
{
   char kar;
   node *next;
};

   node *tail;   //ekor
   node *now;
   node *head;

void clrscr()
{
system("cls");
}

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void buatnodebaru()
{
  tail=NULL;
  head=NULL;
}

void push(char ch)
{
    now=new node;
    if(head==NULL)
    {
        now->kar=ch;
        now->next=NULL;
        tail=now;
        head=now;
    }
    else
    {
        now->kar=ch;
        now->next=NULL;
        tail->next = now;
        tail=now;
    }
}

void enqueue()
{
    int i;
    char temp;
    gotoxy(1,6);
    cout<<"          ";
    gotoxy(1,8);
    cout<<"        ";
    gotoxy(1,6);
    cout<<"masukkan @ karakter : ";
    cin>>temp;
    gotoxy(1,6);
    cout<<"         ";
    push(temp);

    for(i=1;i<= 75-jml*6;i++)
    {
       gotoxy(i+1,20);cout<<" O";
       gotoxy(i,21); cout<<"=("<<now->kar<<")=";
       gotoxy(i+1,22);cout<<"| |";
       delay();

       if(i!=75-jml*6)
       {
           gotoxy(i+1,20);cout<<"  ";
           gotoxy(i,21);cout<<"      ";
           gotoxy(i+1,22);cout<<"   ";
        }
    }
}

void dequeue()
{
    if(head==NULL)
    {
        gotoxy(1,8); cout<<"antrean kosong !";
        delay();
    }
    else
    {
        jml=jml-1;
        char delete_element=head->kar;
        node *temp;
        temp=head;
        head=head->next;
        delete temp;

        for(int i=69;i<=76;i++)
        {
            gotoxy(i+1,20); cout<<" O";
            gotoxy(i,21); cout<<"=("<<delete_element<<")=";
            gotoxy(i+1,22); cout<<"| |";
            delay();
            gotoxy(i+1,20); cout<<"  ";
            gotoxy(i,21); cout<<"      ";
            gotoxy(i+1,22); cout<<"   ";
        }

        int byk=0;
        while(byk!=jml)
        {
            byk=byk+1;

            for(int i=69-byk*6;i<=75-byk*6;i++)
            {
                gotoxy(i+1,20); cout<<" O";
                gotoxy(i,21); cout<<"=("<<head->kar<<")=";
                gotoxy(i+1,22); cout<<"| |";
                delay();
                if(i!=75-byk*6)
                {
                    gotoxy(i+1,20); cout<<"  ";
                    gotoxy(i,21); cout<<"      ";
                    gotoxy(i+1,22); cout<<"   ";
                }
            }
        }
    }
}

void input()
{
    gotoxy(1,1);cout<<"1.Enqueue";
    gotoxy(1,2);cout<<"2.Dequeue";
    gotoxy(1,3);cout<<"3.Exit";
    do
    {
        gotoxy(1,4);cout<<"masukkan pilihan anda[1/2/3] : ";
        gotoxy(32,4);cin>>pil;
        gotoxy(32,4);cout<<"  ";

        switch(pil)
        {
            case '1':
            {
                if(jml<10)
                {
                    jml=jml+1;
                    enqueue();
                }
                else
                {
                    gotoxy(1,8); cout<<"antrean penuh !";
                    delay();
                    gotoxy(1,8); cout<<"     ";
                }
                break;
            }

            case '2':
            {
                dequeue();
                break;
            }

            case '3':
            {
                exit(1);
                break;
            }
        }
    }while(1);
}

int main()
{
    buatnodebaru();
    jml=0;
    clrscr();
    input();
    getch();
}

void delay()
{
    for(int y=1;y<100;y++)
    for(int x=1;x<100;x++)
    for(int p=1;p<100;p++)
    cout<<"";
}
