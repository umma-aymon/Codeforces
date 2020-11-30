#include<bits/stdc++.h>
using namespace std;
char s[1010];
int cnt;
int main()
{
    gets(s);
    string s2;
    char *word=strtok(s,"{,} ");
    while(word!=NULL)
    {
        if(strlen(word)>0)
        {
            // cnt++;
            s2+=word;
        }
        word=strtok(NULL,"{,} ");
    }
    sort(s2.begin(),s2.end());
    s2.erase(unique(s2.begin(),s2.end()),s2.end());
    cout<<s2.size();
    return 0;
}
