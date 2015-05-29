#include<iostream>
using namespace std;
int len(int c)
{
    int cnt=0;
    while(c!=0)
    {
        c/=2;
        cnt++;
    }
    return cnt;
}
int main()
{

    int data,clen,poly;
    cin>>data;
    cout<<"Enter codeword length";
    cin>>clen;
    cout<<"Enter poly";
    cin>>poly;
    cout<<len(data)<<endl;
     int dummy,cmp;
    cmp=1<<(clen-1);
    dummy = data;
    data=data<<(clen-1);
    poly=poly<<(len(dummy)-len(poly));
    int tmp=poly;
    cout<<poly<<endl;
    cmp=1<<(clen-1);
    dummy = data;
    cout<<dummy<<endl;
   // while(dummy>cmp)
    {
        dummy=dummy^poly;
        cout<<dummy<<endl;
        poly=poly<<(len(dummy)-len(poly));
        cout<<poly<<endl;
    }
    cout<<dummy;
}
