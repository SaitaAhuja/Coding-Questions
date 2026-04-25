#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i < n; i++){
        if(array[i] > 0){
            count++;
            if(count > maxCount)
                maxCount = count;
        }
        else{
            count = 0;
        }
    }
    cout << maxCount << endl;
    return 0;
}
