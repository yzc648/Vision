#include <iostream>
using namespace std;

int main ()
{
    int m,t,s;
    cin >> m >> t >> s;

    if (t == 0) {
        cout << 0 << endl;
    } else if(s % t == 0) {
        if (m - s / t < 0)
            cout << 0 << endl;
        else
            cout << m - s / t << endl;
    } else {
        int num = m - s / t - 1;
        if (num < 0) {
            cout << 0 << endl;
        } else {
            cout << num << endl;
        }
       
    }
    
    return 0;
}