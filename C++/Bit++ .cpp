#include<iostream>

using namespace std;

int main()
{
    int N, x(0);
    cin >> N;

    string S;

    while (N--)
    {
        cin >> S;
        if (S[1] == '+')
        {
            ++x;
        }

        else
        {
            --x;
        }

    }

    cout << x << endl;

    return 0;
}