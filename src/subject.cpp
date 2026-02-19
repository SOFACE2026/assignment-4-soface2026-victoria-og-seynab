#include "subject.hpp"

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    subscribers.push_back(subscriber); // adds the osberver
}


// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{
    // removes the observer from the list of subscribers
    for(auto it = subscribers.begin(); it != subscribers.end(); ++it){
        if(*it == subscriber){
            subscribers.erase(it); // removes the observer
            break; // exit the loop after removing the observer
        }
    }
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    for(Observer *subscriber : subscribers){
        subscriber->update(event); // notifies all of the observers
}
}