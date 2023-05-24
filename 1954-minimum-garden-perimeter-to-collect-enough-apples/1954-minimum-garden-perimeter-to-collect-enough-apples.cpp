class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long side=0;
        while(2*side*(side+1)*((2*side)+1)<neededApples){
            side++;
        }
        return side*8;
    }
};