# 🎮 Intro to C++: Quiz Game

A console quiz game that helps students review the basics of **Introduction to C++**. Pick a level, answer questions about real C++ code, see why each answer is right or wrong, and compete with friends on the score table.

> First-year team project (Level 4), Imam Abdulrahman Bin Faisal University (IAU).

---

## 💡 Why we built it

When we were studying for our first C++ course, we couldn't find one place to test ourselves on everything we had learned. So we built a program that summarizes the course basics, quizzes you on them, and makes reviewing fun by adding scores and a competition. It's meant to be a reference that students can come back to while studying.

## ✨ Features

- **Levels 1–4:** choose your level, and each one has its own questions.
- **Code-output questions:** "What will this code print?", with an explanation of the correct answer.
- **Score tracking:** counts right and wrong answers.
- **Score table:** reads players' scores from a file and sorts them with bubble sort to show the ranking.
- **Profile updates:** change your username or level.
- **Comments wall:** leave a message for other players, saved to a file.
- **Colored console output** and input checks (for example, converting uppercase answers).

## 📁 Project structure

```
.
├── src/
│   ├── main.cpp            # Game flow, levels, questions, score table, comments
│   ├── intro_header.h      # user_info struct + shared function declarations
│   └── intro_header.cpp    # Helpers: take_level, changeColor, check_upper
├── data/
│   ├── mcq_questions.txt   # Multiple-choice question bank
│   ├── score_table.txt     # Players and scores
│   └── comments.txt        # Messages left by players
└── docs/
    └── abstract.pdf        # Project poster: abstract, methodology, results
```

## ▶️ How to run

The game uses `conio.h` and `windows.h` (console colors), so it runs on **Windows**. Run it from the project root so it can find the `data/` folder:

```bash
g++ src/main.cpp src/intro_header.cpp -o intro_cpp_game.exe
intro_cpp_game.exe
```

You can also open the files in Dev-C++ or Visual Studio and run them there.

## 🧠 Concepts used

Structs · functions & header files · arrays · strings · pointers · file I/O (`ifstream` / `ofstream`) · bubble sort · namespaces · console colors
