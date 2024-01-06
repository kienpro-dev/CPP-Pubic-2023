#include <iostream>
#include <string>

using namespace std;

int main (){
    // int age = 5;
    float chieucao;

    string name1, name2;
    // cin>>age;
    // cin>> chieucao;
    // cin.ignore();
    // fflush(stdin);
    name1 = "Duy123";
    name2 = name1.substr(0, 3);
    name1.insert(0,"Dao ");
    name1.erase(7,3);
    for(int i =0 ; i<name1.length();i++){
        cout<<name1[i];
    }
    // name2= "Anh";//a b  a == b
    // cout<<name1 <<" "<<name2<<endl;
    // name1.swap(name2);
    // cout<<name1 <<" "<<name2<<endl;
    // if(name1.length() > name2.length()){
    //     cout<<"Ten 1 lon hon";

    // }else {
    //     cout<<"Ten 1 nho hon! ";
    // }
    // getline(cin, name1);
    // getline(cin,date);
    // cin>>h;
    // cout<<name1<<"\nTuoi: " <<age<<"\nChiều cao: "<<chieucao<<endl;
    // cout<<"Ngày sinh:"<<date;
// cout<<name1.length()<<"  "<<name1<<" "<<name2.empty();
//     return 0;

}