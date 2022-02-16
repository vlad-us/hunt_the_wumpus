// local
#include "room.hpp"

// std
#include <stdexcept>


namespace game
{
    room::room()
    {}

    room::~room()
    {}

    void room::set_number(int num)
    {
        m_room_number = num;
    }

    void room::set_neighbour(int room_number)
    {
        if( m_room_neighbours.size() > 2 )
        {
            throw std::runtime_error("excess number of adjoining rooms");
        }
        m_room_neighbours.push_back(room_number);
        return;
    }

    bool room::has_neighbour(int room_number) const
    {
        for( int r: m_room_neighbours )
        {
            if( r == room_number )
            {
                return true;
            }
        }
        return false;
    }

    int room::number() const
    {
        return m_room_number;
    }

    std::vector<int> room::neighbours() const
    {
        return m_room_neighbours;
    }

    std::ostream& operator<<(std::ostream& out, const room& r)
    {
        out << "Room number " << r.number() << ", neighbours: ";
        for( int n: r.neighbours() )
        {
            out << n << ", ";
        }
        out << std::endl;
        return out;
    }

    std::map<int, room> create_game_map()
    {
        std::map<int, room> game_map;
        for( int row = 0; row < 20; ++row )
        {
            room r;
            r.set_number(row + 1);
            r.set_neighbour(rooms_config[row][0]);
            r.set_neighbour(rooms_config[row][1]);
            r.set_neighbour(rooms_config[row][2]);
            game_map[row + 1] = r;
        }
        return game_map;
    }

} // namespace game