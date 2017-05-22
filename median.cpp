// Copyright (C) 2014 University of Kaiserslautern
// Microelectronic System Design Research Group
//
// This file is part of the FPGAHS Course
// de.uni-kl.eit.course.fpgahs
//
// Matthias Jung <jungma@eit.uni-kl.de>
// Christian De Schryver <schryver@eit.uni-kl.de>

#include<image.h>
#include <vector>
using namespace std;

void medianFilter(const unsigned char input[][HEIGHT], unsigned char output[][HEIGHT], unsigned int width, unsigned int height)
{
    for(unsigned int output_w = 1; output_w < width-1; output_w++){
        for(unsigned int output_h = 1 ; output_h < height-1; output_h++){
        vector<unsigned char> tmp;
            for(int w = -1 ; w < 2; w++){
                for(int h = -1 ; h < 2; h++){
                    tmp.push_back(input[output_w-w][output_h-h]);
                }
            }
        std::sort (tmp.begin(), tmp.end());
        output[output_w][output_h] = tmp.at(5);
        }
    }


}

