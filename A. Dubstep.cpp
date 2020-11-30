#include<bits/stdc++.h>
using namespace std;
/*void removeExtraSpaces(string &s)
{
    int n = s.length();
    int i = 0, j = -1;
    bool spaceFound = false;
    while (++j < n && s[j] == ' ');
    while (j < n)
    {
        if (s[j] != ' ')
        {

            s[i++] = s[j++];
            spaceFound = false;
        }
        else if (s[j++] == ' ')
        {
            if (!spaceFound)
            {
                s[i++] = ' ';
                spaceFound = true;
            }
        }
    }
    if (i <= 1)
        s.erase(s.begin() + i, s.end());
    else
        s.erase(s.begin() + i - 1, s.end());
}*/

int main()
{
    string s;
    cin>>s;
    /*for(int i=0; i< s.size()-2; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            s[i]=' ',s[i+1]=' ',s[i+2]=' ';
    }
    removeExtraSpaces(s);*/
    for(int i=0; i< s.size()-2; i++)
    {
        if(s[i]!='W' && s[i+1]!='U' && s[i+2]!='B')
            if(s[i]>='A' && s[i]<='Z')
    }
    cout<<s;
    return 0;
}
/*
a=s.find("WUB");
while (a!=-1) {
s.replace(a,3," ");
a=s.find("WUB");
}
*/
