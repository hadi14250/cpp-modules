
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-08</h3>
  Templated containers, iterators, and algorithms — the building blocks of the STL.
  <br>
  <br>
</div>

<br>

# cpp-08 — Templated Containers, Iterators & Algorithms

Where templates meet the standard library. Each exercise uses STL containers as the substrate and adds a small generic abstraction on top — culminating in a custom container of your own.

<br>

## Exercises

- **ex00 — Easy find** — A function template `easyfind` that locates an integer in any STL container, returning an iterator.
- **ex01 — Span** — A `Span` class that stores up to N integers and computes the shortest and longest spans between any two of them.
- **ex02 — Mutated abomination** — A `MutantStack`: extending `std::stack` to expose iterators it normally hides.

<br>

## Concepts Covered

- STL containers (`std::vector`, `std::list`, `std::stack`, ...)
- Iterators — input, output, forward, bidirectional, random-access
- STL algorithms: `std::find`, `std::sort`, `std::adjacent_find`, ...
- Inheriting from STL types and exposing protected members
- The generic-programming mindset — write to the iterator interface, not to a specific container

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
