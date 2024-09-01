#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void rotateByKplaces(vector<int>& arr, int n, int k) {
	k = k % n;
	vector<int> temp;
	cout<<"LOG 1\n";
	for(int i = 0; i < k; i++) {
		temp.push_back(arr[i]);
	}
	cout<<"LOG 2\n";
	for(int i = k; i < n; i++) {
		arr[i-k] = arr[i];
	}
	cout<<"LOG 3\n";
	int j = 0;
	for(int i = n-k; i < n; i++) {
		arr[i] = temp[j];
		j++;
	}
	cout<<"LOG 4\n";
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
