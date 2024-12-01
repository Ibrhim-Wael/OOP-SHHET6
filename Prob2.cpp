#include <iostream>
using namespace std;
class Complex{
private:
 double real;
 double im;
public:
    Complex(double r,double i):real(r),im(i){};//Constructor to initailize the values.
     void set_real(double r){real=r;}
     void set_imagine(double i){im=i;}
     void shownum(){cout<<real<<"+"<<im<<"i"<<endl;}
    Complex operator +(Complex cf){
        double r=real+cf.real;
        double imagine=im+cf.im;
        return Complex(r,imagine);
    }//Simple Complex Addition
    Complex operator -(Complex cf){
        double r=real-cf.real;
        double imagine=im-cf.im;
        return Complex(r,imagine);        
    }//Simple Complex Subtracion  
    Complex operator *(Complex cf){
        double r=((real*cf.real)-(im*cf.im));
        double imagine=((real*cf.im)+(im*cf.real));
        return Complex(r,imagine);        
    }//Simple Complex Multiplaction        
};

int main(){
    Complex c1(9,6),c2(3,12);
    c1.shownum();//9+6i
    Complex c3=c1+c2;
    c3.shownum();//(9+3)+(12+6)i=12+18i
    Complex c4=c2-c1;
    c4.shownum();//-6+6i
    Complex c5=c1*c2;
    c5.shownum();//-45+126i
}
