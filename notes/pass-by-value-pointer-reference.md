# 🧠 Argument Passing in C++

Understanding how arguments are passed in C++ is crucial. There are 3 main ways:

---

## ✅ 1. Pass by **Value** (C and C++)

This means you’re sending a **copy** of the data to the function. The original value remains unchanged.

```cpp
void foo(int x) {
    x = 10;
}

int main() {
    int a = 5;
    foo(a);
    // a is still 5
}
```

🔸 **Use it when**: You don’t need to modify the original variable.

---

## ✅ 2. Pass by **Pointer** (C and C++)

You send the **memory address** of a variable, so the function can change it.

```cpp
void foo(int* x) {
    *x = 10;
}

int main() {
    int a = 5;
    foo(&a);
    // a is now 10
}
```

🔸 **Use it when**: You need to modify the original value or work with dynamic memory.

🧠 Remember:
- `*` means dereference (access value)
- `&` means address-of (get the address)

---

## ✅ 3. Pass by **Reference** (C++ only)

This is a cleaner, safer alternative to pointers.

```cpp
void foo(int& x) {
    x = 10;
}

int main() {
    int a = 5;
    foo(a);
    // a is now 10
}
```

🔸 **Use it when**: You want to modify the variable directly, but without pointer syntax.

🧠 Tip: Think of a reference as a nickname for the original variable.

---

## 🧪 Summary Table

| Method       | Safe? | Syntax         | Can Modify Original? | C or C++? |
|--------------|-------|----------------|-----------------------|------------|
| Pass by Value | ✅ Yes | `foo(int x)`    | ❌ No                  | C & C++    |
| Pass by Pointer | ⚠️ Risky | `foo(int* x)`  | ✅ Yes                 | C & C++    |
| Pass by Reference | ✅ Yes | `foo(int& x)`  | ✅ Yes                 | C++ only   |

---

## 🧰 Bonus: Combine Reference and Const (read-only)

```cpp
void print(const int& x) {
    std::cout << x << std::endl;
}
```

🔸 Great when passing large objects (like vectors or strings) without copying, but you don’t want them modified.

---

## 🧩 Which One Should I Use?

- Use **value** for small, read-only data (like `int`, `char`)
- Use **reference** when you want to modify or avoid copying
- Use **const reference** to safely pass large objects
- Use **pointers** only when you **have to** (raw memory, optional data)

That's it! 🎉 Now you're no longer confused by `*`, `&`, and `int x`.

