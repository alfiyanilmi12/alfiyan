#include <iostream>
#include <conio.h>
using namespace std;
 
main(){
    float celcius, hasilfahrenheit, hasilkelvin, hasilreamur;
    int pilih;
 
    cout << "--------------------------UNIVERSITAS TEKNOLOGI YOGYAKARTA-------------------------"<< endl;
	cout << "==================================================================================="<< endl;
	cout << "Masukan suhu dalam celcius : ";
    cin >> celcius;
 
    cout << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Kelvin" << endl;
    cout << "3. Reamur" << endl;
    cout << "Masukan Pilihan : ";
    cin >> pilih;
 
    cout << endl;
    switch(pilih){
        case 1 :
            hasilfahrenheit = (celcius*9/5)+32;
            cout << celcius << " Celcius = " << hasilfahrenheit << " Fahrenheit";
            break;
        case 2 :
            hasilkelvin = celcius+273.15;
            cout << celcius << " Celcius = " << hasilkelvin << " Kelvin";
            break;
        case 3 :
            hasilreamur = celcius*4/5;
            cout << celcius << " Celcius = " << hasilreamur << " Reamur";
            break;
        default :
            cout << "Pilihan yg anda masukan salah";
            break;
    }
    cout << endl;
    getch();
    return 0;
}
