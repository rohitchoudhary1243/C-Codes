#include <iostream>

using namespace std;
int main()
{
    cout << "hello world";
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    return 0;
}
