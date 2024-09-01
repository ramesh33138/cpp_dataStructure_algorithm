#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void reverse(vector<int>& arr, int low, int high){
	while(low < high) {
		swap(arr[low],arr[high]);
		low++;high--;
	}
}
void printArray(vector<int>& arr) {
	for(auto i : arr) {
		cout<<i<<" ";
	}
	cout<<endl;
}
void rotateByKplaces(vector<int>& arr, int n, int k) {
	k = k % n;
	reverse(arr,0,k-1);
	printArray(arr);
	reverse(arr,k,n-1);
	printArray(arr);
	reverse(arr,0,n-1);
	printArray(arr);
}
int main(int argc,char** args){
	vector<int> arr = {1,2,3,4,5,6,7};
	int size = arr.size();
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	}
	int k = 3;
	cout<<endl;
	rotateByKplaces(arr,size,k);
	cout<<"After rotating the array by K place "<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
