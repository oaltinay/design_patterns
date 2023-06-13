#pragma once

#include "Strategy.hpp"
#include <memory>
#include <iostream>

class Duck {
public:
    void setFlyBehavior(std::unique_ptr<FlyBehavior> fly_behavior)
    {
        m_fly_behavior = std::move(fly_behavior);
    }

    void setQuackBehavior(std::unique_ptr<QuackBehavior> quack_behavior)
    {
        m_quack_behavior = std::move(quack_behavior);
    }

    void performFly()
    {
        m_fly_behavior->fly();
    }
    void performQuack()
    {
        m_quack_behavior->quack();
    }

    virtual void display() 
    {
        std::cout << "I am a duck.\n"; 
    }

protected:
    std::unique_ptr<FlyBehavior> m_fly_behavior;
    std::unique_ptr<QuackBehavior> m_quack_behavior;

};

class ModelDuck : public Duck {
public:
    ModelDuck()
    {
        m_fly_behavior = std::make_unique<FlyNoWay>();
        m_quack_behavior = std::make_unique<Squeak>();
    }

    void display() override
    {
        std::cout << "I am a model duck.\n"; 
    }

};