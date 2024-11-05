from collections import deque

node, value, start = map(int, input().split())
graph = {i:[] for i in range(1, node+1)}
graph[0] = []
visited = [False] * (node + 1)

for i in range(value):
    a,b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

for i in graph.values():
    i.sort()

def dfs(node):
    print(node,end=" ")
    visited[node] = True
    for i in graph[node]:
        if visited[i] == True:
            continue
        dfs(i)


visited1 = [False] * (node + 1)
def bfs(node):
    queue = deque([node])
    while queue:
        x = queue.popleft()
        if visited1[x] == True:
            continue
        visited1[x] = True
        print(x,end=" ")

        for i in graph[x]:
            if visited1[i] == True:
                continue

            queue.append(i)

dfs(start)
print()
bfs(start)