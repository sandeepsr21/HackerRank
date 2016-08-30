# HackerRank
You are given N integer sequences and  Q queries. Each query is in the following format: "a b" where a denotes the index of the sequence,
and b denotes the index of the element in that sequence. Your task is to find the value of the element described in each query.

Input Format

The first line consists of N and Q separated by a space.

The following N lines contain sequences in this format: "k a0 a1..ak-1"

The following Q lines contain queries in this format: "a b".


Output Format

Output Q lines, the ith line contains the answer of the ith query.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9
Explanation

For the first query, the sequence is [1 5 4]. 

For the second query, the sequence is [1 2 3 8 0].

Query 1 - 0th sequence 1st index element. Hence output is 5
Query 2 - 1st sequence 3rd index element. Hence output is 9

Please note that the problem uses 0-based indexing
