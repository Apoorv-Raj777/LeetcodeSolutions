class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows = len(grid)
        cols = len(grid[0])
        visit = set()

        def bfs(r, c):
            search_queue = deque()
            search_queue.append((r, c))
            visit.add((r, c))

            directions = [[1,0], [-1,0], [0,1], [0,-1]]

            while search_queue:
                row, col = search_queue.popleft()

                for dr, dc in directions:
                    nr, nc = row + dr, col + dc

                    if (nr in range(rows) and nc in range(cols) 
                        and grid[nr][nc] == '1' 
                        and (nr, nc) not in visit):
                        
                        search_queue.append((nr, nc))
                        visit.add((nr, nc))

        count = 0

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == '1' and (r, c) not in visit:
                    bfs(r, c)
                    count += 1

        return count