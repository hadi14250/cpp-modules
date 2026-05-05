
<div align="center">
  <a href="https://github.com/hadi14250">
    <img src="../github_gifs/cpp.gif" alt="c++ gif" width="150" height="150">
  </a>
  <h3 align="center">cpp-03</h3>
  Inheritance — single, multiple, and the relationships between base and derived types.
  <br>
  <br>
</div>

<br>

# cpp-03 — Inheritance

Build a class hierarchy from scratch and watch each layer add behavior on top of the last. The exercises culminate in the **diamond problem** and the use of virtual inheritance to resolve it.

<br>

## Exercises

- **ex00 — Aaaaand... OPEN!** — `ClapTrap`: the canonical base class.
- **ex01 — Serena, my love!** — `ScavTrap` inherits from `ClapTrap` and adds its own behavior.
- **ex02 — Repetitive work** — `FragTrap`: another derived class showing parallel inheritance.
- **ex03 — Now it's weird!** — `DiamondTrap` inherits from both `ScavTrap` and `FragTrap`, exposing the diamond problem and its virtual-inheritance fix.

<br>

## Concepts Covered

- Single inheritance and base/derived constructors & destructors
- Construction and destruction order in a class hierarchy
- The `protected` access specifier
- Multiple inheritance
- The **diamond problem** and **virtual inheritance**
- Name resolution across inherited members

<br>

## Build & Run

```sh
cd ex00 && make && ./<binary>
```

<br>
