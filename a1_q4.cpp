#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, j, count;

    cout << "Enter lower limit: ";
    cin >> n1;

    cout << "\nEnter upper limit: ";
    cin >> n2;

    for (i = n1; i <= n2; i++)
    {

        if (i == 1 || i == 0)
            continue;

        count = 1;

        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                count = 0;
                break;
            }
        }

        if (count == 1)
            cout << i << "\n";
    }

    return 0;
}
