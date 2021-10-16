#include<iostream>
using namespace std;
#define N 20
int main(){
	
	int i,sum=0,n,ar[N];
	cout<<"Enter no of  array elements :";
	cin>>n;
	cout<<endl<<"Enter "<<n<<" elements ";
	
	for(i=0;i<n;i++){
		
		cin>>ar[i];
		sum=sum+ar[i];
	}
	cout<<"The sum of the elements is : ";
	
	cout<<sum;
	
	
}
