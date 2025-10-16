#include <iostream>
using namespace std;

int main()
{
    int n,x;
    int num = 0;
    cin >> n >> x;

    for(int i = 1; i <= n; i++) 
    {
        int temp = i;
        while(temp > 0)
        {
            if(temp % 10 == x)
            {
                num++;
            }
            temp /= 10;
        }   
    }
    cout << num << endl;
    return 0;
}
