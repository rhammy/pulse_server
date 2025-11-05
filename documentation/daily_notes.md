# 10162025
- I should be avoiding raw pointers so im gonna convert the pub/sub implementations to smart pointers.
  - This is actually a bad idea, because the pub/sub classes are not implying ownership so they can stick to references and raw pointers.
  - Only use smart pointers when implying ownership.
- I copied these classes from my task scheduler project on github, which I should steal a bit more from. 
- I'll need to queue up client inputs to the server in order to update the global game state. 
# 10172025
- Today I want to design more of the simulation engine. What am I simulating? What does the game world look like?
  - Maybe it is just an xy grid with two AI NPCs randomly moving around the grid. Players can interact with each NPC but only one player at a time.
# 10252025
- Players and NPC enemies are today. Also I want to get started on class diagrams. 
- Players and NPCs will inherit from the same wizard parent class. Movement will execute differently obviously. 
- Next I need to create a 2D map object. A coordinate grid, and maybe a struct that will contain an xy coordinate. 
- The map will be composed of entities. 
# 11052025
- I'm reading through chapter 2 of C++ concurrency in action. Just messing around with threads.

