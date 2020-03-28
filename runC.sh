#!/bin/bash

mkdir -p outputs

filename=$1

outputFile=`echo ${filename} | sed 's/.\///' | sed 's/.c$//'`

gcc -o outputs/${outputFile} ./${filename} && outputs/${outputFile}

