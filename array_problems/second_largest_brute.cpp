#include<bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
	vector<int>arr = {3,2,1,5,2};
	//sort the array
	sort(arr.begin(),arr.end());
	//last elment in the array is largest
	int largest =  arr[arr.size()-1];
	//iterate the array from last index when largest != element that is second largest
	int sLargest = -1;
	for (int i = arr.size()-2; i >= 0; i--) {
		if(arr[i] != largest) {
			sLargest = arr[i];
			break;
		}
	}
	cout<<"second largest element in the array: "<<sLargest<<endl;
	return 0;
}
