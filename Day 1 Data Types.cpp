#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double b;
    string s1;
    cin>>j>>b;
    cin.ignore();
    getline(cin,s1);
    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<d+b<<endl;
    cout<<s<<s1<<endl;
    return 0;
}
