#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
main()
{
char nim[8] [10],nm[20] [10],jwb;
int i,j;
float n1[10],n2[10],na[10];
isi:
clrscr();
cout<<"masukan jumlah data : ";cin>>j;
for (i=1;i<=j;i++ )
{
cout<<"data ke- : "<<i<<endl;
cout<<"masukan NIM\t : ";cin>>nim[i];
cout<<"masukan nama\t : ";gets(nm[i]);
cout <<"nilai 1\t : ";cin>>n1[i];
cout<<"nilai 2\t :  ";cin>>n2[i];
na[i]=(n1[i]+n2[i])/2;
cout<<endl;
}
cout<<"                DATA MAHASISWA"<<endl;
cout<<"=============================================="<<endl;
cout<<"NO.      NIM            NAMA           NILAI  "<<endl;
cout<<"                                              "<<endl;
cout<<" "<<endl;
for (i=1;i<=j;i++)
{
cout<<setiosflags(ios::right)<<setw(3)<<i;
cout<<setprecision(3)<<" "<<nim[i];
cout<<setprecision(4)<<"     "<<nim[i];
cout<<setprecision(5)<<"            "<<na[i]<<endl;
}
cout<<"=============================================="<<endl;
cout<<"mau input data lagi [Y/T] : ";jwb=getche();
if (jwb=='Y' || jwb=='y')
goto isi;
getch (); }
