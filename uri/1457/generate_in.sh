#!/bin/bash

testcase_number=300

echo $testcase_number
for i in $(seq 1 $testcase_number); do
    echo "$(( RANDOM % 20 + 1 ))$(printf "%$(( RANDOM % 10 + 1 ))s" | sed 's/ /!/g')"
done
