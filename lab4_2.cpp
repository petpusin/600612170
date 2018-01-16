#include <iostream>
#include <cmath>
using namespace std;

float findDistance( float u , float a, float t ){
	
	float s = u*t + (0.5 * a * pow(t , 2));
	return s;
}

int main (){
	float u1 , a1 , t1;
	
	cout << "Enter u= ";
	cin >> u1;
	cout << "Enter a= ";
	cin >> a1;
	cout << "Enter t= ";
	cin >> t1;
	
	cout << findDistance( u1,  a1,  t1);
	return 0;
}
