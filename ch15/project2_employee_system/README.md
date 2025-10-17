# Project 2: Employee Polymorphism System

**Difficulty:** ⭐⭐⭐☆☆ (Medium)
**Chapter:** 15 - Polymorphism & Virtual Functions
**Concepts:** Abstract classes, polymorphism, inheritance hierarchies, virtual destructors

## Learning Objectives

- Design a realistic polymorphic class hierarchy
- Implement different salary calculation methods
- Use polymorphism for uniform processing
- Work with protected members for inheritance
- Understand the importance of virtual destructors

## Problem Description

Create an employee management system with different types of employees who are paid differently. The system should handle hourly employees, salaried employees, and commission-based employees uniformly through polymorphism.

## Requirements

### Base Class: Employee

Create an abstract `Employee` class with:
- Protected members: `string name`, `int employeeID`
- Constructor that takes name and ID
- Pure virtual function: `double calculatePay() const`
- Virtual function: `void display() const` (provides default implementation)
- Virtual destructor

### Derived Class: HourlyEmployee

- Additional protected members: `double hourlyRate`, `double hoursWorked`
- Constructor
- Override `calculatePay()`: hourlyRate × hoursWorked
- Override `display()` to show hourly information

### Derived Class: SalariedEmployee

- Additional protected member: `double annualSalary`
- Constructor
- Override `calculatePay()`: annualSalary / 12 (monthly pay)
- Override `display()` to show salary information

### Derived Class: CommissionEmployee

- Additional protected members: `double baseSalary`, `double commissionRate`, `double sales`
- Constructor
- Override `calculatePay()`: baseSalary + (sales × commissionRate)
- Override `display()` to show commission information

## Implementation Tasks

1. **Define the class hierarchy** with proper inheritance
2. **Implement all constructors** with proper initialization lists
3. **Implement calculatePay()** for each employee type
4. **Implement display()** for each employee type
5. **Create a payroll function** that takes an array of Employee pointers

## Example Usage

```cpp
Employee* employees[4];
employees[0] = new HourlyEmployee("Alice", 1001, 15.50, 40);
employees[1] = new SalariedEmployee("Bob", 1002, 60000);
employees[2] = new CommissionEmployee("Charlie", 1003, 2000, 0.05, 50000);
employees[3] = new HourlyEmployee("Diana", 1004, 20.00, 35);

// Process payroll
double totalPayroll = 0.0;
for (int i = 0; i < 4; i++) {
    employees[i]->display();
    totalPayroll += employees[i]->calculatePay();
}

cout << "Total monthly payroll: $" << totalPayroll << endl;

// Clean up
for (int i = 0; i < 4; i++) {
    delete employees[i];
}
```

## Expected Output

```
Employee: Alice (ID: 1001)
Type: Hourly Employee
Hourly Rate: $15.50, Hours Worked: 40.00
Monthly Pay: $620.00

Employee: Bob (ID: 1002)
Type: Salaried Employee
Annual Salary: $60000.00
Monthly Pay: $5000.00

Employee: Charlie (ID: 1003)
Type: Commission Employee
Base Salary: $2000.00, Commission Rate: 5.00%, Sales: $50000.00
Monthly Pay: $4500.00

Employee: Diana (ID: 1004)
Type: Hourly Employee
Hourly Rate: $20.00, Hours Worked: 35.00
Monthly Pay: $700.00

Total monthly payroll: $10820.00
```

## Hints

- Use `protected` for members that derived classes need to access
- Remember to call the base class constructor from derived constructors
- The base Employee class should have a virtual destructor
- Use `setprecision(2)` and `fixed` for currency formatting

## Compilation

```bash
make
./employee_system
```

## Testing Checklist

- [ ] Employee class is abstract (cannot be instantiated)
- [ ] All three employee types compile and work correctly
- [ ] Hourly pay calculation is correct
- [ ] Salaried pay calculation is correct
- [ ] Commission pay calculation is correct
- [ ] Polymorphism works (array of Employee*)
- [ ] Display shows correct information for each type
- [ ] No memory leaks

## Extension Challenges

1. Add an `ExecutiveEmployee` with bonus calculation
2. Add a `raise()` method to increase pay
3. Implement overtime pay for hourly employees (1.5× after 40 hours)
4. Add a `PartTimeEmployee` class
5. Create a function to find the highest-paid employee
6. Save/load employees from a file

---

**Swift Tuition - COS 110 Chapter 15 Projects**
