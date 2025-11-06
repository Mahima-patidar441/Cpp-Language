#include <iostream>
using namespace std;

void removeElement(int original[], int n, int idx)
{
    if (idx == n)   
        return;

    if (original[idx] != 1)   // Print element only if it's NOT 1
        cout << original[idx] << " ";

    removeElement(original, n, idx + 1);
}

int main()
{
    int arr[] = {2, 1, 1, 4, 5, 2, 1, 6, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeElement(arr, n, 0); 
    return 0;
}
