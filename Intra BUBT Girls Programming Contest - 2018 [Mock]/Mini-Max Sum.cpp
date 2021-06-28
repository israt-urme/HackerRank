#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
    long long int arr[7],i;
    for (i = 0; i < 5;i++) {
       scanf("%lld",&arr[i]);
    }
    long long int m=-999999999-1,n=999999999+1;
    for (i = 0; i < 5;i++){
        if(arr[i]>m)
            m=arr[i];
        if(arr[i]<n)
            n=arr[i];
    }
    long long int sum=0,sum1=0,s=0,s1=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]==m)
            s1=s1+arr[i];
        else sum=sum+arr[i];
    }
    if(s1!=m)
    {
        cout<<sum+(s1-m)<<" ";
    }
    else
        cout<<sum<<" ";

    for(i=0;i<5;i++)
    {
        if(arr[i]==n)
            s=s+arr[i];
        else sum1=sum1+arr[i];
    }
    if(s!=n)
        cout<<sum1+(s-n)<<endl;
    else cout<<sum1<<endl;
    return 0;
}
