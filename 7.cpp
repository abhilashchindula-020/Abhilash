#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 2005

typedef struct {
    int *neighbors;
    int size;
} Node;

Node graph[MAXN];
int dist[MAXN], queue[MAXN];

// Initialize graph
void init_graph(int N) {
    for (int i = 1; i <= N; i++) {
        graph[i].neighbors = (int *)malloc(sizeof(int) * MAXN);
        graph[i].size = 0;
    }
}

// Free memory
void free_graph(int N) {
    for (int i = 1; i <= N; i++) {
        free(graph[i].neighbors);
    }
}

// Add an edge between u and v
void add_edge(int u, int v) {
    graph[u].neighbors[graph[u].size++] = v;
    graph[v].neighbors[graph[v].size++] = u;
}

// BFS from one node
long long bfs(int start) {
    memset(dist, -1, sizeof(dist));
    int front = 0, rear = 0;
    queue[rear++] = start;
    dist[start] = 0;
    long long sum = 0;

    while (front < rear) {
        int u = queue[front++];
        for (int i = 0; i < graph[u].size; i++) {
            int v = graph[u].neighbors[i];
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
        init_graph(N);

        for (int i = 0; i < N - 1; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            add_edge(u, v);
        }

        long long total_distance = 0;
        for (int i = 1; i <= N; i++) {
            total_distance += bfs(i);
        }

        long long total_pairs = (long long)N * (N + 1) / 2;
        long long score = total_distance + total_pairs;

        printf("%lld\n", score);
        free_graph(N);
    }

    return 0;
}
