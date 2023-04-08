#include <iostream>

//The bridge desing pattern has two hierarchies: one for abstraction, one for the implementation
//Each of the two hierarchies depend on an interface class

class Implementor
{
    public:
    //Pure virtual function
    virtual void implementation (void) const = 0;
    ~Implementor() = default;
};

class ImplementorA : public Implementor
{
    public:
    ImplementorA() = default;
    void implementation(void) const override {
        std::cout << "ImplementorA is working" << std::endl;
    }
};

class ImplementorB : public Implementor
{
    public:
    ImplementorB() = default;

    void implementation(void) const override
    {
        std::cout << "ImplementationB is working." << std::endl;
    }

};

class Abstraction
{
    public:
    Abstraction() = default;
    ~Abstraction() = default;
    //Pure virtual function
    virtual void function(void) const = 0;

};

class RefindedAbstraction : public Abstraction
{
    private:
    Implementor & implementor;
    public:
    RefindedAbstraction(Implementor& imp) : implementor(imp)
    {
        implementor = imp;
    }

    void function(void) const override
    {
        implementor.implementation();
    }
};


int main(void)
{
    ImplementorA implementorA;
    ImplementorB implementorB;

    Abstraction * abstractions[2];
    abstractions[0] = new RefindedAbstraction(implementorA);
    abstractions[1] = new RefindedAbstraction(implementorB);

    for (auto abstraction : abstractions)
    {
        abstraction->function();
    }

    return 0;
}

























