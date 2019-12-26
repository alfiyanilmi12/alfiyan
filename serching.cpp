#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int bar,kol,cari,counter=0,n=0;
    int matriks[100][100];
    int x[100][100],y[100][100];

    cout <<"\t\tPROGRAM MENCARI DATA PADA MATRIKS\n";
    cout <<"\t\t======================================\n\n";
    cout << "Masukkan banyak baris pada matriks : ";cin>>bar;
    cout << "Masukkan banyak kolom pada matriks : ";cin>>kol;

    for(int i=0;i<bar;i++){ //proses input data
        for(int j=0;j<kol;j++){
            cout<<"Masukkan data ["<<i<<"] ["<<j<<"] = ";
            cin>>matriks[i][j];
        }
    }

    for(int i=0;i<bar;i++){ //proses output data yg telah diinputkan
        for(int j=0;j<kol;j++){
            cout<<matriks[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Masukkan data yang dicari : "; cin>>cari;
    for(int i=0;i<bar;i++){
        for(int j=0;j<kol;j++){
            if(matriks[i][j]==cari){ //apabila matriks = cari var counter akan brtmbah
                x[i][j]=i;  //var x dan y disini brfungsi untuk mnampung indeks data
                y[i][j]=j;

                counter++;
            }
        }
    }
    if(counter>0){
        cout<<"Data "<<cari<<" berada pada posisi : "; //output indeks
        for(int i=0;i<bar;i++){
            for(int j=0;j<kol;j++){
                if(matriks[i][j]==cari){
                    cout<<"["<<x[i][j]<<"]["<<y[i][j]<<"]"; //pengeluaran indeks yang tlah trsimpan
                    n++;
                    if(n==counter) break;
                    else cout<<" , ";
                }
            }
        }
    }
    getch();
    return 0;
}

