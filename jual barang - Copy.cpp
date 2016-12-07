#include<iostream.h>
#include<conio.h>

void main()
{
char kd,nm[30],*nama,*jenis;
int dis,jumlah,jn;


float harga;
long Total,Tot;

char lagi='Y';
clrscr();
while(lagi=='Y' ||lagi=='y')
{
gotoxy(10,5);
cout<<"Penjualan Barang Elektronik\n";
gotoxy(10,6);
cout<<"===========================\n";
gotoxy(10,7);
cout<<"Nama Pembeli      = ";cin>> nm;
gotoxy(10,8);
cout<<"Kode Barang[A/B/C] = ";cin>> kd;
gotoxy(10,9);
cout<<"Jenis Bayar[1.Tunai/2.Kredit]  = ";cin>>jn;
gotoxy(10,10);
cout<<"============================\n";
if ((kd=='A' || kd=='a') && (jn==1))
{
nama="Televisi";
jenis="Tunai";
harga=500000;
dis=0.05*500000;
}
else if ((kd=='A' || kd=='a') && (jn==2))
{
nama="Televisi";
jenis="Kredit";
harga=650000;
dis=0;
}
else if ((kd=='B' || kd=='b') && (jn==1))
{
nama="Kipas Angin";
jenis="Tunai";
harga=150000;
dis=0.07*150000;
}
else if ((kd=='B' || kd=='b') && (jn==2))
{
nama="Kipas Angin";
jenis="Kredit";
harga=250000;
dis=0;
}
else if ((kd=='C' || kd=='c') && (jn==1))
{
nama="VCD";
jenis="Tunai";
harga=300000;
dis=0.01*300000;
}
else if ((kd=='C' || kd=='a') && (jn==2))
{
nama="VCD";
jenis="kredit";
harga=450000;
dis=0;
}
else
{
nama="Tidak Ada";
jenis="Tidak Ada";
harga=0;
}
gotoxy(10,11);
cout<<"Nama barang     ="<<nama;
gotoxy(10,12);
cout<<"Jenis Bayar     = "<<jenis;
gotoxy(10,13);
cout<<"Harga Barang     = "<<harga;
gotoxy(10,14);
cout<<"Jumlah Beli    = ";cin>>jumlah;
Total=harga*jumlah;
gotoxy(10,15);
cout<<"Total bayar    = "<<Total;
gotoxy(10,16);
cout<<"Diskon    = "<<dis;
gotoxy(10,17);
Tot=Total-dis;
gotoxy(10,18);
cout<<"Total  ="<<Tot;
gotoxy(10,19);
cout<<"===========================\n";
gotoxy(10,20);
cout<<"Masih Mau Beli Barang Lagi[Y/T]    = ";cin>> lagi;
clrscr();
}
}
