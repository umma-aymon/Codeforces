#include<bits/stdc++.h>
using namespace std;
int isvowel(char ch)
{
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    {
        return 1;
        break;
    }
    default :
        return 0;
    }
}
int main()
{
    char s[101],s2[101];
    int i,j;
    gets(s);
    //transform(s.begin(), s.end(), s.begin(), ::tolower);
//    int len=s.length();
    j=0;
    for( i=0,j=0; s[i]!='\0'; i++)
    {
        if(!isvowel(s[i]))
            s2[j++]=s[i];
    }
    s2[j]='\0';
    //  int len2=s.length();
    for( i=0; s2[i]!='\0'; i++)
        cout<<"."<<char(tolower(s2[i]));
    return 0;
}
