#include <iostream.h>
#include <conio.h>

int data[100],data2[100];
int n;

void tukar(int a,int b)
{
int t;
t = data[b];
data[b] = data[a];
data[a] = t;
}

void bubble_sort()
{
for(int i=1;i<n;i++)
{
for(int j=n-1;j>=i;j–)
{
if(data[j]<data[j-1]) tukar(j,j-1);
}
}
cout<<“bubble sort selesai!”<<endl;
}

void exchange_sort()
{
for (int i=0; i<n-1; i++)
{
for(int j = (i+1); j<n; j++)
{
if (data [i] > data[j]) tukar(i,j);
}
}
cout<<“exchange sort selesai!”<<endl;
}

void selection_sort()
{
int pos,i,j;
for(i=0;i<n-1;i++)
{
pos = i;
for(j = i+1;j<n;j++)
{
if(data[j] < data[pos]) pos = j;
}
if(pos != i) tukar(pos,i);
}
cout<<“selection sort selesai!”<<endl;
}

void insertion_sort()
{
int temp,i,j;
for(i=1;i<n;i++)
{
temp = data[i];
j = i -1;
while(data[j]>temp && j>=0)
{
data[j+1] = data[j];
j–;
}
data[j+1] = temp;
}
cout<<“insertion sort selesai!”<<endl;
}

void QuickSort(int L, int R) //the best sort i’ve ever had ??
{
int i, j;
int mid;

i = L;
j = R;
mid = data[(L+R) / 2];

do
{
while (data[i] < mid) i++;
while (data[j] > mid) j–;

if (i <= j)
{
tukar(i,j);
i++;
j–;
};
} while (i < j);

if (L < j) QuickSort(L, j);
if (i < R) QuickSort(i, R);
}

void Input()
{
cout<<“Masukkan jumlah data = “; cin>>n;
for(int i=0;i<n;i++)
{
cout<<“Masukkan data ke-“<<(i+1)<<” = “; cin>>data[i];
data2[i] = data[i];
}
}

void Tampil()
{
cout<<“Data : “<<endl;
for(int i=0;i<n;i++)
{
cout<<data[i]<<” “;
}
cout<<endl;
}

void AcakLagi()
{
for(int i=0;i<n;i++)
{
data[i] = data2[i];
}
cout<<“Data sudah teracak!”<<endl;
}

void main()
{
int pil;
clrscr();
do
{
clrscr();
cout<<“Program Sorting Komplit!!!”<<endl;
cout<<“*********************************************”<<endl;
cout<<” 1. Input Data”<<endl;
cout<<” 2. Bubble Sort”<<endl;
cout<<” 3. Exchange Sort”<<endl;
cout<<” 4. Selection Sort”<<endl;
cout<<” 5. Insertion Sort”<<endl;
cout<<” 6. Quick Sort”<<endl;
cout<<” 7. Tampilkan Data”<<endl;
cout<<” 8. Acak Data”<<endl;
cout<<” 9. Exit”<<endl;
cout<<”    Pilihan Anda = “;  cin>>pil;
switch(pil)
{
case 1:Input(); break;
case 2:bubble_sort(); break;
case 3:exchange_sort(); break;
case 4:selection_sort(); break;
case 5:insertion_sort(); break;
case 6:QuickSort(0,n-1);
cout<<“quick sort selesai!”<<endl;
break;
case 7:Tampil(); break;
case 8:AcakLagi(); break;
}
getch();
}while(pil!=9);
}
