// Template classes are used to define classes with generic data types.
// The generic data type is specified when an object of the class is declared.
#include <iostream>

template <class T>
class Arithmetic
{
public:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    // std::cout<<"Hello World";
    Arithmetic<int> a(10, 6);
    Arithmetic<float> b(10.15, 6.50);



    std::cout << a.add()<<"\n";
    std::cout << b.add()<<"\n";

    return 0;
}