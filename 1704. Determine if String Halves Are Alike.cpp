//https://www.youtube.com/watch?v=oSSMo0PCQts&list=PLpIkg8OmuX-KRHVXwqSixQC9UE6DsHnWa&index=8
//https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
public:

bool isVowel(char &ch){
    return(ch=='a' ||ch=='e' ||ch=='o' || ch=='i' || ch=='u' ||
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
}
    bool halvesAreAlike(string s) {
        int n=s.length();
        int mid=n/2;

        int countL=0;
        int countR=0;
        int i=0, j=mid;

         while(  i<n/2 && j<n){
            if(isVowel(s[i])) countL++;
            if(isVowel(s[j])) countR++;

            i++;
            j++;
        }

        return countL==countR;

        
    }
};
