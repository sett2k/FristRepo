#include "iostream"
using namespace std;

class Species{
public:
    int i;
    char c;
    string ss;

    Species(int iz, char ciz, string ssiz){
         i = iz;
         c = ciz;
         ss = ssiz;
    }

    void method(){
        cout<<"int:"<<i;
        cout<<endl<<"char:"<<c;
        cout<<endl<<"string:"<<ss;
    }
};

int main(){
    Species spe(22, 'W', "pluss");
    spe.method();

return 1;
}