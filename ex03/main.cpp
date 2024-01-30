#include "Point.hpp"

int main(){
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(2),Fixed(4)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(3),Fixed(3)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }

    //--------------above line----------------
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(1),Fixed(5)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(1.5f),Fixed(3)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }

    //--------------
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(0),Fixed(3)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(3),Fixed(6)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)), Point(Fixed(6),Fixed(1)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }

    if(bsp(Point(Fixed(1),Fixed(5)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)), Point(Fixed(60),Fixed(1)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    if(bsp(Point(Fixed(1),Fixed(4)), Point(Fixed(2),Fixed(1)),Point(Fixed(5),Fixed(3)),Point(Fixed(4),Fixed(4)))){
        std::cout << "Yes" <<std::endl;
    }else{
        std::cout << "No" <<std::endl;
    }
    return 0;
}