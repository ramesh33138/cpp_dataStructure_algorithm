#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int low,int mid,int high) {
	int left = low; int right = mid+1;
	vector<int> temp;
	while(left <= mid && right <= high) {
		if(arr[left] <= arr[right]){
			temp.push_back(arr[left]);
			left++;		
		}
		else {
			temp.push_back(arr[right++]);
		}
	} 
	while(left <= mid) {
		temp.push_back(arr[left]);
		left++;
	} 
	while(right <= high) {
		temp.push_back(arr[right]);
		right++;
	}
	for(int i = low; i <= high; i++) {
		arr[i] = temp[i-low];
	}
}
void merge_sort(vector<int>& arr,int start,int end){
	if(start >= end) return;
	int mid = (start+end)/2;
	merge_sort(arr,start,mid);//divide & merge method
	merge_sort(arr,mid+1,end);//untill single element we have to divide
	merge(arr,start,mid,end);//after ther we have to merge the array
}
int main(int argc,char** args){
	vector<int> arr = {13,46,24,52,20,9};
	int size = arr.size() - 1;
	cout<<"Input array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	merge_sort(arr,0,size);
	cout<<"sorted array"<<endl;
	for(int i : arr){
		cout<<i<<" ";
	} 
	cout<<endl;
	return 0;
}
