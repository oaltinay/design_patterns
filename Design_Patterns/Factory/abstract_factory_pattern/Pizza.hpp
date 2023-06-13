#pragma once

#include "PizzaIngredientFactory.hpp"

#include <iostream>
#include <string>

class Pizza
{
public:
    virtual void prepare() = 0;
    void bake() 
    {
        std::cout << m_name << "Pizza is baked\n";
    }

    void cut() 
    {
        std::cout << m_name << "Pizza Pizza is cut\n";
    }

    void box()
    {
        std::cout << m_name << "Pizza Pizza is boxed\n";
    } 
    void set_name(const std::string &name)
    {
        m_name = name;
    }

protected:
    std::unique_ptr<Dough> m_dough;
    std::unique_ptr<Sauce> m_sauce;
    std::unique_ptr<Cheese> m_cheese;
    std::unique_ptr<Clams> m_clams;
    std::string m_name;
};

class CheesePizza : public Pizza
{
public:

    CheesePizza(std::unique_ptr<PizzaIngredientFactory> pizza_ingredient_factory) : m_pizza_ingredient_factory( std::move(pizza_ingredient_factory) )
    {}
    void prepare() override
    {
        std::cout << m_name <<" Pizza is prepared\n";

        m_dough = m_pizza_ingredient_factory->create_dough();
        m_sauce = m_pizza_ingredient_factory->create_sauce();
        m_cheese = m_pizza_ingredient_factory->create_cheese();
    }
private:
    std::unique_ptr<PizzaIngredientFactory> m_pizza_ingredient_factory;
};

class ClamsPizza : public Pizza
{
public:

    ClamsPizza(std::unique_ptr<PizzaIngredientFactory> pizza_ingredient_factory) : m_pizza_ingredient_factory( std::move(pizza_ingredient_factory) )
    {}
    void prepare() override
    {
        std::cout << m_name <<" Pizza is prepared\n";

        m_dough = m_pizza_ingredient_factory->create_dough();
        m_sauce = m_pizza_ingredient_factory->create_sauce();
        m_cheese = m_pizza_ingredient_factory->create_cheese();
        m_clams = m_pizza_ingredient_factory->create_clams();
    }
private:
    std::unique_ptr<PizzaIngredientFactory> m_pizza_ingredient_factory;
};


