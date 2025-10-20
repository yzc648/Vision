#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[8],b[8],ans[8] = {0};   //a为中奖码
                            //b为抽奖
                            //ans[num]为n等奖
    cin >> a[1] >> a[2] >> a[3] >> a[4] 
        >> a[5] >> a[6] >> a[7];

    for(int i = 1; i <= n; i++) {        
        for(int j = 1; j <= 7; j++) {
            cin >> b[j]; 
            }
        int num = 0;
        for(int j = 1; j <= 7; j++) {
            for(int k = 1; k <= 7; k++) {
                if(a[j] == b[k])
                    num++;  
            }              
        }
        ans[num]++;
    }

    for(int i = 7; i >= 1; i--)
        cout << ans[i] << " " ;
        
    return 0;
}