#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main() 
{
   int a[3];
   cin >> a[0] >> a[1] >> a[2];
   sort(a, a + 3);

   cout << a[0] / __gcd(a[0], a[2]) << "/" << a[2] / __gcd(a[0], a[2]) << endl;
   return 0;

}