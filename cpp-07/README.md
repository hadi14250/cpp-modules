
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-07</h3>
  Templates — function templates, class templates, and the foundations of generic programming.
  <br>
  <br>
</div>

<br>

# cpp-07 — Templates

The same algorithm, the same data structure — written *once*, working for any type. This module is the entry point to generic programming and sets up everything the STL is built on.

<br>

## Exercises

- **ex00 — Start with a few functions** — `swap`, `min`, `max` as function templates that work for any comparable type.
- **ex01 — Iter** — A generic `iter` that applies a function to every element of an array — type-deduced, length-aware.
- **ex02 — Array** — A class template `Array<T>`: bounds-checked, copyable, and exception-safe.

<br>

## Concepts Covered

- Function templates and template argument deduction
- Class templates
- Why templates live in headers
- Implicit vs. explicit instantiation
- The link between templates and the STL containers in cpp-08 / cpp-09

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
