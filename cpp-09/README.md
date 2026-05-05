
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-09</h3>
  The Standard Template Library in practice — containers, algorithms, and idiomatic STL code.
  <br>
  <br>
</div>

<br>

# cpp-09 — STL in Practice

Three realistic mini-projects, each one a study in *which container to pick*. The point is no longer "can you make this work" but "can you make it work *well*".

<br>

## Exercises

- **ex00 — Bitcoin Exchange** — Parse a CSV price database into an `std::map`, then evaluate a stream of input transactions against it (with date lookups that fall back to the closest earlier entry).
- **ex01 — Reverse Polish Notation** — Evaluate an RPN expression with `std::stack`. A textbook use of LIFO semantics.
- **ex02 — PmergeMe** — Implement the **Ford-Johnson merge-insertion sort** on two different containers (e.g. `std::vector` and `std::deque`) and compare the runtimes.

<br>

## Concepts Covered

- Choosing the right container for the access pattern
- `std::map`, `std::stack`, `std::vector`, `std::deque`, `std::list`
- Parsing and validating real-world input safely
- Measuring and reporting runtimes
- Writing idiomatic, exception-aware STL code

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
