// local
#include "utils.hpp"

// std
#include <random>

namespace game
{
    namespace utils
    {
        int get_random_number(int min, int max)
        {
            std::random_device r;
            std::mt19937 rng{ r() };
            std::uniform_int_distribution<int> dist(min, max);
            return dist(rng);
        }
    } // namespace utils
} // namespace game