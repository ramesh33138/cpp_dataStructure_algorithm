#include<bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
	vector<int>arr = {3,2,1,5,2};
	int largest = arr[0];
	int sLargest = -1;
	for (int i = 1 ; i < arr.size(); i++) {
		if(arr[i]  > largest) {
			sLargest = largest;
			largest = sLargest;
			
		}
		else if(arr[i] > sLargest)
			sLargest = arr[i];
	}
	cout<<"second largest element in the array: "<<sLargest<<endl;
	return 0;
}
