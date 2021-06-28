#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,sum=0,i=1;
    cin>>n;
    while(n!=0)
    {
        c=n%2;
        n=n/2;
        sum=sum+(c*i);
        i=i*10;
    }
    cout<<sum<<endl;
    int d=sum%10;
    if(d==0)
        sum++;
    else
        sum--;
    cout<<sum<<endl;
    int count=0;
    while(sum!=0)
    {
        int d=sum%10;
        if(d==1)
            count++;
        sum=sum/10;
    }
    cout<<count<<endl;

    /*stringstream ss;
    ss << sum;
    string str = ss.str();
    int l=str.size();
    cout<<l;
    for(int j=0;j<l;j++)
    {

    }*/
}

