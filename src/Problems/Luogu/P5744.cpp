#include <bits/stdc++.h>

using namespace std;

struct student
{
    string name;
    short age, score;
};

int main()
{
    short n;
    cin >> n;
    student students[n];
    for (short i = 0; i < n; i++)
        cin >> students[i].name >> students[i].age >> students[i].score;
    for (short i = 0; i < n; i++)
    {
        cout << students[i].name << ' ' << students[i].age + 1 << ' ';
        if (students[i].score + students[i].score / 5 >= 600)
            cout << 600 << endl;
        else
            cout << students[i].score + students[i].score / 5 << endl;
    }

    return 0;
}
