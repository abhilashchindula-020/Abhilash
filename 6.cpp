#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 2005

int adj[MAXN][MAXN];     // Adjacency list
int degree[MAXN];        // Degree to help build adjacency
int dist[MAXN];          // Distance array for BFS
int queue[MAXN];         // Simple queue for BFS

// BFS from a source node to compute distances to all others
long long bfs(int start, int N) {
    memset(dist, -1, sizeof(dist));
    int front = 0, rear = 0;
    queue[rear++] = start;
    dist[start] = 0;

    long long sum = 0;

    while (front < rear) {
        int u = queue[front++];
        for (int i = 0; i < degree[u]; i++) {
            int v = adj[u][i];
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                queue[rear++] = v;
                sum += dist[v];
            }
        }
    }

    return sum;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // Reset adjacency list and degree
        for (int i = 1; i <= N; i++) {
            degree[i] = 0;
        }

        for (int i = 0; i < N - 1; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            adj[u][degree[u]++] = v;
            adj[v][degree[v]++] = u;
        }

        long long total_distance = 0;

        // Run BFS from every node to get distances
        for (int i = 1; i <= N; i++) {
            total_distance += bfs(i, N);
        }

        long long total_pairs = (long long)N * (N + 1) / 2;
        long long score = total_distance + total_pairs;

        printf("%lld\n", score);
    }

    return 0;
}
