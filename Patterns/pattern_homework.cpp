#include <iostream>
using namespace std;
int main()
{
    // int n = 3;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // cout<<"The value of ch is "<<ch;

    // int n = 7;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch = ch +1;
    //     cout << endl;
    // }
    // Reverse triangle charchter pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         ch = ch +j ;
    //         cout << ch << " ";
    //     }
    //     //ch = ch + i;
    //     cout << endl;
    // }
    // character floyd pattern
    // A
    // B C
    // D E F
    // int n = 4;
    // char ch = 'A';
    // for(int i = 0;i<n ;i++){
    //     for(int j = 0 ; j < i +1; j++){
    //         cout<<ch<< " ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    // Inverted Character Triangle
    // int n = 4;
    // char ch = 'A';
    // for(int i = 0;i<n;i++){
    //     //spaces
    //     for(int j = 0 ;j < i;j++){
    //         cout<<" ";
    //     }
    //     // nums
    //     for(int j = 0 ; j < n-i; j++){
    //         cout<<ch;
    //     }
    //     ch = ch+1;
    //     cout<<endl;
    // }
    // Butterfly pattern
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     // num1
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     // spaces
    //     for (int j = 0; j < 2 * (n - i - 1); j++)
    //     {
    //         cout << " ";
    //     }

    //     // num2
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     // num1
    //     for (int j = 0; j <= n - i - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     // spaces
    //     for (int j = 0; j < 2 * (i); j++)
    //     {
    //         cout << " ";
    //     }

    //     // num2
    //     for (int j = 0; j <= n - i - 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Pracice problem
    //  ****
    //  *  *
    //  *  *
    //  ****
    // int n = 9;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0 || i == n - 1)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     else
    //     {
    //         cout << "*";
    //         for (int j = 0; j < n -2; j++)
    //         {
    //             cout <<" ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Diamond Pattern
    //     *
    //    ***
    //   *****
    //  *******
    //   *****
    //    ***
    //     *
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        // stars
        for (int j = 0; j < n - i - 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}