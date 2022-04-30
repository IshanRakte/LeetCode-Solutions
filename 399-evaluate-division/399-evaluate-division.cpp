class Solution {
public:
    double dfs(string q1,string q2,unordered_map <string, vector<pair<string, double>>> graph,unordered_map <string, int>& visited, bool& found)
    {
        visited[q1]=1;
        if(q1==q2)
        {
            found=true;
            return 1;
        }
        
        for(auto neighbor: graph[q1])
        {
            if(visited[neighbor.first]!=1)
            {
                double pathWeight=dfs(neighbor.first,q2,graph,visited, found);
                if (pathWeight!=-1)
                    return pathWeight=pathWeight*neighbor.second;
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector <double> results;
        unordered_map <string, vector<pair<string, double>>> graph;
        for(int i=0;i<equations.size();i++)
        {
            string u=equations[i][0], v=equations[i][1];
            graph[u].push_back({v,values[i]});
            graph[v].push_back({u, (double)1/values[i]});
        }
        
        for(int i=0;i<queries.size();i++)
        {
            string q1=queries[i][0],q2=queries[i][1]; 
            
            if(graph.find(q1)==graph.end() || graph.find(q2)==graph.end())
            {
                results.push_back(-1);
            }                
            else if(q1==q2)
            {
                results.push_back(1);
            }            
            else
            {
                unordered_map <string, int> visited;
                bool found=false;
                results.push_back(dfs(q1,q2,graph, visited,found));
            }
        }
        return results;
    }
};