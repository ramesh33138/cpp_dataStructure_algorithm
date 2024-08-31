#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void reverse(vector<int>& arr,int n){
	int low = 0; int high  = n - 1;
	while(low <= high){
		swap(arr[low],arr[high]);
		low++;high--;
	}
}
int main(int argc,char** args){
	vector<int> arr = {13,46,24,52,20,9};
	int size = arr.size();
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	reverse(arr,size);
	cout<<"After reversing the array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
