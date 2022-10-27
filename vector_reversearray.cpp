#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(11);
    v.push_back(23);
    cout << "the original array"
         << "  ";
    for (int i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    reverse(v.begin(), v.end());
    cout << "array after reversing"
         << "  ";
    for (int j : v)
    {
        cout << j << "  ";
    }
    return 0;
}