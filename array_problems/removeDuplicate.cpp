#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
	a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
void removeDuplicate(vector<int>& arr,int n){//brute force approach
	set<int>st;
	for(int i : arr){
		st.insert(i);
	}
	int idx = 0;
	for(auto it: st){
		arr[idx++] = it;
	}
	arr.resize(idx);
}
void removeDuplicateOpt(vector<int>& arr,int n) {
	int i = 0;
	for(int j = 1; j < n; j++) {
		if(arr[j] != arr[i]) {
			arr[i+1] = arr[j];
			i++;
		}
	}
	arr.resize(i+1);
}
int main(int argc,char** args){
	vector<int> arr = {1,1,2,2,2,3,3};
	int size = arr.size();
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	removeDuplicateOpt(arr,size);
	cout<<"After removing duplicates from the array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
