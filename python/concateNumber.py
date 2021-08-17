#Written by: Nishant Movaliya
# Implement task in choice of your programming language or framework.


# You need to concatenate 2 numbers (concatenate alternate digits of two numbers).
# it must be like this :

# 1. Let's say first number is 9999, and second number is 8888, then the result should be 98989898

# 2. First number is 10, and second number is 11, then result should be 1101

# 3. First number is 11 & second number is 2222, then result should be 121222

# 4. First number if 2222 & second number is 11, then answer should be 212122

# 5. If the resulting number is greater than 10000000000, then result must be -1


# Note : Any in-built string functions must not be used, except string-length function.

str1 = input("Enter 1st No.:")
str2 = input("Enter 2nd No.:")
str3 = ""
l1=len(str1)
l2=len(str2)

if(l1<l2):
    l=l2
else:
    l=l1
#print(l1)
#print(l2)
for i in range(l):
    #print(i)
    if l1 > i:
        str3 += str1[i]
    if l2 > i:
        str3 += str2[i] 
    
if 10000000000 < int(str3):
    str3 = -1

print("Output:",str3)
