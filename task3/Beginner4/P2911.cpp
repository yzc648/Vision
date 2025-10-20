#include <iostream>
using namespace std;

int main()
{
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    int fre [100] = {0};
    int cnt = 0,ans = 0;

    for(int i = 1; i <= s1; i++)
    {
        for(int j = 1; j <= s2; j++)
        {
            for(int k = 1; k <= s3; k++)
            {
                fre[i + j + k]++;
            }
        }
    }

    for(int i = 3; i <= s1 + s2 +s3; i++)
    {
        if(fre[i] > cnt){
            cnt = fre[i];
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;    
}