#include<iostream>
using namespace std;
int poweroftwo(int n){
    while (n !=1)
    {
        if(n%2 != 0){
            return 0;
        }
        n = n/2;
        /* code */
    }
    return 1;
}
int main(){
    poweroftwo(30) ? cout<<"true" : cout<<"false";
}