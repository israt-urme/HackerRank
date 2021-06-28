#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int a[5],i,n;
    long long sum=0,sum1=0;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=0;i<4;i++){
        sum=sum+a[i];
    }
    for(i=4;i>0;i--){
        sum1=sum1+a[i];
    }
    cout<<sum<<" "<<sum1<<endl;

    return 0;
}
