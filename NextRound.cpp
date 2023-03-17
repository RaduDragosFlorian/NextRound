#include <iostream>
using namespace std;
int main()
{
    int n, k, g[100], passed=0;
    cin >> n >> k;
    for (int i = 0; i <= n - 1; i++) {
        cin >> g[i];
    }
    for (int i = 0; i <= n - 1; i++) {
        if (g[i] > k && passed!=k+1) {
            passed++;
        }
    }
    cout << passed;
    return 0;
}
