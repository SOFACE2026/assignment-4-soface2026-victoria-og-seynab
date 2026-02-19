#include "keeper.hpp"
#include "monkey.hpp"
#include "tiger.hpp"
#include "fish.hpp"

// Implement this (visitor part)
void Keeper::visit(Monkey &monkey)
{
    monkey.feed_banana(); // the keeper feeds the monkey
}

// Implement this (visitor part)
void Keeper::visit(Tiger &tiger)
{
    tiger.scratch_back(); // the keeper scratches the tiger's back
}

// Implement this (visitor part)
void Keeper::visit(Fish &fish)
{
    fish.clean_teeth(); // the keeper cleans the fish's teeth
}