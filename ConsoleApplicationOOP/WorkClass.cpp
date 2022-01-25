#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Ïðèâåò World!\n";

    GoodBasic* universalPointer01 = new Freezer(2);
    static_cast<GoodBasic*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Freezer(2, 222);
    static_cast<GoodBasic*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Freezer(3, 3333, "NewName");
    static_cast<GoodBasic*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Freezer(4, 4444, "NewGame", "Some description", 3);
    static_cast<GoodBasic*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Freezer(5, 55555, "NewGame5", "Some descriptions5", 5, 333, "white", "country", 3);
    static_cast<GoodBasic*>(universalPointer05)->toString();
}