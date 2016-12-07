#include <iostream.h>
#include <conio.h>
main ()
{
int x;
char i;
cout<<"\n========================================\n";
cout<<"\nBELAJAR PERCABANGAN BERSYARAT IF-ELSE-IF\n";
cout<<"\n========================================\n";
cout<<"Masukkan Bilangan:";
cin>>x;
if (x>0)
{
cout<<"Bilangannya adalah Positif(+)";
}
else if (x<0)
{
cout<<"Bilangannya adalah Negatif(-)";
}
else
{
cout<<"Bilangannya adalah Nol(0)";
}
cin>>i;
getch();
}

