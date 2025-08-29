#include <vector>
#include <iostream>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
       
        std::vector<int> theIndexes; 
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums.at(i)+ nums.at(j) == target)
                {
                    theIndexes.push_back(i);
                    theIndexes.push_back(j);
                    break;     
                }
                
            }
            
        }
        return theIndexes;
    }
};