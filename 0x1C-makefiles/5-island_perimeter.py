#!/usr/bin/python3
"""File representing an island"""


def island_perimeter(grid):
    """Returns the perimeter of an island
        perimeter is 0 if not 1 finded in the array, means there is no island,
        each time it has a land near it reduce the perimeter value by one"""
    perimeter = 0
    for i in range(len(grid)):
        only = 0
        for j in range(len(grid[i])):
            flag = 0
            perimeter += 4
            if (grid[i][j] == 1):
                only = 1
                if (grid[i + 1][j] == 1 or i == 0):
                    perimeter -= 1
                    flag += 1
                    only += 1
                if (grid[i - 1][j] == 1) or i == len(grid) - 1:
                    perimeter -= 1
                    flag += 1
                    only += 1
                if (grid[i][j + 1] == 1) or j == 0:
                    perimeter -= 1
                    flag += 1
                    only += 1
                if (grid[i][j - 1] == 1) or j == len(grid[i]) - 1:
                    perimeter -= 1
                    flag += 1
                    only += 1
            if (flag == 0):
                perimeter -= 4
        if (only == 1):
            """just one square surronded by water """
            return 4
    return perimeter
