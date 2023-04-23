# Understanding the Big O Notations

**Algorithmic complexity made simple!!**

An algorithm’s performance depends on the number of steps it takes. Computer Scientists have borrowed the term `Big-O Notataion` from the world of Mathematics to accurately describe an algorithm's effieciency.
Measuring an algorithm’s complexity is not a difficult concept to grasp — Although this sounds like an oxymoron — it is not!

**Big-O: Time complexxity**
* Big-O puts the `number of steps`(time complexity) in the spotlight and not the `run time`(space complexity - the hardware factor).
* An algorithm’s Big-O notation is determined by how it responds to different sizes of a given dataset. 
* The 'O' stands for `order of`.
* The Big-O notation takes a pessimistic approach to performance and refers to the worst case scenario.

## O(1) aka `constant time`
*  This means that the algorithm takes the same number of steps to execute regardless of how much data is passed in.
<img title="Example of an algorithm of O(1) complexity" src="https://miro.medium.com/v2/resize:fit:1100/format:webp/1*eX2vo735WWU35Sz3usNCzQ.png"/>
<img title="Plot of O(1) complexity" src="https://miro.medium.com/v2/resize:fit:750/format:webp/1*MH3BmdZKRuqHyLNnaI9eRg.png"/>

## O(N) aka `linear time`
* This means that the algorithm will take as many steps as there are elements of data. 
* So when an array increases in size by one element, an O(N) algorithm will increase by one step.
* This is read as "Order of N".
* An example is an algorithms that traverses an array and print each element.
<img title="Exaple of an algorithm of O(N) complexity" src="https://miro.medium.com/v2/resize:fit:1100/format:webp/1*rLwlvwOyBCkioaW9Pbdb1Q.png"/>
<img title="Plot of O(N) complexity" src="https://miro.medium.com/v2/resize:fit:750/format:webp/1*onjErRnvJBpEfFbTdFjw2Q.png"/>


## O($N^2$) aka `quadratic time`
* This means that the performance of the algorithm is proportional to the square of the size of the input elements. 
* Algorithms with the O($N^2$) are generally quire slow
.
* An example is an algorithm that finds duplicates in an array.
<img title="Example of an algorithm of O(N²) complexity" src="https://miro.medium.com/v2/resize:fit:1100/format:webp/1*w14fnGabon9wj5BAazWNbg.png"/>
<img title="Plot of O(N²) complexity" src="https://miro.medium.com/v2/resize:fit:750/format:webp/1*h34O9norWzUHK2hmoRgn5g.png"/>
* Generally, adding more nested iterations throught the input will increase the algorithm's complexity e.g. if the number of iterations is 3 then its complexity will be O(N³) and so forth.

## O(logN)
* This describes an algorithm whose number of operations increases by one each time the data is doubled.
* Logarithmic time complexities usually apply to algorithms that divide problems in half every time.
