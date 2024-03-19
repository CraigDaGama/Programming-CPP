#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string:"<<endl;
    getline(cin,str);

    int len,i;
    len = str.length();
    for (i=0;i<len;i++)
        cout<<(str[len-i])<<" ";
    return 0;
}
