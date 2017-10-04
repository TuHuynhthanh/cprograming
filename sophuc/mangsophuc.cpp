#include <iostream>
#include <complex>
using namespace std;

int main()
{
   complex<double> myComplexArray[10];
   cout<<"Nhap vao cac gia tri cua mang so phuc"<<endl;

   //Nhập vào 10 phần tử phức của mảng.
   for(int i=0;i<10;i++)
    cin>>myComplexArray[i];
    // Xuất  10 phần tử phức trong mang ra màn hình dùng con trỏ kiều số phức
    cout<<"Mang so phuc vua nhap:"<<endl;
    complex<double> *pComplex;
    pComplex=myComplexArray;
   for(int i=0;i<10;i++)
          cout<<pComplex[i]<<endl; //C++ cho phép nhưng C không được phép
    return 0;
}
