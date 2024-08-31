#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void selection_sort(vector<int>& arr,int n){
	//select minimum element in the array and swap
	//out array should go till 0 -> n-2
	//inner loop can go i ->  n -1 
	for(int i = 0; i <= n -2 ;i++ ) {
		int mini = i;//initially wherever i starts that should be considered as minimum element
		for(int j = i; j <= n-1; j++){
			if(arr[j] < arr[mini]){
				mini = j;
			}
		}
		swap(arr[i],arr[mini]);
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
	selection_sort(arr,size);
	cout<<"sorted array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
