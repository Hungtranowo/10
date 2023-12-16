#include<iostream>

using namespace std;

int main() {
	char arr[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << i << j << (int)static_cast<void*>(&arr[i][j]) << endl;
		}
	}
	return 0;
}	