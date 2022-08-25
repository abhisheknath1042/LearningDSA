#include <bits/stdc++.h>

using namespace std;

//Function to convert time from 12HR to 24HR with string as return

string timeConversion(string s){
    string p=s; //assigning new string with the value of string that is passed
    int i,j;
    if(s[8]=='P'){                   // checking if it is AM or PM
       int x =(s[0]-'0')*10 + (s[1]-'0') +12;
       p[0]= x/10 +'0';
       p[1]= x%10 +'0';
    }
    return p.substr(0, p.size()-2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
