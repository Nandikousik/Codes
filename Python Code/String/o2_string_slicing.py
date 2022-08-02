#greeting="Good Morning, "
#name="Kousik"
#print(type(name))

#print(greeting + name) #Output: Good Morning, Kousik
#Concatinating two string
#c=greeting + name
#print(c)

#name="Harry"
#print(name[4])  #Harry is 0 to 4 index


# print(name[0:6]) #0 to 5th index
# print(name[::-1]) #Reverse a string
# print(name[:4]) # This means 0 to 4 index
# print(name[1:]) # This print 1 to end index
# print(name[-4:-1]) # Here End index is -1
# print(name[1:4:1]) #This means print 1 index to 4 index with 1 skip.Here 1 skip means no skips.

x="Iamagoodboy"
# print(x[0::0]) # Error because slice can't step to zero.
# print(x[0::1]) # print 1 to end index with 1 step.Here 1 step means nothing gap.
# print(x[0::2]) #Print 1 to end index with 2nd value print.
# print(x[0::3])

print(x[-1::-2])