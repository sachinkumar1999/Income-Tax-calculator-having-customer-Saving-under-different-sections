#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
       int sal;
    int tsal;
    int tax=0;
    int money1=0,money2=0,money3=0,money4=0,money5=0,money6=0;
            cout<<"what is your annual income ";
            cin>>sal;
            cout<< "how much money you are investing under section 80C:";
            cin>>money1;
            if(money1>150000)
              {
               cout<<"80C is invalid"<<endl;
              }
            cout<< "how much money you are investing under section 80CCD 1B:";
             cin>>money2;
            if (money2>50000)
              {
                cout<<"80CCD 1Bis invalid"<<endl;
              }
               cout<< "how much money you are investing under section 80D:";
               cin>>money3;
            if (money3>25000)
              {
                 cout<<"80D is invalid"<<endl;
               }

             cout<< "how much money you are investing under section 80E:";
             cin>>money4;
            if (money4>10000)
              {
                cout<<"80E is invalid"<<endl;
              }
            cout<< "how much money you are investing under section 80TTA:";
            cin>>money5;
             if (money5>10000)
              {
               cout<<"80TTA is invalid"<<endl;
               }
            cout<< "how much money you are investing under section 80TTB:";
            cin>>money6;
              if(money6>50000)
               {
                 cout<<"TTB is invalid"<<endl;
               }
        tsal=sal-(money1+money2+money3+money4+money5+money6);
       cout<<"taxable salary is :"<<tsal<<endl;
        if(tsal<500000)
          {
           tax=tsal*(0);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((tsal>500000)&&(tsal<=750000))
          {
           tax=tsal*(.1);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
        if((tsal>750000)&&(tsal<=1000000))
          {
           tax=tsal*(.15);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((tsal>1000000)&&(tsal<=1250000))
          {
           tax=tsal*(.20);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
       if((tsal>1250000)&&(tsal<=1500000))
           {
           tax=tsal*(.25);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if(tsal>1500000)
          {
           tax=tsal*(.30);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
}
