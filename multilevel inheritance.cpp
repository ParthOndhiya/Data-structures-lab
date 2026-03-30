#include <iostream>
using namespace std;
class Animal {
public:
void eat() {
cout<<"Eating..."<<endl;
}
};
class Dog: public Animal
{
public:
void bark(){
cout<<"Barking..."<<endl;
}
};
class Puppy: public Dog
{
public:
void weep() {
cout<<"Weeping...";
}
};
int main(void) {
Puppy d1;
d1.eat();
d1.bark();
d1.weep();
return 0;
}
