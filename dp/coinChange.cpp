// COIN CHANGE PROBLEM
// Problem: Given a set of coins and a value 'v'.Find the Number of Ways we can make 
// change of "V".
// Problem: S={1,2,3}  V=3
// Possible ways to make changes are:{3}, {2,1}, {1,1,1}
// Note: {1,2} is not counted as a separate as it is same as {2,1}
// To make ways every coin. we have 2 options
// (a) Take it.
// (b) Do not take it.
// cnt(S[],m,V) = cnt(s[],m,V-Sm) + cnt(s[],m-1,V)
// Since it can be represented as a Recurrence Relation, hence it has Optimal Substructure Property.

// Optimal Substructure Property
// Overlaping Subproblem Property