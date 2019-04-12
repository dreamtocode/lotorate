#include <iostream>
using namespace std;
void combination(int arr[], int n, int k, int index, int data[], int i);
void printcombination(int arr[], int n, int k) {
	int data[k];
	combination(arr, n, k, 0, data, 0);
}
void combination(int arr[], int n, int k, int index, int data[], int i) {
	if (index == k)	{
		for (int j=0; j<k; j++)
			cout << data[j];
		cout <<endl;
		return;
	}
	if (i >= n)
		return;
	data[index] = arr[i];
	combination(arr, n, k, index+1, data, i+1);
	combination(arr, n, k, index, data, i+1);
} 
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
	int k = 6;
	int n = sizeof(arr)/sizeof(arr[0]);
	printcombination(arr, n, k);
	return 0;
}