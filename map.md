+---------------------+
|      Piece          |
+---------------------+
| - int x             |
| - int y             |
| - char color        |
+---------------------+
| + isValidMove()     |
| + getX()            |
| + getY()            |
| + getColor()        |
+---------------------+
         ^
         |
+------------------+    +-------------------+    +-------------------+
|       Rook       |    |      Knight       |    |      Bishop       |
+------------------+    +-------------------+    +-------------------+
| + isValidMove()  |    | + isValidMove()    |    | + isValidMove()    |
+------------------+    +-------------------+    +-------------------+
         ^                     ^                       ^
         |                     |                       |
+------------------+    +-------------------+    +-------------------+
|       Queen      |    |        King        |    |       Pawn        |
+------------------+    +-------------------+    +-------------------+
| + isValidMove()  |    | + isValidMove()    |    | + isValidMove()    |
+------------------+    +-------------------+    +-------------------+



+---------------------+
|       Board         |
+---------------------+
| - std::vector<std::vector<Piece*>> board |
+---------------------+
| + isSquareEmpty()   |
| + placePiece()      |
| + getPieceAt()      |
+---------------------+
         |
         |
+---------------------+
|       Game          |
+---------------------+
| - Player* player1   |
| - Player* player2   |
| - Player* currentPlayer |
| - Board board       |
+---------------------+
| + startGame()       |
| + switchTurn()      |
| + isGameOver()      |
| + makeMove()        |
+---------------------+
         |
         |
+---------------------+
|      Player         |
+---------------------+
| - std::string name  |
| - char color        |
+---------------------+
| + getName()         |
| + getColor()        |
+---------------------+
