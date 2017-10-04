#include "iostream" 
using namespace std; 
int main()
{ 
	int n=1; 
    while (n<=1)
	{ 
		cout<<"\n Nhap so nguyen duong : "; 
	    cin>>n;  
	} 
	for(int j=1;j<=n;j++)
	{
	
		int kq=0;
		for(int i=2;i<j;i++) 
			if(j%i==0) 
			 {
			 	kq=1;
			 	break;
			 }
		if(kq==0) cout<<j<<" ";
	} 
}


