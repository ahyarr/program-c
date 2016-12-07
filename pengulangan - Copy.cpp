

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

//gatewan.com -- Wawan Beneran

//MENCARI RATA - RATA, MAKSIMUM DAN MINIMUM


void main()
{
randomize();
int data, mak, min,tot=0;
float rata;
for(int i=1;i<=5;i++)
{
data=random(100);
cout<<"Data masuk : "<<data<<endl;
if (i==1)
mak=min=data;
else
{
if (mak<data)
mak=data;
if (min>data)
min=data;
}
tot=tot+data;
}
rata=tot/5;
cout<<"Rata-rata : "<<rata<<endl;
cout<<"Masimum : "<<mak<<endl;
cout<<"Minimum : "<<min<<endl;
getch();
}



