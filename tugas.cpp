#include <conio.h>
#include <iostream.h>
main(){
char nama_brg [20];
int jmlh_beli=0,tot_beli=0, x, y;
long int harga=0,hrg_brg=0,total=0,bayar=0,diskon;
cout<<" ==== Program Perkasiran untuk Menghitung Diskon Sederhana ==== \n\n";
cout<<"Masukkan jumlah macam barang yang sudah dibeli:";cin>>y;
x=1;


while(x<=y){
cout<<"\nMasukkan Nama Barang ke "<<x<<" : ";cin>>nama_brg;
cout<<"Masukkan Harga Barang : ";cin>>harga;
cout<<"Masukkan Jumlah beli : ";cin>>jmlh_beli;
hrg_brg = harga * jmlh_beli;
total=total + hrg_brg;
tot_beli+=jmlh_beli;
x++;
}
if(total>=50000){
diskon = 0.1*total;
}
else {
diskon = 0;
}

bayar = total - diskon;
cout<<"\nTotal beli :"<<tot_beli<<endl;
cout<<"Total Pembelian : "<<total<<endl;
cout<<"Mendapatkan diskon sebesar : "<<diskon<<endl;
cout<<"\nTotal yang harus dibayar = "<<bayar<<endl;

getch();

}