#include<iostream>
using namespace std;
class Bank
{
   int t;
   long p;
   float r;
   public:
   Bank(){
    t=2;
    p=3400;
    r=23;
   }
   Bank( long principle, float rate){
    t=3;
    p=principle;
    r=rate;
   }
    Bank( long principle, int time){
    t=time;
    p=principle;
    r=12;
   }
    Bank( long principle, float rate, int time){
    t=time;
    p=principle;
    r=rate;
   }
   Bank( Bank &B){
    t=B.t;
    p=B.p;
    r=B.r;
   }
   void TotalAmount(){
   float amount;
   amount=p+((p*r*t)/100);
   cout<<"total amounts are "<< amount<<endl;
   }
};
int main(){
    int time;
    float rate;
    long principle;
    cout<<"enter the time , rate and principle\n";
    cin>>time>>rate>>principle;
    Bank b1;
    Bank b2(principle, rate);
    Bank b3(principle, time);
    Bank b4(principle, rate, time);
    Bank b5(b4);

    b1.TotalAmount();
    b2.TotalAmount();
    b3.TotalAmount();
    b4.TotalAmount();
    b5.TotalAmount();



}