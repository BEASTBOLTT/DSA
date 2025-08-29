class Solution {
public:
    long long flowerGame(int n, int m) {
        // long long cnt = 0;
        // for(int x = 1; x <= n; x++){
        //     for(int y = 1; y <= m; y++){
        //         if((x+y)%2 != 0){
        //             cnt++;
        //         }
        //     }
        // }
        return 1ll * n * m/2;
    }
};