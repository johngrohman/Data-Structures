#include "bag_simple.h"
#include "bag_dyn.h"

int main()
{
    SimpleBag<int> my_bag;
    my_bag.insert(4); 

    DynamicBag<int> my_dynamic_bag;
    for(int x = 0; x < 35; x++)
        my_dynamic_bag.insert(4);
    DynamicBag<int> copy_of_bag;
    copy_of_bag = my_dynamic_bag;
    
    // std::cout << my_bag.parent_variable << std::endl;

    // Polymorphism
    Bag<int> *pBag;
    pBag = &my_dynamic_bag;
    pBag->insert(5);

    my_dynamic_bag.print_bag();

    // Do extensive testing of your additions here:


    // This should crash the program:
    // throw MyException();

    return 0;
}
