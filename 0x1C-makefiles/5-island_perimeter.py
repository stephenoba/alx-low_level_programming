#!/usr/bin/python3
"""
Contains function island_perimeter
"""


def island_perimeter(grid):
    """
    eturns the perimeter of the island described in grid

    ARGS
    -----
    grid (list) -representation of a grid

    RETURN
    ------
    Perimeter of the grid
    """
    # get locations of each unit (x, y)
    perimeter = 0
    if not grid:
        return 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                # check sourounding units and add 1 to perimeter
                #   if there are no lands
                # check north
                if ((x == 0 and grid[x][y])
                        or ((x - 1) >= 0 and not grid[x-1][y])):
                    perimeter += 1
                # check east
                if ((y == len(grid[x]) - 1 and grid[x][y])
                        or ((y + 1) < len(grid[x]) and not grid[x][y+1])):
                    perimeter += 1
                # check south
                if ((x == len(grid)-1 and grid[x][y])
                        or ((x + 1) < len(grid) and not grid[x+1][y])):
                    perimeter += 1
                # check west
                if ((y == 0 and grid[x][y])
                        or ((y - 1) >= 0 and not grid[x][y-1])):
                    perimeter += 1
    return perimeter
