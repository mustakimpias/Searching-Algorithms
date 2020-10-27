#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, ara[30], first, last, middle;
    cout << "How many elements would you like to enter: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> ara[i];
    }
    cout << "Enter the number that you want to search: ";
    cin >> num;
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (ara[middle] < num)
        {
            first = middle + 1;
        }
        else if (ara[middle] == num)
        {
            cout << num << " found in the array at the location " << middle + 1 << "." << endl;
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        cout << num << " is not found in the array." << endl;
    }
    return 0;
}
