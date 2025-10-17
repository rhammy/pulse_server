# 10162025
- I should be avoiding raw pointers so im gonna convert the pub/sub implementations to smart pointers.
  - This is actually a bad idea, because the pub/sub classes are not implying ownership so they can stick to references and raw pointers.
  - Only use smart pointers when implying ownership.
- I copied these classes from my task scheduler project on github, which I should steal a bit more from. 
- I'll need to queue up client inputs to the server in order to update the global game state. 
