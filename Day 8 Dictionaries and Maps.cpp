#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i;
    cin>>n;
    char s[100],s1[100],d[100];
    for(i=0;i<n;i++)
    {
    scanf("%s %s",s[i],d[i]);
    }
    for(i=0;i<n;i++)
        scanf("%s",s1[i]);
    for(i=0;i<n;i++){
        if(strcmp(s[i],s1[i])==0)
            cout<<s[i]<<" "<<d[i]<<endl;
        else
            cout<<"not found"<<endl;
    }
    return 0;
}
