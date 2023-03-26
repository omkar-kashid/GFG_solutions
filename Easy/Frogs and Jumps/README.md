<h2><a href="https://practice.geeksforgeeks.org/problems/5551749efa02ae36b6fdb3034a7810e84bd4c1a4/1">Frogs and Jumps</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N</strong>&nbsp;frogs are positioned at one end of the pond. All frogs want to reach the other end of the pond as soon as possible. The pond has some<strong style="user-select: auto;">&nbsp;</strong>leaves arranged in a straight line. Each frog has the strength to jump exactly&nbsp;<strong style="user-select: auto;">K&nbsp;</strong>leaves. For example, a&nbsp; frog having strength 2 will visit the leaves 2, 4, 6, ...&nbsp; etc. while crossing the pond. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given the strength of each frog and the number of leaves, your task is to find the number of leaves that not be visited by any of the frogs when all frogs have reached the other end of the pond.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 3
leaves = 4
frogs[] = {3, 2, 4}&nbsp;
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation:</strong>
Leaf 1 will not be visited by any frog.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 3
leaves = 6
frogs[] = {1, 3, 5}&nbsp;
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>
First frog will visit all the leaves so no 
leaf is left unvisited.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">unvisitedLeaves</strong><strong style="user-select: auto;">()</strong> which takes the integers <strong style="user-select: auto;">N</strong>, <strong style="user-select: auto;">leaves</strong>&nbsp;and the array <strong style="user-select: auto;">frogs</strong><strong style="user-select: auto;">&nbsp;</strong>as the input parameters, and returns the number of unvisited leaves.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*log(leaves))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(leaves)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, leaves, frogs[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>PayPal</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematical</code>&nbsp;<code>sieve</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;