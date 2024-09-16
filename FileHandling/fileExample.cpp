#include<iostream>
#include<fstream>
using namespace std;

int main(){

    // ofstream file("openup.txt");

    // if (file.is_open()){
    //     file <<  "Hello Welcome to Royal Technosoft";

    //     file.close();
    // }else{
    //     cout << "Error Opening the File..." << endl;
    // }






    string str;

    ifstream file("openup.txt");

    if (file.is_open()){
        while (getline(file , str)){
            cout << str << endl;
        }
        file.close();
    }else cout << "Error Opening the File..." << endl;
}