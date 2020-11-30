//            ,O,i=0,Q=YUKU(f);static f*P;static FILE*t;static cons  char*o[]={//bad"
//          "\n\40\"8oCan\40not\40open %s\n\0\n\40\"8oCan\40not\40open %s\n#e(bad/bad",
//        "a6if(p==b*5&&O){p-=b;O--;}}return 0U;if(p==b*5&&O){p-=b;O--;}}return 0U;:b"",
//       "e&a6if(p==b*5&&O){p-=b;O--;}}return 0U;if(p==b*5&&O){p-=b;O--;}}return 0U;:b"",
//      "e&a6if(p==b*5&&O){p-=b;O--;}}return 0U;if(p==b*5&&O){p-=b;O--;}}return 0U;:"e#d",
//     ">bad/bad/"};static ll  S(){return(o[p][q]);}static/**/ll /**/Z=0  ;void/**/z(ll //
//    l){if(/**/Z-l){Z=l;q++;if(p<b*5&&!S()){p+=b;q=0;}}}ll  main(ll  I,    /**/char**l){//
//   d=YUKKUU(f*);if(1<(O=_)){b=((YUKKUU(o)/YUKKUU(char*))-1)/4;q=22; p=     0;while(p<b*5){
//  /*<*/if(Z-1){d=S()>96;i=S()-(d?96:32) ;q++;if(p<b*5&&!S()){p+=b;  q=      0;}Z=1;}/*[[*/
//  while(i){_=o[0][S()-97];I=_-10?b:1;   for( ;I--;)putchar(_ );if   (!      --i||d)z(~i );}
// if(p==b*5&&O){p-=b;O--;}}return 0U;   }if(! (P=( f*)calloc /*]*/  (Q        ,I)))return 1;
// {;}for(_=p=1;p<I;p++){e(q=1);while    (q<   p&&  strcmp(  l[p     ]         ,l[(q)]))++  q;
// t=stdin;if(q<p){(void)memcpy/* "      */    (&P  [p],&P   [q     ]          ,Q);continue ;}
//if(strcmp(l[p],"-")){t=fopen(l         [     p]   ,"rb"   )                  ;if(!t ){{;}  ;
//prll f(05+*o,l[p ]);return+1;                      {;}                       }}_=b= 1<<16   ;
//*&O=5;do{if(!(P[p].q=realloc   (P[p].q,(P[p].P     +=       b)+1))){return   01;}O   &=72   /
//6/*][*/;P[p].o+=d=fread(P[p]      .q       +P[     p           ].       o,  1,b,t)   ;}//
// while(d==b)      ;P [p].q[       P[       p]                  .o       ]=  012;d    =0;
// e(fclose(t        )  );P         [p]      .p                  =P[      p]  .q;if    (O)
// {for(;d<P[            p]          .o     ;d=                   q+     1)    {q=     d;
//  while(q<P[                        p].o&&P[                    p].q[q]-     10     ){
//  q++;}b=q-d;                         _=P                         [p].        d     ;
//  if(b>_){/*]b                                                                */
//   P[p].d=b;}{;                                                                }
//   #undef/*pqdz'.*/  e//                                                      ;
//   #define/*s8qdb]*/e/**/0                                                   //
//   //<<.<<.----.>.<<.>++.++<                                              .[>]
//   /*P[*/P[p].b++;continue;}}}t=                                       Yuki;
//  for (p=1;p<I;p++){/**/if(P[p].b>i                               ){i=P[p].b;}}
// if  (O){for(p=0;p<i;p++){q=0;/*[*/while(I               >++q){_=P[q].p-P[q ].q;
//b=   0;if(_<P[q ].o){while(012-*P[q].p)     {putchar(*(P[q].p++));b++;}P[q]. p++;
//}   ;while (P[  q].d>b++)YUKKUU(040);}             putchar(10);}return 0;}p   =1;
//   for(;   p<I   ;p++)YUKKUU(P[p] .q,P[              p].o,1,t);return 0 ;}//
//  #/*]     ]<.    [-]<[-]<[- ]<[    -]<               [-  ]<;*/Yuki  e    //b
// |(1        <<     ( __LINE__        /*               >>   `*//45))  |     01U
//
#include<bits/stdc++.h>
using namespace std;
string s;
int c,l,a[126];
int main()
{
    cin>>s;
    for(int i=0; i<s.length(); i++)
        a[s[i]]++;
    /*for(auto i:a)
        if(i)
            cout<<i<<" ";*/
    int s2=a[97];
    vector<int>v(a,a+126);
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    int l=lower_bound(v.begin(),v.end(),s2)-v.begin();
    int len=0;
    int ans=s2;
    while(s2>len && l>0)
    {
        l--;
        ans+=v[l];
        len=ans/2;
        if(len>=s2)
        {
            ans-=v[l];
            break;
        }
    }
    if(ans==s2 && ans!=s.length())
    {
        if((ans+1)/2<s2)
            cout<<s2+1;
        else
            cout<<s2;
    }
    else if(ans==s2 && ans==s.length())
        cout<<s2;
    else
        cout<<ans;
    return 0;
}
