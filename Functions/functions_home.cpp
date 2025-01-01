#include <iostream>
using namespace std;

// Write a function to check whether the number is prime or not
void isprime(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "The Number " << n << " is Prime ";
    }
    else
    {
        cout << "The Number " << n << " is not Prime ";
    }
}

// Print all prime number from 2 to n
bool primeNumbers(int n){
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
            return isPrime;
        }
    }
    return isPrime;
}

void fabonacci(int n){
    int t0 = 0;int t1 = 1;int next = 0;
    for(int i = 1; i<=n;i++){
        if(i==1){
            cout<<t0<<" ";
        }
        if(i==2){
            cout<<t1<<" ";
        }
        next = t0 + t1;
        t0 = t1;
        t1 = next;
        cout<<next<<" ";
    }
}
int main()
{
    // int n = 100;
    // for(int i = 2;i<=n-1;i++){
    //     if(primeNumbers(i)){
    //         cout<<i<< " ";
    //     }
    // }

    int n = 10;
    fabonacci(n);

}