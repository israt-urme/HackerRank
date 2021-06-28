#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t,a0,n,sum,i;
    cin >> t;
    for(a0 = 0; a0 < t; a0++){
        cin >> n;
        sum=0;
        for(i=1;i<n;i++){
            if(i%3==0 || i%5==0)
                sum=sum+i;
        }
        cout<<sum<<endl;
    }
    return 0;
}

