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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {char s[100],s1[100],d[100];
    scanf("%s %s",s,d);
    scanf("%s",s1);
    if(strcmp(s,s1)==0)
        cout<<s<<" "<<d<<endl;
    else
        cout<<"not found"<<endl;
    }
    return 0;
}
