#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    // traditional method to make graph
    // int m, n;
    // cin >> m >> n;
    // int adj[m + 1][m + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }
    // for (int i = 0; i < m + 1; i++)
    // {
    //     for (int j = 0; j < m + 1; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Optimised solution that we use now a days
    int node, edges;
    cin >> node >> edges;
    vector<int> graph[node + 1];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "Printing the graph" << endl;
    for (int i = 0; i < node; i++)
    {
        if (i >= 1)
        {
            cout << i << "->";
        }

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}