#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &arr)
{
    int even = 0;
    int odd = 1;
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            ans[even] = arr[i];
            even += 2;
        }
         if (arr[i] < 0)
        {
            ans[odd] = arr[i];
            odd += 2;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> arr = {3, -1, -2, -5, 2, -4};
    solve(arr);
    return 0;
}


