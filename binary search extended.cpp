#include<iostream>
using namespace std;
int starting(int a[], int n, int key){
	int s=0;
	int end=n-1;
	int ans=-1;
	while(s<=end){
		int mid=(s+end)/2;
		if(a[mid]==key){
		ans=mid;
		end=mid-1;}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}
int last(int a[], int n, int key){
	int s=0;
	int end=n-1;
	int ans=-1;
	while(s<=end){
		int mid=(s+end)/2;
		if(a[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			s=mid+1;
		}
		return ans;
	}
	return -1;
}
int main(){
	int a[]={1,2,5,8,8,8,8,8,10,12,15,20};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	cout<<"enter the key"<<endl;
	cin>>key;
	cout<<starting(a,n,key)<<""<<endl;
	cout<<last(a,n,key)<<""<<endl;
	return 0;
}
