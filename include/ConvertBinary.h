//
// Created by Robotics_qi on 2021/2/23.
//

#ifndef ALGORITHM_STUDY_CONVERTBINARY_H
#define ALGORITHM_STUDY_CONVERTBINARY_H
#include <vector>
#include <string>
void ConvertBinary(int num, std::vector<std::string>& binary_format){
    while(num != 0){
        if(num % 2 == 0)
            binary_format.push_back(std::to_string(0));
        else
            binary_format.push_back(std::to_string(1));
        num /= 2;
    }
}
#endif //ALGORITHM_STUDY_CONVERTBINARY_H
