#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index] < 0)
        {
            return index;
        }
        arr[index] *= -1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 5, 3, 2};
    cout << solve(arr);
    return 0;
}
