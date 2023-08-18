class Solution {
    void dfs(vector<vector<int>>&adjls , int s , int d ,vector<int>& visited , bool& res){
        visited[s]=1;
        if(s==d)
            {res = true;return;}
            
        for(auto it :adjls[s])
        {
            if(visited[it]!=1){
                if(it==d)
                    {res= true;return;}
                //cout<<it<<d<<endl;
                dfs(adjls , it , d , visited ,res);
            }
               
        }

        //return false ;
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination ) {
        vector<vector<int>> adjls (n+1);
        vector <int> visited(n+1);
        bool res =false ;

        for(auto it : edges){
            adjls[it[0]].push_back(it[1]);
            adjls[it[1]].push_back(it[0]);
        }

        dfs(adjls , source , destination ,visited ,res);
        return res ;
    }
};