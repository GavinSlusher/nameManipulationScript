# Name Manipulation Script

## Description

Script takes the filename of a file containing a list of names and prints the names out in `[surname], [firstname] [middle name(s)]` order. No manipulation is done on the names themselves.

Note that the script assumes that the given file has one name per line, separated by spaces with no extra punctuation, and a western-style naming convention where the first name written is the person's given name, the following names are any potential middle names, and the last name listed is the person's family name. 

## How to Run

Type `make` into the console to compile. Then run `./nameParser [filename]` to run. A file `listOfNames.txt` is provided as an example.
