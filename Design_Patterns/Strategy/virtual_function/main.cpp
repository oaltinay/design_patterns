#include "Context.hpp"

int main()
{
    auto model = std::make_unique<ModelDuck>();

    model->display();
    model->performFly();
    model->performQuack();

    std::cout << "Changing behavior...\n";

    model->setFlyBehavior(std::make_unique<FlyWithWings>());
    model->setQuackBehavior(std::make_unique<MuteQuack>());

    model->display();
    model->performFly();
    model->performQuack();
}