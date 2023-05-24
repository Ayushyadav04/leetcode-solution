class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max_time=releaseTimes[0];
        char key=keysPressed[0];
        for(int i=1;i<releaseTimes.size();i++){
            if(releaseTimes[i]-releaseTimes[i-1]>max_time){
                max_time=releaseTimes[i]-releaseTimes[i-1];
                key=keysPressed[i];
            }
            else if(releaseTimes[i]-releaseTimes[i-1]==max_time){
                if(int(keysPressed[i])>int(key)){
                    max_time=releaseTimes[i]-releaseTimes[i-1];
                    key=keysPressed[i];
                }
            }
        }
        return key;
    }
};