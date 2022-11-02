#!/bin/bash


echo "please enter number of integers you want to generate"
read n

make -C ../
echo "#!/bin/bash" > generated_nums.sh
python3 checker_gen.py $n >> generated_nums.sh
chmod +x generated_nums.sh
./generated_nums.sh
