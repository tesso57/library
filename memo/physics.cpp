#include <iostream>
#include <iomanip>
#include <vector>
typedef long long ll;
using namespace std;
const  ll INF = 1e9;
const  ll MOD = 1e9 + 7;
#define repi(i,n,init) for(ll i=init;i<(n);i++)

int main()
{
    int n;
    cin >> n;
    vector<double> in(n,0.);
    repi(i,n,0){
        cin >> in[i];
    }
    repi(i,n,1){
        cout << fixed << setprecision(10) << (in[i] - in[i-1])/0.25 << endl;
    }
    return 0;
}