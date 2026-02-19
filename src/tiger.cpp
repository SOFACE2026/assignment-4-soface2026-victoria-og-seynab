#include "tiger.hpp"

// Implement this (visitor pattern)
void Tiger::accept(Visitor &visitor)
{
    visitor.visit(*this); // double dispatch
}

// Implement this (Observer part)
void Tiger::scratch_back()
{
    notify(AnimalEvent::TigerScratched); // notifies the observers that the tiger has been scratched
}