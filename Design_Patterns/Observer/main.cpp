#include "CurrentConditionDisplay.hpp"
#include "Observer.hpp"

int main()
{
    std::shared_ptr<WeatherData> weather_data = std::make_shared<WeatherData>();

    std::shared_ptr<Observer> observer_1 = std::make_shared<CurrentConditionDisplay>(weather_data);
    std::shared_ptr<Observer> observer_2 = std::make_shared<CurrentConditionDisplay>(weather_data);
    std::shared_ptr<Observer> observer_3 = std::make_shared<CurrentConditionDisplay>(weather_data);

    // Register observers
    weather_data->register_observer(observer_1);
    weather_data->register_observer(observer_2);
    weather_data->register_observer(observer_3);

    //Subject sets some change
    weather_data->set_temperature(22.4);
    weather_data->set_humidity(55);

    //Observers are notified for the change
    weather_data->notify_observers();

    //observer_1 is deleted from the list
    weather_data->remove_observer(observer_1);

    //Informing about removing an non existed observer 
    weather_data->remove_observer(observer_1);
}