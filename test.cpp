#include <iostream>
#include "Door.cpp"
#include "DoorFunc.cpp"
#include "Func2.h"
#include "leetcode/lc376.h"
using namespace std;
int main(){
//    IDoor* door = DoorFactory::MakeDoor(100, 200);
//    std::cout << "Width: " << door->GetWidth() << std::endl;
//    std::cout << "Height: " << door->GetHeight() << std::endl;
//
//    DoorFactory* ironDoorFactory = new IronDoorFactory();
//    ironDoorFactory->MakeDoor(100, 200);
//    cout << Func2().addTwo();
//    cout << (new Func2())->addTwo();
//    cout << Func2().b;
    (new lc376())->test();
    return 0;
}