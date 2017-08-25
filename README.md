# Dictio
Dictio is an Arduino library that provides a virtual dictionary data structure

The library is not very efficient at the moment but I plan to edit it to make it more efficient (memory usage is too big).

Usage : See the exemple

You may need to increase a variable (dictioMaxSize) in dictio.h in order to make bigger dictionaries.

The "addVar" function returns false if the dictionary is full

More to come on this library : - more variables types (you'll be able to store and retreive an int in a more efficient way)
- A function "delVar" to delete a variable
