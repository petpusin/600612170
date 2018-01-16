#include <iostream>
#include <cmath>
using namespace std;

int findDivision(int num){
	
	int ans=2;
	while(num%ans>0){
		ans++;	
	}	
	return ans;
}


int main() {
	
	int x1;
	cout<< "Enter input : ";
	cin >> x1;
	
	cout << "Output is : " << findDivision(x1);
	return 0;
}
