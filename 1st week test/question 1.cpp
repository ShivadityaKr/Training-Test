//Question 1 : return the median of two sorted array
#include<bits/stdc++.h>
using namespace std;
//function for returning the median
int median(int num1[], int num2[], int n, int m){
	vector<int> container;

	int i=0,j=0;
	//storing the elements from the arrays in assending order into the container
	for(;i<n && j<m;){
		if(num1[i]<num2[j]){
			container.push_back(num1[i]);
			i++;
		}
		else{
			container.push_back(num2[j]);
			j++;
		}
	}
	//now storing rest of the element that is available in both arrays
	for(i;i<n;i++)
	container.push_back(num1[i]);
	for(j;j<m;j++)
	container.push_back(num2[j]);
	
	//displaying the final container
	for(int i=0;i<container.size();i++){
		cout<<container[i]<<" ";
	}
	//returning the medain
	return container[container.size()/2];
}
int main(){
	
	int num1[]={1,2,3,4,6};
	int num2[]={4,5,7,8,9,12};

		
	int n=sizeof(num1)/sizeof(num1[0]);
	int m=sizeof(num2)/sizeof(num2[0]);
	
	cout<<endl<<"Median : "<<median(num1,num2,n,m);
	
}
