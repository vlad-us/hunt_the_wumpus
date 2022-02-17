#define BOOST_TEST_MODULE Testing Room class
// local
#include "../src/room.hpp"

// boost
#include <boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_CASE(test_room_set_number)
{
    game::room r;
    int num = 10;
    r.set_number(10);
    BOOST_CHECK_EQUAL(num, r.number());
}

BOOST_AUTO_TEST_CASE(test_room_set_neighbour)
{
    game::room r;
    int num = 10;
    r.set_neighbour(num);
    BOOST_CHECK_EQUAL(true, r.has_neighbour(num));
}
