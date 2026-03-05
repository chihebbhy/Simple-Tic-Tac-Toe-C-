# Tic-Tac-Toe Console Game in C++

This is a **console-based Tic-Tac-Toe game** implemented in C++. The game allows two players to take turns playing on a 3x3 grid, handles score tracking, detects wins and draws, and allows replaying without restarting the program.

---

## 🛠 Features

* **Two-player gameplay**: Players alternate between X and O.
* **Board display**: Console-based 3x3 grid with numbered cells.
* **Input validation**: Ensures players pick a valid, unoccupied cell (1-9).
* **Win detection**: Checks rows, columns, and diagonals for a winning combination.
* **Draw detection**: Declares a draw if all cells are filled without a winner.
* **Score tracking**: Keeps track of wins for X, O, and draws.
* **Replay option**: Players can start a new game immediately after finishing.

---

## 🧩 How It Works

* **Initialization**: The game initializes a 3x3 board and resets all game states.
* **Gameplay Loop**:

  1. Display the current board.
  2. Prompt the current player to choose a cell.
  3. Validate input and update the board.
  4. Check for a winner or draw.
  5. Switch turns.
* **Game Over**: The winner or draw is displayed along with the score. Players can choose to play again.

---

## 🛠 Technologies & Concepts

* **C++ Classes**: Encapsulation of game logic within a `Game` class.
* **2D Arrays**: Represents the Tic-Tac-Toe board.
* **Loops & Conditionals**: For game flow, turn handling, and win/draw detection.
* **Functions**: Modular code with functions like `InitBoard()`, `PrintGame()`, `PlayTurn()`, and `CheckWin()`.
* **Console I/O**: `cin` and `cout` for player interaction.
* **System Calls**: `system("cls")` for clearing the console between turns (Windows-specific).

---

## 🎮 How to Run

1. Compile the C++ file using a C++ compiler, for example:

```bash
g++ TicTacToe.cpp -o TicTacToe
```

2. Run the compiled executable:

```bash
./TicTacToe
```

3. Follow the on-screen instructions to play.

---

## 📌 Gameplay Instructions

* Players take turns choosing a cell by entering a number **1-9** corresponding to the board positions:

```
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9
```

* The game automatically checks for wins or draws after each move.
* After the game ends, the score is displayed, and you can choose to play again.

---

## ✅ Improvements & Learning Outcomes

* Learned **class design** and encapsulation in C++.
* Implemented **input validation** and user-friendly prompts.
* Applied **game logic for win/draw detection**.
* Practiced **recursive replay** and state resetting without restarting the program.
* Managed **score tracking** and console updates.

---

This project is a **simple yet complete implementation of Tic-Tac-Toe** in C++, ideal for practicing game logic, loops, conditionals, and object-oriented programming.
