#!/bin/bash
# Script to compile and execute a c program in one step.

mkdir -p outputs

# Get file name 
filename=$1

# Get outputfile name without the .c extension
output_filename=`echo $filename | sed 's/.*\/\(.*\)\.c/\1/'`

# Compile the program with -o option to specify the name of the binary
gcc -o outputs/$output_filename.out $filename

# If there were no compilation errors, run the program
if [ $? -eq 0 ]; then
        outputs/$output_filename.out
fi
