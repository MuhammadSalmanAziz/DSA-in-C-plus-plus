#include <iostream>
using namespace std;

int decToBinary(int deciMal)
{
    // Decimal to binary
    int pow = 1;
    int ans = 0;
    while (deciMal > 0)
    {
        int remainder = deciMal % 2;
        deciMal = deciMal / 2;
        ans += (remainder * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << decToBinary(i) << endl;
    }
}