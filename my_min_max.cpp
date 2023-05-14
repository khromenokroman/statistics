#include<vector>
#include<algorithm>

#include"my_min_max.h"

my_min_max::my_min_max(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end());
    this->min = *vec.begin();
    this->max = *(vec.end() - 1);
}
