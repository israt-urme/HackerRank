#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    string a,x="zzzzz";
    for(i=0;i<n;i++)
    {
        cin>>a;
        for(j=0;j<5;j++)
        {
            if(a[j]==x[j])
                x[j]=x[j]-1;
            //cout<<x[j];
        }
    }
    cout<<x;

    return 0;
}
