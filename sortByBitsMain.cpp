#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cantBits(int n) {
    int count = 0;
    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

bool comparar(int a, int b) {
    int cantA = cantBits(a);
    int cantB = cantBits(b);
    if (cantA == cantB) {
        return a < b;
    }
    return cantA < cantB;
}

vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(), arr.end(), comparar);
    return arr;
}

int main() {
	int n=0;
	vector<int> arr;
	while(cin >> n){
		arr.push_back(n);
        cin.ignore(); 
	}
	vector<int> arr2 = sortByBits(arr);
	for (int i : arr2) {
       cout << i ;
       if (i != arr2.back()) {
            cout << ",";
        }
    }
}