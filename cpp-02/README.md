
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-02</h3>
  Ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form.
  <br>
  <br>
</div>

<br>

# cpp-02 — Ad-hoc Polymorphism

This module is built around a single class — `Fixed` — that grows in capability across exercises. By the end you'll have a fully canonical class with overloaded arithmetic, comparison, and stream operators.

<br>

## Exercises

- **ex00 — My First Class in Orthodox Canonical Form** — Default constructor, copy constructor, copy assignment operator, and destructor.
- **ex01 — Towards a more useful fixed-point number class** — Conversions between `int`, `float`, and the internal fixed-point representation; overloading `operator<<`.
- **ex02 — Now we're talking** — A complete fixed-point number type: comparison, arithmetic, increment/decrement operators, plus `min` and `max` static helpers.

<br>

## Concepts Covered

- The **Orthodox Canonical Class Form** (the four mandatory members)
- Operator overloading (arithmetic, comparison, stream insertion, increment/decrement)
- Fixed-point arithmetic and the trade-offs vs. floating point
- `static` member functions
- Why ad-hoc polymorphism (overloading) is *compile-time*, not runtime

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
