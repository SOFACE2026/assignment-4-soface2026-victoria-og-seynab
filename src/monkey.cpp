#include "monkey.hpp"

// Implement this (visitor pattern)
void Monkey::accept(Visitor &visitor)
{
    visitor.visit(*this); // double dispatch
}

// Implement this (Observer part)
void Monkey::feed_banana()
{
    notify(AnimalEvent::MonkeyFed); // notifies the observers that the monkey has been fed
}