class Solution {
  public:
    int swapNibbles(int n) {
        return((n & 0xf0)>>4 | (n & 0x0f)<<4);
        
    }
};