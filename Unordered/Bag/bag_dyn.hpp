template <typename T>
DynamicBag<T>::DynamicBag(int initial_cap)
{
	data = new T [initial_cap];
	capacity = initial_cap;
	used = 0;	
}

template <typename T>
DynamicBag<T>::DynamicBag(const DynamicBag<T> & other_bag) {

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
void DynamicBag<T>::operator=(const Dynamic<T> & souce) {
	if (capacity != source.capacity) {
		
	}
}


