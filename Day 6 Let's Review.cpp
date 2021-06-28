#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char s[10000];
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        int l=strlen(s);
        int flag=0;
        for(int j=0;j<l;j++)
        {
            if(j==0 || j%2==0)
                cout<<s[j];
            else
                flag=1;

        }
        cout<<" ";
        if(flag==1){
            for(int j=0;j<l;j++)
            {
                if(j%2!=0)
                    cout<<s[j];

            }
        }
        cout<<endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

