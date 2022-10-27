#include <iostream>
#include <cstring>
using namespace std;

void revstr(char s[],int l)
{

    char temp;
    for(int i =0 ;i < l/2; i++)
    {
        temp = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = temp;
    }

}

int length(char s[])
{
    int i;
    for(i =0; s[i]!='\0'; i++)

       //cout<<i;
        return i;
}

void print(char s[])
{
    for(int i=0; i<s.length(); i++)
        cout<< s[i]
}

int main()
{

    char str[10] = "array";
     int l = len(str);
     cout<< l<<endl;
    cout<<str<<endl;
    revstr(str, l);
    cout<<str<<endl;
}
