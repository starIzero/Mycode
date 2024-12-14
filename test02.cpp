#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 50;
int a[N],n,k,res,sum[N],ans;
signed main()
{
    cin>>n>>k;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    sort(a + 1,a + 1 + n);
    for(int i = 1;i <= n;i++)
    {
        res += abs(a[i] - a[n/2]);
    }
    if(res <= k)
    {
        cout<<n;
        return 0;
    }
    for(int i = 1;i <= n;i++)
        sum[i] = sum[i - 1] + a[i];
    for(int i = 1,j = 1;i <= n;i++)
    {
        j--;
        res = 0;
        while(j <= n && res <= k)
        {
            j++;
            int mid = (i + j)/2;
            res = (mid - i)*a[mid]-(sum[mid - 1]-sum[i - 1]);
            res += sum[j]-sum[mid]-(j - mid)*a[mid];
        }
        ans = max(ans,j - i);
    }
    cout<<ans;
}