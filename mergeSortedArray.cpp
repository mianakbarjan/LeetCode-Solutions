#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>numsTemp = nums1;
        if (m==0){
            nums1=nums2;
        }
        else if(n==0){
            return;
        }
        else{
            int count1=0; int count2=0; int i=0;
            while(i<m+n){
                if (count1!=m && count2!=n){
                     if (numsTemp[count1]<nums2[count2]){
                    nums1[i]=numsTemp[count1];
                    count1++;
                    i++;
                }
                else if (nums2[count2]<numsTemp[count1]){
                    nums1[i]=nums2[count2];
                    count2++;
                    i++;
                }
                else if(numsTemp[count1]==nums2[count2]){
                    nums1[i]=nums2[count2];
                    count1++;
                    i++;
                }
                }
                else {
                    while (count1!=m){
                        nums1[i]=numsTemp[count1];
                        i++;
                        count1++;
                    }
                    while (count2!=n){
                        nums1[i]=nums2[count2];
                        i++;
                        count2++;
                    }
                }
            }
        }
    }

int main(){
    vector<int> nums1, nums2;
    int m=3, n=3;
    nums1.push_back(1);nums1.push_back(2);nums1.push_back(3);nums1.push_back(0); nums1.push_back(0); nums1.push_back(0);
    nums2.push_back(2);nums2.push_back(4); nums2.push_back(5);
    merge(nums1, m, nums2, n);
}