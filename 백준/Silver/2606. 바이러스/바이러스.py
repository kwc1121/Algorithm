computer = int(input())
connect = int(input())
graph = {i: [] for i in range(1, computer + 1)}
visited = [False] * (computer + 1)
cnt = 0

for _ in range(connect):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(node):
    global cnt
    visited[node] = True
    cnt += 1
    for i in graph[node]:
        if not visited[i]:
            dfs(i)

dfs(1)
print(cnt - 1)
