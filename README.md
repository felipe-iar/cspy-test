# cspy-test

## Description
A simple example of performing low overhead unit testing using the IAR C-SPY macros.

![image](https://user-images.githubusercontent.com/54443595/183666231-0fe6a51d-fee7-4e69-8f32-5ba32f871eba.png)

## Usage
In an application code:
- `#include "cspy-test.h"`
- Use the `TEST_EQ()` macro to perform a test.

### Syntax
```c
TEST_EQ(<testName>, <toBeTested>, <expectedOutput>);
```
Here you can find some practical [examples](https://github.com/felipe-iar/cspy-test/blob/bfebcebe515cc1e14b5673cbf8ecb4c35ef19522/app/app.c#L7-L9).

## Debugger setup
Load the [cspy-test.mac](app/cspy-test.mac) into the debugger session.
- Project → Options (<kbd>ALT</kbd>+<kbd>F7</kbd>) → Debugger → "Setup macros".
   - - [x] Use macro file(s) → `$PROJ_DIR$/cspy-test.mac` → OK.
- Project → Dowload and Debug (<kbd>CTRL</kbd>+<kbd>D</kbd>).
- Debug → Go (<kbd>F5</kbd>).

## Output
In this project example, the __Debug Log Window__ should provide an output similar to the one below:
```
...
Tue Aug 09, 2022 13:05:53: -- C-SPY TEST -> Loading macros. 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testAdd. Expected: 42. Got: 42. Result: PASS 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testSub. Expected: 38. Got: 39. Result: FAIL 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testMul. Expected: 80. Got: 80. Result: PASS 
...
```
