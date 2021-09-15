//
//  histogram.cpp
//  lab03
//
//  Created by Диана on 30.08.2021.
//

#include "histogram.hpp"
#include <vector>

void
find_minmax(vector<double> numbers, double& min, double& max)
{
    min = numbers[0];
    max = numbers[0];
    if (!numbers.size()==0)
        for (double number : numbers) {
            if (number < min) {
                min = number;
            }
            if (number > max) {
                max = number;
            }
        }
    
}

vector <size_t> make_histogram(const Input& data)
{
    double min, max;
    find_minmax(data.numbers, min, max);
    
    vector<size_t> bins(data.bin_count);
    for (double number : data.numbers)
    {
        size_t bin = (size_t)((number - min) / (max - min) * data.bin_count);
        if (bin == data.bin_count)
        {
            bin--;
        }
        bins[bin]++;
    }
    return bins;
}
void
find_sr(vector<size_t> bins, size_t bin_count, double& sr)
{
    sr = 0;
    for (size_t bin : bins)
    {
        sr = sr + bin;
    }
    sr = sr / bin_count;
}

