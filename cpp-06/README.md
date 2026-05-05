
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-06</h3>
  C++ casts: <code>static_cast</code>, <code>dynamic_cast</code>, <code>const_cast</code>, <code>reinterpret_cast</code>.
  <br>
  <br>
</div>

<br>

# cpp-06 — C++ Casting

C-style casts are a sledgehammer; C++ gives you four scalpels. This module is about knowing exactly which one to reach for — and why each exists in the first place.

<br>

## Exercises

- **ex00 — Conversion of scalar types** — Parse a string and convert it to `char`, `int`, `float`, and `double`, handling overflow, special values (`nan`, `+inf`, `-inf`), and non-displayable characters.
- **ex01 — Serialization** — Round-trip a pointer through a `uintptr_t` and back, recovering the original object.
- **ex02 — Identify real type** — Generate a random polymorphic object, then identify its concrete type using `dynamic_cast` (with both pointers and references).

<br>

## Concepts Covered

- `static_cast` — checked at compile time; the everyday safe cast
- `dynamic_cast` — runtime-checked downcasting in polymorphic hierarchies
- `const_cast` — adding/removing `const` (use sparingly)
- `reinterpret_cast` — bit-level reinterpretation; the "I know what I'm doing" cast
- Why C-style casts hide which of the above is actually happening

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
