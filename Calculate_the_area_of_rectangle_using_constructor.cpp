#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(int a, int b){
        length=a;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    cout<<"Enter the value of length and breadth for rectangle\n";
    int l;
    int b;
    cin>>l>>b;
    Rectangle R(l, b);
    int area_of_rectangle=R.area();
    cout<<"the area of rectangle is "<<area_of_rectangle;
}