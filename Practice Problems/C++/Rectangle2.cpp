#include<iostream>
using namespace std;
class Rectangle {
  private:
    int length;
    int breadth;
  public:
   Rectangle(){
    length = breadth =1;
   }

    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength();
    int setLength(int l){
        length = l;
    }
};

Rectangle ::Rectangle(int a, int b) {
    length = a;
    breadth = b;
}
int Rectangle ::area(){
    return length * breadth;
}
int Rectangle::perimeter() {
    return 2*length*breadth;
}
int main(){
  Rectangle r(10,20);
  // r.initialize(10,20);
  cout<<r.area();
  
}

