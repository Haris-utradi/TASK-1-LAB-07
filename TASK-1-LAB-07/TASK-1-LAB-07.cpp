#include<iostream>
#include <vector>
using namespace std;
int main() {
	int size;
	cout << "enter the size ";
	cin >>size;

	vector <int> arry(size);
	for (int i = 0; i < size; i++) {
		cout << "enter value to store in array" << i + 1 << " : ";
		cin >> arry[i];
	}
	for (int j = 0; j <size; j++) {
		cout << arry[j] << endl;

	}


	return 0;
}