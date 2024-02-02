#include "Point.hpp"

#define triangle Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3))

int main(){
    bsp(triangle, Point(Fixed(2),Fixed(4))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(3),Fixed(3))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;

    //--------------above line----------------
    bsp(triangle, Point(Fixed(1),Fixed(5))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(1.5f),Fixed(3))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;

    //--------------
    bsp(triangle, Point(Fixed(0),Fixed(3))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(3),Fixed(6))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(6),Fixed(1))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(60),Fixed(1))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    bsp(triangle, Point(Fixed(4),Fixed(4))) ? std::cout << "Yes" <<std::endl : std::cout << "No" <<std::endl;
    return 0;
}