#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    double ai;
    int ti;
   
    int a[2000000] = {0};
    
    int num;

    for(int j = 1; j <= n; j++)
    {
        cin >> ai >> ti;
        for(int i = 1; i <= ti; i++)
        {
            num = ai * i;
            if(a[num] == 0)
                a[num] = 1;
            else
                a[num] = 0;     
        }
    }

    for(int i = 1; i <= 2000000; i++)
    {
        if(a[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;    
}
