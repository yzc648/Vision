#include <iostream>
using namespace std;

int main()
{
    int n;
    int cute = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if( i != j && a[i] > a[j] )
                cute++;
        }
        cout << cute << " ";
        cute = 0;
    }

    return 0;
}