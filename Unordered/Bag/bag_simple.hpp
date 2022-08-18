template <typename T>
bool SimpleBag<T>::insert(const T &myItem)
{
    if(size() >= CAPACITY)
        throw "MyException();";

    data[used] = myItem;
    used++;

    return true;
}

template <typename T>
bool SimpleBag<T>::remove(const T &myItem)
{
    if(used == 0)
        // empty SimpleBag.
        return false;

    int index = 0;

    while(index < used && data[index] != myItem)
        index++;

    //if myItem is not present, index would be == used.
    if(index == used)
        return false;

    // myItem is now removed.
    // we overwrite data[index] with data[used - 1] and decrement used by 1.
    data[index] = data[used - 1];
    used--;

    return true;
}
