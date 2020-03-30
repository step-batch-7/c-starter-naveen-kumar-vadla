#! /bin/bash

directory_name=$1

for i in `ls ${directory_name}/*.c`; do
  ./runC.sh $i
done