#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        vector <int> sums;
        for (int i=0; i<nums.size();i++){
            int sum = nums[i];
            sums.push_back(sum);
            for (int j=i+1; j<nums.size();j++){
                sum+=nums[j];
                sums.push_back(sum);
            }
        }
        sort(sums.begin(), sums.end());
        return sums[sums.size()-1];
    }




int main(){
    vector <int> numbers;
    numbers.push_back(-2);
    numbers.push_back(1);
    numbers.push_back(-3);
    numbers.push_back(4);
    numbers.push_back(-1);
    numbers.push_back(2);
    numbers.push_back(1);
    numbers.push_back(-5);
    numbers.push_back(4);
    int x = maxSubArray(numbers);
    cout << x;
}