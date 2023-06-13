#include "Beverage.hpp"
#include <iostream>

int main()
{
    std::unique_ptr<Bevarage> bevarage = std::make_unique<Espresso>();

    std::cout << bevarage->get_description() << " " << bevarage->get_cost() << '\n';

    std::unique_ptr<Bevarage> bevarage2 = std::make_unique<HouseBlend>();
    bevarage2 = std::make_unique<Mocha>(std::move(bevarage2));
    std::cout << bevarage2->get_description() << " " << bevarage2->get_cost() << '\n';

    bevarage2 = std::make_unique<Soy>(std::move(bevarage2));
    std::cout << bevarage2->get_description() << " " << bevarage2->get_cost() << '\n';

    bevarage2 = std::make_unique<Whip>(std::move(bevarage2));
    std::cout << bevarage2->get_description() << " " << bevarage2->get_cost() << '\n';
};