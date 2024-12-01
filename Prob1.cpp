#include <iostream>
using namespace std;

class counter{
  private:
    int count;
  public:
    counter():count(0){};//Default Constructor
    counter(int c):count(c){};//Paramitrized Constructor
    void set_count(int c){count=c;}
    int get_count(){return count;}
    counter operator ++(int){
        count++;
        return counter(count);
    }//postfix operator
    counter operator ++(){
        ++count;
        return counter(count);
    }//prefix operator  
};
int main(){
    counter c1(9);
    counter c2(19);
    c1++;
    ++c2;
    cout << c1.get_count() << endl;//10
    cout << c2.get_count() << endl;//20
    counter c3=c1++;
    cout << c3.get_count() << endl;//11
    cout << c1.get_count() << endl;//11
    counter c4=++c2;
    cout << c4.get_count() << endl;//21
}
