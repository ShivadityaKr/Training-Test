//You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.
//
//Return the max sliding window.
#include<bits/stdc++.h>
using namespace std;

//function that returns max sliding window//
vector<int> returnMaxSlidingWindow (int nums[],int k, int length){

	vector<int> result;//container
	
	//shifting the array accoring to the window and stroring max of that window into the container
	for(int i=0;i<=length-k;i++){
		int temp=nums[i];
		
		for(int j=i+1;j<i+k;j++){
			if(temp<nums[j])
			temp=nums[j];
		}
		
		result.push_back(temp);
	}
	//returing the max window stored
	return result;
}
int main(){
	int nums[]={1,3,2,5,3,6,7};
	int k=3; //length of window
	int length = sizeof(nums)/sizeof(nums[0]);
		
	vector<int> maxSlidingWindow;
	maxSlidingWindow = returnMaxSlidingWindow(nums,k,length);
	
	//printing the returned value of max sliding window//
	for(int i=0;i<maxSlidingWindow.size();i++)
		cout<<maxSlidingWindow[i]<<" ";
}
