NAMA KELOMPOK : 1. FERDADUM MAK'RUF 5160411345
				2. ALFIYAN ILMI HARIS 5160411396


#include<iostream>

using namespace std;

main()

 {


 int pilihan,angka;

 kembali:

  do

 {

     cout<<" ====================================================";cout<<endl;

     cout<<" \t     PROGRAM BIOSKOP XXI MAGELANG GEMILANG ";cout<<endl;

     cout<<" ====================================================";cout<<endl; cout<<endl;

 

     cout<<"\t Bioskop XXI Magelang";cout<<endl;

     cout<<"\t JL.Pemuda 14";cout<<endl;

     cout<<endl;

     cout<<" ===================================================="<<endl;

     cout<<"\t   DAFTAR MENU ";cout<<endl;

     cout<<"\t---------------------------------"<<endl;

     cout<<"\t| 1. Pembelian Tiket            |"<<endl;

     cout<<"\t| 2. Cek Sisa Kursi             |"<<endl;

     cout<<"\t| 3. Laporan Penjualan Tiket    |"<<endl;

     cout<<"\t| 4. Keluar   |"<<endl;

     cout<<"\t---------------------------------"<<endl;

     cout<<" ===================================================="<<endl;

     cout<<endl;

     cout<<" Masukan Pilihan Anda (1-4) : ";cin>>pilihan;

     cout<<endl;

   

     switch (pilihan)

   {

    case 1:

     mulai:

     int jenisTKT,jumlahTKT,totalTKT;

     char* jenisTXT;

     char ulang,belanjaKmbl;

   

       cout<<" ===================================================="<<endl;

       cout<<"\t   Pembelian Tiket ";cout<<endl;

       cout<<" ===================================================="<<endl;

     

       cout<<" Keterangan"<<endl;

       cout<<" 1. Tiket Dewasa  : Rp. 35.000"<<endl;

       cout<<" 2. Tiket Anak-anak  : Rp. 20.000"<<endl;

       cout<<" ===================================================="<<endl;

       cout<<" Input Pembelian Tiket"<<endl;

       cout<<" Jenis Tiket (1-2)  : "; cin>>jenisTKT;

       cout<<" Jumlah Tiket   : "; cin>>jumlahTKT;cout<<endl;

       cout<<" ===================================================="<<endl;

     if (jenisTKT==1)

     {

      totalTKT=jumlahTKT*35000;

      jenisTXT="Dewasa";

     }

     else if (jenisTKT==2)

     {

      totalTKT=jumlahTKT*20000;

      jenisTXT="Anak-anak";

     }

     else

     {

      cout<<" Angka Yang Anda Input Salah";

      cout<<endl;

      goto mulai;

     }

   

       cout<<" Jenis Tiket   : "<<jenisTXT<<endl;

       cout<<" Jumlah Tiket   : "<<jumlahTKT<<"\n";

       cout<<" ----------------------------------------------------"<<endl;

       cout<<" Total Bayar   : Rp. "<<totalTKT<<endl;

       cout<<endl;

       break;

     

     

     case 2:

      int KursiTerisi[2],kursiKSONG[2];

       cout<<" ===================================================="<<endl;

       cout<<"\t   Cek Sisa Kursi ";cout<<endl;

       cout<<" ===================================================="<<endl;

       cout<<" Keterangan"<<endl;

       cout<<" Jumlah Kursi Di Bioskop SerbaBebas sebangak 50 Kursi"<<endl;

       cout<<" ===================================================="<<endl;

       cout<<" Input Jumlah Kursi Yang Ingin Dipesan"<<endl;

        angka=0;

      do

   

     {

   

      cout<<" Jumlah Pemesanan Kursi  : ";

       cin>>KursiTerisi[angka];

       angka++;

   

     }

   

     while (angka<1);

      for (angka=0;angka<1;angka++)

       kursiKSONG[angka]=50-KursiTerisi[angka];

     

      cout<<" ===================================================="<<endl;

       for (angka=0;angka<1;angka++)

     

      {

     

       cout<<" Sisa Kursi   : "<<kursiKSONG[angka];cout<<endl;

       cout<<" ===================================================="<<endl;

       cout<<endl;

      }  

        break;

   

   case 3:

    int tiketAnak[2],tiketDewasa[2],total[2];

     cout<<" ===================================================="<<endl;

     cout<<"\t   Input Laporan Penjualan Tiket ";cout<<endl;

     cout<<" ===================================================="<<endl;

     for (angka=0;angka<2;angka++)

    {

     cout<<" Input Data Penjualan "<<angka+1<<endl;

      cout<<" Anak-anak   : "; cin>>tiketAnak[angka];

      cout<<" Dewasa    : "; cin>>tiketDewasa[angka];

      cout<<endl;

    }

    for (angka=0;angka<2;angka++)

      total[angka]=tiketAnak[angka]+tiketDewasa[angka];

      cout<<" ===================================================="<<endl;

      cout<<"\t   Input Laporan Penjualan Tiket ";cout<<endl;

      cout<<" ===================================================="<<endl;

      cout<<" |Tiket  |  Anak-anak  |  Dewasa  |  Total Penjualan|"<<endl;

      cout<<" ----------------------------------------------------"<<endl;

     for (angka=0;angka<2;angka++)

    {

     cout<<" |  "<<angka+1<<"  "<<tiketAnak[angka]<<"          "<<tiketDewasa[angka];

      cout<<"  "<<total[angka]<<"           |"<<endl;

   

     }

      break;

   }

 }

 while (pilihan!=4);


 } 
