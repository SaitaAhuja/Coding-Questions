#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int cust = 1; 
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(a[j] <= a[i] && a[i] <= b[j]){
                count++;
            }
        }
        cust = max(cust, count);
    }
     cout << cust << endl;
    return 0;
}