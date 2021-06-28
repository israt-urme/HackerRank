#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int j=1;j<=x;j++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
                l++;
        }
    //cout<<l;
        if(l==(n-1) || l==(n-2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
