#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(long long n, long long m, long long s){
    // Complete this function
    long long i,s1;
    while(m>=0)
    {
        for(i=s;i<=n;i++)
        {
            m--;
            if(m==0)
            {
                s1=i;
            }
        }
    }
    return s1;
}

int main() {
    long long t,a0;
    cin >> t;
    for( a0 = 0; a0 < t; a0++){
        long long n,m,s;
        cin >> n >> m >> s;
        long long result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
