#include "MyClass.h"

MyClass::MyClass():value(0) ,pVar(NULL){
}

MyClass::MyClass(int a) {
    this->value = a;
    this->pVar = new int;
    *pVar = a;
}

MyClass::MyClass(const MyClass& MyClassObjs) { // ===> this will be run when we execute smth like: MyClass b(a);
    std::cout << "copy constructor\n";  
    this->value = MyClassObjs.value;
    this->pVar = new int;
    *(this->pVar) = *(MyClassObjs.pVar);
}

MyClass::~MyClass() {
    std::cout << "deconstructor\n";  
    delete this->pVar;
}

MyClass& MyClass::operator=(const MyClass& rightHandsideObject) { // ===> this will be run when we execute smth like: MyClass b = a;
    std::cout << "operation overloading" << std::endl;
    // 1- assign non dyncamically allocated member variables
    // 2- delete previously dyncamically allocated member variables memory
    // 3- allocated new memory for them
    // 4- copy the content of the rightHandside to the newly allocated memory

    if(this != &rightHandsideObject) // we do this to prevent stuff like: a = a; (`this` keyword is a ponter that refers to current object getting assigned(leftHandsideObj))
    {
        /* 1 */ this->value = rightHandsideObject.value;
        /* 2 */ delete this->pVar;
        /* 3 */ this->pVar = new int;
        /* 4 */ *(this->pVar) = *(rightHandsideObject.pVar);
    }
    return (*this); // we returned the (*this)object(which is a reference to the object itself) in order to be able to chain member function calls exp:  obj.doSomething().doSomething().doSomething();
}

int MyClass::getRawBits() {
    std::cout << this->value << std::endl;  
    return (0);
}

int MyClass::setRawBits(int const raw) {
    this->value = raw;
    return (0);
}
