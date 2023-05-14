#include <vector>
#include <numeric>

#include"my_mean.h"

my_mean::my_mean(std::vector<double> &vec)
{
    this->mean = std::accumulate(vec.begin(), vec.end(), 0) / double(vec.size());
}


