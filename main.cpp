//
// Created by robotics on 2021/2/21.
//

#include <iostream>
#include <ConvertBinary.h>
int main()
{
    int num = 89;
    std::vector<std::string> binary_format;

    ConvertBinary(num, binary_format);

    std::string result;
    while(binary_format.size() != 0){
        result += binary_format.back();
        binary_format.pop_back();
    }
    std::cout << result << std::endl;
}
