#include <conio.h>
#include <iostream>

using namespace std;
void binary(int desimal);

void binary(int desimal)
{
     int sisa;
     int hasil;

     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal %2;
     hasil = desimal / 2;
     binary(hasil);
     cout<<sisa;
}

int main()
{
    int a;
cout << " \t|================================================|" << endl ;
cout << " \t|= PROGRAM KONVERSI BASIS BILANGAN 10 KE BINNER =|" << endl ;
cout << " \t|=============== ALIF MUSTAFANAH ================|" << endl ;
cout << " \t|================================================|\n" << endl ;

    cout << "\tBILANGA  YANG AKAN DI KONVERSIKAN : ";
    cin>>a;
    cout << a << " JIKA DIKONVERSIKAN KE BINNER ADALAH " ;
    binary(a);
    cout<<endl;
    char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:


    cout << " \n\t" << endl ;
cout << " \n\t|===============================================|" << endl ;
cout << " \t|== TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI ==|" << endl ;
cout << " \t|============== ALIF MUSTAFANAH ================|" << endl ;
cout << " \t|===============================================|\n" << endl ;



    return 0;

}
