#pragma once
// std
#include <map>
#include <vector>
#include <iostream>

namespace game
{
    const int rooms_config[20][3]{
        { 2, 5, 8 },
        { 1, 3, 10 },
        { 2, 4, 12 },
        { 3, 5, 14 },
        { 4, 1, 6 },
        { 5, 7, 15 },
        { 6, 8, 17 },
        { 1, 7, 9 },
        { 8, 10, 18 },
        { 2, 9, 11 },
        { 10, 12, 19 },
        { 13, 11, 3 },
        { 14, 12, 20 },
        { 13, 4, 15 },
        { 14, 16, 6 },
        { 15, 17, 20 },
        { 16, 18, 7 },
        { 17, 19, 9 },
        { 18, 20, 11 },
        { 16, 19, 13 }
    };

    class room
    {
    private:
        int m_room_number;
        std::vector<int> m_room_neighbours;
    public:
        // default constructor
        room();
        // destrucor
        ~room();
        // setters
        void set_number(int num);
        void set_neighbour(int num);
        // getters
        bool has_neighbour(int room_number) const;
        int number() const;
        std::vector<int> neighbours() const;
        // operators
        friend std::ostream& operator<<(std::ostream& out, const room& r);
    };

    std::map<int, room> create_game_map();
} // namespace game