#include<iostream>
using namespace std;

void shorting( int arr[] , int n)
{

    for( int i = 0; i < n ; i++)
    {
        int startindex = i;

        for( int j = i+1; j <= n ; j++)
        {
            startindex = j;

            if(arr[startindex] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[startindex];
                arr[startindex] = temp;
            }
        }

        cout << arr[i] << endl;
    }


}


int main()
{
    int arr[5]={5,4,2,3,1};

    shorting(arr ,5);

    return 0;
}