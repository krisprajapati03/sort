#include<iostream>
using namespace std;

void print(int arr[] , int n)
{
    for(int i=0 ; i< n ;i++)
    {
        cout << arr[i] << " ";
    }
}
void insertion(int arr[] ,int n)
{

    int i,j;

    for(i=1 ;i < n ; i++)
    {
        int  temp=arr[i];

        for(j=i-1 ;j >=0; j--)
        {
            if(temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j+1]=temp;
    }
    print(arr , n);
}
int main()
{
    int arr[6]={7,1,6,10,4,11};
    int n=6;

    insertion(arr , n);

    return 0;
}