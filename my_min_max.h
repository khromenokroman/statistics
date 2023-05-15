#pragma once
#include <vector>
#include <algorithm>

#include "my_sort.h"

class my_min_max : my_sort
{
private:
    int min;
    int max;

public:
    my_min_max(std::vector<double> &vec); // принимает вектор сортирует по возростанию берет мин и макс
    double get_min() { return this->min; };
    double get_max() { return this->max; };
    ~my_min_max() override {};
    my_min_max(const my_min_max &copy){};
};