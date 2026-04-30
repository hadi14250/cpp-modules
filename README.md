
<div align="center">
<a href="https://github.com/hadi14250">
    <img src="github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">C++</h3>
    Dive deep into encapsulation, inheritance, polymorphism, and abstraction.
  <br>
  <br>
</div>

<br>

# cpp-modules

A progressive journey through modern C++ and object-oriented programming. Each module builds on the previous one, moving from the language fundamentals to advanced features such as templates, the STL, and generic programming. The goal is to write modular, scalable, and efficient C++ code while internalizing the four pillars of OOP: **encapsulation, inheritance, polymorphism,** and **abstraction**.

<br>

## C++ Module Summaries

- **cpp00** — Namespaces, classes, member functions, stdio streams, initialization lists, static, and const. The starting point for everything that follows.

- **cpp01** — Memory allocation, pointers, references, pointers to member functions, and the switch statement. The mechanics of how C++ moves data around.

- **cpp02** — Ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form (default constructor, copy constructor, copy assignment operator, destructor).

- **cpp03** — Inheritance: building class hierarchies, deriving classes, and managing the relationship between base and derived types.

- **cpp04** — Subtype polymorphism, abstract classes, and interfaces. Designing flexible class structures around virtual functions.

- **cpp05** — Repetition constructs and exception handling — throwing, catching, and recovering cleanly from errors.

- **cpp06** — C++ casting: `static_cast`, `dynamic_cast`, `const_cast`, and `reinterpret_cast`, and when each one is the right tool.

- **cpp07** — Templates: template functions, template classes, and the foundations of generic programming.

- **cpp08** — Templated containers, iterators, and algorithms — the building blocks of the STL.

- **cpp09** — The Standard Template Library in practice: containers, algorithms, and idiomatic STL code.

<br>

## Repository Layout

Each module lives in its own directory (`cpp-00` through `cpp-09`) and contains the exercises for that module. Every exercise has its own subdirectory with source files and a `Makefile`.

```
cpp-modules/
├── cpp-00/
├── cpp-01/
├── ...
└── cpp-09/
```

<br>

## Building & Running

Each exercise is self-contained. From inside an exercise directory:

```sh
make        # build
./<binary>  # run
make clean  # remove object files
make fclean # remove object files and the binary
make re     # full rebuild
```

The code targets the C++98 standard, in line with the 42 curriculum.

<br>
