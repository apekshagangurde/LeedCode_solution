class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    
    for (int i = 0; i < 32; ++i) {
        // Shift the result to the left to make room for the next bit
        result <<= 1;
        
        // Check the rightmost bit of n, if it's 1, set the rightmost bit of result to 1
        if ((n & 1) == 1) {
            result |= 1;
        }
        
        // Shift n to the right to consider the next bit
        n >>= 1;
    }
    
    return result;
}
};
