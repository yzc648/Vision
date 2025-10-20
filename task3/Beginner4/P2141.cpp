#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int num = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    for(int i = 2; i < n; i++) {
        for(int j = 0; j < i; j++) {
            for(int k = j + 1; k < i; k++) {
                if( a[j] != a[k] && j != k && a[j] + a[k] == a[i] )
                {
                    j = i;
                    num++;
                    break;
                }
            }
        }
    }

    cout << num << endl;

    return 0;
}