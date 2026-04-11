#include<iostream>
using namespace std;
int maximumDraws(int n){
 	return n+1;
 }
int main(){
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++){
		int n;
       cin>>n;
       cout<<maximumDraws(n)<<endl;
	}
 

	return 0;
}
