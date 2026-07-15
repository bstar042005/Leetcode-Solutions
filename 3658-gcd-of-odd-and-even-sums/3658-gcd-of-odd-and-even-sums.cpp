class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int countOdd=1;
        int countEven=2;
        for(int i=0;i<n;i++)
        {
            sumOdd+=countOdd;
            countOdd+=2;
            sumEven+=countEven;
            countEven+=2;
        }
        int maxi=min(sumOdd,sumEven);
        int ans=0;
        for(int i=1;i<=maxi;i++)
        {
            if(sumOdd%i==0 && sumEven%i==0)
            {
                ans=i;
            }
        }
        return ans;
    }
};