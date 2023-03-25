#include "easyfind.hpp"

int main()
{
    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >  vect( arr, arr + sizeof( arr ) / sizeof( int ) );

    easyfind( vect, 5);


    return 0;
}