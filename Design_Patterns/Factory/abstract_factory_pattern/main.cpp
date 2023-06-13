#include "PizzaStore.hpp"

int main()
{
    std::unique_ptr<PizzaStore> pizza_store = std::make_unique<NYStylePizzaStore>();

    pizza_store->order_pizza("cheese");

    pizza_store->order_pizza("clam");

}