#pragma once

#include <string>
#include <memory>

class Bevarage 
{
public:
    virtual std::string get_description() const
    {
        return m_description;
    }

    virtual double get_cost() const = 0;

protected:
    std::string m_description {"Unknown Beverage"};
};

class Espresso : public Bevarage
{
public:
    Espresso()
    {
        m_description = "Espresso";
    }

    double get_cost() const override
    {
        return 1.99;
    }
};

class HouseBlend : public Bevarage
{
public:
    HouseBlend()
    {
        m_description = "HouseBlend";
    }

    double get_cost() const override 
    {
        return 0.89;
    }
};

class CondimentDecorator : public Bevarage
{
public:
    
    CondimentDecorator(std::unique_ptr<Bevarage> beverage) : m_beverage(std::move(beverage))
    {};
    virtual std::string get_description() const = 0;
protected:
   std::unique_ptr<Bevarage> m_beverage;
};

class Mocha : public CondimentDecorator
{
public:
    Mocha( std::unique_ptr<Bevarage> beverage) : CondimentDecorator(std::move(beverage))
    {
    }

    std::string get_description() const override
    {
        return m_beverage->get_description() +  ", Mocha";
    }

    double get_cost() const override 
    {
        return m_beverage->get_cost() + 0.2;
    }
};

class Whip : public CondimentDecorator
{
public:
    Whip( std::unique_ptr<Bevarage> beverage) : CondimentDecorator(std::move(beverage))
    {
    }

    std::string get_description() const override
    {
        return m_beverage->get_description() +  ", Whip";
    }

    double get_cost() const override 
    {
        return m_beverage->get_cost() + 0.3;
    }
};

class Soy : public CondimentDecorator
{
public:
    Soy( std::unique_ptr<Bevarage> beverage) : CondimentDecorator(std::move(beverage))
    {
    }

    std::string get_description() const override
    {
        return m_beverage->get_description() +  ", Soy";
    }

    double get_cost() const override 
    {
        return m_beverage->get_cost() + 0.5;
    }
};