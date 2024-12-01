#include <iostream>
using namespace std;
class box{
private:
double length;
double width;
double height;
double volume;
void update_volume(){
    volume=(length*width*height);
}//Function to update the volume
public:
box():length(1),width(1),height(1){
update_volume();
}//default Constructor

box(double l,double w,double h):length(l),width(w),height(h){
update_volume();
}//Paramitrzied Constructor


void set_length(int l){length=l;update_volume();}
void set_height(int h){height=h;update_volume();}
void set_width(int w){width=w;update_volume();}
//seters


double get_volume(){
return volume;
}
//geters

bool operator ==(box b2){
if(get_volume()==b2.get_volume()){return true;}
else{return false;}
}//The Equality Operator As a bool

bool operator <(box b2){
if(get_volume()<b2.get_volume()){return true;}
else{return false;}
}//The less than Operator As a bool

bool operator >(box b2){
if(get_volume()>b2.get_volume()){return true;}
else{return false;}
}//The greater than Operator As a bool

};


int main(){
    box b1(2,2,3);
    cout << b1.get_volume() << endl;//12
    box b2(2,1,6);
    cout<< b2.get_volume() << endl;//12
    if(b1==b2){
        cout<<"The volumes are equle" <<endl;
    }
    box b3(2,6,3);
    if(b3==b2){
        cout<<"The volumes are equale" <<endl;
    }else{cout<<"The volumes are not equal"<<endl;}
    if(b3<b2){
        cout<<"B2 is greater"<<endl;
    }else{cout<<"b3 is greater"<<endl;}

}
