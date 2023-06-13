#pragma once

#include <iostream>

class Pizza
{
public:
    virtual void prepare() = 0;
    virtual void bake() = 0;
    virtual void cut() = 0;
    virtual void box() = 0;
};

class CheesePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "Cheese Pizza is prepared\n";
    }

    void bake() override
    {
        std::cout << "Cheese Pizza is baked\n";
    }

    void cut() override
    {
        std::cout << "Cheese Pizza is cut\n";
    }

    void box() override
    {
        std::cout << "Cheese Pizza is boxed\n";
    }    
};

class VeggiePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "Veggie Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "Veggie Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "Veggie Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "Veggie Pizza is boxed\n";
    }    
};

class PepperoniPizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "Pepperoni Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "Pepperoni Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "Pepperoni Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "Pepperoni Pizza is boxed\n";
    }    
};