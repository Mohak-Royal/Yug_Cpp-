#include<iostream>
using namespace std;


int main(){
    // int a = 5;
    // int *ptr = &a;

    // cout << "The value of a is: " << *ptr << endl;
    // cout << "The address of a is: " << ptr << endl;
    // cout << "The address of ptr is: " << &ptr << endl;




    // char name[] = "Royal Technosoft";
    // char *ptr = name;


    // while (*ptr != '\0'){
    //     cout << *ptr;
    //     ptr++;
    // }
    

    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    int (*ptr)[4] = arr;


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

}
