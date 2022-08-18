template <typename T>
DynamicBag<T>::DynamicBag(int initial_cap)
{
	data = new T [initial_cap];
	capacity = initial_cap;
	used = 0;	
}

template <typename T>
DynamicBag<T>::DynamicBag(const DynamicBag<T> & other_bag)
{
	// Allocate new memory the size of the other bag
	data = new T [other_bag.capacity];

	// Set the capcity equal to the other bag
	capacity = other_bag.capacity

	// Set the used equal to the other bag's used
	used = other_bag.used

	// Copy everything over
	for(int i = 0; i < used; i++)
		data[i] = other_bag.data[i]
}

template <typename T>
void DynamicBag<T>::operator=(const Dynamic<T> & souce)
{
	if (capacity != source.capacity) {
		//allocate new memory.
        capacity = source.capacity;
        delete[] data;
        data = new T[source.capacity]; //new_handler gets called in case of failure of memory allocation.
	}
	
	for(int i = 0; i < source.used; i++)
		data[i] = source.data[i];
	used = source.used;
}

template <typename T>
void DynamicBag<T>::~DynamicBag()
{
	delete[] data;
	cout << "Destructing" << endl;
}

template <typename T>
bool DynamicBag<T>::insert(const T & entry)
{
    //check if we have space to insert in existing data array.
    if(used == capacity)
        resize(capacity + 1);

    //insert the T entry.
    data[used] = entry;
    used++;

    // for compatibility with other implementation
    return true;
}

template <typename T>
bool DynamicBag<T>::remove(const T & target)
{
	int i;
    // Better style as a while loop (don't worry about changing)
    for(i = 0; (i < used) && (data[i] != target); i++);

    //if target is not present, i == used.
    if(i == used)
        return false;

    //overwrite at the index of target.
    data[i] = data[used-1];
    used--;

    return true;
}

template <typename T>
void DynamicBag<T>::resize(int new_cap)
{
	if(capacity == new_cap)
        return;

    if(new_cap < used)
        new_cap = used;

    //allocate new memory
    // new_handler gets called in case of failure..
    T *new_data = new T[new_cap]; 

    //copy old items to new memory.
    for(int i = 0; i < used; i++)
        new_data[i] = data [i];

    //free old memory.
    delete[] data;

    data = new_data;

    capacity = new_cap;

}

template <typename T>
int DynamicBag<T>::occurrences(const T &target) const
{
    int occurences = 0;
    for(int i = 0; i < capacity; i++) {
        if (data[i] == target) {
            occurences++;
        }
    }
    return occurences;
}

template <typename T>
void DynamicBag<T>::print_bag() const
{
    std::cout << "Members of the bag: " << std::endl;
    for(int i = 0; i < used; i++)
        std::cout << data[i] << std::endl;
}
