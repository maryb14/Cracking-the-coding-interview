#ifndef heap

#define heap

template <class T>
class Heap {
	std::vector <T> contents;
	const MAX_DIM = 100000;
	int current_size;
	int parent(int index_node) {
		return (index_node - 1) / 2;
	}
	int left_child(int index_node) {
		return 2 * index_node + 1;
	}
	int right_child(int index_node) {
		return 2 * index_node + 2;
	}
	void move_up(int index_node) {
		while (index > 0 && contents[parent(index_node)] > contents[index_node]) {
			swap(contents[parent(index_node)], contents[index_node]);
			index_node = parent(index_node);
		}
	}
public:
	Heap() {
		contents = vector <int>(100000);
		current_size = 0;
	}
	T getMinimum() {
		if (contents.size() > 0) {
			return contest[0];
		}
		throw "Can't get the minimum as the heap is empty.";
	}
	T insert(T new_elem) {
		if (constents.size() < MAX_DIM) {
			contents[current_size++] = new_elem;
			move_up(current_size - 1);
		}
		throw "Heap has reached maximum size.";
	}
};

#endif heap
