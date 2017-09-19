#ifndef sorting

#define sorting

#include <vector>


template <class T>
class Sorting {
	std::vector <T> merge(const std::vector <T> &first_vector, const std::vector <T> &second_vector) {
		std::vector <T> result;
		int first_index = 0, second_index = 0;
		while (first_index != first_vector.size() || second_index != second_vector.size()) {
			if (first_index == first_vector.size()) {
				result.push_back(second_vector[second_index++]);
			}
			else if (second_index == second_vector.size() || first_vector[first_index] <= second_vector[second_index]) {
				result.push_back(first_vector[first_index++]);
			}
			else {
				result.push_back(second_vector[second_index++]);
			}
		}
		return result;
	}
	std::pair <int, int> partition(std::vector <T> &input_vector, T pivot, int begin, int end) {
		int leq = begin;
		int eq = begin;
		int grt = end;
		while (eq != grt) {
			if (input_vector[eq] == pivot) {
				eq++;
			} 
			else if(input_vector[eq] < pivot) {
				swap(input_vector[leq], input_vector[eq]);
				leq++; eq++;
			}
			else {
				swap(input_vector[grt - 1], input_vector[eq]);
				grt--;
			}
		}
		return make_pair(leq, grt);
	}
public: 
	std::vector <T> merge_sort(const std::vector <T> input_vector) {
		if (input_vector.size() == 1) {
			return input_vector;
		}
		else {
			std::vector <T>::const_iterator middleIterator = input_vector.begin() + input_vector.size() / 2;
			std::vector <T> first_half(input_vector.begin(), middleIterator);
			std::vector <T> second_half(middleIterator, input_vector.end());
			first_half = merge_sort(first_half);
			second_half = merge_sort(second_half);
			return merge(first_half, second_half);
		}
	}
	void quick_sort(std::vector <T> &input_vector, int begin, int end) {
		if (begin + 1 < end) {
			T pivot = input_vector[(begin + end) / 2];
			std::pair <int, int> position_parted = partition(input_vector, pivot, begin, end);
			quick_sort(input_vector, begin, position_parted.first);
			quick_sort(input_vector, position_parted.second, end);
		}
	}
};

#endif
