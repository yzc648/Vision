#include <iostream>
using namespace std;

int main()
{
    int n = 0;    //步数
    float target;
    cin >> target;
    float a = 2.0;     //每次游的距离

    float sum = 0.0;
    while(sum < target) {
        sum += a;
        a *= 0.98;
        n++;
    }
    cout << n << endl;
    return 0;
}