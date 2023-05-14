#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

#include"my_sort.h"
#include"my_min_max.h"
#include"my_mean.h"
#include"my_std.h"

int main()
{
    std::vector<double> vec;
    int user_number;
    std::cout << "Input data: ";
    while (std::cin >> user_number)
    {
        vec.push_back(user_number);
    }
    std::cout << "\n";

    my_min_max min_max(vec);
    std::cout << "MIN:\t" << min_max.get_min() << std::endl;
    std::cout << "MAX:\t" << min_max.get_max() << std::endl;
    my_mean mean(vec);
    std::cout << "MEAN:\t" << mean.get_mean() << std::endl;
    my_std std(vec, mean.get_mean());
    std::cout << "STD:\t" << std.get_std() << std::endl;
}