#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<strings.h>
using namespace std;

void judul();
void garis();
void menu();
void pembuy();
void trims();


main()
{
    int menuu,email,password,cp,jenis, merk, warna, bayar,pembelian, jumlah, sat, kbl, total;
    char a[20],b[20],c[100],d[100],e[100];
    char mad;

backtomenu:
        cout<<"||||||||||||||||||||||";
        cout<<" ~~~~~~~~LOGIN~~~~~~~~";
        cout<<"||||||||||||||||||||||";
        cout<<"\nEmail        : ";
        cin>>a;
        cout<<"\nPassword     : ";
        cin>>b;
        cout<<"\nNo Hp        : ";
        cin>>c;
        cout<<endl;



    garis();
    judul();
    garis();
    menu();
    cout<<"\nAnda Memilih menu Nomor berapa : ";
	cin>>menuu;

	switch (menuu)
	{

    case 1:
                    beli:
                    pembuy();
                    cout<<"Masukan Pilihan Anda : ";
                    cin>>pembelian;

                    if (pembelian==1)
                                {
                                cout<<'\n'<<"Versace Sabrina"<<endl;
                                sat=1450000;
                                cout<<"Masukan Jumlah pemesanan : ";
                                cin>>jumlah;
                                cout<<"Warna=";
                                cin>>a;
                                total=sat*jumlah;
                                cout<<"Total Harganya       : Rp. "<<total<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>bayar;
                                kbl=bayar-total;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                if ((mad=='Y')||(mad=='y'))
                                    {
                                    system("cls");
                                    garis();
                                    judul();
                                    garis();
                                    cout<<endl;
                                    goto beli;
                                    }
                                else
                                    {
                                    trims();
                                    getch ();
                                    return 0;
                                    }
                                }

                                else
                                    if(pembelian==2)
                                {
                                cout<<'\n'<<"Chanel long skirt"<<endl;
                                sat=998000;
                                cout<<"Masukan jumlah pemesanan : ";
                                cin>>jumlah;
                                cout<<"Warna=";
                                cin>>b;
                                total=sat*jumlah;
                                cout<<"Total Harganya       : Rp. "<<total<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>bayar;
                                kbl=bayar-total;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                if ((mad=='Y')||(mad=='y'))
                                    {
                                    system("cls");
                                    garis();
                                    judul();
                                    garis();
                                    cout<<endl;
                                    goto beli;
                                    }
                                else
                                    {
                                    trims();
                                    getch ();
                                    return 0;
                                    }

                                }

                                else
                                    if(pembelian==3)
                                {
                                cout<<'\n'<<"Rosario Casual Tshirt"<<endl;
                                sat=645000;
                                cout<<"Masukan jumlah pemesanan : ";
                                cin>>jumlah;
                                cout<<"Warna=";
                                cin>>c;
                                total=sat*jumlah;
                                cout<<"Total Harganya       : Rp. "<<total<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>bayar;
                                kbl=bayar-total;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                if ((mad=='Y')||(mad=='y'))
                                    {
                                    system("cls");
                                    garis();
                                    judul();
                                    garis();
                                    cout<<endl;
                                    goto beli;
                                    }
                                else
                                    {
                                    trims();
                                    getch ();
                                    return 0;
                                    }
                                }

                                else
                                    if(pembelian==4)
                                {
                                cout<<'\n'<<"Levis Denim Jacket"<<endl;
                                sat=1799000;
                                cout<<"Masukan jumlah pemesanan : ";
                                cin>>jumlah;
                                cout<<"Warna=";
                                cin>>d;
                                total=sat*jumlah;
                                cout<<"Total Harganya       : Rp. "<<total<<endl;
                                cout<<"Dibayar              : Rp. ";
                                cin>>bayar;
                                kbl=bayar-total;
                                cout<<"Kembali              : Rp."<<kbl<<endl;
                                cout<<""<<endl;
                                cout<<"Masih Ada Yang Lain Y/T : ";
                                cin>>mad;
                                if ((mad=='Y')||(mad=='y'))
                                    {
                                    system("cls");
                                    garis();
                                    judul();
                                    garis();
                                    cout<<endl;
                                    goto beli;
                                    }

                                else
                                    {
                                    trims();
                                    getch ();
                                    return 0;
                                    }
                                }
                                else if(pembelian==5)
                                  { system("cls");
                                    garis();
                                    judul();
                                    garis();
                                    cout<<endl;
                                    goto backtomenu;
                                  }
                                else
                                {
                                    cout<<"Kode Yang Anda Masukan Tidak Tersedia";
                                     return 0;
                                     getch();
                                }


    case 2:
        system("cls");
        garis();
        judul();
        garis();
        cout<<"Whatsapp: 08123365432, Ig: proximacencloth"<<endl;
        getch();

        system("cls");


        goto backtomenu;
		break;

    case 3:
         system("cls");
         garis();
        judul();
        garis();
        cout<<"Toko Kami berdiri semenjak pembuatan program aplikasi ini dibuat, dengan berbagai lika-liku menyelesaikan program ini"<<endl;
        getch();

        system("cls");
        goto backtomenu;
		break;

	}

}

void judul()
{
    cout<<"||||||||||PROXIMA CENTAURI MENU||||||||||\n"<<endl;
}

void garis()
{
    cout<<"=========================================\n"<<endl;
}

void menu()
{
	cout<<" 1. Jenis Pilihan Pakaian dan pembelian"<<endl;
	cout<<" 2. Info Pemesanan"<<endl;
	cout<<" 3. Tentang Kami"<<endl;
}

void pembuy()
{
                    cout<<"|  1. Versace Sabrina       |  Rp. 1.450.000 |"<<endl;
                    cout<<"|  2. Chanel long skirt     |  Rp. 998.000   |"<<endl;
                    cout<<"|  3. Rosario casual tshirt |  Rp. 645.000   |"<<endl;
                    cout<<"|  4. levis denim jacket    |  Rp. 1.799.000 |"<<endl;
                    cout<<"|  5. Kembali Ke Menu Utama | "<<endl;
                    cout<<"|___________________________|________________|"<<endl;
                    cout<<""<<endl;
}

void trims()
{
    cout<<"Terima Kasih Telah Berbelanja Di Toko Kami";
}



