#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int sum = 0;

    for(int i=0;i<n;i++){
        if(i%2==0)
            sum += v[i];
        else
            sum -= v[i];
    }

    cout << sum << endl;

    return 0;
}
