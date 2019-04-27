#include<conio.h>
#include<iostream.h>
 main () {
 int op1,op2, Pilih;
 float Hasil;
 cout <<"Operan 1 : "; cin >> op1;
 cout <<"Operan 2 : "; cin >> op2;
 cout << "1. Operator +\n";
 cout << "2. Operator -\n";
 cout << "3. Operator *\n";
 cout << "4. Operator /\n";
 cout << "Pilih Operator : "; cin >> Pilih;
 switch (Pilih) {
 case 1 : {Hasil = op1 + op2; break;}
 case 2 : {Hasil = op1 - op2; break;}
 case 3 : {Hasil = op1 * op2; break;}
 case 4 : {if (op2 != 0)
 cout <<op1/op2;
 else
 cout <<"error";
 break;}
 }
 cout <<"Hasil dari perhitungan tersebut adalah " <<Hasil;
 getch () ;
 return 0;
 }


