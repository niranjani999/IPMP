#include <bits/stdc++.h>
using namespace std;
int Triplets(int n)
{
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int x = i * i + j * j;
            int y = sqrt(x);
            if (y * y == x && y <= n)
                ++res;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Count of triplets : ";
    cout << Triplets(n);
    return 0;
}
