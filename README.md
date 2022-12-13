# SmartCalc v1.0

Implementation of SmartCalc v1.0.

## Contents

1. [Chapter I](#chapter-i) \
2. [Chapter II](#chapter-ii) \
   2.1. [Information](#information)
3. [Chapter III](#chapter-iii) \
   3.1. [Part 1](#part-1-implementation-of-smartcalc-v10)  
   3.2. [Part 2](#part-2-bonus-credit-calculator)  
   3.3. [Part 3](#part-3-bonus-deposit-calculator)


## Chapter I

## Chapter II

## Information

### Polish notation and reverse Polish notation

Despite the absolute convenience of working with the classical form of writing expressions, when it comes to writing programs, queries are most often formed in the format `what to do -> what data to perform operations with`. So, around 1920, the Polish logician Jan Lukasiewicz invented  prefix notation (later also called Polish notation or normal Polish notation) in order to simplify propositional logic.

Let's take a look at the ways to write expressions:

The expression written in conventional infix notation:

>2 / (3 + 2) * 5

The expression written in Polish prefix notation:

>\* (/ 2 (+ 3 2)) 5

Normally parentheses between operations of equal priority are unnecessary and the final expression looks like this:

>\* / 2 (+ 3 2) 5

The Polish notation is widely used in the field of computing, in particular it is used in many stack-oriented programming languages such as PostScript, and for a long time it was the basis for many calculating machines (calculators).

In the mid-1950s, the Australian philosopher and computer scientist Charles Hamblin developed reverse polish notation (RPN). Hamblin's work was presented at a conference in June 1957, and published in 1957 and 1962.

The first computers to support reverse Polish notation were the KDF9 from the English Electric Company, announced in 1960 and released in 1963, and the american Burroughs B5000, announced in 1961, released the same in 1963.

Friden used the RPN in desktop calculators and introduced the EC-130 in June 1964. In 1968, engineers at Hewlett-Packard developed the 9100A desktop calculator with RPN support. This calculator made reverse Polish notation popular among scientists and engineers, even though the early advertisements for the 9100A did not mention RPN. In 1972 the HP-35 with RPN support became the first scientific pocket calculator.

The RPN was used in the soviet engineering calculator B3-19M (a joint development with the GDR) produced in 1976. All programmable microcalculators produced in USSR up to the end of 1980s, except for "Electronica MK-85" and "Electronica MK-90", used RPN - it was easier to implement and allowed to use less number of commands during programming compared to conventional algebraic notation (program memory amount was always a critical resource in models of that time). RPN was used in russian programmable calculators "Electronica MK-152" and "Electronica MK-161", ensuring they were compatible with programs written for soviet calculators.

Reverse Polish notation had all the advantages of the progenitor because it removes the need for parentheses which allows to reduce the volume of expressions. This had led to a decrease in the number of commands, when writing computer programs. That is why sometimes Reverse Polish notation is called Reverse bracketless notation.

The expression written in Reverse Polish (bracketless) notation:

> 2 3 2 + / 5 *

### Dijkstra's algorithm

Edsger Dijkstra invented an algorithm for converting expressions (including functions) from infix to Reverse Polish notation. The algorithm was named the "shunting-yard algorithm", because its operation resembles that of a railroad shunting yard.

>Before we look at the algorithm itself, let's make a small remark and introduce the token. A token is the simplest unit of morphological parsing of an expression. So, the expression 2 / (3 + 2) * 5 (the blanks are added for easy perception and do not carry any semantic sense), broken down into tokens, will look like this [2], [/], [(], [3], [+], [2], [)], [*], [5], where [2, 3, 5] are numerical tokens, [/, (, +, ), *] - are tokens-operations.

The Shunting-yard algorithm is stack-based. There are two text variables involved in the conversion: the input and the output string. The conversion process uses the stack to store operations not yet added to the output string. The conversion program sequentially reads each token from the input string and on each step does some actions based on which tokens have been read.

#### Implementation of the algorithm

As long as there are unprocessed tokens in the input string, read the next token:

If the token is:
- A number – put it into the output queue

- A function or a left parenthesis – push it onto the stack

- A function arguments separator (e.g. comma):
    - Move operators from the stack to the output queue until the token at the top of the stack is a left parenthesis. If there is no left parenthesis in the stack, there is an error in the expression.

- Operator (O1):
    - While there is an token-operator O2 at the top of the stack, that has greater precedence than O1 or they have the same precedence and O1 is left-associative:
    - Pop O2 from the stack into the output queue
    - Push O1 onto the stack

- A right parenthesis:
    - While the token at the top of the stack is not a left parenthesis, pop the token-operators from the stack into the output queue.
    - Pop the left parenthesis from the stack and discard it.
    - If there is a function token at the top of the stack, then pop the function from the stack into the output queue
    - If the stack ended before the left parenthesis was read, there is an error in the expression.

If there are no more tokens left in the input string:
- As long as there are operators in the stack:
    - If there is a parenthesis at the top of the stack - there is an error in the expression.
    - Pop the operator from the stack onto the output queue

End.


## Chapter III

## Part 1. Implementation of SmartCalc v1.0

The SmartCalc v1.0 program must be implemented:

- The program must be developed in C language of C11 standard using gcc compiler. You can use any additional QT libraries and modules
- The program code must be located in the src folder
- The program must be built with Makefile which contains standard set of targets for GNU-programs: all, install, uninstall, clean, dvi, dist, tests, gcov_report. Installation directory could be arbitrary, except the building one
- The program must be developed according to the principles of structured programming
- Prepare full coverage of modules related to calculating expressions with unit-tests using the Check library
- GUI implementation, based on any GUI library with API for C89/C99/C11 (GTK+, Nuklear, raygui, microui, libagar, libui, IUP, LCUI, CEF, Qt, etc.)
- Both integers and real numbers with a dot can be input into the program. You can optionally provide the input of numbers in exponential notation
- The calculation must be done after you complete entering the calculating expression and press the `=` symbol.
- Calculating arbitrary bracketed arithmetic expressions in infix notation
- Calculate arbitrary bracketed arithmetic expressions in infix notation with substitution of the value of the variable _x_ as a number
- Plotting a graph of a function given by an expression in infix notation with the variable _x_ (with coordinate axes, mark of the used scale and an adaptive grid)
    - It is not necessary to provide the user with the ability to change the scale
- Domain and codomain of a function are limited to at least numbers from -1000000 to 1000000
    - To plot a graph of a function it is necessary to additionally specify the displayed domain and codomain
- Verifiable accuracy of the fractional part is at least to 7 decimal places
- Users must be able to enter up to 255 characters
- Bracketed arithmetic expressions in infix notation must support the following arithmetic operations and mathematical functions:
    - **Arithmetic operators**:

      | Operator name | Infix notation <br /> (Classic) | Prefix notation <br /> (Polish notation) |  Postfix notation <br /> (Reverse Polish notation) |
      | --------- | ------ | ------ | ------ |
      | Brackets | (a + b) | (+ a b) | a b + |
      | Addition | a + b | + a b | a b + |
      | Subtraction | a - b | - a b | a b - |
      | Multiplication | a * b | * a b | a b * |
      | Division | a / b | / a b | a b \ |
      | Power | a ^ b | ^ a b | a b ^ |
      | Modulus | a mod b | mod a b | a b mod |
      | Unary plus | +a | +a | a+ |
      | Unary minus | -a | -a | a- |

      >Note that the multiplication operator contains the obligatory sign `*`. Processing an expression with the omitted `*` sign is optional and is left to the developer's decision

    - **Functions**:
  
      | Function description | Function |
      | ------ | ------ |
      | Computes cosine | cos(x) |
      | Computes sine | sin(x) |
      | Computes tangent | tan(x) |
      | Computes arc cosine | acos(x) |
      | Computes arc sine | asin(x) |
      | Computes arc tangent | atan(x) |
      | Computes square root | sqrt(x) |
      | Computes natural logarithm | ln(x) |
      | Computes common logarithm | log(x) |


## Part 2. Bonus. Credit calculator

Provide a special mode "credit calculator" (you can take banki.ru and calcus.ru as an example):
- Input: total credit amount, term, interest rate, type (annuity, differentiated)
- Output: monthly payment, overpayment on credit, total payment


## Part 3. Bonus. Deposit calculator

Provide a special mode "deposit profitability calculator" (you can take banki.ru and calcus.ru as an example):
- Input: deposit amount, deposit term, interest rate, tax rate, periodicity of payments, capitalization of interest, replenishments list, partial withdrawals list
- Output: accrued interest, tax amount, deposit amount by the end of the term


