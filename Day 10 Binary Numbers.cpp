#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    while(cin>>n)
    {
        int sum=0,i=1;
        while(n!=0)
        {
           c=n%2;
           n=n/2;
           sum=sum+(c*i);
           i=i*10;
        }
    int d=sum%10;
    if(d==0)
        sum++;
    else
        sum--;
    int count1=0;
    while(sum!=0)
    {
        int d=sum%10;
        if(d==1)
            count1++;
        sum=sum/10;
    }
    cout<<count1<<endl;
    }

    return 0;
}
