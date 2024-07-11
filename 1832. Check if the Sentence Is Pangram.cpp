//https://www.youtube.com/watch?v=rMM8Brb-lko&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=2
//https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);

        for(char &ch:sentence){
            int index=ch-'a';
            arr[index]++;
        }

        for(int &count:arr){
            if(count==0){
                return false;
            }
        }
        return true;
    }

};
