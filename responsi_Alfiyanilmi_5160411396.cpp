 #include <conio.h>
#include <string.h>
#include <stdio.h>

struct data
{
char nama[30];
   char nim[10];
   int nilai;
};
data mhs[10];

int n,i,j,a,k,m;
char kata[10],temp[10];

void input()
{

printf("Jumlah data : "); scanf("%d",&n);
   for (i=0; i<n; i++)
   {
        printf("\nData ke-%d\n",i+1);
      printf("  NIM   : "); scanf("%s",&mhs[i].nim);
      printf("  Nama  : "); scanf("%s",&mhs[i].nama);
      printf("  Nilai : "); scanf("%d",&mhs[i].nilai);
   }
}

void output()
{

   printf("====UNIVERSITAS TEKNOLOGI YOGYAKARTA====\n");
   printf("            Tampilan inputan  awal          \n");
   printf("+======================================+\n");
   printf("| No |    NIM     |    NAMA    | NILAI |\n");
   printf("|--------------------------------------|\n");
   printf("|    |            |            |       |\n");
   for(i=0; i<n; i++)
   {
        printf("|    |            |            |       |\n");
        (3,5+i); printf("%d",i+1);
      (8,5+i); printf("%s",mhs[i].nim);
     (21,5+i); printf("%s",mhs[i].nama);
      (35,5+i); printf("%d\n",mhs[i].nilai);
   }
   printf("+======================================+\n");
}

void urut()
{

   for (i=0;i<n;i++)
   {
        for (j=i+1;j<n;j++)
        {
        if (mhs[i].nim<mhs[j].nim)
         {
               data temp;
            temp=mhs[i];
            mhs[i]=mhs[j];
            mhs[j]=temp;
         }
        }
   }

   printf("        Data inputan Setelah Diurutkan dari awal          \n");
   printf("+======================================+\n");
   printf("| No |    NIM     |    NAMA    | NILAI |\n");
   printf("|--------------------------------------|\n");
   printf("|    |            |            |       |\n");
   for(i=0; i<n; i++)
   {
        printf("|    |            |            |       |\n");
        (3,5+i); printf("%d",i+1);
      (8,5+i); printf("%s",mhs[i].nim);
      (21,5+i); printf("%s",mhs[i].nama);
      (35,5+i); printf("%d\n",mhs[i].nilai);
   }
   printf("+======================================+\n");
}

void cari()
{

printf ("Cari NIM : "); scanf("%s",&kata);
        for (int i=0;i<n;i++)
   {
               if(strcmp(kata,mhs[i].nim)==0)
               {
               printf("\nData %s Ditemukan\n", kata);
               printf ("NIM   : %s\n",mhs[i].nim);
               printf ("Nama  : %s\n",mhs[i].nama);
               printf ("Nilai : %d\n",mhs[i].nilai);

      }
               else
      {
                      printf("Data ke-%d Tidak Ada\n",i+1);  //break;
      }
   }
   //getch();
}

int main ()
{
int pil;
do{

        printf("+========================================+\n");
      printf("|    Data Mahasiswa                        |\n");
      printf("|------------------------------------------|\n");
      printf("| 1. Input data mahasiswa                  |\n");
      printf("| 2. Tampilkan Dan Urutkan Data mahasiswa  |\n");
      printf("| 3. Cari Data mahasiswa                   |\n");
      printf("| 0. Keluar                                |\n");
      printf("|------------------------------------------|\n");
      printf("| Pilih menu :                             |\n");
      printf("+==========================================+\n");
      (16,9); scanf("%d",&pil);
      switch(pil)
      {
        case 1 : input(); getch(); break;
               case 2 : {
                                   output();
                     printf("\n\n  Tekan enter untuk mengurutkan data\n");
                     getch();
                     urut();
                     getch();
                     break;
                            }
         case 3 : cari(); getch(); break;
               case 0 : break;
         default: printf("Input salah");

      }

}

   while(pil!=0);

        getch();

}

