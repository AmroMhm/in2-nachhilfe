# 🌀 Typecasting & Memory

Let’s take a look at a real C++ snippet and use it to understand **typecasting**, **memory layout**, and how data can be reinterpreted:

```cpp
char* str = "abcd";
float f = 97.14;
int a = 5;
int b = 10;
int* ptr = new int;
int c = 10;
*ptr = 77;
int** ptr2 = &ptr;

std::cout << "address of a = " << &a << std::endl;
std::cout << "address of b = " << &b << std::endl;
std::cout << "address of c = " << &c << std::endl;
std::cout << "address = " << ptr << std::endl;
std::cout << "value = " << *ptr << std::endl;
```

---

## 🧠 What’s Going On Here?

### 🔹 Local Variables (Stack)

- Variables like `a`, `b`, `c` are stored on the **stack**.
- Their memory addresses are **close to each other**, typically 4 bytes apart if they are of type `int` (which is 4 bytes on most systems).

Example Output:

```
address of a = 0x61ff10
address of b = 0x61ff0c
address of c = 0x61ff08
```

🧠 Why 4 bytes apart?

- Each `int` takes up **4 bytes** (32 bits)
- Stack grows downward, so newer variables get lower addresses

### 🔹 Dynamic Variables (Heap)

- `ptr = new int;` allocates memory on the **heap**.
- That memory address is usually **far away** from stack addresses.

Example Output:

```
ptr = 0x563c8a1d4eb0
*ptr = 77
```

🧪 Try printing addresses of `&a`, `&b`, `&c`, and `ptr`. You’ll clearly see stack vs heap layout in action!

---

## 🧠 What is Typecasting?

Typecasting is **converting one type into another** — telling the compiler: “Trust me, I know what I’m doing.” 😅

Types of casting:

### 🔸 Implicit Casting (Safe)

```cpp
int i = 65;
char ch = i;  // 'A'
```

✅ Automatically converts int to char.

### 🔸 Explicit Casting (C-style)

```cpp
float f = 97.14;
char ch = (char)f; // 'a'
```

⚠️ This truncates the float → int → char.

### 🔸 C++ Style Casting

```cpp
char ch = (char)(f);
```

✅ Safer and clearer — prefer this in modern C++.

---

## 🔁 Typecasting Example: Float to Char

```cpp
float f = 97.14;
char ch = (char)(f);
std::cout << ch << std::endl; // prints: a
```

- ASCII code 97 = 'a'
- So 97.14 is truncated to 97 → converted to 'a'

🧠 Typecasting lets you **reinterpret values**, like viewing a number as a character.

---

## 🔍 Pointers & Dynamic Memory

```cpp
int* ptr = new int;
*ptr = 77;
```

- `new int` allocates memory on the **heap**
- `*ptr = 77` assigns value to that heap memory
- You can think of `ptr` as a GPS — it points to where the actual value lives

### Pointer to Pointer

```cpp
int** ptr2 = &ptr;
```

- A pointer to a pointer — used in complex data structures or passing by reference to a pointer

---

## 📌 Stack vs Heap Recap

| Stack                    | Heap                   |
| ------------------------ | ---------------------- |
| Automatic variables      | Dynamic memory (`new`) |
| Fast access              | Manual allocation      |
| Freed automatically      | Must use `delete`      |
| Address ranges are close | Address far from stack |

---

## 💡 Summary

- **Typecasting** lets you convert between types (int → char, float → int, etc.)
- **Stack**: Local, short-lived vars (like `a`, `b`, `c`)
- **Heap**: Long-lived, dynamic vars (`new int`, `ptr`)
- Casting can help you interpret data in different ways — useful but handle with care!

Want to visualize how all this looks in memory? Let me know and I’ll draw a diagram!

