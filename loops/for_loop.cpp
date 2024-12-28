#include <iostream>
using namespace std;

int main()
{
    // sum of numbers from 1 to n
    /*int n = 10;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
        if (i==5){
            break;
        }
    }
    cout << "The sum of numbers from 1 to " << n << " is " << sum << endl;*/

    // sum of odd numbers
    /*int n = 10;
    int sum = 0;
    for (int i = 1; i <= n ; i++){
        if (i %2 != 0){
            sum += i;
            //cout << i << " ";
        }
    }
    cout << "The sum of odd numbers from 1 to " << n << " is " << sum << endl;*/
    // Program to check whether the number is prime or not
    // int n = 2;
    // bool isPrime  = true;
    // for(int i = 2 ; i <= n-1 ; i++){
    //     if (n%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true){
    //     cout<<"The number is Prime"<<endl;
    // }else{
    //     cout<<"The number is not prime"<<endl;
    // }

    // Nested loops
    // int n = 6;
    // for (int i = 1; i <= n; i++)
    // {
    //     int m = 5;
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }


    // Home work : Sum of the number from 1 to N which are divisible by 3

    // int n = 10;
    // int sum = 0;
    // for(int i = 1; i <=n ; i++){
    //     if(i%3 == 0){
    //         sum += i;
    //     }
    // }
    // cout<<"THe sum is : "<<sum;

    //Find the factorial of n
    int n = 4;
    int factorial = 1;
    for( int i =1 ; i <=n ; i++){
        factorial *= i;
    }
    cout<<"The factorial of "<<n<<" is "<< factorial;
}