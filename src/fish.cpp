#include "fish.hpp"

// Implement this (visitor pattern)
void Fish::accept(Visitor &visitor)
{
    visitor.visit(*this); // double dispatch
}

// Implement this (Observer part)
void Fish::clean_teeth()
{
    notify(AnimalEvent::FishTeethCleaned); // notifies the observers that the fish's teeth have been cleaned
}