# minCoin

The question:
https://ericsson.kattis.com/problems/ecoins



## e-Coins
At the Department for Bills and Coins, an extension of today’s monetary system has newly been proposed, in order to make it fit the new economy better. A number of new so called e-coins will be produced, which, in addition to having a value in the normal sense of today, also have an InfoTechnological value. The goal of this reform is, of course, to make justice to the economy of numerous dotcom companies which, despite the fact that they are low on money surely have a lot of IT inside. All money of the old kind will keep its conventional value and get zero InfoTechnological value.

To successfully make value comparisions in the new system, something called the e-modulus is introduced. This is calculated as X2+Y2‾‾‾‾‾‾‾‾√X2+Y2, where XX and YY hold the sums of the conventional and InfoTechnological values respectively. For instance, money with a conventional value of $3 altogether and an InfoTechnological value of $4 will get an e-modulus of $5. Bear in mind that you have to calculate the sums of the conventional and InfoTechnological values separately before you calculate the e-modulus of the money.

To simplify the move to e-currency, you are assigned to write a program that, given the e-modulus that shall be reached and a list of the different types of e-coins that are available, calculates the smallest amount of e-coins that are needed to exactly match the e-modulus. There is no limit on how many e-coins of each type that may be used to match the given e-modulus.

\includegraphics[width=0.5\textwidth ]{ecoins}
Figure 1: The illustration exemplifies adding 8 coins of conventional value 2 and InfoTechnological value 1, and 2 coins with pure InfoTechnological value 2. The e-modulus is of course 20 since (8⋅2+2⋅0)2+(8⋅1+2⋅2)2‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾√=162+122‾‾‾‾‾‾‾‾‾√=20(8⋅2+2⋅0)2+(8⋅1+2⋅2)2=162+122=20

### Input
A line with the number of problems nn (0<n≤1000<n≤100), followed by nn times:

A line with the integers mm (0<m≤400<m≤40) and SS (0<S≤3000<S≤300), where mm indicates the number of different e-coin types that exist in the problem, and SS states the value of the e-modulus that shall be matched exactly.
mm lines, each consisting of one pair of non-negative integers describing the value of an e-coin. The first number in the pair states the conventional value, and the second number holds the InfoTechnological value of the coin. Both values are between 00 and SS (inclusive).
When more than one number are present on a line, they will be separated by a space. Between each problem, there will be one blank line.

### Output
The output consists of nn lines. Each line contains either a single integer holding the number of coins necessary to reach the specified e-modulus SS or, if SS cannot be reached, the string “not possible”.





#### Sample Input 1

3
2 5
0 2
2 0

3 20
0 2
2 0
2 1

3 5
3 0
0 4
5 5


#### Sample Output 1

not possible
10
2
