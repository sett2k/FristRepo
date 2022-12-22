//
// Created by PRO on 22/12/01.
//Bank Test

#include "iostream"
#include "fstream"
using namespace std;

class TBank{

private:
    string adminname[100]={"unknown"};
    string adminpass[100]={"unknown"};
    int adminnote;
    int adminID;

public:
    int account();
    int create();
    int signin();
    int storage();
    int toexchange();
    int checkName(string tranName);
    int moneytransfer(int ownerID, int receiverID, int tranAmount);
    int withdraw(int ownerID, int wdAmount);
    int changeUsername(string currentName, string newName);
    int changePassword(string currentPass, string newPass);
    int adminview();
    int adminAllInfo();
    int transaction();
    int note=0;
    int ownerID=0;
    string username[100];
    string password[100];
    int amount[100];
    int uFile[100];

    TBank() {
        cout <<   "WELCOME TO OUR BANK..."<<endl<<endl;
    }

    int setter(string setName, string setPass){
        adminname[adminnote]=setName;
        adminpass[adminnote]=setPass;
        adminnote++;
    }

};

int TBank::storage() {
    for(int i=0; i<note; i++){
       cout<<  "USER-"<<i+1<<"=>"<<endl;
         cout<<"Your Acc Name     :"<<username[i]<<endl;
         cout<<"Your Acc Password :"<< password[i]<<endl;
        cout<<"Your Bank Amount  :"<<amount[i]<<endl;
    }
    cout<<endl;
}

int TBank::adminAllInfo(){

}

int TBank::account() {
    char key;
    while(true) {
        cout <<   "Account Session..." << endl;
        cout <<"Press 'c' to create an account." << endl;
        cout <<"Press 's' to sign in." << endl;
        cout <<"Press any other key to exit." << endl;
        cin >> key;

        if (key == 'c') {
            create();
        } else if (key == 's') {
            int result = signin();
            if(result == -1){
                cout <<  "Password or Username Wrong!!!" << endl <<  "check and reload your process again...." << endl<< endl;
                signin();
            }
        } else {
            exit(1);
//            cout << "See Youuuu." << endl;
//            return 'x';
        }
    }
}

int TBank::adminview(){
    int adminKey=0;
    cout<<  "This is Admin View."<<endl;
    cout<<   "Press '1' to see users' information\n'2' to see transaction records.\n'3' to sign in.\n'4' to quit."<<endl;
    cin>>adminKey;
    if(adminKey==1){
        adminAllInfo();
    }else if(adminKey==2){
        transaction();
    }else if(adminKey==3){
        int result = signin();
        if(result == -1){
            cout <<  "Password or Username Wrong!!!" << endl <<  "check and reload your process again...." << endl<< endl;
            signin();
        }
    }else if(adminKey==4){
        adminview();
    }
}

int TBank::create() {
    string cName;
    string pass;
    string conPass;
    int money;
    cout<<  "Create Your New Account."<<endl;
    cout<<"Type Your Username   :";
    cin>>cName;
    int receiver = checkName(cName);
    if(receiver==-1){
        cout <<"Type Your Password   :";
        cin >> pass;
        cout <<"Confirm Your Password:";
        cin >> conPass;

        if(pass==conPass) {
            cout <<"Enter the Amount You want to Save: ";
            cin >> money;
            username[note]=cName;
            password[note]=pass;
            amount[note]=money;
            cout <<endl<<  "!!!Well Done!!!"<<endl<<  "Your Account Has Been Successfully Created." << endl<<endl;
            note++;
            storage();
        }else{
            cout<<endl<<  "Something Wrong!!!"<<endl<<  "check and reload your process again...."<<endl<<endl;
            create();
        }
    }else {
        cout<<  "Username already exists."<<endl;
        create();
    }
}

