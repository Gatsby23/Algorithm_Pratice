//
// Created by robotics on 2021/2/21.
//

#ifndef ALGORITHM_STUDY_BINARYSEARCH_H
#define ALGORITHM_STUDY_BINARYSEARCH_H

#include <vector>
using std::vector;

class BinarySearch{
public:
    // 这里参数r的含义并不好,看看怎么优化好点
    static int rank(int key, const std::vector<int>& a, bool r = false){
        int lo = 0;
        int hi = a.size() - 1;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(key < a[mid])
                hi = mid - 1;
            else if( key > a[mid])
                lo = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};

#endif //ALGORITHM_STUDY_BINARYSEARCH_H
