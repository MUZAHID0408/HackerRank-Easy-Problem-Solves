
#include <bits/stdc++.h>
using namespace std;
bool nyear(int n)
{
    if ((n % 4) == 0 || (n % 400) == 0)
        return true;
    else
        return false;
}

bool cyear(int n)
{
    if (nyear(n) && (n % 100) != 0)
        return true;
    else
        return false;
}

int main()
{
    int n, x = 9;
    cin >> n;
    int date = (256 - 244);
    int cen[11] = {1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700};
    if(n == 1918){
        cout << "26." << setfill('0') << setw(2) << x << "." << n;
        exit(0);
    }
    for (int i = 0; i < 11; i++)
    {

        if (n == cen[i] && n < 1918)
        {
            if (n % 4 == 0)
            {
                cout << date << "." << setfill('0') << setw(2) << x << "." << n;
                exit(0);
            }
            else
            {
                
                cout << date + 1 << "." << setfill('0') << setw(2) << x << "." << n;
                exit(0);
            }
        }
        else if(n == cen[i])
        {
            if ((n % 400) == 0)
            {

                cout << date << "." << setfill('0') << setw(2) << x << "." << n;
                exit(0);
            }
            else
            {
                cout << date + 1 << "." << setfill('0') << setw(2) << x << "." << n;
                exit(0);
            }
        }
    }
        if (cyear(n))
        {
            cout << date << "." << setfill('0') << setw(2) << x << "." << n;
        }
        else
        {

            cout << date + 1 << "." << setfill('0') << setw(2) << x << "." << n;
        }

        exit(0);
    
}
