# Connect 4 specifications
# Anthony Chen, Michelle Lucero, Jordan Yaqoob

* Display  
- user(2 users) choice -- pick a chip? 'X' or 'O' chips
- represent the board--(row = 6, col = 7) using 2-dimensional arrays
- display reason for termination(tie or win) -- if win display the winning user


* API
- take input from user of chip type('X' or 'O')
- build the 2D array
- Make function buildBoard()
- creates a 7 by 6 2D array
- take input of column selection
- create function makeMove()
- makeMove takes board, column, and chip color (x or o) as an input
- returns board with the chip inserted in
- gravity-- how to make chip fall
- user select a column then place chip in the lowest unoccupied row keep track of user's turn
- alternate turns

# Checking Win
* Create function checkWin()
- Takes board as input
- return boolean
- iterates over board and checks if the same colored chip appears
four or more times in order (horizontally, vertically, diagonally)
- terminate once 4 or more of same colored chips are consecutive(diagonal,horizontal,vertical) == win or terminate if all cells are filled == tie

# Splitting of work
- Member 1: Complete buildBoard() function
- Member 2: Complete makeMove() function
- Member 3: Complete checkWin() function 
