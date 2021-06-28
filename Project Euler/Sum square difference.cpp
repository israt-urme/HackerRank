#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t,sum,sum1,a0,j,i;
    cin >> t;
    for( a0 = 0; a0 < t; a0++){
        int n;
        sum=0;
        sum1=0;
        cin >> n;
        for( j=1;j<=n;j++)
            sum1=sum1+j;
        for( i=1;i<=n;i++)
            sum=sum+(i*i);
        cout<<(sum1*sum1)-sum<<endl;
    }
    return 0;
}

