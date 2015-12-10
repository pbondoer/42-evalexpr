# evalexpr @ 42
This is one of the numerous projects done during the 42 piscine in July 2015. It was completed in a week and can solve basic mathematical expressions. The evaluator runs on **recursive descent parsing** [explained here](http://www.strchr.com/expression_evaluator). This was an assignment, so some things are not handled on purpose (see below).

## Compiling
Run `make`, an executable called `eval_expr` should compile directly. Please submit an issue if you run into any.

## Usage
`./eval_expr "expression"`

Example:
```
$ ./eval_expr "1 + 2 * (3 - 42) % 5"

-2
```

## Subject constraints
Please note the evaluator does not have error-handling of *any* kind. The subject states that **all input must be valid**.

A valid expression:
* must only contain the operators `+`, `-`, `*`, `/`, and `%`
* must only have whole values
* can contain parentheses, but each group must be properly closed
* can contain spaces

Since we are doing whole number arithmetic, divisions are euclidian keeping only the quotient, while the remainder can be obtained with a modulo operation.

## A little note for 42 students
Hey there, if you're doing your own `evalexpr`, before you start reading my code you should totally go check out [this absolutely great page](http://www.strchr.com/expression_evaluator): it's what I used to build mine. Don't copy code blindly! If you need help, ask people around you. [Remember, GIYF](http://lmgtfy.com/?q=giyf)!

Good luck, and thanks for all the fish!
