#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int V;
	list <int> *adj;
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
		void BFS(int s);
};
void Graph::BFS(int s)
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	list<int>q;
	visited[s]=true;
	q.push_back(s);
list<int>::iterator i;
	while(!q.empty())
	{
		s=q.front();
		cout<<s<<" ";
		q.pop_front();
	 for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
		if (!visited[*i]) 
            {
                visited[*i] = true; 
                q.push_back(*i); 
         } 
		}
	}
}
int main()
{
	Graph g(3);
	g.addEdge(0,1);
	g.addEdge(2,0);
	//g.addEdge(2,0);
//	g.addEdge(2,0);
	//g.addEdge(2,3);
//	g.addEdge(3,3);
	cout<<"After BFS"<<endl;
	g.BFS(2);
}
