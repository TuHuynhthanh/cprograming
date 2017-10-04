#include <iostream>
#include <complex>
using namespace std;

int main()
{
    //Khai báo số phức myComplex1 10+2i
    complex<double> myComplex1(10.0,2.0);
     //Khai báo số phức myComplex1 4+5i
    complex<double> myComplex2(4.0,5.0);
    // Khai báo 4 biến chứa kết quả +,-,*,/ của hai số phức trên
    complex<double> addComplex(0.0,0.0);
    complex<double> subComplex(0.0,0.0);
    complex<double> mulComplex(0.0,0.0);
    complex<double> divComplex(0.0,0.0);

    addComplex=myComplex1+myComplex2;
    subComplex=myComplex1-myComplex2;
    mulComplex=myComplex1*myComplex2;
    divComplex=myComplex1/myComplex2;

    //xuất ra màn hình kết quả
    cout << myComplex1<<"+"<<myComplex2<<"="<<addComplex<<endl;
    cout << myComplex1<<"-"<<myComplex2<<"="<<subComplex<<endl;
    cout << myComplex1<<"*"<<myComplex2<<"="<<mulComplex<<endl;
    cout << myComplex1<<"/"<<myComplex2<<"="<<divComplex<<endl;

    return 0;
}
