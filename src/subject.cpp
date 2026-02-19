#include "subject.hpp"

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    subscribers.push_back(subscriber); // adds the osberver
}


// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    for(Observer *subscriber : subscribers){
        subscriber->update(event); // notifies all of the observers
}
}