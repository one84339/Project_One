#include <iostream>
using namespace std;
#include <cstring>

int length(char s[])
{
    int len = 0;
    while(true)
    {
        if(s[len]=='\0')
         break;
            len++;

    }
    return len;
}

void addString(char s1[],char s2[],char s3[])
{
    int a = length(s1);
    //cout<<a<<endl;
    int b = length(s2);
    //cout<<b<<endl;
    //int x = a+b;
    int k=0;
    for(int i = 0; i<=a;i++)
    {
        if(s1[i] != '\0')
        {
            s3[k] = s1[i];
            k++;
        }
        else
       {
        for(int j=0;j<b;j++)
        {
        s3[k] = s2[j];
        k++;
        }
    }
    s3[k] = '\0';

    }
}

int main()
{
    char s1[10];
    cin.getline(s1,10);
    char s2[10];
    cin.getline(s2,10);
    char s3[10];
    addString(s1,s2,s3);
    cout<<s3<<endl;
    //cout<<"result using function"<<strcpy(s1,s2);

return 0;
}
