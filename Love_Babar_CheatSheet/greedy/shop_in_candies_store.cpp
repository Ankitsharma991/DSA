class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool compare(pair<int, int> a, pair<int, int> b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> vec;
        for(int i=0;i<n;i++){
            pair<int, int> p = make_pair(start[i], end[i]);
            vec.push_back(p);
        }
        sort(vec.begin(), vec.end(), compare);
        
        int count = 1;
        int meetAns = vec[0].second;
        for(int i=0;i<n;i++){
            if(vec[i].first>meetAns){
                count++;
                meetAns = vec[i].second;
            }
        }
        return count;
    }
};