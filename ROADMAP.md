## 🔧 Roadmap to Expand CLI Calculator Project

A step-by-step plan to evolve your basic calculator into a full-featured C++ learning playground.

---

### ✅ Stage 1: Basic Loop & Exit
- [ ] Wrap calculator in a `while (true)` loop
- [ ] Allow user to type `exit` to quit
- [ ] Gracefully handle bad input

---

### ✅ Stage 2: Calculation History
- [ ] Use `std::vector<double>` to store the last 5 results
- [ ] Command: `history` prints the recent results
- [ ] Optional: Limit to 5 results (rolling history)

---

### ✅ Stage 3: Refactor Into a Class
- [ ] Create a `Calculator` class
- [ ] Move operations into member functions
- [ ] Store history as a private member
- [ ] Main loop inside `Calculator::run()`

---

### ✅ Stage 4: Advanced Math Functions
- [ ] Add commands for:
  - `sqrt x`
  - `pow x y`
  - `mod x y`
  - Optionally: `sin x`, `cos x`
- [ ] Use `<cmath>` for math operations
- [ ] Handle invalid input (e.g., sqrt(-1))

---

### ✅ Stage 5: Custom Input Parser
- [ ] Accept string-based commands like `add 3 4`
- [ ] Use `std::stringstream` to tokenize input
- [ ] Support multiple formats: `3 + 4`, `add 3 4`, `pow 2 8`

---

### ✨ Bonus Features
- [ ] Save history to file (`ofstream`)
- [ ] Load previous history on startup
- [ ] Time each calculation using `<chrono>`
- [ ] Add unit tests using assertions
- [ ] Add a menu or help command

---