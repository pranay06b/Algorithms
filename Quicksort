#include<iostream>
#include<string.h>
int pattern[123];
using namespace std;
int quick(int l,int r,char *a)
{
    int y,temp,g,i;
    if(r-l<=1)
    {
        return 0;
    }
    g=y=l+1;
    while(g<r)
    {
        if(pattern[a[g]]<=pattern[a[l]])
        {
            temp=a[y];
            a[y]=a[g];
            a[g]=temp;
                y++;
          //      cout<<y<<endl;

        }
        g++;
    }
            temp=a[y-1];
            a[y-1]=a[l];
            a[l]=temp;
   // cout<<" e"<<y<<r<<"d";
quick(l,y,a);
   quick(y+1,r,a);

}
int main()
{
    int t;
    cin>>t;
    for(int mn=0;mn<t;mn++)
    {
        int i;
        char test[27];
        char text[100000];
        cin>>test;
        cin>>text;
        for(i=0;i<26;i++)
        {
            pattern[test[i]]=i;
        }
        for(i=97;i<=122;i++)
        {
            cout<<pattern[i]<<endl;
        }

        quick(0,strlen(text),text);
        cout<<text<<endl;

    }

}
