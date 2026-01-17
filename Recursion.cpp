#include <bits/stdc++.h>
using namespace std;


// // Q1)

// //  void namePrint(int n){

// //     if (n==0) return;
// //     cout<< "Rishank\n";

// //     namePrint(n-1);
// // }

// // int main(){
// //     int n;
// //     cout<<"Enter value of n: ";
// //     cin>> n;
// //     namePrint(n);
// // }

// // Q2

// void linearPrint(int n){

//     if (n==0) return;

//     cout <<n;

//     linearPrint(n-1);

// }



// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>> n;
//     linearPrint(n);
// }



// Q3)


// void OnetoN_Print(int n){
//     if (n==0) return ;
//     OnetoN_Print(n-1);
//     cout << n << "";
// }

// int main(){
//     int n;
//     cin>> n; 
//     OnetoN_Print(n); 
// }


void OnetoN_Print(int n, int i= 1){
    if (i>n) return;
    cout << i<< " \n";


    OnetoN_Print(n, i+1);
}


int main(){
    int n;
    cout<< "Enter the value of n: ";
    cin>> n; 
    OnetoN_Print(n); 
}