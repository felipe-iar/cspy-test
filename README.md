# cspy-test

## Description
A simple example of performing unit testing using C-Spy macros.

## Usage
Load the [cspy-test.mac](app/cspy-test.mac) into the debugger session.
### Steps
- Project settings -> Debugger -> "Setup macros"
- `$PROJ_DIR$/cspy-test.mac`

## Output
In this project example, the __Debug Log Window__ should display:
```
...
Tue Aug 09, 2022 13:05:53: -- C-SPY TEST -> Loading macros. 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testAdd. Expected: 42. Got: 42. Result: PASS 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testSub. Expected: 38. Got: 39. Result: FAIL 
Tue Aug 09, 2022 13:06:32: -- C-SPY TEST -> testMul. Expected: 80. Got: 80. Result: PASS 
...
```
