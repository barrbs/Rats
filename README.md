# Rats
Taken from the spec:

At each turn the player may take one of these actions:
Move one step north, east, south, or west, and do not drop a poison pellet. If the player attempts to move out of the arena (e.g., south, when on the bottom row), the player does not move, and does not drop a pellet. If the player moves to a grid point currently occupied by a rat, the player dies.
Do not move, but attempt to drop a poison pellet. If there is already a poison pellet at that grid point, no additional pellet is dropped; a grid point may have at most one poison pellet. The player has an unlimited supply of poison pellets.
The game allows the user to select the player's action: n/e/s/w for movement, or x for dropping a poison pellet. The user may also just hit enter to have the computer select the player's move.

After the player moves, it's the rats' turn. Each rat has an opportunity to move. A rat that has previously eaten a poison pellet will not move if it attempted to move on the previous turn. Otherwise, it will pick a random direction (north, east, south, west) with equal probability. The rat moves one step in that direction if it can; if the rat attempts to move off the grid, however, it does not move (but this still counts as a poisoned rat's attempt to move, so it won't move on the next turn). More than one rat may occupy the same grid point; in that case, instead of R, the display will show a digit character indicating the number of rats at that point (where 9 indicates 9 or more).

If after a rat moves, it occupies the same grid point as the player (whether or not there's a poison pellet at that point), the player dies. If the rat lands on a grid point with a poison pellet on it, it eats that pellet (so the pellet is no longer at that point). If this is the second poison pellet the rat has eaten, it dies. If more than one rat lands on a spot that started the turn with a poison pellet on it, only one of them eats the pellet.
