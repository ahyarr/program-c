

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

//gatewan.com -- Wawan Beneran

//COUNTER


void main()
{
for(int i=1;i<=1000;i++)
{
cout<<setw(5)<<i;
if(i%10==0)
cout<<endl;
if(i%100==0)
{
cout<<"Tekan enter untuk melanjutkan...";
getch();
clrscr();
}
}
getch();
}

