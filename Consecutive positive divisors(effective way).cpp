#include<bits/stdc++.h>
using namespace std;

int a[10002]={0};
vector<int>v1[10002];

void primeFactors()
{
    int i,j;
    for(i=1;i<=10000;i++)
    {
        for(j=i;j<=10000;j=j+i)
        {
            a[j]++;
            //v[j].push_back(i);
        }
    }
    for(i=10001;i<=1000000;i++)
    {
        for(j=i;j<=1000000;j=j+i)
        {
            a[j]++;
            //v[j].push_back(i);
        }
    }
    for(i=1000001;i<=10000000;i++)
    {
        for(j=i;j<=10000000;j=j+i)
        {
            a[j]++;
            //v[j].push_back(i);
        }
    }
}

int main()
{
    primeFactors();
    int t,k,i1,c1;
    cin>>t;
    while(t--)
    {
        c1=0;
        cin>>k;
        for(i1=2;i1<k;i1++)
        {
            if(a[i1]==a[i1+1])
                c1++;
        }
        cout<<c1<<endl;
    }
    return 0;
}
