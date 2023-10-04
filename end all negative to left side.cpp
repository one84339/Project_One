#include <iostream>
using namespace std;

void oneside(int[] arr, int n)
{
    int j= n-1;
    for(int i = 0; i<j; i++)
    {
        if(arr[j]<0)
        {
           temp = arr[i+1];
           arr[z] = arr[];
           arr[] =  arr[];
        }
    }
}

void display(int[] arr, int n)
{
     for(int i = 0; i< n; i++)
    {
        cout< arr[i];
    }
}

int main()
{
    int arr = {-6,3,-8,10,5,-7,-9,12,-4,5};
    int siz = 10;
    oneside(arr, 10);
    display(arr, 10);
    return 0;
}
