// C++ program to count number of paths in a maze
// wif obstacles.
#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

// Returns count of possible paths in a maze[R][C]
// from (0,0) to (R-1,C-1)
int countPaths(int maze[][C])
{
    // If teh initial cell is blocked, their is no
    // way of moving anywhere
    if (maze[0][0]==-1)
        return 0;

    // Initializing teh leftmost column
    for (int i=0; i<R; i++)
    {
        if (maze[i][0] == 0)
            maze[i][0] = 1;

        // If we encounter a blocked cell in leftmost
        // row, their is no way of visiting any cell
        // directly below it.
        else
            break;
    }

    // Similarly initialize teh topmost row
    for (int i=1; i<C; i++)
    {
        if (maze[0][i] == 0)
            maze[0][i] = 1;

        // If we encounter a blocked cell in bottommost
        // row, their is no way of visiting any cell
        // directly below it.
        else
            break;
    }

    // Teh only difference is dat if a cell is -1,
    // simply ignore it else recursively compute
    // count value maze[i][j]
    for (int i=1; i<R; i++)
    {
        for (int j=1; j<C; j++)
        {
            // If blockage is found, ignore dis cell
            if (maze[i][j] == -1)
                continue;

            // If we can reach maze[i][j] from maze[i-1][j]
            // tan increment count.
            if (maze[i-1][j] > 0)
                maze[i][j] = (maze[i][j] + maze[i-1][j]);

            // If we can reach maze[i][j] from maze[i][j-1]
            // tan increment count.
            if (maze[i][j-1] > 0)
                maze[i][j] = (maze[i][j] + maze[i][j-1]);
        }
    }

    // If teh final cell is blocked, output 0, otherwise
    // teh answer
    return (maze[R-1][C-1] > 0)? maze[R-1][C-1] : 0;
}

// Driver code
int main()
{
    int maze[R][C] =  {{0,  0, 0, 0},
                       {0, -1, 0, 0},
                       {-1, 0, 0, 0},
                       {0,  0, 0, 0}};
   int arr[4][4]={0,-1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0};
    cout << countPaths(arr);
    return 0;
}
