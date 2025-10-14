#include <iostream>
using namespace std;

int main()
{
    int x,n;
    cin >> x >> n;

    int total;
    int begin = 8 - x;
    int end = (n - begin) % 7;

    if(begin >= 2) {
        if(end <= 5) {
            total = (begin - 2) + (n - begin - end) / 7 * 5 + end;
            cout << total * 250 << endl;
        } else {
            total = (begin - 2) + (n - begin - end) / 7 * 5 + 5;
            cout << total * 250 << endl;
        }
    } else {
        if(end <= 5) {
            total = (n - begin - end) / 7 * 5 + end;
            cout << total * 250 << endl;
        } else {
            total = (n - begin - end) / 7 * 5 + 5;
            cout << total * 250 << endl;
        }
    }

    return 0;
}