# Inheritance in C++  

## Aim  
To understand and implement different types of **inheritance in C++**, showing how classes can reuse and extend functionality through hierarchical relationships.  

## Theory  
**Inheritance** is a fundamental concept of **Object-Oriented Programming (OOP)**. It allows a class (the **derived class**) to acquire the properties and behaviors of another class (the **base class**).  

### Key Points  
- **Base Class:** The class whose members are inherited.  
- **Derived Class:** The class that inherits from the base class.  
- **Access Specifiers:**  
  - `public` → Public and protected members of the base remain accessible.  
  - `protected` → Public and protected members of the base become protected.  
  - `private` → Public and protected members of the base become private.  

### Types of Inheritance  
1. **Single Inheritance**  
   - One base class → One derived class.  
   - Example: `Vehicle → Car`.  

2. **Multilevel Inheritance**  
   - A class derived from another derived class.  
   - Example: `University → Department → Lab`.  

3. **Hierarchical Inheritance**  
   - Multiple classes inherit from the same base class.  
   - Example: `University → Department, Hostel, Library`.  

4. **Multiple Inheritance**  
   - A class inherits from more than one base class.  
   - Example: `Department → University + Facility`.  

5. **Hybrid Inheritance**  
   - Combination of two or more types (e.g., hierarchical + multiple).  

## Algorithms  

### Single Inheritance  
1. Start.  
2. Define a base class `Vehicle` with a method `color()`.  
3. Define a derived class `Car` inheriting from `Vehicle`, adding `speed()`.  
4. In `main()`:  
   - Create object `myCar`.  
   - Call `color()` and `speed()`.  
5. End.  

### Multilevel Inheritance  
1. Start.  
2. Define base class `University` with `showUni()`.  
3. Define derived class `Department` inheriting from `University`, adding `showDept()`.  
4. Define derived class `Lab` inheriting from `Department`, adding `showLab()`.  
5. In `main()`:  
   - Create object `VLSI`.  
   - Call all three methods.  
6. End.  

### Hierarchical Inheritance  
1. Start.  
2. Define base class `University`.  
3. Define three derived classes: `Department`, `Hostel`, `Library`.  
4. Each derived class defines its own method.  
5. In `main()`:  
   - Create objects of each derived class.  
   - Call base and derived methods.  
6. End.  

### Multiple Inheritance  
1. Start.  
2. Define base class `University`.  
3. Define another base class `Facility`.  
4. Define derived class `Department` inheriting from both.  
5. In `main()`:  
   - Create object `ec`.  
   - Call methods from both base classes and the derived class.  
6. End.  

### Hybrid Inheritance  
1. Start.  
2. Combine hierarchical and multiple inheritance:  
   - `University` as base.  
   - `Department` and `Hostel` inherit from `University`.  
   - `Lab` inherits from `Department` and also from `Facility`.  
3. In `main()`:  
   - Create objects and demonstrate combined features.  
4. End.  

## Conclusion  
This experiment illustrates the importance of **inheritance** in C++:  
- **Code Reusability** – Base class features are reused in derived classes.  
- **Extensibility** – Derived classes can add their own new features.  
- **Hierarchy Modeling** – Real-world relationships (e.g., `University → Department → Lab`) can be represented.  
- **Flexibility** – C++ supports single, multilevel, hierarchical, multiple, and hybrid inheritance.  

Inheritance forms the foundation for **polymorphism** and advanced OOP design.  
