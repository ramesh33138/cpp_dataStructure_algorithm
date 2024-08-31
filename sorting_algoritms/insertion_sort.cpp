#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void insertion_sort(vector<int>& arr,int n){
	//pick the element and place it in its correct order
	//out array should go till 0 -> n-1
	for(int i = 0; i <= n-1 ;i++ ) {
		int j = i;
		while(j > 0 && arr[j-1] > arr[j]) {
			swap(arr[j-1],arr[j]);  //  14 9 15 12 6 8
			j--;
		}
	}
}
int main(int argc,char** args){
	vector<int> arr = {14,9,15,12,6,8,13};
	int size = arr.size();
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	insertion_sort(arr,size);
	cout<<"sorted array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
