#include <iostream>
#include <vector>
using namespace std;


vector<int> sortByBits(vector<int>& arr) {
    // sort(arr.begin(), arr.end(), comparar);
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