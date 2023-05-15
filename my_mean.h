#pragma once
#include <vector>

#include "my_sort.h"

class my_mean : my_sort
{
private:
    double mean;

public:
    my_mean(std::vector<double> &vec); // принимает вектор и находит среднее арифметическое вектора
    double get_mean() { return this->mean; };
    ~my_mean() override {};
    my_mean(const my_mean &copy){};
};
