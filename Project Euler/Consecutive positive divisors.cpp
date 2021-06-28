#include<bits/stdc++.h>
using namespace std;

int primeFactors(int n)
{
    int sum=0,flag=0,result=0;
    while (n%2 == 0)
    {
        flag=1;
        sum++;
        n = n/2;
    }
    if(flag==1)
    {
        //cout<<"2"<<"^"<<sum;
        result=result+(sum+1);
    }

    sum=0;
    int flag1=0;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            flag1=1;
            sum++;
            n = n/i;
        }
        if(flag1==1)
        {
            //cout<<" "<<i<<"^"<<sum;
            result=result+(sum+1);
        }

    }

    if (n > 2)
    {
        result=result+2;
    }
    //cout<<"r=  "<<result<<endl;
    return result;
}

int main()
{
    int t,k,i1,c1;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        c1=0;
        cin>>k;
        for(i1=2;i1<=k;i1++)
        {
            int x=primeFactors(i1);
            v.push_back(x);
        }
        for(i1=0;i1<v.size()-1;i1++)
        {
            if(v[i1]==v[i1+1])
                c1++;
        }
        cout<<c1<<endl;
        v.clear();
    }
    return 0;
}

