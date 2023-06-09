#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> people;
    string record[n];
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        people[name] = 0;
        record[i] = name;
    }
    for (int i = 0; i < n; i++) {
        int m, v;
        cin >> m >> v;
        people[record[i]] -= m * v;
        string name;
        cin >> name;
        people[name] += m * v;
    }
    for (int i = n - 1; i >= 0; i--)
        cout << people[record[i]] << endl;

    return 0;
}
