#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b) {
        a = a ^ b;
        b = a ^ b;//a ^ b ^ b --> b ^ b = 0; 0 ^ a = a
        a = a ^ b;//a ^ b ^ a --->a ^ a = 0; 0 ^ b = b
}
int partition(vector<int>& arr, int low,int high) {
	int i = low; int pivot = arr[low];
        int j = high;
	while(i < j){
		while(i <= high-1 && arr[i] <= pivot) i++;
		while(j > low && arr[j] > pivot) j--;
		if(i < j) swap(arr[i],arr[j]);
	}
	swap(arr[low],arr[j]);
	return j;
}
void quick_sort(vector<int>& arr,int start,int end){
	if(start >= end) return;
	int pIndex = partition(arr,start,end);
	quick_sort(arr,start,pIndex-1);//divide & conquer method
	quick_sort(arr,pIndex+1,end);//untill single element we have to divide
}
int main(int argc,char** args){
	vector<int> arr = {13,46,24,52,20,9};
	int size = arr.size() - 1;
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	quick_sort(arr,0,size);
	cout<<"sorted array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
