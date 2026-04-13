#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	cin>> s;
	int maxcount=1;
	int count=1;
    int size = s.length();
    for(int i=1;i< size ;i++){
    	if(s[i]==s[i-1]){
    		count++;
    		
		}
		else{
			count = 1;
		}
			maxcount = max(maxcount, count);
	}
		cout<<maxcount<<endl;
			return 0;
}
