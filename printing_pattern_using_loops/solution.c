#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // complete the code to print the pattern.
    int grid_size = 2 * n - 1; // calculating the size of the grid of pattern

    for (int row = 0; row < grid_size; row++)
    {
        for (int col = 0; col < grid_size; col++)
        {
            // iteration over each cell in the grid box
            int edge_dist = row;
            if (col < edge_dist)
            {
                edge_dist = col; // edge distance = column if col < edge
            }
            if (grid_size - 1 - row < edge_dist)
            {
                edge_dist = grid_size - 1 - row; // edge distance = bottom edge if bottom edge < edge
            }
            if (grid_size - 1 - col < edge_dist)
            {
                edge_dist = grid_size - 1 - col; // edge distance = right edge if right edge < edge
            }
            int cell_value = n - edge_dist; // calculate cell value based on edge distance
            printf("%d ", cell_value);      // print the cell value with a space in between
        }
        printf("\n"); // print newline after each row
    }

    return 0;
}
