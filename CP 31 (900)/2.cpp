#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#define ll long long int
#define ump unordered_map
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;

void file_i_o(){
      ios_base::sync_with_stdio(0);
         cin.tie(0);
         cout.tie(0);
}

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    ump<char, int> mp;

    for(auto ele : s){
        mp[ele]++;
    }

    ll count=0;

    for(auto & [c, f ] : mp){
        if(f%2 and k) k--;
        else if(f%2 and k==0) count++; 
    }


      cout<<(count>1?"NO\n":"YES\n");
}

int main() {
    file_i_o();
    // Write your code here....
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
