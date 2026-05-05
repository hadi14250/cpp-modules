
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-05</h3>
  Repetition constructs and exception handling — throwing, catching, and recovering cleanly.
  <br>
  <br>
</div>

<br>

# cpp-05 — Repetition & Exceptions

A bureaucracy simulator that doubles as a deep dive into C++ exceptions. Each exercise piles more validation and recovery logic on top, until you've built a small system where failure is a first-class citizen.

<br>

## Exercises

- **ex00 — Mommy, when I grow up, I want to be a bureaucrat!** — `Bureaucrat` with a name and a grade, plus custom `GradeTooHigh` / `GradeTooLow` exceptions.
- **ex01 — Form up, maggots!** — `Form` requires a grade to sign and a grade to execute; `Bureaucrat` can sign it (or fail loudly).
- **ex02 — No, you need form 28B, not 28C...** — Concrete forms: `ShrubberyCreation`, `RobotomyRequest`, and `PresidentialPardon`, each with its own quirks.
- **ex03 — At least this beats coffee-making** — An `Intern` factory that constructs forms by name without a single `if`/`switch` chain in sight.

<br>

## Concepts Covered

- `try` / `catch` / `throw`
- Custom exception classes inheriting from `std::exception`
- Exception safety — leaving objects in a valid state when things go wrong
- Const-correctness on members and methods
- The factory pattern in C++98

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
