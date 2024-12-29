#include <iostream>
using namespace std;
int main()
{
    // int n = 4;
    // for(int i = 0 ; i < n ;i++){
    //     for(int j = 0 ; j<n ;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // Character square print
    // ABCD
    // ABCD
    // ABCD
    // ABCD
    // int n = 4;

    // for(int i = 0 ; i<n ;i ++){
    //     char ch = 'A';
    //     for(int j = 0 ; j<n ;j++){
    //         cout<<ch;
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    // 2nd pattern
    // 123
    // 456
    // 789

    // int n = 4;
    // int num = 1;

    // for(int i = 0 ; i <n ;i++){

    //     for(int j = 0; j<n ;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // Triangle Pattern
    // *
    // **
    // ***
    // ****

    // int n = 6;
    // for(int i = 0 ;i < n; i++){
    //     for(int j = 0 ; j < i + 1 ; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 22
    // 333
    // 4444
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }

    // Triangle Pattern
    // 1
    // 12
    // 123
    // 1234

    // int n = 4;
    // for(int i = 0; i<n ;i++){
    //     for(int j = 0;j<i+1 ;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    // Reverse Triangle pattern
    // 1
    // 21
    // 321
    // 4321
    // int n = 7;
    // for(int i = 0;i <n ;i++){
    //     for(int j = i +1 ; j > 0; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // Floyd's Triangle
    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }
    // Inverted Triangle
    // int n = 4;
    // for(int i = 0;i<n;i++){
    //     //spaces
    //     for(int j = 0 ;j < i;j++){
    //         cout<<" ";
    //     }
    //     // nums
    //     for(int j = 0 ; j < n-i; j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

    // Pyramid triangle pattern
    //    1
    //   121
    //  12321
    // 1234321
    // int n = 8;
    // for(int i = 0; i<n;i++){
    //     //spaces
    //     for(int j = 0 ; j<n-i-1;j++){
    //         cout<<" ";
    //     }

    //     for(int j = 1; j <=i+1;j++){
    //         cout<<j;
    //     }

    //     for(int j = i ; j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // Hollow pattern
    //    *
    //   * *
    //  *   *
    // *     *
    // *   *
    //  * *
    //   *
    int n = 6;
    // top
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < (2 * i) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            // space
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}