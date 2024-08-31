#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void bubble_sort(vector<int>& arr,int n){
	//push maximum element to last by adjacent swap
	//out array should go till 0 -> n-2
	//inner loop can go 0 ->  n -1 
	for(int i = 0; i < n-1 ;i++ ) {
		int didSwap = 0;
		for(int j = 0; j <= n-i-1; j++){
			if(arr[j] > arr[j+1]){
				didSwap = 1;
				swap(arr[j],arr[j+1]);
			}
		}
		if(didSwap == 0) break; //optimization already sorted array/no swap
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
	bubble_sort(arr,size);
	cout<<"sorted array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
