#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int t1 = 0, t2 = 1, t3;

    if (n < 1)
        return 0;
    cout << t1 << " ";

    for (int i = 1; i < n; ++i)
    {
        cout << t2 << " ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
