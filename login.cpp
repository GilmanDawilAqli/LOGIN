#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include"head.h"
#include"atas.h"
  main()
{
 int i,t=0;
 char usrn[1000],pswr[1000] = "YTTA",sac;
 ulang:
atas("LOGIN");
 cout<<"-------------------------------------------------------"<<endl;
 cout<<"|                     LOGGIN                          |"<<endl;
 cout<<"======================================================="<<endl;
 cout<<"USERNAME =";gets(usrn);
 cout<<"PASSWORD =";
 for (i=0;i<=4;i++) {
     sac = getch();
        if (sac =='\r'){
        i = 100;}
          else if(sac == '\b'){
          cout<<"\b \b";
          i = i - 2;}
          else {
          pswr[i] = sac;
     cout<<"-"; }
         if (sac == pswr[i]) {
         t = t + 1;
         }
 }
 if ((strcmp(usrn,"GILMAN") == 0) && t == 4) {
     clrscr();
     cout<<usrn<<" telah LOGIN!!!"<<endl;
goto utama;
 }
 else {
      clrscr();
      cout<<usrn<<" PENYUSUP!!!"<<endl;
      t = 0;
      goto ulang;
      }
utama:
head("BIODATA DIRI");
getch();
}
