
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

A progressive journey through modern C++ and object-oriented programming. Each module builds on the previous one — moving from language fundamentals to advanced features such as templates, the STL, and generic programming. The goal is to write modular, scalable, and efficient C++ code while internalizing the four pillars of OOP: **encapsulation, inheritance, polymorphism,** and **abstraction**.

<br>

## Modules at a Glance

| Module | Focus | Key Concepts |
| :----: | :---- | :---- |
| [**cpp-00**](./cpp-00) | Getting started | Namespaces, classes, member functions, stdio streams, init lists, `static`, `const` |
| [**cpp-01**](./cpp-01) | Memory & references | Heap vs. stack, pointers, references, member function pointers, `switch` |
| [**cpp-02**](./cpp-02) | Ad-hoc polymorphism | Operator overloading & the Orthodox Canonical Class Form |
| [**cpp-03**](./cpp-03) | Inheritance | Single & multiple inheritance, base/derived relationships, the diamond problem |
| [**cpp-04**](./cpp-04) | Subtype polymorphism | Virtual functions, abstract classes, interfaces |
| [**cpp-05**](./cpp-05) | Repetition & exceptions | Loops, `try` / `catch` / `throw`, custom exception classes |
| [**cpp-06**](./cpp-06) | C++ casts | `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast` |
| [**cpp-07**](./cpp-07) | Templates | Function & class templates, generic programming |
| [**cpp-08**](./cpp-08) | Templated containers | Iterators, algorithms, STL building blocks |
| [**cpp-09**](./cpp-09) | STL in practice | Containers, algorithms, idiomatic STL code |

<br>

## Repository Layout

Each module lives in its own directory (`cpp-00` through `cpp-09`) and contains the exercises for that module. Every exercise is self-contained with its own source files and `Makefile`.

```
cpp-modules/
├── cpp-00/
│   ├── ex00/
│   └── ex01/
├── cpp-01/
│   └── ...
└── cpp-09/
```

<br>

## Building & Running

From inside any exercise directory:

```sh
make        # build the binary
./<binary>  # run it
make clean  # remove object files
make fclean # remove object files and the binary
make re     # full rebuild
```

The code targets the **C++98** standard, in line with the 42 curriculum.

<br>

## Tech

<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Make-6D00CC?style=for-the-badge&logo=gnu&logoColor=white" alt="Make"/>
  <img src="https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42"/>
</div>

<br>