int TBank::signin() {
    string sName;
    string signPass;

    cout<<  "Sign In Your Account."<<endl;
    cout<<"Type Your Username:";
    cin>>sName;
    cout<<"Type Your Password:";
    cin>>signPass;

    for(int a=0; a<adminnote; a++){
        if(sName==adminname[a] && signPass==adminpass[a]){
            adminID=a;
            cout<<"Admin Acc"<<endl;
            cout<<"Level:"<<a+1<<endl;
            cout<<"Name :"<<sName<<endl<<endl;
            adminview();
        }
    }

   for(int z=0; z<note; z++){
        if(sName==username[z] && signPass==password[z]){
            ownerID=z;
            cout<<  "Sign In Success."<<endl;
            cout<<"Username   : "<<username[z]<<endl;
            cout<<"Bank Amount: "<<amount[z]<<endl<<endl;
            toexchange();
//        }else{cout << "Password or Username Wrong!!!" << endl << "check and reload your process again...." << endl<< endl;
//              signin();

        }
   }
    cout << "Password or Username Wrong!!!" << endl << "check and reload your process again...." << endl<< endl;
    signin();

   // return -1;




}

int TBank::toexchange(){
    char word;
    string tranName;
    int tranAmount;

    cout<<  "Money Exchange Session..."<<endl;
    cout<<"Type 'e' to exchange money:"<<endl;
    cout<<"Type 'w' to withdraw money:"<<endl;
    cout<<"Type 'd' to deposit money:"<<endl;
    cout<<"Type 'u' to update account:"<<endl;
    cout<<"Type 'g' to go back to Sign In:"<<endl;
    cin>>word;

    if(word=='e') {

        cout << "Type a username to Transfer:";
        cin >> tranName;
//        if(tranName==username[ownerID]){
//            cout<<"Type another username."<<endl;
//            toexchange();
//        }else {

        if(tranName!=username[ownerID]){
            int receiverID = checkName(tranName);
            if (receiverID>=0) {
                while (receiverID >= 0) {
                    cout << "Enter Amount to Transfer:";
                    cin >> tranAmount;
                    if (tranAmount <= amount[ownerID] && tranAmount>0) {
                        char confirmKey;
                        cout << "Type 'c' To Confirm:";
                        cin >> confirmKey;
                        if (confirmKey == 'c') {
                            moneytransfer(ownerID, receiverID, tranAmount);//c, s, e, w, d, r, u/// w,,,u
                            storage();
                            toexchange();
                        } else {
                            cout <<  "Invalid Key!" << endl;
                            continue;
                        }
                    } else {
                        cout <<  "Invalid Amount!" << endl;
                        continue;
                    }
                }
            } else {
                cout <<  "Username Not Found!!!" << endl <<  "try again..." << endl << endl;
                toexchange();
            }
        }else{
            cout<<"Type a different username."<<endl;
            toexchange();
        }

    }else if(word=='w'){

        int wdAmount;
        cout<<  "Withdraw Money Session..."<<endl;
        cout<<"Enter amount to withdraw: ";
        cin>>wdAmount;
        if(amount[ownerID]>=wdAmount && wdAmount>0){
            withdraw(ownerID, wdAmount);
            toexchange();
        }else{
            cout<<  "Invalid Amount!"<<endl<<endl;
            toexchange();
        }

    }else if(word=='d'){

        int deAmount;
        cout<<  "Deposit Session..."<<endl;
        cout<<"Enter amount to deposit: ";
        cin>>deAmount;
        if(deAmount>0) {
            amount[ownerID] = amount[ownerID] + deAmount;
            cout <<"Your New Bank Amount:" << amount[ownerID] << endl << endl;
            toexchange();
        }else{
            cout<<  "Invalid Amount!"<<endl;
            toexchange();
        }
    }

    else if(word=='u'){

        char changeKey;
        cout<<  "Account Update Session..."<<endl;
        cout<<"Press 'a' to change account username:\nPress 'p' to change your account password:";
        cin>>changeKey;
        if(changeKey=='a' ){
            string currentName;
            string newName;
            changeUsername(currentName, newName);
            cout<<endl;
            toexchange();
        }else if(changeKey=='p'){
            string currentPass;
            string newPass;
            changePassword( currentPass, newPass);
            cout<<endl;
            toexchange();
        }else{
            cout<<endl<<  "Invalid Key!"<<endl;
            toexchange();
        }
    }
    else if(word=='g'){
        account();
    }else{
        cout<<  "Invalid Key!!!"<<endl;
        toexchange();
    }
}

