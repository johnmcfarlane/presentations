
# UB ` `

???
But before I go on. I'm going to 
--  

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```

???
Here, `x` is an integer.
Lets assume the compiler has no idea what the value of `x` might be.
That means it's either zero, one, two or three.
There are no other value that `x` can be.
If a programmer writes a program in which `x` is any other value and that program runs on a computer,
then it's entirely on the programmer's own head what happens to that computer.
People try to stress this fact but it never seems to get through.
---

# when `x == 0`

  ```c++
  std::array<int, 4> a { 1, 7, 11, 27 };
  std::cout << a[x];
  ```
  
## prints `1`

---

# when `x == 1`

  ```c++
  std::array<int, 4> a { 1, 7, 11, 27 };
  std::cout << a[x];
  ```
  
## prints `7`

---

# when `x == 2`

  ```c++
  std::array<int, 4> a { 1, 7, 11, 27 };
  std::cout << a[x];
  ```
  
## prints `11`

---

# when `x == 3`

  ```c++
  std::array<int, 4> a { 1, 7, 11, 27 };
  std::cout << a[x];
  ```
  
## prints `27`

---

# when `x == 4`

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```
  
## ...

---

background-image: url(ub.jpg)

# .white[when `x == 4`]

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```
  
## .white[epoc_time=1451606400]

???
Your clock gets reset to Midnight on New Year's Eve 2016.
---

background-image: url(ecce.jpg)

# .white[when `x == 5`]

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```

## .white[???]

???
Priceless data gets scribbled upon.
---

background-image: url(solo.jpg)

# .white[when `x == 6`]

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```

## .white[prints "Han shot -559038737th"]

???
But this doesn't begin to describe what can happen.
---

background-image: url(bosch.jpg)

# .white[when `x == 7`]

```c++
std::array<int, 4> a { 1, 7, 11, 27 };
std::cout << a[x];
```

## .white[(You get the picture.)]

???
It's hard to express because nasal demons don't play by the same rules as programmers.
That's why they have contracts.
But it also seems really hard to explain why a contract that includes all this negativity could possible be a good thing.
---
































# `signed` and **`unsigned`**

???
Getting back to integers,
which is more restrictive, defined behavior or undefined behavior?
I feel that I've primed you to answer in a certain way.
It's restrictive for the user because they're not allowed to write code with bugs in.
But wait...
--

```c++
uint8_t a = 255;
++ a;   // a == 0
```

???
There are few bugs that can be written because behavior is always defined.
Here is an unsigned integer when you exceed range.

---

background-image: url(ub1.jpg)

# .white[**`signed`** and `unsigned`]

```c++
int8_t a = 127;
++ a;   // a == ...
```

???
Here is a signed integer when you exceed range.
---

# `signed` and **`unsigned`**

```c++
uint8_t a = 0;
-- a;   // a == 255
```

???
unsigned..
---

background-image: url(ub2.jpg)

# .white[**`signed`** and `unsigned`]

```c++
int8_t a = -128;
-- a;   // a == ...
```

???
Signed.
---

# Narrow Contracts

* `signed` is a narrower contract.

* If you violate the contract, worse things happen.

* If you uphold the contract, better things happen.

???
Now I want to show you some of the better things
because they don't get talked about very often.
---































background-size: 100%
background-image: url(robocop.png)

## .red[Contracts are Complicated]

???
Contracts are complicated.
Do you get the movie reference in this screen shot?
Half a robot, one fist, two guns and two and a half guys.
How many sentences do you think it would take to sum up all the contracts at play in this split second of action.
It's like the three-body problem. It's hard.
---

## Contracts are Scary

???
Normally, when people think of contracts, they only concentrate on the positive side of the contract.
--

* Contracts are entered into by two parties.

???
But contracts are entered into by two parties.

--

* Contracts are agreed upon for mutual benefit.

--

* Where those parties have contrasting interests.

???
Any time two parties have a common interests, they don't need a contract.
--

* *Defined Behavior* is what is forfeit when the programmer breaks their side of the contract.

???
Any time two parties have a common interests, they don't need a contract.
--

* *Efficiency* is what is gained when they programmer doesn't break their side of the contract.

---
