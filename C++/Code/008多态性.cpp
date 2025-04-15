#include <iostream>

class Base {
public:
    virtual void print() { std::cout << "Base" << std::endl; }
    virtual void draw() const {}
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void print() override { std::cout << "Derived" << std::endl; }
};

int main() {
    Base* b = new Derived();
    b->print(); // Output: Derived
    delete b;
    return 0;
}