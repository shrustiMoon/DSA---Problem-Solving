class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());

        long long total_mass = mass;
        for(int i=0; i<asteroids.size(); i++){
            if(total_mass < asteroids[i]){
                return false;
            }
            total_mass += asteroids[i];
        }
        return true;
    }
};