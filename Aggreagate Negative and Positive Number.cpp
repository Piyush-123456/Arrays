#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    vector<int> arr = {23, -7, 12, -10, -11, 40, 60};
    solve(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
