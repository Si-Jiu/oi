#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n, cnt = 0;
    short cows[10 + 2];
    memset(cows, -1, sizeof(cows));
    cin >> n;
    while (n--)
    {
        short id, side;
        cin >> id >> side;
        if (cows[id] != -1 && cows[id] != side)
            cnt++;
        cows[id] = side;
    }
    cout << cnt;

    return 0;
}
