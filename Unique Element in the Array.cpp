#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 1, 5, 1, 5, 4, 3, 4};
    cout << solve(arr);
    return 0;
}
