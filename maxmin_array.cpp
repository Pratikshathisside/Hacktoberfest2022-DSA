#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "size input" << endl;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        cout << "the " << j << "th element of array is " << arr[j] << " ";
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "maximum is " << max << endl;
    cout << "min is " << min;

    return 0;
}
