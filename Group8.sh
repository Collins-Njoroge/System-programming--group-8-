#!/bin/bash

# Delete previous Directory
# rmdir Number

# Make Directory
mkdir 'Group 8'

# Make another directory inside a directory
cd 'Group 8'
mkdir 'Lab 1'

# Make a file
cd 'Lab 1'
touch Hello.txt
echo 'Hello World. This is Group 8' > Hello.txt

# List the contents of Number2
ls -l
cat Hello.txt
pwd
