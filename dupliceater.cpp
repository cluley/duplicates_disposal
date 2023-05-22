#include "dupliceater.h"

void dupliceater(std::unique_ptr<std::ifstream>& input, std::unique_ptr<std::ofstream>& output) {
	int initial_size(0);
	(*input) >> initial_size;

	std::set<int> my_set;
	std::forward_list<int> my_list;

	int temp(0);
	while ((*input) >> temp) {
		my_set.emplace(temp);
	}

	for (const auto& n : my_set) {
		my_list.push_front(n);
	}

	for (const auto& n : my_list) {
		(*output) << n << '\n';
	}
}