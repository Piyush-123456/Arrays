#include <iostream>
#include <vector>
using namespace std;

void reversearr(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reversearr(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
