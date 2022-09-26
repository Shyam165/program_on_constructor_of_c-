#include<iostream>
using namespace std;
class Sample
{
   int  num1;
   int num2;
   public:
   Sample(){
    num1=2;
    num2=34;
   }
   Sample(int a, int b){
    num1=a;
    num2=b;
   }
   Sample(Sample &S){
    num1=S.num1;
    num2=S.num2;
   }
   void displayData(){
    cout<<"num1 is "<<num1<<" num2 is "<<num2<<endl;
   }
};
int main(){
    int value1;
    int value2;
    cout<<"enter the value1 and value2\n";
    cin>>value1>>value2;
    Sample S1;
    Sample S2(value1, value2);
    Sample S3(S2);
    S1.displayData();
    S2.displayData();
    S3.displayData();

}