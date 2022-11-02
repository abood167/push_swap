import random
import sys
 
# total arguments
n = len(sys.argv)


num = int(sys.argv[1])

gen = set()

while (len(gen) < int(num)):

	gen.add(random.randint(-2147483648, 2147483647))
	if len(gen) >= int(num):
		break
	gen.add(random.randint(-10, 5000))
	if len(gen) >= int(num):
		break
	gen.add(random.randint(0, 500))

print("../push_swap ", end=" ")
for i in gen:
	print(i, end=" ")
print("\n")
print("echo \"---------------------------------------------------\"")
print("echo \"Number of moves = $(../push_swap ", end=" ")
for i in gen:
	print(i, end=" ")
print(" | wc -l)\"")
print("../push_swap ", end=" ")
for i in gen:
	print(i, end=" ")
print(" | ../checker  \" ", end = "")
for i in gen:
	print(i, end=" ")
print("\"")

