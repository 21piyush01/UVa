#include <bits/stdc++.h>
#include <list>
#include <stack>
using namespace std;
 
class Graph
{
    int V;    // No. of vertices'
    list<int> *adj;
    void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);
    void topologicalSort();
} ;
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack)
{
    visited[v] = true;
    list<int>::iterator i;
    for(i=adj[v].begin(); i!=adj[v].end(); i++)
    {  
        if(!visited[*i])
        topologicalSortUtil(*i, visited, Stack) ;
    }
    Stack.push(v+1);
}
 
void Graph::topologicalSort()
{
    stack<int> Stack;
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
    {  visited[i] = false ; }
    for(int i = 0; i < V; i++)
    {  
      if(visited[i] == false)
      { topologicalSortUtil(i, visited, Stack) ; }
    }
    while(Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
 
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    cout << "Following is a Topological Sort of the given graph \n";
    g.topologicalSort();
    return 0;
}