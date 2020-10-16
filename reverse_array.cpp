#include <stdio.h>
#include <iostream>
using namespace std;

class Array
{
public :
    int siz;
    int A[10];

     Array(int s)
    {
      siz =s;
    }


   void Display();
   void Reverse();
   void Lshift(int);
};


void Array::Insert()
{

}


void Array::Display()
{
    int i;
for(i=0;i<siz;i++)
cout<<A[i]<<" ";

cout<<endl;
}

void Array::Reverse()
{
    int temp = 0;
  for(int i=0; i<siz/2; i++ )
  {
      temp = A[i];
      A[i]  = A[siz-i-1];
      A[siz-i-1] = temp;
  }
}

void Array:: Lshift(int k)
{
    int temp = 0;
  for(int i=siz-1; i>=k; i-- )
  {
      A[i] = A[i-k];

  }

  //siz = siz - k;
}


int main()
 {
     int n;

    // cin>>n;
    Array arr(5);
    //arr.A= {1,2,3,4,5};

    int i;
    for(i=0;i<arr.siz;i++)
        cin>>arr.A[i];

    int k;
    cin>>k;
cout<< 3%6;
    //arr.Display();
   // arr.Lshift(k);
    //arr.Display();
    return 0;
}
