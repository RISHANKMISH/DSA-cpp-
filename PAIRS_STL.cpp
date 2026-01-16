// PAIR
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p= {1,5};
    cout << p.first<< ", "<< p.second;
    pair <int , pair <int, int>> pp = {1, {3, 4}};
    cout<< endl;  
    cout << pp.first<<" "<< pp.second.second<< " "<< pp.second.first;
    cout << endl;  
    pair <int , int > arr[]= {{1, 2 }, {2, 5}, {5, 1}};
    cout << arr[1]. second; 
} 
