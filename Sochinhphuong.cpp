#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long a;
	cin >> a;
	long long b = sqrt(a);

	if(b * b % a == 0){
		cout << "YES";
	}else cout << "NO";

	return 0;
}
