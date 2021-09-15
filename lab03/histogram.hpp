//
//  histogram.hpp
//  lab03
//
//  Created by Диана on 30.08.2021.
//

#ifndef histogram_hpp
#define histogram_hpp

#include <vector>

using namespace std;

struct Input {
vector<double> numbers;
size_t bin_count;
};

void
find_minmax(vector<double> numbers, double& min, double& max);

vector <size_t> make_histogram(const Input& data);

void find_sr(vector<size_t> bins, size_t bin_count, double& sr);

#endif /* histogram_hpp */
