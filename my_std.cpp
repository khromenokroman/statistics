#include <vector>
#include <cmath>
#include <numeric>

#include"my_std.h"

my_std::my_std(std::vector<double> &vec, const double mean)
{
    this->std_m = 0;

    std::vector<double>::iterator itr;
    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        *itr = std::pow((*itr - mean), 2);
    }
    this->std_m = std::sqrt(std::accumulate(vec.begin(), vec.end(), 0) / vec.size());
}