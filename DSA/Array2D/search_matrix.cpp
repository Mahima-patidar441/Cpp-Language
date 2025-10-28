#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 13, 14, 17}};
    int target;
    cout << "Enter the target element to be searched :";
    cin >> target;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i = 0;
    int j = cols - 1;
    int f = 0;
    while(i<rows && j>=0)
    {
        if (matrix[i][j] == target)
        {
            f=1;
            break;
        }
        else if (matrix[i][j] > target)
            j--;
        else
            i++;
    }
    if(f==1) cout<<"true";
    else cout<<"false";
}
