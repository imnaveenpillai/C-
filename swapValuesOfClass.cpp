#include <iostream>
using namespace std;

class Y;

class X{
    int val1;
    public:
    friend void swap(X &, Y &);
        void set_data(int a){
            val1 = a;
        }
        void display(){
            cout << "The value in X is: " << val1 << endl;
        }
};

class Y{
    int val2;
    public:
    friend void swap(X &, Y &);
        void set_data(int b){
            val2 = b;
        }
        void display(){
            cout << "The value in Y is: " << val2 << endl;
        }
};

void swap(X &o1, Y &o2){
    int tmp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = tmp;
}

int main()
{
    X o1;
    Y o2;
    o1.set_data(10);
    o1.display();
    o2.set_data(5);
    o2.display();
    swap(o1, o2);
    o1.display();
    o2.display();
    return 0;
}
