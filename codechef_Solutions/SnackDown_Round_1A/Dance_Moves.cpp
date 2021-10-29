#include <bits/stdc++.h>
using namespace std;
// CODE WRITTEN BY KRISHNA_6431

void solve()
{
    long long a,b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    if(abs(b-a)%2==1){
        if(b-a >= 0)
        cout << (b-a)/2 + 2 << endl;
        else{
            cout << abs(b-a) << endl;
        }
    }
    else{
        if(b-a >= 0)
        cout << (b-a)/2<< endl;
        else{
            cout << abs(b-a) << endl;
        }
    }
    
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        // tc++;
        solve();
    }
    return 0;
}
