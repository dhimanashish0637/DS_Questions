#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int V;
	list<int> *adj;
	void DFSutil(int v,bool ver[]);
	public:
		Graph(int V)
		{
			this->V=V;
			adj=new list<int>[V];
		}
		void addEdge(int v,int w)
		{
			adj[v].push_back(w);
		}
		void DFS(int v);
	
};
void Graph::DFSutil(int v,bool ver[])
{
	ver[v]=true;
	cout<<v<<" ";
	list<int>::iterator i; 
    for (i = adj[v] .begin(); i != adj[v].end(); ++i) 
        if (!ver[*i]) 
            DFSutil(*i, ver); 
	
}
void Graph::DFS(int v)
{
	bool *ver=new bool[V];
	for(int i=0;i<V;i++)
	{
		ver[i]=false;
	}
	DFSutil(v,ver);
	
}
int main()
{
	/*Graph g(4);
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); */
    Graph g(5); // Total 5 vertices in graph 
    g.addEdge(1, 0); 
    g.addEdge(0, 2); 
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(1, 4); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(0); 
  
}
