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

class NYStyleCheesePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "NYStyleCheesePizza Pizza is prepared\n";
    }

    void bake() override
    {
        std::cout << "NYStyleCheesePizza Pizza is baked\n";
    }

    void cut() override
    {
        std::cout << "NYStyleCheesePizza Pizza is cut\n";
    }

    void box() override
    {
        std::cout << "NYStyleCheesePizza Pizza is boxed\n";
    }    
};

class NYStyleVeggiePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "NYStyleVeggiePizza Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "NYStyleVeggiePizza Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "NYStyleVeggiePizza Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "NYStyleVeggiePizza Pizza is boxed\n";
    }    
};

class NYStylePepperoniPizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "NYStylePepperoniPizza Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "NYStylePepperoniPizza Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "NYStylePepperoniPizza Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "NYStylePepperoniPizza Pizza is boxed\n";
    }    
};

class ChicagoStyleCheesePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "ChicagoStyleCheesePizza Pizza is prepared\n";
    }

    void bake() override
    {
        std::cout << "ChicagoStyleCheesePizza Pizza is baked\n";
    }

    void cut() override
    {
        std::cout << "ChicagoStyleCheesePizza Pizza is cut\n";
    }

    void box() override
    {
        std::cout << "ChicagoStyleCheesePizza Pizza is boxed\n";
    }    
};

class ChicagoStyleVeggiePizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "ChicagoStyleVeggiePizza Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "ChicagoStyleVeggiePizza Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "ChicagoStyleVeggiePizza Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "ChicagoStyleVeggiePizza Pizza is boxed\n";
    }    
};

class ChicagoStylePepperoniPizza : public Pizza
{
public:
    void prepare() override
    {
        std::cout << "ChicagoStylePepperoniPizza Pizza is prepared\n";
    }

    void bake() override   
    {
        std::cout << "ChicagoStylePepperoniPizza Pizza is baked\n";
    }
    void cut() override
    {
        std::cout << "ChicagoStylePepperoniPizza Pizza is cut\n";
    }
    void box() override
    {
        std::cout << "ChicagoStylePepperoniPizza Pizza is boxed\n";
    }    
};