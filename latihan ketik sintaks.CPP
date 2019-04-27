#include<iostream.h>
#include<conio.h>
void main ()
{
int bil;
cout<<"Masukkan bilangan : "; cin >>bil;
switch(bil)
{
case 1 : cout<<"Anda masukkan bil.satu";
break;
case 2 : cout<<"Anda masukkan bil.dua";
break;
case 3 : cout<<"Anda masukkan bil.tiga";
break;
default :cout <<"Anda memasukkan bil selain 1,2, dan3 ";
break;
}
getch();
}
