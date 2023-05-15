#pragma once
#include <vector>

#include "my_sort.h"

class my_std : my_sort
{
private:
    double std_m;

public:
    my_std(std::vector<double> &vec, const double mean); // принимает вектор и среднее арифметическое этого вектора и находит среднеквадратическое отклонение
    double get_std() { return this->std_m; };
    ~my_std() override {};
    my_std(const my_std &copy){};
};