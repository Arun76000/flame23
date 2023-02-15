#include<iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
class scheme
{
protected:
  int schemeid;
  char schemename[30];
  float outgoingrate;
  float messagecharge;
  float bill;

public:
  void getdata();
  void putdata();
  void getbill();
  void putbill();

};
void scheme::getdata()
 {
   cout<<"enter id"<<endl;   cin>>schemeid;
   cout << "enter name" <<endl ;
   cin>>schemename;
   cout<<"enter outgoingrate"<<endl;
   cin>>outgoingrate;
   cout<<"enter mesagecharge:"<<endl;
   cin>>messagecharge;
 }
 void scheme::putdata()
 {
   cout<<"sceme id:\t"<<schemeid<<endl;
   cout<<"name:\t"<<schemename<<endl;
   cout<<"outgoingrate:\t"<<outgoingrate<<endl;
   cout<<"messagecharge:\t"<<messagecharge<<endl;
 }
 void scheme::getbill()
 {
   int call,msg;
    cout<<"enter call hour"<<endl;
    cin>>call;
    cout<<"enter msg"<<endl;
    cin>>msg;

    bill=(call*outgoingrate)+(msg*messagecharge);

 }
 void scheme ::putbill()
 {
   cout<<"bill:\t"<<bill<<endl;
 }

 class customer:public scheme
 {
        int cusid;
          
    public:
        void getdata();
        void putdata();
 };


 int main()
 {
    
   scheme s;
   s.getdata();
   s.getbill();

   s.putdata();
   s.putbill();

   return 0;
 }
