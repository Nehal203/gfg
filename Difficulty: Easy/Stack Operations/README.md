<h2><a href="https://www.geeksforgeeks.org/problems/stacks-operations/1">Stack Operations</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><em><span style="font-size: 18px;">This Java module deals with Stacks, Queues, and ArrayLists. We'll perform various operations on them.</span></em></p>
<p><span style="font-size: 18px;">Given a <strong>stack </strong>of <strong>integers </strong>and <strong>Q</strong> queries. The task is to perform operation on stack according to the query.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong><span style="background-color: transparent; font-family: arial;">: use </span><a style="text-decoration: none;" href="https://www.geeksforgeeks.org/stack-push-method-in-java/"><u>push()</u></a><span style="background-color: transparent; font-family: arial;"> to add element in the stack, </span><a style="text-decoration: none;" href="https://www.geeksforgeeks.org/stack-peek-method-in-java/"><u>peek()</u></a><span style="background-color: transparent; font-family: arial;"> to get topmost element without removal, </span><a style="text-decoration: none;" href="https://www.geeksforgeeks.org/stack-pop-method-in-java/"><u>pop()</u></a><span style="background-color: transparent; font-family: arial;"> gives topmost element with removal, </span><a style="text-decoration: none;" href="https://www.geeksforgeeks.org/stack-search-method-in-java/"><u>search()</u></a><span style="background-color: transparent; font-family: arial;"> to return position if found else <strong>-1</strong>.</span></span></p>
<p><span style="font-size: 18px;"><strong>Input Format:</strong><br>First line of input contains nubmer of testcases <strong>T</strong>. For each testcase, first line of input contains Q, number of queries. Next line contains Q queries seperated by space. Queries are as:</span></p>
<ol>
<li dir="ltr">
<p dir="ltr"><span style="font-size: 18px;"><span style="background-color: transparent; font-family: arial;"><strong>i x :</strong> (<strong>adds </strong>element x in the stack)</span>.</span></p>
</li>
<li dir="ltr">
<p dir="ltr"><span style="font-size: 18px;"><span style="background-color: transparent; font-family: arial;"><strong>r :</strong> (<strong>returns </strong>and <strong>removes </strong>the topmost element from the stack).</span></span></p>
</li>
<li dir="ltr">
<p dir="ltr"><span style="font-size: 18px;"><span style="background-color: transparent; font-family: arial;"><strong>h :</strong> </span>Prints the topmost element.</span></p>
</li>
<li dir="ltr">
<p dir="ltr"><span style="font-size: 18px;"><span style="background-color: transparent; font-family: arial;"><strong>f y :</strong> (check if the <strong>element </strong>y is <strong>present or not </strong>in the stack).</span> Print "<strong>Yes</strong>" if present, else "<strong>No</strong>".</span></p>
</li>
</ol>
<p dir="ltr"><span style="font-size: 18px;"><strong>Output Format:</strong><br>For each testcase, perform Q queries and print the output wherever required.</span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete functions <strong>insert()</strong>, <strong>remove()</strong>, <strong>headOf_Stack()</strong> and <strong>find()</strong>, to insert, remove returning top element and findiing the elment in stack respectively.</span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= T &lt;= 100<br>1 &lt;= Q &lt;= 10<sup>3</sup></span></p>
<p dir="ltr"><span style="font-size: 18px;"><strong>Example:<br>Input:</strong><br>2<br>6<br>i 2 i 4 i 3 i 5 h f 8<br>4<br>i 3 i 4 r f 3</span></p>
<p><span style="font-size: 18px;"><strong>Output:</strong><br>5<br>No<br>Yes</span></p>
<p><span style="font-size: 18px;"><strong>Explanation:<br>Testcase 1:</strong> Inserting 2, 4, 3, and 5 onto the stack. Returning top element which is 5. Finding 8 will give No, as 8 is not in the stack.</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;