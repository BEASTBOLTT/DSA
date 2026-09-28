#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        adj[vec[i][0]].push_back(make_pair(vec[i][1], vec[i][2]));
        adj[vec[i][1]].push_back(make_pair(vec[i][0], vec[i][2]));
    }

    vector<int> distance(vertices);
    for (int i = 0; i < vertices; i++)
    {
        distance[i] = INT_MAX;
    }
    set<pair<int, int>> st;
    distance[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        auto top = *(st.begin());

        int nodeDis = top.first;
        int node = top.second;

        st.erase(st.begin());

        for (auto x : adj[node])
        {
            if (nodeDis + x.second < distance[x.first])
            {
                auto record = st.find(make_pair(distance[x.first], x.first));
                if (record != st.end())
                {
                    st.erase(record);
                }
                distance[x.first] = nodeDis + x.second;
                st.insert(make_pair(distance[x.first], x.first));
            }
        }
    }

    return distance;
}
