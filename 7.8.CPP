#include <iostream.h>
#include <conio.h>
 void main(){
 int jum;
 int nilai[20];
 cout<<"jumlah data : ";
 cin>>jum;
 for (int i=0;i<jum;i++)
 {
 cout<<"Data ke - "<<i+1<<" : ";
 cin>>nilai[i];
 }
 int min;
 min =nilai[0];
 int maks;
 maks =nilai[0];
 for(int i=0;i<jum;i++)
 {
 if (nilai[i] < min)
 min =nilai[i];
 if (nilai[i] > maks)
 maks = nilai [i];
 }
 cout<<"nilai terkeci : "<<min<<endl;
 cout<<"nilai terbesar : "<<maks<<endl;
 getch(); }
