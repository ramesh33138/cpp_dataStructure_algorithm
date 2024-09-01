#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void rotateOne(vector<int>& arr, int n) {
	int temp = arr[0];
	for(int i = 1; i < n; i++) {
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}
int main(int argc,char** args){
	vector<int> arr = {1,2,3,4,5};
	int size = arr.size();
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	rotateOne(arr,size);
	cout<<"After rotating the by one place "<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
