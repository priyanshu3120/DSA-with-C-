class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int m=players.size();
        int n=trainers.size();
        
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int count=0;

        int i=0;
        int j=0;

        while(i < m && j < n)
        {
            if(players[i] > trainers[j])
            {
                j++;
            }
            else
            {
                count++;
                i++;
                j++;
            }
        }
        return count;
    }
};