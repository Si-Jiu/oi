#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return a / gcd(a, b) * b;
}

long long a, b, c;

int main()
{
    cin >> a >> b >> c;
    cout << lcm(a, lcm(b, c));

    return 0;
}
