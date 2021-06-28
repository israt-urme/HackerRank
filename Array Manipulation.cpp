#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,k;
    cin>>n>>m;
    long long int arr[n],x=0,i,j;
    for(j=0;j<n;j++)
    {
        arr[j]=0;
    }
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>k;
        for(j=a-1;j<b;j++)
        {
            arr[j]=arr[j]+k;
            if(x<arr[j])
                x=arr[j];
        }
    }
    cout<<x<<endl;
}
