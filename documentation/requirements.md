# Simulation Engine
- Physics/AI will run on worker threads.
- The Simluation Engine will contain a world space as a 2D grid for NPCs and Players to move around on. 
- The NPCs will randomly move around the grid.
- The NPCs can be "hit" with spells.
- Players can cast spells as a vector.
- Players will be facing a direction always, from 0 to 360 degrees.
- Players can move around in the 2D space, within bounds.
- NPCs will attack if player within given radius.
# Pulse Server
- Server will update the simulation engine with inputs from players.
- Server will hold a queue of inputs from players. 
- Server will run on on a 60Hz tick rate.
- Server will run on a single thread.