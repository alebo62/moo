#include "median.h"
#include <algorithm>
#include <stdexcept>

using std::domain_error;
using std::sort;
using std::vector;

double median(vector<double> vec)
{
    typedef vector<double>::size_type sz;
    sz size = vec.size();
    if(size == 0)
        throw domain_error("Median of empty vector");

    sort(vec.begin(), vec.end());
    sz mid = size / 2;

    return size % 2 == 0 ? (vec[mid - 1] + vec[mid]) / 2 : vec[mid];
    }
