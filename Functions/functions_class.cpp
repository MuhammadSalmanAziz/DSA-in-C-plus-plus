#include <iostream>
using namespace std;
double sum2(double a, double b)
{
    double c = a + b;
    return c;
}

int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int sum1ton(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int sumOfDigit(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        digitSum += digit;
    }
    return digitSum;
}

double nCr(int n, int r)
{
    double output = factorial(n) / (factorial(r) * factorial(n - r));
    return output;
}

void pascal(int n){
    for(int i = 0;i<=n;i++){
        for(int j=0; j< i+1;j++){
            cout<<nCr(i,j);
        }
        cout<<endl;
    }
    return;
}
//Pascal Triangle
// 1          0c0
// 11         1c0 1c1
// 121
// 1331
// 14641
int main()
{
    pascal(4);
}