#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, ara[30], num;
    cout << "How many elements would you like to enter: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the elements number " << i + 1 << ": ";
        cin >> ara[i];
    }
    cout << "\nEnter the number that you want to search: ";
    cin >> num;

    for (i = 0; i < n; i++)
    {
        if (ara[i] == num)
        {
            cout << endl
                 << num << " is present at location " << i + 1 << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << endl
             << num << " is not present in the array.\n";
    }

    return 0;
}