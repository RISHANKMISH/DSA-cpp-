// // for printing 4x4 star pattern
#include <bits/stdc++.h>
using namespace std;

// // int main(){
// //     for (int i= 0; i<4; i++){
// //         for (int j= 0; j<4; j++){
// //             cout << "*";
// //         }
// //         cout << endl;
// //     }
// // }

// // void starPrint(int n){
// //     for (int i= 0; i<n; i++){
// //         for (int j= 0; j<i; j++){
// //             cout << "*";
// //         }
// //         cout << endl;
// //     }
// // }

// // int main(){
// //     int n; 
// //     cin>> n;
// //     starPrint(n);
// // }



// // void noPrint(int n){
// //     for (int i=0; i<=n; i++){
// //         for (int j=1; j<=i; j++){
// //             cout<< " "<< i << " ";
// //         }
// //         cout<< endl;
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>> n;
// //     noPrint(n);
// // }


// // void revPrint(int n){
// //     for (int i=n; i>=1; i--){
// //         for (int j= 1; j<=i; j++){
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// // }

// // int main(){
// //     int n;
// //     cin>>n;
// //     revPrint(n);
// // }


// // void revNumbers(int n){
// //     for (int i= n; i>=1; i--){
// //         for (int j=1; j<=i; j++){
// //             cout<< j;
// //         }
// //         cout << endl;
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>> n;
// //     revNumbers(n);
// // }


// // void spaceStar(int n){
// //     for (int i=0; i<=5; i++){
// //         for (int j=0; j<=i; j++){
// //             cout<<"*";
// //         }
// //         cout << endl;
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     spaceStar(n);
// // }

// // void pyramidPrint(int n){
// //     for (int i=0; i<=n; i++){
// //         for (int space=n; space<=0; space--){
// //             cout << " ";
// //         }
// //         for (int star= 0; star<=(2*i)+1; star++){
// //             cout<< "*";
// //         }
// //         cout<< endl;
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     pyramidPrint(n);
// // }


// #include <iostream>
// using namespace std;

// void reversePyramid(int n) {
//     for (int i = n; i >= 1; i--) {

//         // left spaces
//         for (int space = 1; space <= n - i; space++) {
//             cout << " ";
//         }

//         // stars
//         for (int star = 1; star <= 2 * i - 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;

//     reversePyramid(n);
//     return 0;
// }



// void printingCombinedPatterns1(int n){
//     for (int i=1; i<=n; i++){
//         for (int space= 1; space<= n-i; space++){
//              cout << " ";
//         }
//         for (int star= 1; star<=2*i - 1; star++){
//             cout << "*";
//         }
//         cout << endl;
//     }

   
// }
// void printingCombinedPatterns2(int n){
//     for (int ii=n; ii>0; ii--){
//         for(int spacee= 1; spacee<=n-ii; spacee++){
//             cout<<" ";
//         }
//         for (int starr= 1; starr<= 2*ii-1; starr++){
//             cout<<"*";
//         }
//         cout << endl;
        
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printingCombinedPatterns1(n);
//     printingCombinedPatterns2(n);
// }


// void trianglePrinting(int n){
//     for (int i=0; i<=n;i++){
//         for(int j=0;j<=i;j++){
//         cout<< "*";
//     }
//     cout << endl;
// }
// }

// void trianglePrinting2(int n){
//     for (int i=n; i>=0; i--){
//         for (int j=0; j<=i; j++){
//             cout<<"*";
     
//         }
//         cout<<endl;
//     }
// }
// int start= 1;
// void patter(int n){
//     for (int i=0; i<=n; i++){
//         if (i%2== 0){
//             start= 1;
//         }
//         else{
//             start= 0;
//         }
//         for (int j=0; j<=i; j++){
//             cout<< start;
//             start= 1- start;

//         }
//         cout<< endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//         patter(n);
// }

// void patter(int n){
//     for (int i=1; i<=n;i++){
//         for (int j= 1; j<=i; j++){
//             cout<< "x";
//         }
//         cout << endl;
//     }
// }

// void patter2(int n2){
//     for (int i=n2; i>0; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"x";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     int n2;
//     cin>> n;
//     cin>> n2;
//     patter(n);
//     patter2(n2);
// }
// int start= 0;
// void binaryPattern(int n){
//     for (int i=1; i<=n; i++){
//         if(i%2==0){
//             start=0;
//         }
//         else {
//             start= 1;
//         }
//         for (int j=1; j<=i; j++){
//         cout << start;
//         start= 1-start;
//     }
//     cout<< endl;
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;
//     binaryPattern(n);
// }


// void numPrint(int n){
//     for (int i= 1; i<=n;i++){
//         for (int j=1; j<=i; j++){
//             cout<< j;
//         }
    
//     for (int space= 1; space<= 2*(n-i); space++){
//         cout<< " ";
//     }

//     for (int j= i; j>=1; j--){
//         cout<< j;
//     }
//     cout<< endl;


// }
// }

// int main(){
//     int n;
//     cin>>n;
//     numPrint(n);
// }
void positivePattern(int n){
    int num= 0;
    for (int i=1; i<=n; i++){
        for (int j= 1; j<=i;j++){
            cout << num<< " ";
            num++;
        }
        cout <<endl;
    }
}   

int main(){
    int n; 
    cin>>n;
    positivePattern(n);
}
