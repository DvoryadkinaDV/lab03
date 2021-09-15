//
//  svg.hpp
//  lab03
//
//  Created by Диана on 30.08.2021.
//

#ifndef svg_hpp
#define svg_hpp

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string
make_info_text();

void
svg_begin(double width, double height);
void
svg_end();
void
svg_text(double left, double baseline, string text) ;
void
svg_rect(double x, double y, double width, double height,string stroke, string fill);
void
show_histogram_svg(const vector<size_t>& bins, double s);

#endif /* svg_hpp */
