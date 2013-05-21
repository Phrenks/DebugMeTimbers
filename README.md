DebugMeTimbers is a debugging library for C++. Later on it might be available 
for:
- PHP
- C
- Java

Purpose
-------

Very often, while developing, one must print messages or run functions that will
later have to be commented out or deleted once the release version is made. Even
during development, one has to switch back and forth often to run those specific
debugging pieces of code. This library allows for that code to be organized and
easy to toggle on and off.


How to
------

There is a test.cpp as an example, but here is the basic functionality 
nonetheless:

The first thing you have to do is include the library:

	#include "DebugMeTimbers.hpp"

Then, at the beginning of your function or code (so the code is clear, that's 
the whole point!) you should add the *names* of the tests or test groups you're 
going to execute. Yes! You can have test *groups*. This means that all groups 
named the same will execute or not depending on the initial declaration. For 
example, say you declare:

    add("Matrix multiplication test", true);
    add("Pirate test", false);
    add("Print variable tests group", true);

You now have three different kinds of tests that you can choose to execute or 
not by just changing the variable from true to false or viceversa every time you
compile. We could have the following debug calls, anywhere in your code:

	 debug("Print variable tests group", function_which_prints(3));
	 /* Some more code */
	 debug("Print variable tests group", cout << "Value of int:" << 3 << endl);

And they will both be executed, because at the function group declaration it's
set to "true". Change it to false and neither will be executed.


FAQs
----

*Can the second parameter of the "debug" function be ANYTHING?*

Pretty much! As long as it's a valid one line instruction it'll do the job.
It doesn't necessarily have to be a function call, look at the cout that I'm 
using up there. Works like a charm (as long as its group name is set to true).

*Why is it called Debug Me Timbers?*

Because I like pirates. And you should too.
