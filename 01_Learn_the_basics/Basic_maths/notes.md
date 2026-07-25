# 📘 Basic Maths

## Topics Covered

- Count Digits
- Reverse a Number
- Palindrome Number
- Armstrong Number
- GCD / HCF
- Print All Divisors
- Check Prime Number

---

## Count Digits

**Approach:**
- Repeatedly divide the number by `10`.
- Count the number of iterations.

**Time Complexity:** `O(log₁₀n)`
**Space Complexity:** `O(1)`

---

## Reverse a Number

**Approach:**
- Extract last digit using `% 10`.
- Build the reversed number.
- Remove the last digit using `/ 10`.

**Time Complexity:** `O(log₁₀n)`
**Space Complexity:** `O(1)`

---

## Palindrome Number

**Approach:**
- Reverse the number.
- Compare it with the original.

**Time Complexity:** `O(log₁₀n)`
**Space Complexity:** `O(1)`

---

## Armstrong Number

**Approach:**
- Extract each digit.
- Raise it to the power of the number of digits.
- Sum all powered digits.
- Compare the sum with the original number.

**Time Complexity:** `O(log₁₀n)`
**Space Complexity:** `O(1)`

---

## GCD / HCF

### Euclidean Algorithm

```cpp
while(b != 0)
{
    int temp = b;
    b = a % b;
    a = temp;
}
```

**Time Complexity:** `O(log(min(a,b)))`
**Space Complexity:** `O(1)`

---

## Print All Divisors

**Brute Force**
- Check every number from `1` to `n`.

**Time Complexity:** `O(n)`

**Optimal**
- Check only till `√n`.

**Time Complexity:** `O(√n)`

---

## Check Prime

A number is prime if it has exactly **2 factors**.

**Optimal Approach**
- Check divisibility only till `√n`.

**Time Complexity:** `O(√n)`
**Space Complexity:** `O(1)`

---

# Important Operators

```cpp
n % 10   // Last digit
n / 10   // Remove last digit
```

---

# Key Takeaways

- Use `% 10` to extract digits.
- Use `/ 10` to remove digits.
- GCD is best solved using Euclid's Algorithm.
- Prime checking and divisor problems can be optimized to `O(√n)`.
