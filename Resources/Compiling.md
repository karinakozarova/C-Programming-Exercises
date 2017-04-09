<h1> <center> Compiling </center> </h1> 
<br> 
<h2>What is compiling</h2>
   
A compiler is a special program that processes statements written in a particular programming language 
and turns them into machine language or "code" that a computer's processor uses. Typically, a programmer writes
language statements in a language such as Pascal or C one line at a time using an editor. The file that is created 
contains what are called the source statements. The programmer then runs the appropriate language compiler,
specifying the name of the file that contains the source statements.


When executing (running), the compiler first parses (or analyzes) all of the language statements syntactically one after the other
and then, in one or more successive stages or "passes", builds the output code, making sure that statements that refer to other statements 
are referred to correctly in the final code. Traditionally, the output of the compilation has been called object code
or sometimes an object module . (Note that the term "object" here is not related to object-oriented programming.) 
The object code is machine code that the processor can execute one instruction at a time.

<h2> How do we compile </h2>
In terminal we use the following command: <br> <br>
<b> <i> gcc file_name.c -Wall -pedantic -std=c11 </b> </i> <br> <br>

<i> gcc </i> is a key component of the GNU toolchain and the standard compiler for most Unix-like Operating Systems. <br>
<i>file_name.c </i>is the name of the file we want to compile <br> <br>
<i> -Wall </i> shows all warnings <br>
<i>-pedantic</i> tells the compiler to be adhere strictly to the ANSI standard, rejecting any code which is not compliant. <br>
<i> -std=c11 </i> makes the standart of our code c11. Using this standart, we can for example make this: <br>
<tab>            for(<b>int i=0</b>;i<n;i++) ... 

<h2> What is the difference between a warning and an error </h2>
When we have an error in our code, it won't compile. When our code doesn't have errors but it has warnings,
there is a possibility that the code won't work properly unless edited. <br>
However not having warnings and errors doesn't mean that our code will work! That's why we have to test it in many different inputs.
