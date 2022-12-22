#include "fstream"
#include "iostream"
using namespace std;

int main(){
    char arr[100];
    int data=0;

    ofstream outfile;
    outfile.open("BankFile.dat",ios::ate);

    cout<<"Output to File:";
    cin.getline(arr,100);
    cin>>data;
    //cin.ignore();

    outfile<<"Data"<<endl;
    outfile<<"name :"<<arr<<endl;
    outfile<<"age  :"<<data<<endl;

    cout<<"Output:"<<endl;
    cout<<data<<endl;
    cout<<arr<<endl;

    outfile.close();

//    ifstream infile;
//    infile.open("BankFile.dat",ios::in);
//    cout <<"Data From File:" << endl;
//    while(infile>>data>>arr) {
//        infile >> data;
//        infile >> arr;
//        cout << data << endl;
//        cout << arr << endl;
//    }
//
//    infile.close();

    return 0;
}