lass Solution {
  public:
  	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	  	vector <bool> vis (V, false);
	    int s = 0;
	    vis[s] = true; // Initially mark source vertex as visited(true)
	    vector <int> res;
	    queue<int> q;
	    q.push(s); // Push the source vertex to queue

	    while (!q.empty()) // Till queue is not empty
	    {
	        int t = q.front();
	        res.push_back (t);

	        q.pop(); // Pop the queue front

	        for (int v :
	             adj[t]) // Traverse through all the connected components of front
	        {
	            if (!vis[v]) { // If they are not visited, mark them visited and add
	                           // to queue
	                vis[v] = true;
	                q.push(v);
	            }
	        }
	    }
	    return res;
  	}
};
