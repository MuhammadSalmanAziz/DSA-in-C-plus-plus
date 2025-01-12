#include<iostream>
using namespace std;

int reverseint(int n){
    int ans = 0;
    while(n>0){
        int rem = n % 10;
        cout<<rem<<endl;
        ans = ans *10 + rem ;
        n = n /10;
    }
    return ans;
}

int main (){
cout<<reverseint(456);
}