#include <iostream>
using namespace std;

bool isPrime(int n);
bool ispalindrome(int n);

int main()
{
    int a,b;
    cin >> a >> b;

    

    for(int i = a; i <= b; i++)
    {
        if( ispalindrome(i) ) {
            if( isPrime(i) )
                cout << i << endl;
        }
                   
    }
    return 0;
}

bool isPrime(int n)
{   
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i+=2)
    {   
        if(n % i == 0 )
            return false;
    }
    return true;
}

bool ispalindrome(int n)
{
    int temp = n;
    int sum = 0; // 反转后的数字
    while (temp > 0)
    {
        sum = sum * 10 + temp % 10;
        temp /= 10; 
    }
    if(sum == n)
        return true;
    else 
        return false;
}