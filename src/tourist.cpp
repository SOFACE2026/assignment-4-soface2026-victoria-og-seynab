#include "tourist.hpp"

// Implement this (visitor pattern)
// When the tourist interacts with the monkey, it adds "monkey" to the list of visited animals
void Tourist::visit(Monkey &monkey)
{
    visited.push_back("monkey"); // the tourist visits the monkey
}

// Implement this (visitor pattern)
void Tourist::visit(Tiger &tiger)
{
    visited.push_back("tiger"); // the tourist visits the tiger
}

// Implement this (visitor pattern)
void Tourist::visit(Fish &fish)
{
    visited.push_back("fish"); // the tourist visits the fish
}

std::vector<std::string> Tourist::list_visited()
{
    return visited; // returns the list of visited animals
}