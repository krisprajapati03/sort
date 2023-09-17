#include<iostream>
using namespace std;

void bubbleshort(int arr[] , int n)
{
    for( int i = 1; i < n; i++)
    {
        for(int j = 0; j <= n-i ;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
            }
        }

        cout <<  arr[i] << " " ;
    }
}
int main()
{
    int arr[10]={3,5,4,74,55,76,32,56,99,6};

    bubbleshort(arr ,10);

    return 0;
}