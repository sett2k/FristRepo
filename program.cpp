#include "iostream"
using namespace std;

class Group{
public:
    Group(){
        cout<<"Group."<<endl;
    }
    int n =1000;
    char d='x';
    string room[11]={"room1","room2","room3","room4"};

    void fun(){
//        int arr[100];
//        int j=0;
        for(int i=1; i<=100; i++){
            cout<<"Output from function:"<<i<<endl;
            //arr[j]++;
        }
    }

    void setdata(int arr3[]){
        arr3[10]=arr[8];
    }

    int getdata(){
       // int arr2[10];
        return arr[8];

    }

private:
    int arr[10]={11,22,33,44,55,66,77,88,99,00};



};

class Group2:public Group{
public:
    char c ='w';
};

int main(){
    Group sub;
    Group sss;
    Group2 sub2;
    sub.room[10]="room10";
    sub.fun();
    //sub.setdata(int arr3[10]);
    sub.getdata();


    cout<<"Sub:"<<sub.room[10]<<endl;
    cout<<"Private data:"<<sub.getdata()<<endl;
    cout<<"Inherited data:"<<sub2.d<<endl;

}