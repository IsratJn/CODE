#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    long long int n;
    long long int m;
    long long int a;
    long long int p;

    cin >> n >> m >> a;
    p=((n + a - 1) / a) * ((m + a - 1) / a);

    cout << p << endl;

    return 0;
}
