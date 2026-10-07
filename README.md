*This project has been created as part of the 42 curriculum*

# CPP Module 04

## Description

The fifth module of the 42 C++ series. It covers **subtype polymorphism**, **virtual functions**, **abstract classes**, and **interfaces**. It also introduces memory ownership in class hierarchies, including **deep copies** of objects that hold dynamically allocated data.

All code is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Instructions

Each exercise has its own folder and its own `Makefile`:

```bash
cd ex00        # or ex01, ex02, ex03
make           # builds the executable
make clean     # removes object files
make fclean    # removes object files and the executable
make re        # rebuilds everything
```

### Requirements

- A C++ compiler (`c++`, `g++`, or `clang++`) with C++98 support
- `make`

## Exercises

### ex00: Polymorphism

Creates a base class **`Animal`** with a `type` attribute and a `makeSound()` function, plus two derived classes, **`Dog`** and **`Cat`**, each making their own sound. Calling `makeSound()` through an `Animal` pointer plays the sound of the real animal, thanks to `virtual`.

To show why `virtual` matters, the exercise also includes **`WrongAnimal`** and **`WrongCat`**, which don't use it, so the base class sound gets played instead.

**Focus:** virtual functions and polymorphism.

### ex01: I don't want to burn the world

Adds a **`Brain`** class holding an array of 100 ideas. `Dog` and `Cat` each own a `Brain`, created with `new` in their constructor and deleted in their destructor.

- Copying a `Dog` or `Cat` makes a **deep copy**, so copies never share the same brain.
- The test program builds an array of `Animal` pointers (half dogs, half cats) and deletes them through the base class, which requires a **virtual destructor**.

**Focus:** deep copies, ownership of allocated memory, and virtual destructors.

### ex02: Abstract class

Turns `Animal` into an **abstract class**, so that nobody can create a generic `Animal` anymore, only a `Dog` or a `Cat`. Everything else keeps working as before.

**Focus:** pure virtual functions and abstract classes.

### ex03: Interface & recap

A small magic-inventory system that puts everything together:

- **`AMateria`** is an abstract class for spells, with `clone()` and `use(target)`. **`Ice`** and **`Cure`** are its concrete types.
- **`ICharacter`** is an interface for characters (name, `equip`, `unequip`, `use`), implemented by **`Character`**, who has an inventory of 4 materia slots and a deep copy behavior.
- **`IMateriaSource`** is an interface for a source that can `learnMateria` and `createMateria`, implemented by **`MateriaSource`**, who can learn up to 4 materia types.

**Focus:** interfaces, abstract classes, deep copies, and clean memory management with no leaks.

## Project structure

```
.
├── ex00/   # Animal, Dog, Cat, WrongAnimal, WrongCat
├── ex01/   # Brain and deep copies
├── ex02/   # Abstract Animal
└── ex03/   # AMateria, Ice, Cure, ICharacter, Character, IMateriaSource, MateriaSource
```

Each folder contains its own `Makefile`, class headers (`.hpp`), sources (`.cpp`), and a `main.cpp` with tests.

## Resources

- [cppreference: virtual functions](https://en.cppreference.com/w/cpp/language/virtual)
- [cppreference: abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class)
- [C++ FAQ: inheritance and virtual functions](https://isocpp.org/wiki/faq/virtual-functions)
- The 42 CPP Module 04 subject PDF
