#pragma once

#include <iostream>
#include <fstream>
#include <memory>
#include <set>
#include <forward_list>

void dupliceater(std::unique_ptr<std::ifstream>& input, std::unique_ptr<std::ofstream>& output);