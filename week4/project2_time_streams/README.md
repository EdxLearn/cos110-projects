# Project 2: Time Class with Stream Operators

**Difficulty:** ⭐⭐☆☆☆ Easy-Medium
**Focus:** Stream insertion and extraction operators
**Estimated Time:** 45-60 minutes

## 📚 Learning Objectives

- Master the pattern for overloading `operator<<` and `operator>>`
- Understand why stream operators must be friend functions
- Practice input validation
- Handle formatted I/O correctly
- Return streams for chaining

## 🎯 Project Description

Implement a `Time` class representing time in 24-hour format (HH:MM). You'll overload stream operators so you can use `cin >> time` and `cout << time` naturally, just like with built-in types.

### Why Stream Operators Must Be Friends

Stream operators MUST be friend functions because:
1. **Left operand is the stream:** `cout << time` means `operator<<(cout, time)`
2. **Can't modify ostream class:** You don't own the `ostream` class to add a member
3. **Need private access:** Must access private hours and minutes

## 📋 Specifications

### Class: `Time`

**Private Members:**
- `int hours` - Hours (0-23)
- `int minutes` - Minutes (0-59)

**Public Members:**

#### Constructors:
```cpp
Time();                    // Default: 00:00
Time(int h, int m);        // h:m with validation
```

#### Friend Functions:
```cpp
friend ostream& operator<<(ostream& out, const Time& t);
friend istream& operator>>(istream& in, Time& t);
```

#### Member Functions:
```cpp
int getHours() const;
int getMinutes() const;
bool isValid() const;      // Check if time is valid (0-23 hours, 0-59 mins)
```

## 💻 Implementation Tasks

### Task 1: Constructors
- Default: Initialize to 00:00
- Parameterized: Validate input (hours 0-23, minutes 0-59)
- If invalid, set to 00:00 and display error

### Task 2: Validation Function
Implement `isValid()` to check:
- Hours between 0 and 23
- Minutes between 0 and 59

### Task 3: Stream Output Operator
Format: `HH:MM` (always 2 digits)
- Example: `09:05`, `14:30`, `00:00`
- Use zero-padding for single digits
- Remember to return the stream!

### Task 4: Stream Input Operator
Read format: `HH:MM` (e.g., "14:30")
- Read hours, then ':', then minutes
- Validate the colon character
- Validate the time values
- Handle errors appropriately

## 📝 Sample Usage

```cpp
int main() {
    // Create times
    Time t1;              // 00:00
    Time t2(14, 30);      // 14:30
    Time t3(9, 5);        // 09:05

    // Output (operator<<)
    cout << "Time 1: " << t1 << endl;  // 00:00
    cout << "Time 2: " << t2 << endl;  // 14:30
    cout << "Time 3: " << t3 << endl;  // 09:05

    // Chaining
    cout << t1 << " " << t2 << " " << t3 << endl;

    // Input (operator>>)
    Time t4;
    cout << "Enter time (HH:MM): ";
    cin >> t4;
    cout << "You entered: " << t4 << endl;

    return 0;
}
```

## ✅ Expected Output

```
Time 1: 00:00
Time 2: 14:30
Time 3: 09:05
00:00 14:30 09:05
Enter time (HH:MM): 16:45
You entered: 16:45
```

## 🧪 Testing Checklist

- [ ] Default constructor creates 00:00
- [ ] Valid times display correctly with zero-padding
- [ ] Invalid times (e.g., 25:00, 12:60) are rejected
- [ ] Input reads HH:MM format correctly
- [ ] Input validates the colon separator
- [ ] Output is always 2 digits for hours and minutes
- [ ] Chaining works: `cout << t1 << t2 << t3`

## 💡 Hints

<details>
<summary>Hint 1: Zero-Padding Output</summary>

Use iomanip or manual padding:
```cpp
if (t.hours < 10) out << '0';
out << t.hours << ':';
if (t.minutes < 10) out << '0';
out << t.minutes;
```
</details>

<details>
<summary>Hint 2: Reading Input</summary>

```cpp
char colon;
in >> t.hours >> colon >> t.minutes;
if (colon != ':') {
    // Error handling
}
```
</details>

## 🐛 Common Mistakes

❌ Not zero-padding output (showing "9:5" instead of "09:05")
❌ Making Time parameter const in operator>>
❌ Not returning the stream
❌ Not validating input
❌ Implementing as member functions instead of friends

## 🏆 Extension Challenges

1. Add arithmetic: add/subtract minutes
2. Add comparison operators (==, <, >)
3. Handle 12-hour format with AM/PM
4. Add seconds to the time
5. Validate timezone support

---

Master stream operators here and you'll use this pattern everywhere! 🚀
