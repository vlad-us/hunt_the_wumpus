// local
#include "src/room.hpp"
#include "src/utils.hpp"

// std
#include <iostream>
#include <map>


int main()
{
    std::map<int, game::room> game_map = game::create_game_map();
    for( int index = 0; index < 20; ++index )
    {
        game::room r = game_map[index];
        std::cout << r;
    }
    int index = game::utils::get_random_number(1, 20);
    game::room r = game_map[index];
    std::cout << r;
    std::cout << std::boolalpha << "Room " << index << " has neighbour 5: " << r.has_neighbour(5) << std::endl;
    std::cout << std::boolalpha << "Room " << index << " has neighbour 6: " << r.has_neighbour(6) << std::endl;
    std::cout << index << '\n';
    return 0;
}