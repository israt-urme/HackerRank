#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'alphaBeta' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY pile as parameter.
 */

int alphaBeta(vector<int> pile) {
   int n=pile.size(),x,c=0;
    sort(pile.begin(), pile.end());
    //sort(pile,pile+n);
    //cout<<l<<endl;
    for(int i=n-1;i>=0;i--)
    {

        if(pile[i]==pile[n-1])
            continue;
        else
        {
            x=pile[i];
            c++;
            break;
        }
    }
    if(c==0)
        return 0;
    else
        return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

     int n = stoi(ltrim(rtrim(n_temp)));

    string pile_temp_temp;
    getline(cin, pile_temp_temp);

    vector<string> pile_temp = split(rtrim(pile_temp_temp));

    vector<int> pile(n);
    //cout<<n<<endl;

    for (int i = 0; i < n; i++) {
        int pile_item = stoi(pile_temp[i]);

        pile[i] = pile_item;
    }

    int result = alphaBeta(pile);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
