#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    auto x=4;
    auto b=4.5;
    scanf("%d",&n);
    long long a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==a[n-1])
            continue;
        else
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    return 0;
}
