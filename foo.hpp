#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> wektor;
    for(std::list<Human>::reverse_iterator it = people.rbegin(); it != people.rend(); ++it) {
        it->birthday();
        it->isMonster() ? wektor.push_back('n') : wektor.push_back('y');
    }   

    return wektor;
}
