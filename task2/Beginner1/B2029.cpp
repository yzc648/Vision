#include <iostream>
using namespace std;

int  main()
{
    int h,r;
    cin >> h >> r;
    double v = 3.14 * r * r * h;
    int num = 20000 /v + 1;
    cout << num << endl;

    return 0;
}