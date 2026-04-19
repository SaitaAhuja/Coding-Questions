
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int countAC=0, countWA=0, countTLE=0, countRE=0;
	string array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=0;i<n;i++){
		if(array[i]=="AC"){
			countAC++;
		}
		else if(array[i]=="WA"){
			countWA++;
		}
		else if(array[i]=="TLE"){
			countTLE++;
		}
		else if(array[i]=="RE"){
			countRE++;
		}
	}
	cout<<"AC x "<< countAC<<endl;
		cout<<"WA x "<< countWA<<endl;
			cout<<"TLE x "<< countTLE<<endl;
				cout<<"RE x "<< countRE<<endl;
				
	
	
	
	
	
	
	return 0;
}
