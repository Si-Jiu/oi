#include <bits/stdc++.h>

using namespace std;

int n, m, tmp, max1, sum = 0;
deque<int> c;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        c.push_back(tmp);
        if (c.size() > m)
        {
            sum -= c.front();
            c.pop_front();
        }
        if (sum > max1)
            max1 = sum;
    }
    cout << max1;

    return 0;
}