int TBank::moneytransfer(int ownerID, int receiverID, int tranAmount){
    amount[ownerID]=amount[ownerID] - tranAmount;
    int a = tranAmount + amount[receiverID];
    amount[receiverID] = a;

    cout<<"Money Transferred to: "<<username[receiverID]<<endl;
    cout<<"Transferred amount  : "<<tranAmount<<endl<<endl;
    toexchange();

//    string file=username[ownerID]+".dat";
//    ofstream userFile;
//    userFile.open(file,ios::app);
//    if(!userFile.is_open()){
//
//    }else {
//        int i=0;
//        while(i<100) {
//            userFile <<"  Transfer Record :" <<i<<" =>" <<endl;
//        }
//        i++;
//        userFile <<"Transferred to :" << username[receiverID] << endl;
//        userFile <<"Amount         :" << tranAmount << endl << endl;
//        userFile.close();
//    }
}

int TBank::transaction(){

}

int TBank::checkName(string tranName) {
    for(int i =0; i<note; i++){
        if(tranName==username[i]){
            return i ;
        }
    }

    return -1;
}

int TBank::withdraw(int ownerID, int wdAmount){
    int remain=0;
    cout<<"Procedure Done."<<endl;
    cout<<"Original Amount : "<<amount[ownerID]<<endl;
    remain = amount[ownerID]-wdAmount;
    amount[ownerID]=remain;
    cout<<"Withdrew Amount : "<<wdAmount<<endl;
    cout<<"Remaining Amount: "<<remain<<endl<<endl;
}

int TBank::changeUsername(string currentName, string newName) {
    cout << "Type your current username:";
    cin >> currentName;
    //int receiver2= checkName(currentName);
    if (currentName == username[ownerID]) {
        cout << "Type your new username    :";
        cin >> newName;
        int receiver = checkName(newName);
        if (receiver == -1) {
            string changePass;
            cout << "Type Your Password to Confirm: ";
            cin >> changePass;
            if (changePass == password[ownerID]) {
                cout <<endl<< "Name Updated." << endl;
                cout << "Your Previous Name:" << currentName << endl;
                cout << "Your Updated Name :" << newName << endl;
                username[ownerID] = newName;
            } else {
                cout << "Password Wrong!!!" << endl;
                changeUsername(currentName, newName);
            }
        } else {
            cout << "Username already exists."<<endl;
            cout << "Type a different name." << endl<<endl;
            changeUsername(currentName, newName);
        }
    }else {
            cout << "Username Wrong!!!\nTry again..." << endl;
            changeUsername(currentName, newName);
        }
        return 1;

}

int TBank::changePassword(string currentPass, string newPass){
    cout<<"Enter Your current password:";
    cin>>currentPass;
    if(currentPass==password[ownerID]) {
        cout <<"Enter Your new password    :";
        cin >> newPass;
        if (currentPass == newPass) {
            cout <<"Enter another different password!" << endl;
            changePassword(currentPass, newPass);
        } else {
            cout << "Password Changed." << endl;
            cout << "Your Previous Password: " << currentPass << endl;
            cout << "Your Updated Password : " << newPass << endl;
            password[ownerID] = newPass;
        }
    }else{
        cout<<"Password Wrong\n Try again..."<<endl;
        changePassword(currentPass,newPass);
    }
}

int main(){
    TBank rule;
    rule.account();
    //rule.storage();
//    char key = rule.account();
//    if(key='x'){
//        exit(1);
 //   }
    //rule.create();

}
