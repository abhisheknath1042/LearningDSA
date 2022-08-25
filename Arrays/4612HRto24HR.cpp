#include <bits/stdc++.h>

using namespace std;

//Function to convert time from 12HR to 24HR with string as return

string timeConversion(string s){
    string ans=s;
       if(ans[8]=='P') // check if given time is PM
       {
           int x = (ans[0]-'0')*10+(ans[1]-'0')+12;
           //cout<<x;
           if(x!=24)
           {
                ans[0]=x/10+'0';
                ans[1]=x%10+'0';
           }
       }
       if(ans[8]=='A') // check if given time is AM
       {
           int y=(ans[0]-'0')*10+ans[1]-'0';
           if(y==12)
           {
               ans[0]='0';
               ans[1]='0';
           }
       }
    return ans.substr(0, ans.size()-2);
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
