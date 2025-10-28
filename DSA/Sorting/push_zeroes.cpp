#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[9] = {5, 0, 4, 6, 0, 2, 0, 0, 1};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //BUBBLE SORT
     for (int i = 0; i < n - 1; i++)
     {
         for (int j = 0; j < n - 1 - i; j++)
         {
             if (arr[j] ==0 )
             {
                 int temp = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = temp;
             }
         }
     }



    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
