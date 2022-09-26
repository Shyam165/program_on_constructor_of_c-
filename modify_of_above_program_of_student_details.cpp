#include<iostream>
using namespace std;
class Student{
    int rollno;
    int marks;
    
    char name[50];
    public:
    Student(){
        rollno=39;
        marks=90;
      cout<<"enter the name of student\n";
      cin>>name;
    }
    void displayData(){
        cout<<rollno<<" "<< marks<<" "<< name<<endl;;
    }
};
int main(){
    Student S[3];
    for(int i=0;i<3;i++){
     S[i].displayData();
    }
    
}