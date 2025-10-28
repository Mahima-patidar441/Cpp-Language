#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[6] = {5, 4, 6, 2, 1};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    //BUBBLE SORT 
    // for (int i = 0; i < n - 1; i++  )
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    //OPTIMISED BUBBLE SORT
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true ;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true )
        {
            break;
        }
        
    }

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
} 
